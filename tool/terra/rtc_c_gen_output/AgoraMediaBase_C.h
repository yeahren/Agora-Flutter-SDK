
    #ifndef AGORAMEDIABASE_C_H_
    #define AGORAMEDIABASE_C_H_
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    



typedef unsigned int agora_rtc__uid_t__C;
typedef unsigned int agora_rtc__track_id_t__C;
typedef unsigned int agora_rtc__conn_id_t__C;
typedef unsigned int agora_rtc__video_track_id_t__C;




typedef enum agora_rtc__VIDEO_SOURCE_TYPE__C
{
  VIDEO_SOURCE_CAMERA_PRIMARY= 0,
VIDEO_SOURCE_CAMERA= VIDEO_SOURCE_CAMERA_PRIMARY,
VIDEO_SOURCE_CAMERA_SECONDARY= 1,
VIDEO_SOURCE_SCREEN_PRIMARY= 2,
VIDEO_SOURCE_SCREEN= VIDEO_SOURCE_SCREEN_PRIMARY,
VIDEO_SOURCE_SCREEN_SECONDARY= 3,
VIDEO_SOURCE_CUSTOM= 4,
VIDEO_SOURCE_MEDIA_PLAYER= 5,
VIDEO_SOURCE_RTC_IMAGE_PNG= 6,
VIDEO_SOURCE_RTC_IMAGE_JPEG= 7,
VIDEO_SOURCE_RTC_IMAGE_GIF= 8,
VIDEO_SOURCE_REMOTE= 9,
VIDEO_SOURCE_TRANSCODED= 10,
VIDEO_SOURCE_CAMERA_THIRD= 11,
VIDEO_SOURCE_CAMERA_FOURTH= 12,
VIDEO_SOURCE_SCREEN_THIRD= 13,
VIDEO_SOURCE_SCREEN_FOURTH= 14,
VIDEO_SOURCE_UNKNOWN= 100,
} agora_rtc__VIDEO_SOURCE_TYPE__C;


typedef enum agora_rtc__AudioRoute__C
{
  ROUTE_DEFAULT= -1,
ROUTE_HEADSET= 0,
ROUTE_EARPIECE= 1,
ROUTE_HEADSETNOMIC= 2,
ROUTE_SPEAKERPHONE= 3,
ROUTE_LOUDSPEAKER= 4,
ROUTE_HEADSETBLUETOOTH= 5,
ROUTE_USB= 6,
ROUTE_HDMI= 7,
ROUTE_DISPLAYPORT= 8,
ROUTE_AIRPLAY= 9,
} agora_rtc__AudioRoute__C;


typedef enum agora_rtc__BYTES_PER_SAMPLE__C
{
  TWO_BYTES_PER_SAMPLE= 2,
} agora_rtc__BYTES_PER_SAMPLE__C;


typedef struct agora_rtc__AudioParameters__C
{
  int sample_rate;
size_t channels;
size_t frames_per_buffer;
} agora_rtc__AudioParameters__C;


typedef enum agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C
{
  RAW_AUDIO_FRAME_OP_MODE_READ_ONLY= 0,
RAW_AUDIO_FRAME_OP_MODE_READ_WRITE= 2,
} agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C;


typedef enum agora_media__MEDIA_SOURCE_TYPE__C
{
  AUDIO_PLAYOUT_SOURCE= 0,
AUDIO_RECORDING_SOURCE= 1,
PRIMARY_CAMERA_SOURCE= 2,
SECONDARY_CAMERA_SOURCE= 3,
PRIMARY_SCREEN_SOURCE= 4,
SECONDARY_SCREEN_SOURCE= 5,
CUSTOM_VIDEO_SOURCE= 6,
MEDIA_PLAYER_SOURCE= 7,
RTC_IMAGE_PNG_SOURCE= 8,
RTC_IMAGE_JPEG_SOURCE= 9,
RTC_IMAGE_GIF_SOURCE= 10,
REMOTE_VIDEO_SOURCE= 11,
TRANSCODED_VIDEO_SOURCE= 12,
UNKNOWN_MEDIA_SOURCE= 100,
} agora_media__MEDIA_SOURCE_TYPE__C;


typedef enum agora_media__CONTENT_INSPECT_RESULT__C
{
  CONTENT_INSPECT_NEUTRAL= 1,
CONTENT_INSPECT_SEXY= 2,
CONTENT_INSPECT_PORN= 3,
} agora_media__CONTENT_INSPECT_RESULT__C;


typedef enum agora_media__CONTENT_INSPECT_TYPE__C
{
  CONTENT_INSPECT_INVALID= 0,
CONTENT_INSPECT_MODERATION= 1,
CONTENT_INSPECT_SUPERVISION= 2,
CONTENT_INSPECT_IMAGE_MODERATION= 3,
} agora_media__CONTENT_INSPECT_TYPE__C;


typedef struct agora_media__ContentInspectModule__C
{
  agora_media__CONTENT_INSPECT_TYPE__C type;
unsigned int interval;
} agora_media__ContentInspectModule__C;


typedef struct agora_media__ContentInspectConfig__C
{
  const char* extraInfo;
const char* serverConfig;
agora_media__ContentInspectModule__C modules;
int moduleCount;
} agora_media__ContentInspectConfig__C;

typedef void* agora_media_base__view_t__C;
typedef const char* agora_media_base__user_id_t__C;


typedef struct agora_media_base__PacketOptions__C
{
  uint32_t timestamp;
uint8_t audioLevelIndication;
} agora_media_base__PacketOptions__C;


typedef struct agora_media_base__AudioEncodedFrameInfo__C
{
  uint64_t sendTs;
uint8_t codec;
} agora_media_base__AudioEncodedFrameInfo__C;


typedef enum agora_media_base____C
{
  kMaxDataSizeSamples= 3840,
kMaxDataSizeBytes= kMaxDataSizeSamples*sizeof(int16_t),
} agora_media_base____C;


typedef struct agora_media_base__AudioPcmFrame__C
{
  int64_t capture_timestamp;
size_t samples_per_channel_;
int sample_rate_hz_;
size_t num_channels_;
agora_rtc__BYTES_PER_SAMPLE__C bytes_per_sample;
int16_t data_[16];
} agora_media_base__AudioPcmFrame__C;


typedef enum agora_media_base__AUDIO_DUAL_MONO_MODE__C
{
  AUDIO_DUAL_MONO_STEREO= 0,
AUDIO_DUAL_MONO_L= 1,
AUDIO_DUAL_MONO_R= 2,
AUDIO_DUAL_MONO_MIX= 3,
} agora_media_base__AUDIO_DUAL_MONO_MODE__C;


typedef enum agora_media_base__VIDEO_PIXEL_FORMAT__C
{
  VIDEO_PIXEL_DEFAULT= 0,
VIDEO_PIXEL_I420= 1,
VIDEO_PIXEL_BGRA= 2,
VIDEO_PIXEL_NV21= 3,
VIDEO_PIXEL_RGBA= 4,
VIDEO_PIXEL_NV12= 8,
VIDEO_TEXTURE_2D= 10,
VIDEO_TEXTURE_OES= 11,
VIDEO_CVPIXEL_NV12= 12,
VIDEO_CVPIXEL_I420= 13,
VIDEO_CVPIXEL_BGRA= 14,
VIDEO_PIXEL_I422= 16,
VIDEO_TEXTURE_ID3D11TEXTURE2D= 17,
} agora_media_base__VIDEO_PIXEL_FORMAT__C;


typedef enum agora_media_base__RENDER_MODE_TYPE__C
{
  RENDER_MODE_HIDDEN= 1,
RENDER_MODE_FIT= 2,
RENDER_MODE_ADAPTIVE= 3,
} agora_media_base__RENDER_MODE_TYPE__C;


typedef enum agora_media_base__CAMERA_VIDEO_SOURCE_TYPE__C
{
  CAMERA_SOURCE_FRONT= 0,
CAMERA_SOURCE_BACK= 1,
VIDEO_SOURCE_UNSPECIFIED= 2,
} agora_media_base__CAMERA_VIDEO_SOURCE_TYPE__C;


typedef enum agora_media_base__EGL_CONTEXT_TYPE__C
{
  EGL_CONTEXT10= 0,
EGL_CONTEXT14= 1,
} agora_media_base__EGL_CONTEXT_TYPE__C;


typedef enum agora_media_base__VIDEO_BUFFER_TYPE__C
{
  VIDEO_BUFFER_RAW_DATA= 1,
VIDEO_BUFFER_ARRAY= 2,
VIDEO_BUFFER_TEXTURE= 3,
} agora_media_base__VIDEO_BUFFER_TYPE__C;


typedef struct agora_media_base__ExternalVideoFrame__C
{
  agora_media_base__VIDEO_BUFFER_TYPE__C type;
agora_media_base__VIDEO_PIXEL_FORMAT__C format;
void* buffer;
int stride;
int height;
int cropLeft;
int cropTop;
int cropRight;
int cropBottom;
int rotation;
long long timestamp;
void* eglContext;
agora_media_base__EGL_CONTEXT_TYPE__C eglType;
int textureId;
float matrix[16];
uint8_t* metadata_buffer;
int metadata_size;
uint8_t* alphaBuffer;
void* d3d11_texture_2d;
int texture_slice_index;
} agora_media_base__ExternalVideoFrame__C;


typedef struct agora_media_base__VideoFrame__C
{
  agora_media_base__VIDEO_PIXEL_FORMAT__C type;
int width;
int height;
int yStride;
int uStride;
int vStride;
uint8_t* yBuffer;
uint8_t* uBuffer;
uint8_t* vBuffer;
int rotation;
int64_t renderTimeMs;
int avsync_type;
uint8_t* metadata_buffer;
int metadata_size;
void* sharedContext;
int textureId;
void* d3d11Texture2d;
float matrix[16];
uint8_t* alphaBuffer;
void* pixelBuffer;
} agora_media_base__VideoFrame__C;

typedef void* agora_media_base__IVideoFrameObserver__Handle;

void agora_media_base__IVideoFrameObserver__onFrame(agora_media_base__IVideoFrameObserver__Handle handle,const agora_media_base__VideoFrame__C* frame);
bool agora_media_base__IVideoFrameObserver__isExternal(agora_media_base__IVideoFrameObserver__Handle handle);
agora_media_base__VIDEO_PIXEL_FORMAT__C agora_media_base__IVideoFrameObserver__getVideoFormatPreference(agora_media_base__IVideoFrameObserver__Handle handle);

typedef enum agora_media_base__MEDIA_PLAYER_SOURCE_TYPE__C
{
  MEDIA_PLAYER_SOURCE_DEFAULT,
MEDIA_PLAYER_SOURCE_FULL_FEATURED,
MEDIA_PLAYER_SOURCE_SIMPLE,
} agora_media_base__MEDIA_PLAYER_SOURCE_TYPE__C;


typedef enum agora_media_base__VIDEO_MODULE_POSITION__C
{
  POSITION_POST_CAPTURER= 1<<0,
POSITION_PRE_RENDERER= 1<<1,
POSITION_PRE_ENCODER= 1<<2,
} agora_media_base__VIDEO_MODULE_POSITION__C;

typedef void* agora_media__IAudioPcmFrameSink__Handle;

void agora_media__IAudioPcmFrameSink__onFrame(agora_media__IAudioPcmFrameSink__Handle handle,agora_media_base__AudioPcmFrame__C* frame);

typedef enum agora_media__AUDIO_FRAME_TYPE__C
{
  FRAME_TYPE_PCM16= 0,
} agora_media__AUDIO_FRAME_TYPE__C;


typedef enum agora_media____C
{
  MAX_HANDLE_TIME_CNT= 10,
} agora_media____C;


typedef struct agora_media__AudioFrame__C
{
  agora_media__AUDIO_FRAME_TYPE__C type;
int samplesPerChannel;
agora_rtc__BYTES_PER_SAMPLE__C bytesPerSample;
int channels;
int samplesPerSec;
void* buffer;
int64_t renderTimeMs;
int avsync_type;
int64_t presentationMs;
} agora_media__AudioFrame__C;


typedef enum agora_media__AUDIO_FRAME_POSITION__C
{
  AUDIO_FRAME_POSITION_NONE= 0x0000,
AUDIO_FRAME_POSITION_PLAYBACK= 0x0001,
AUDIO_FRAME_POSITION_RECORD= 0x0002,
AUDIO_FRAME_POSITION_MIXED= 0x0004,
AUDIO_FRAME_POSITION_BEFORE_MIXING= 0x0008,
AUDIO_FRAME_POSITION_EAR_MONITORING= 0x0010,
} agora_media__AUDIO_FRAME_POSITION__C;


typedef struct agora_media__AudioParams__C
{
  int sample_rate;
int channels;
agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode;
int samples_per_call;
} agora_media__AudioParams__C;

typedef void* agora_media__IAudioFrameObserverBase__Handle;

bool agora_media__IAudioFrameObserverBase__onRecordAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onPlaybackAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onMixedAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onEarMonitoringAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,agora_media__AudioFrame__C& audioFrame);
bool agora_media__IAudioFrameObserverBase__onPlaybackAudioFrameBeforeMixing(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media_base__user_id_t__C userId,agora_media__AudioFrame__C& audioFrame);
int agora_media__IAudioFrameObserverBase__getObservedAudioFramePosition(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getPlaybackAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getRecordAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getMixedAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getEarMonitoringAudioParams(agora_media__IAudioFrameObserverBase__Handle handle);
typedef void* agora_media__IAudioFrameObserver__Handle;

bool agora_media__IAudioFrameObserver__onPlaybackAudioFrameBeforeMixing(agora_media__IAudioFrameObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C uid,agora_media__AudioFrame__C& audioFrame);

typedef struct agora_media__AudioSpectrumData__C
{
  const float* audioSpectrumData;
int dataLength;
} agora_media__AudioSpectrumData__C;


typedef struct agora_media__UserAudioSpectrumInfo__C
{
  agora_rtc__uid_t__C uid;
agora_media__AudioSpectrumData__C spectrumData;
} agora_media__UserAudioSpectrumInfo__C;

typedef void* agora_media__IAudioSpectrumObserver__Handle;

bool agora_media__IAudioSpectrumObserver__onLocalAudioSpectrum(agora_media__IAudioSpectrumObserver__Handle handle,const agora_media__AudioSpectrumData__C& data);
bool agora_media__IAudioSpectrumObserver__onRemoteAudioSpectrum(agora_media__IAudioSpectrumObserver__Handle handle,const agora_media__UserAudioSpectrumInfo__C* spectrums,unsigned int spectrumNumber);
typedef void* agora_media__IVideoEncodedFrameObserver__Handle;

bool agora_media__IVideoEncodedFrameObserver__onEncodedVideoFrameReceived(agora_media__IVideoEncodedFrameObserver__Handle handle,agora_rtc__uid_t__C uid,const uint8_t* imageBuffer,size_t length,const agora_rtc__EncodedVideoFrameInfo__C& videoEncodedFrameInfo);

typedef enum agora_media__VIDEO_FRAME_PROCESS_MODE__C
{
  PROCESS_MODE_READ_ONLY,
PROCESS_MODE_READ_WRITE,
} agora_media__VIDEO_FRAME_PROCESS_MODE__C;

typedef agora_media_base__VideoFrame__C agora_media__VideoFrame__C;
typedef void* agora_media__IVideoFrameObserver__Handle;

bool agora_media__IVideoFrameObserver__onCaptureVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_media__VideoFrame__C& videoFrame);
bool agora_media__IVideoFrameObserver__onPreEncodeVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_media__VideoFrame__C& videoFrame);
bool agora_media__IVideoFrameObserver__onMediaPlayerVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_media__VideoFrame__C& videoFrame,int mediaPlayerId);
bool agora_media__IVideoFrameObserver__onRenderVideoFrame(agora_media__IVideoFrameObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C remoteUid,agora_media__VideoFrame__C& videoFrame);
bool agora_media__IVideoFrameObserver__onTranscodedVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_media__VideoFrame__C& videoFrame);
agora_media__VIDEO_FRAME_PROCESS_MODE__C agora_media__IVideoFrameObserver__getVideoFrameProcessMode(agora_media__IVideoFrameObserver__Handle handle);
agora_media_base__VIDEO_PIXEL_FORMAT__C agora_media__IVideoFrameObserver__getVideoFormatPreference(agora_media__IVideoFrameObserver__Handle handle);
bool agora_media__IVideoFrameObserver__getRotationApplied(agora_media__IVideoFrameObserver__Handle handle);
bool agora_media__IVideoFrameObserver__getMirrorApplied(agora_media__IVideoFrameObserver__Handle handle);
uint32_t agora_media__IVideoFrameObserver__getObservedFramePosition(agora_media__IVideoFrameObserver__Handle handle);
bool agora_media__IVideoFrameObserver__isExternal(agora_media__IVideoFrameObserver__Handle handle);

typedef enum agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C
{
  VIDEO_FRAME= 0,
ENCODED_VIDEO_FRAME,
} agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C;


typedef enum agora_media__MediaRecorderContainerFormat__C
{
  FORMAT_MP4= 1,
} agora_media__MediaRecorderContainerFormat__C;


typedef enum agora_media__MediaRecorderStreamType__C
{
  STREAM_TYPE_AUDIO= 0x01,
STREAM_TYPE_VIDEO= 0x02,
STREAM_TYPE_BOTH= STREAM_TYPE_AUDIO|STREAM_TYPE_VIDEO,
} agora_media__MediaRecorderStreamType__C;


typedef enum agora_media__RecorderState__C
{
  RECORDER_STATE_ERROR= -1,
RECORDER_STATE_START= 2,
RECORDER_STATE_STOP= 3,
} agora_media__RecorderState__C;


typedef enum agora_media__RecorderErrorCode__C
{
  RECORDER_ERROR_NONE= 0,
RECORDER_ERROR_WRITE_FAILED= 1,
RECORDER_ERROR_NO_STREAM= 2,
RECORDER_ERROR_OVER_MAX_DURATION= 3,
RECORDER_ERROR_CONFIG_CHANGED= 4,
} agora_media__RecorderErrorCode__C;


typedef struct agora_media__MediaRecorderConfiguration__C
{
  const char* storagePath;
agora_media__MediaRecorderContainerFormat__C containerFormat;
agora_media__MediaRecorderStreamType__C streamType;
int maxDurationMs;
int recorderInfoUpdateInterval;
} agora_media__MediaRecorderConfiguration__C;


typedef struct agora_media__RecorderInfo__C
{
  const char* fileName;
unsigned int durationMs;
unsigned int fileSize;
} agora_media__RecorderInfo__C;

typedef void* agora_media__IMediaRecorderObserver__Handle;

void agora_media__IMediaRecorderObserver__onRecorderStateChanged(agora_media__IMediaRecorderObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C uid,agora_media__RecorderState__C state,agora_media__RecorderErrorCode__C error);
void agora_media__IMediaRecorderObserver__onRecorderInfoUpdated(agora_media__IMediaRecorderObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C uid,const agora_media__RecorderInfo__C& info);
    
    #endif// AGORAMEDIABASE_C_H_
    