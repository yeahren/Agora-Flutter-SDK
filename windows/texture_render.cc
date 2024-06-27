#include "include/agora_rtc_engine/texture_render.h"

#include <functional>

#include "AgoraMediaBase.h"
#include <winrt/base.h>
#include <winerror.h>
#include <d3d11.h>
#include <D3d11.h>
#include <winrt/Windows.Foundation.h>
#include <windows.graphics.directx.h>
#include <winrt/Windows.System.h>
#include <windows.graphics.directx.direct3d11.h>
#include "util/d3dutil.h"
#include "util/direct3d11.interop.h"

using namespace flutter;

// #pragma comment(lib, "d3d11.lib") // 确保链接 d3d11.lib

// inline auto CreateD3DDevice(D3D_DRIVER_TYPE const type,
//                             winrt::com_ptr<ID3D11Device> &device)
// {
//     WINRT_ASSERT(!device);

//     UINT flags =
//         D3D11_CREATE_DEVICE_BGRA_SUPPORT | D3D11_CREATE_DEVICE_VIDEO_SUPPORT;

//     // #ifdef _DEBUG
//     //	flags |= D3D11_CREATE_DEVICE_DEBUG;
//     // #endif

//     return D3D11CreateDevice(nullptr, type, nullptr, flags, nullptr, 0,
//                              D3D11_SDK_VERSION, device.put(), nullptr, nullptr);
// }

// inline auto CreateD3DDevice()
// {
//     winrt::com_ptr<ID3D11Device> device;
//     HRESULT hr = CreateD3DDevice(D3D_DRIVER_TYPE_HARDWARE, device);

//     if (DXGI_ERROR_UNSUPPORTED == hr)
//     {
//         CreateD3DDevice(D3D_DRIVER_TYPE_WARP, device);
//     }

//     return device;
// }

class GraphicsContext
{
public:
    GraphicsContext()
    {
        device_ = CreateD3DDevice();
        if (!device_)
        {
            return;
        }

        device_->GetImmediateContext(device_context_.put());
        if (FAILED(util::CreateDirect3D11DeviceFromDXGIDevice(
                device_.try_as<IDXGIDevice>().get(),
                (IInspectable **)device_winrt_.put())))
        {
            return;
        }
        valid_ = true;
    }

    inline bool IsValid() const { return valid_; }

    ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice *device() const
    {
        return device_winrt_.get();
    }
    ID3D11Device *d3d_device() const { return device_.get(); }
    ID3D11DeviceContext *d3d_device_context() const
    {
        return device_context_.get();
    }

private:
    bool valid_ = false;
    winrt::com_ptr<ABI::Windows::Graphics::DirectX::Direct3D11::IDirect3DDevice>
        device_winrt_;
    winrt::com_ptr<ID3D11Device> device_{nullptr};
    winrt::com_ptr<ID3D11DeviceContext> device_context_{nullptr};
};

TextureRender::TextureRender(flutter::BinaryMessenger *messenger,
                             flutter::TextureRegistrar *registrar,
                             agora::iris::IrisRtcRendering *iris_rtc_rendering)
    : registrar_(registrar),
      iris_rtc_rendering_(iris_rtc_rendering),
      delegate_id_(agora::iris::INVALID_DELEGATE_ID),
      is_dirty_(false)
{
    surface_descriptor_.struct_size = sizeof(FlutterDesktopGpuSurfaceDescriptor);
    surface_descriptor_.format =
        kFlutterDesktopPixelFormatNone; // no format required for DXGI surfaces

    // Create flutter desktop pixelbuffer texture;
    // texture_ =
    //     std::make_unique<flutter::TextureVariant>(flutter::PixelBufferTexture(
    //         [this](size_t width,
    //                size_t height) -> const FlutterDesktopPixelBuffer *
    //         {
    //             return this->CopyPixelBuffer(width, height);
    //         }));

    texture_ =
        std::make_unique<flutter::TextureVariant>(flutter::GpuSurfaceTexture(
            kFlutterDesktopGpuSurfaceTypeDxgiSharedHandle,
            [this](
                size_t width,
                size_t height) -> const FlutterDesktopGpuSurfaceDescriptor *
            {
                return this->GetSurfaceDescriptor(width, height);
                // return &surface_descriptor_;
            }));

    texture_id_ = registrar_->RegisterTexture(texture_.get());

    method_channel_ = std::make_unique<MethodChannel<EncodableValue>>(
        messenger,
        "agora_rtc_engine/texture_render_" + std::to_string(texture_id_),
        &flutter::StandardMethodCodec::GetInstance());

    graphics_context_ = std::make_unique<GraphicsContext>();
}

TextureRender::~TextureRender()
{
    Dispose();
}

int64_t TextureRender::texture_id() { return texture_id_; }

void TextureRender::OnVideoFrameReceived(const void *videoFrame,
                                         const IrisRtcVideoFrameConfig &config,
                                         bool resize)
{
    std::lock_guard<std::mutex> lock_guard(buffer_mutex_);

    if (!is_dirty_)
    {
        const agora::media::base::VideoFrame *video_frame = static_cast<const agora::media::base::VideoFrame *>(videoFrame);

        // const uint32_t bytes_per_pixel = 4;
        // const uint32_t pixels_total = video_frame->width * video_frame->height;
        // const uint32_t data_size = pixels_total * bytes_per_pixel;
        // const uint32_t width = video_frame->width;
        // const uint32_t height = video_frame->height;

        // if (buffer_.size() != data_size)
        // {
        //     buffer_.resize(data_size);

        //     flutter::EncodableMap args = {
        //         {EncodableValue("width"), EncodableValue(video_frame->width)},
        //         {EncodableValue("height"), EncodableValue(video_frame->height)}};
        //     method_channel_->InvokeMethod("onSizeChanged", std::make_unique<EncodableValue>(EncodableValue(args)));
        // }

        // if (frame_width_ != width || frame_height_ != height)
        // {
            flutter::EncodableMap args = {
                {EncodableValue("width"), EncodableValue(video_frame->width)},
                {EncodableValue("height"), EncodableValue(video_frame->height)}};
            method_channel_->InvokeMethod("onSizeChanged", std::make_unique<EncodableValue>(EncodableValue(args)));

            std::cout << "method_channel_->InvokeMethod" << std::endl;
        // }

        ID3D11Texture2D *d3d11Texture2d = static_cast<ID3D11Texture2D *>(video_frame->d3d11Texture2d);
        d3d11Texture2d->AddRef();

        last_frame_.attach(d3d11Texture2d);

        // winrt::com_ptr<ID3D11Texture2D> texture;
        // if (surface_)
        // {
        //     surface_.detach();
        // }
        // surface_.attach(d3d11Texture2d);

        // HANDLE shared_handle;
        // surface_.try_as(dxgi_surface_);
        // assert(dxgi_surface_);
        // dxgi_surface_->GetSharedHandle(&shared_handle);

        // surface_descriptor_.handle = shared_handle;
        // surface_descriptor_.width = surface_descriptor_.visible_width = video_frame->width;
        // surface_descriptor_.height = surface_descriptor_.visible_height = video_frame->height;
        // surface_descriptor_.release_context = d3d11Texture2d; // surface_.get();
        // surface_descriptor_.release_callback = [](void *release_context)
        // {
        //     auto texture = reinterpret_cast<ID3D11Texture2D *>(release_context);
        //     texture->Release();
        // };

        // std::copy(static_cast<uint8_t *>(video_frame->yBuffer), static_cast<uint8_t *>(video_frame->yBuffer) + data_size, buffer_.data());

        frame_width_ = video_frame->width;
        frame_height_ = video_frame->height;

        is_dirty_ = true;
    }
    if (TextureRegistered() && is_dirty_)
    {
        // std::cout << "ready MarkTextureFrameAvailable" << std::endl;
        registrar_->MarkTextureFrameAvailable(texture_id_);
    }
}

const FlutterDesktopGpuSurfaceDescriptor *
TextureRender::GetSurfaceDescriptor(size_t width, size_t height)
{
    const std::lock_guard<std::mutex> lock(buffer_mutex_);

    is_dirty_ = false;

    if (!TextureRegistered())
    {
        return nullptr;
    }

    if (frame_width_ == 0 || frame_height_ == 0)
    {
        return nullptr;
    }

    //   if (!is_running_) {
    //     return nullptr;
    //   }

    // std::cout << "GetSurfaceDescriptor " << "width: " << width << " height: " << height << std::endl;

    if (last_frame_)
    {
        ProcessFrame(last_frame_);
        // std::cout << "ProcessFrame" << std::endl;
    }

    if (surface_)
    {
        // Gets released in the SurfaceDescriptor's release callback.
        surface_->AddRef();
    }

    // std::cout << "GetSurfaceDescriptor end" << std::endl;

    return &surface_descriptor_;
}

const FlutterDesktopPixelBuffer *
TextureRender::CopyPixelBuffer(size_t width, size_t height)
{
    std::unique_lock<std::mutex> buffer_lock(buffer_mutex_);

    is_dirty_ = false;

    if (!TextureRegistered())
    {
        return nullptr;
    }

    if (frame_width_ == 0 || frame_height_ == 0)
    {
        return nullptr;
    }

    if (!flutter_desktop_pixel_buffer_)
    {
        flutter_desktop_pixel_buffer_ =
            std::make_unique<FlutterDesktopPixelBuffer>();

        // Unlocks mutex after texture is processed.
        flutter_desktop_pixel_buffer_->release_callback =
            [](void *release_context)
        {
            auto mutex = reinterpret_cast<std::mutex *>(release_context);
            mutex->unlock();
        };
    }

    flutter_desktop_pixel_buffer_->buffer = buffer_.data();
    flutter_desktop_pixel_buffer_->width = frame_width_;
    flutter_desktop_pixel_buffer_->height = frame_height_;

    // Releases unique_lock and set mutex pointer for release context.
    flutter_desktop_pixel_buffer_->release_context = buffer_lock.release();

    return flutter_desktop_pixel_buffer_.get();
}

void TextureRender::EnsureSurface(uint32_t width, uint32_t height)
{
    // if (!surface_ || frame_width_ != width ||
    //     frame_height_ != height)
    if (true)
    {
        // std::cout << "EnsureSurface " << "width: " << width << " height: " << height << std::endl;

        D3D11_TEXTURE2D_DESC dstDesc = {};
        dstDesc.ArraySize = 1;
        dstDesc.MipLevels = 1;
        dstDesc.BindFlags = D3D11_BIND_RENDER_TARGET | D3D11_BIND_SHADER_RESOURCE;
        dstDesc.CPUAccessFlags = 0;
        dstDesc.Format = static_cast<DXGI_FORMAT>(kPixelFormat);
        dstDesc.Width = width;
        dstDesc.Height = height;
        dstDesc.MiscFlags = D3D11_RESOURCE_MISC_SHARED;
        dstDesc.SampleDesc.Count = 1;
        dstDesc.SampleDesc.Quality = 0;
        dstDesc.Usage = D3D11_USAGE_DEFAULT;

        surface_ = nullptr;
        if (!SUCCEEDED(graphics_context_->d3d_device()->CreateTexture2D(
                &dstDesc, nullptr, surface_.put())))
        {
            std::cerr << "Creating intermediate texture failed" << std::endl;
            return;
        }

        HANDLE shared_handle;
        surface_.try_as(dxgi_surface_);
        assert(dxgi_surface_);
        dxgi_surface_->GetSharedHandle(&shared_handle);

        // std::cout << "GetSharedHandle" << std::endl;

        surface_descriptor_.handle = shared_handle;
        surface_descriptor_.width = surface_descriptor_.visible_width = width;
        surface_descriptor_.height = surface_descriptor_.visible_height = height;
        surface_descriptor_.release_context = surface_.get();
        surface_descriptor_.release_callback = [](void *release_context)
        {
            // std::cout << "release_callback" << std::endl;
            auto texture = reinterpret_cast<ID3D11Texture2D *>(release_context);
            texture->Release();
        };

        // std::cout << "EnsureSurface " << "surface_descriptor_.width: " << surface_descriptor_.width << " surface_descriptor_.height: " << surface_descriptor_.height << std::endl;
        // std::cout << "EnsureSurface " << "surface_descriptor_.visible_width: " << surface_descriptor_.visible_width << " surface_descriptor_.visible_height: " << surface_descriptor_.visible_height << std::endl;

        // surface_size_ = {width, height};
    }
}

void TextureRender::ProcessFrame(
    winrt::com_ptr<ID3D11Texture2D> src_texture)
{
    D3D11_TEXTURE2D_DESC desc;
    src_texture->GetDesc(&desc);

    const auto width = desc.Width;
    const auto height = desc.Height;

    std::cout << "ProcessFrame " << "width: " << width << " height: " << height << std::endl;

    EnsureSurface(width, height);

    auto device_context = graphics_context_->d3d_device_context();

    device_context->CopyResource(surface_.get(), src_texture.get());
    device_context->Flush();
}

void TextureRender::UpdateData(unsigned int uid, const std::string &channelId, unsigned int videoSourceType, unsigned int videoViewSetupMode)
{
    IrisRtcVideoFrameConfig config = EmptyIrisRtcVideoFrameConfig;
    config.uid = uid;
    config.video_source_type = videoSourceType;
    config.video_frame_format = agora::media::base::VIDEO_PIXEL_FORMAT::VIDEO_TEXTURE_ID3D11TEXTURE2D;
    if (!channelId.empty())
    {
        strcpy_s(config.channelId, channelId.c_str());
    }
    else
    {
        strcpy_s(config.channelId, "");
    }
    config.video_view_setup_mode = videoViewSetupMode;

    if (iris_rtc_rendering_)
    {
        delegate_id_ = iris_rtc_rendering_->AddVideoFrameObserverDelegate(config, this);
    }
}

void TextureRender::Dispose()
{
    if (iris_rtc_rendering_)
    {
        iris_rtc_rendering_->RemoveVideoFrameObserverDelegate(delegate_id_);
        iris_rtc_rendering_ = nullptr;
    }

    const std::lock_guard<std::mutex> lock(buffer_mutex_);

    if (registrar_ && texture_id_ != -1)
    {
        registrar_->UnregisterTexture(texture_id_);

        registrar_ = nullptr;
        texture_id_ = -1;
    }
}