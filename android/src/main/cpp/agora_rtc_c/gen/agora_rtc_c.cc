
#include "rtc_c.h"

bool agora_rtc__IPacketObserver__onSendAudioPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet) {
        agora::rtc::IPacketObserver::Packet thePacket;
thePacket.buffer = packet.buffer;
thePacket.size = packet.size;
        reinterpret_cast<agora::rtc::rtc::IPacketObserver *>(handle)->onSendAudioPacket(thePacket);
      }
      
bool agora_rtc__IPacketObserver__onSendVideoPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet) {
        agora::rtc::IPacketObserver::Packet thePacket;
thePacket.buffer = packet.buffer;
thePacket.size = packet.size;
        reinterpret_cast<agora::rtc::rtc::IPacketObserver *>(handle)->onSendVideoPacket(thePacket);
      }
      
bool agora_rtc__IPacketObserver__onReceiveAudioPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet) {
        agora::rtc::IPacketObserver::Packet thePacket;
thePacket.buffer = packet.buffer;
thePacket.size = packet.size;
        reinterpret_cast<agora::rtc::rtc::IPacketObserver *>(handle)->onReceiveAudioPacket(thePacket);
      }
      
bool agora_rtc__IPacketObserver__onReceiveVideoPacket(agora_rtc__IPacketObserver__Handle handle,agora_rtc__Packet__C& packet) {
        agora::rtc::IPacketObserver::Packet thePacket;
thePacket.buffer = packet.buffer;
thePacket.size = packet.size;
        reinterpret_cast<agora::rtc::rtc::IPacketObserver *>(handle)->onReceiveVideoPacket(thePacket);
      }
      
void agora_rtc__IAudioEncodedFrameObserver__onRecordAudioEncodedFrame(agora_rtc__IAudioEncodedFrameObserver__Handle handle,const uint8_t* frameBuffer,int length,const agora_rtc__EncodedAudioFrameInfo__C& audioEncodedFrameInfo) {
        agora::rtc::rtc::EncodedAudioFrameAdvancedSettings theEncodedAudioFrameAdvancedSettings;
theEncodedAudioFrameAdvancedSettings.speech = audioEncodedFrameInfo.advancedSettings.speech;
theEncodedAudioFrameAdvancedSettings.sendEvenIfEmpty = audioEncodedFrameInfo.advancedSettings.sendEvenIfEmpty;
agora::rtc::rtc::EncodedAudioFrameInfo theEncodedAudioFrameInfo;
theEncodedAudioFrameInfo.codec = audioEncodedFrameInfo.codec;
theEncodedAudioFrameInfo.sampleRateHz = audioEncodedFrameInfo.sampleRateHz;
theEncodedAudioFrameInfo.samplesPerChannel = audioEncodedFrameInfo.samplesPerChannel;
theEncodedAudioFrameInfo.numberOfChannels = audioEncodedFrameInfo.numberOfChannels;
theEncodedAudioFrameInfo.advancedSettings = theEncodedAudioFrameAdvancedSettings;
theEncodedAudioFrameInfo.captureTimeMs = audioEncodedFrameInfo.captureTimeMs;
        reinterpret_cast<agora::rtc::rtc::IAudioEncodedFrameObserver *>(handle)->onRecordAudioEncodedFrame(frameBuffer,length,theEncodedAudioFrameInfo);
      }
      
void agora_rtc__IAudioEncodedFrameObserver__onPlaybackAudioEncodedFrame(agora_rtc__IAudioEncodedFrameObserver__Handle handle,const uint8_t* frameBuffer,int length,const agora_rtc__EncodedAudioFrameInfo__C& audioEncodedFrameInfo) {
        agora::rtc::rtc::EncodedAudioFrameAdvancedSettings theEncodedAudioFrameAdvancedSettings;
theEncodedAudioFrameAdvancedSettings.speech = audioEncodedFrameInfo.advancedSettings.speech;
theEncodedAudioFrameAdvancedSettings.sendEvenIfEmpty = audioEncodedFrameInfo.advancedSettings.sendEvenIfEmpty;
agora::rtc::rtc::EncodedAudioFrameInfo theEncodedAudioFrameInfo;
theEncodedAudioFrameInfo.codec = audioEncodedFrameInfo.codec;
theEncodedAudioFrameInfo.sampleRateHz = audioEncodedFrameInfo.sampleRateHz;
theEncodedAudioFrameInfo.samplesPerChannel = audioEncodedFrameInfo.samplesPerChannel;
theEncodedAudioFrameInfo.numberOfChannels = audioEncodedFrameInfo.numberOfChannels;
theEncodedAudioFrameInfo.advancedSettings = theEncodedAudioFrameAdvancedSettings;
theEncodedAudioFrameInfo.captureTimeMs = audioEncodedFrameInfo.captureTimeMs;
        reinterpret_cast<agora::rtc::rtc::IAudioEncodedFrameObserver *>(handle)->onPlaybackAudioEncodedFrame(frameBuffer,length,theEncodedAudioFrameInfo);
      }
      
void agora_rtc__IAudioEncodedFrameObserver__onMixedAudioEncodedFrame(agora_rtc__IAudioEncodedFrameObserver__Handle handle,const uint8_t* frameBuffer,int length,const agora_rtc__EncodedAudioFrameInfo__C& audioEncodedFrameInfo) {
        agora::rtc::rtc::EncodedAudioFrameAdvancedSettings theEncodedAudioFrameAdvancedSettings;
theEncodedAudioFrameAdvancedSettings.speech = audioEncodedFrameInfo.advancedSettings.speech;
theEncodedAudioFrameAdvancedSettings.sendEvenIfEmpty = audioEncodedFrameInfo.advancedSettings.sendEvenIfEmpty;
agora::rtc::rtc::EncodedAudioFrameInfo theEncodedAudioFrameInfo;
theEncodedAudioFrameInfo.codec = audioEncodedFrameInfo.codec;
theEncodedAudioFrameInfo.sampleRateHz = audioEncodedFrameInfo.sampleRateHz;
theEncodedAudioFrameInfo.samplesPerChannel = audioEncodedFrameInfo.samplesPerChannel;
theEncodedAudioFrameInfo.numberOfChannels = audioEncodedFrameInfo.numberOfChannels;
theEncodedAudioFrameInfo.advancedSettings = theEncodedAudioFrameAdvancedSettings;
theEncodedAudioFrameInfo.captureTimeMs = audioEncodedFrameInfo.captureTimeMs;
        reinterpret_cast<agora::rtc::rtc::IAudioEncodedFrameObserver *>(handle)->onMixedAudioEncodedFrame(frameBuffer,length,theEncodedAudioFrameInfo);
      }
      
int agora_base__IEngineBase__queryInterface(agora_base__IEngineBase__Handle handle,agora_rtc__INTERFACE_ID_TYPE__C iid,void* inter) {
        
        reinterpret_cast<agora::base::base::IEngineBase *>(handle)->queryInterface(iid,inter);
      }
      
bool agora_base__AParameter__initialize(agora_base__AParameter__Handle handle,agora_base__IEngineBase__Handle* engine) {
        
        reinterpret_cast<agora::base::base::AParameter *>(handle)->initialize(engine);
      }
      
void agora_base__LicenseCallback__onCertificateRequired(agora_base__LicenseCallback__Handle handle) {
        
        reinterpret_cast<agora::base::base::LicenseCallback *>(handle)->onCertificateRequired();
      }
      
void agora_base__LicenseCallback__onLicenseRequest(agora_base__LicenseCallback__Handle handle) {
        
        reinterpret_cast<agora::base::base::LicenseCallback *>(handle)->onLicenseRequest();
      }
      
void agora_base__LicenseCallback__onLicenseValidated(agora_base__LicenseCallback__Handle handle) {
        
        reinterpret_cast<agora::base::base::LicenseCallback *>(handle)->onLicenseValidated();
      }
      
void agora_base__LicenseCallback__onLicenseError(agora_base__LicenseCallback__Handle handle,int result) {
        
        reinterpret_cast<agora::base::base::LicenseCallback *>(handle)->onLicenseError(result);
      }
      
void agora_media_base__IVideoFrameObserver__onFrame(agora_media_base__IVideoFrameObserver__Handle handle,const agora_media_base__VideoFrame__C* frame) {
        agora::media::base::base::VideoFrame theVideoFrame;
theVideoFrame.type = frame.type;
theVideoFrame.width = frame.width;
theVideoFrame.height = frame.height;
theVideoFrame.yStride = frame.yStride;
theVideoFrame.uStride = frame.uStride;
theVideoFrame.vStride = frame.vStride;
theVideoFrame.yBuffer = frame.yBuffer;
theVideoFrame.uBuffer = frame.uBuffer;
theVideoFrame.vBuffer = frame.vBuffer;
theVideoFrame.rotation = frame.rotation;
theVideoFrame.renderTimeMs = frame.renderTimeMs;
theVideoFrame.avsync_type = frame.avsync_type;
theVideoFrame.metadata_buffer = frame.metadata_buffer;
theVideoFrame.metadata_size = frame.metadata_size;
theVideoFrame.sharedContext = frame.sharedContext;
theVideoFrame.textureId = frame.textureId;
theVideoFrame.d3d11Texture2d = frame.d3d11Texture2d;
theVideoFrame.matrix = frame.matrix;
theVideoFrame.alphaBuffer = frame.alphaBuffer;
theVideoFrame.pixelBuffer = frame.pixelBuffer;
        reinterpret_cast<agora::media::base::base::IVideoFrameObserver *>(handle)->onFrame(theVideoFrame);
      }
      
bool agora_media_base__IVideoFrameObserver__isExternal(agora_media_base__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::base::base::IVideoFrameObserver *>(handle)->isExternal();
      }
      
agora_media_base__VIDEO_PIXEL_FORMAT__C agora_media_base__IVideoFrameObserver__getVideoFormatPreference(agora_media_base__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::base::base::IVideoFrameObserver *>(handle)->getVideoFormatPreference();
      }
      
void agora_media__IAudioPcmFrameSink__onFrame(agora_media__IAudioPcmFrameSink__Handle handle,agora_media_base__AudioPcmFrame__C* frame) {
        agora::media::base::base::AudioPcmFrame theAudioPcmFrame;
theAudioPcmFrame.capture_timestamp = frame.capture_timestamp;
theAudioPcmFrame.samples_per_channel_ = frame.samples_per_channel_;
theAudioPcmFrame.sample_rate_hz_ = frame.sample_rate_hz_;
theAudioPcmFrame.num_channels_ = frame.num_channels_;
theAudioPcmFrame.bytes_per_sample = frame.bytes_per_sample;
theAudioPcmFrame.data_ = frame.data_;
        reinterpret_cast<agora::media::media::IAudioPcmFrameSink *>(handle)->onFrame(theAudioPcmFrame);
      }
      
bool agora_media__IAudioFrameObserverBase__onRecordAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media__AudioFrame__C& audioFrame) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = audioFrame.type;
theAudioFrame.samplesPerChannel = audioFrame.samplesPerChannel;
theAudioFrame.bytesPerSample = audioFrame.bytesPerSample;
theAudioFrame.channels = audioFrame.channels;
theAudioFrame.samplesPerSec = audioFrame.samplesPerSec;
theAudioFrame.buffer = audioFrame.buffer;
theAudioFrame.renderTimeMs = audioFrame.renderTimeMs;
theAudioFrame.avsync_type = audioFrame.avsync_type;
theAudioFrame.presentationMs = audioFrame.presentationMs;
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->onRecordAudioFrame(channelId,theAudioFrame);
      }
      
bool agora_media__IAudioFrameObserverBase__onPlaybackAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media__AudioFrame__C& audioFrame) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = audioFrame.type;
theAudioFrame.samplesPerChannel = audioFrame.samplesPerChannel;
theAudioFrame.bytesPerSample = audioFrame.bytesPerSample;
theAudioFrame.channels = audioFrame.channels;
theAudioFrame.samplesPerSec = audioFrame.samplesPerSec;
theAudioFrame.buffer = audioFrame.buffer;
theAudioFrame.renderTimeMs = audioFrame.renderTimeMs;
theAudioFrame.avsync_type = audioFrame.avsync_type;
theAudioFrame.presentationMs = audioFrame.presentationMs;
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->onPlaybackAudioFrame(channelId,theAudioFrame);
      }
      
bool agora_media__IAudioFrameObserverBase__onMixedAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media__AudioFrame__C& audioFrame) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = audioFrame.type;
theAudioFrame.samplesPerChannel = audioFrame.samplesPerChannel;
theAudioFrame.bytesPerSample = audioFrame.bytesPerSample;
theAudioFrame.channels = audioFrame.channels;
theAudioFrame.samplesPerSec = audioFrame.samplesPerSec;
theAudioFrame.buffer = audioFrame.buffer;
theAudioFrame.renderTimeMs = audioFrame.renderTimeMs;
theAudioFrame.avsync_type = audioFrame.avsync_type;
theAudioFrame.presentationMs = audioFrame.presentationMs;
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->onMixedAudioFrame(channelId,theAudioFrame);
      }
      
bool agora_media__IAudioFrameObserverBase__onEarMonitoringAudioFrame(agora_media__IAudioFrameObserverBase__Handle handle,agora_media__AudioFrame__C& audioFrame) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = audioFrame.type;
theAudioFrame.samplesPerChannel = audioFrame.samplesPerChannel;
theAudioFrame.bytesPerSample = audioFrame.bytesPerSample;
theAudioFrame.channels = audioFrame.channels;
theAudioFrame.samplesPerSec = audioFrame.samplesPerSec;
theAudioFrame.buffer = audioFrame.buffer;
theAudioFrame.renderTimeMs = audioFrame.renderTimeMs;
theAudioFrame.avsync_type = audioFrame.avsync_type;
theAudioFrame.presentationMs = audioFrame.presentationMs;
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->onEarMonitoringAudioFrame(theAudioFrame);
      }
      
bool agora_media__IAudioFrameObserverBase__onPlaybackAudioFrameBeforeMixing(agora_media__IAudioFrameObserverBase__Handle handle,const char* channelId,agora_media_base__user_id_t__C userId,agora_media__AudioFrame__C& audioFrame) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = audioFrame.type;
theAudioFrame.samplesPerChannel = audioFrame.samplesPerChannel;
theAudioFrame.bytesPerSample = audioFrame.bytesPerSample;
theAudioFrame.channels = audioFrame.channels;
theAudioFrame.samplesPerSec = audioFrame.samplesPerSec;
theAudioFrame.buffer = audioFrame.buffer;
theAudioFrame.renderTimeMs = audioFrame.renderTimeMs;
theAudioFrame.avsync_type = audioFrame.avsync_type;
theAudioFrame.presentationMs = audioFrame.presentationMs;
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->onPlaybackAudioFrameBeforeMixing(channelId,userId,theAudioFrame);
      }
      
int agora_media__IAudioFrameObserverBase__getObservedAudioFramePosition(agora_media__IAudioFrameObserverBase__Handle handle) {
        
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->getObservedAudioFramePosition();
      }
      
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getPlaybackAudioParams(agora_media__IAudioFrameObserverBase__Handle handle) {
        
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->getPlaybackAudioParams();
      }
      
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getRecordAudioParams(agora_media__IAudioFrameObserverBase__Handle handle) {
        
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->getRecordAudioParams();
      }
      
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getMixedAudioParams(agora_media__IAudioFrameObserverBase__Handle handle) {
        
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->getMixedAudioParams();
      }
      
agora_media__AudioParams__C agora_media__IAudioFrameObserverBase__getEarMonitoringAudioParams(agora_media__IAudioFrameObserverBase__Handle handle) {
        
        reinterpret_cast<agora::media::media::IAudioFrameObserverBase *>(handle)->getEarMonitoringAudioParams();
      }
      
bool agora_media__IAudioFrameObserver__onPlaybackAudioFrameBeforeMixing(agora_media__IAudioFrameObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C uid,agora_media__AudioFrame__C& audioFrame) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = audioFrame.type;
theAudioFrame.samplesPerChannel = audioFrame.samplesPerChannel;
theAudioFrame.bytesPerSample = audioFrame.bytesPerSample;
theAudioFrame.channels = audioFrame.channels;
theAudioFrame.samplesPerSec = audioFrame.samplesPerSec;
theAudioFrame.buffer = audioFrame.buffer;
theAudioFrame.renderTimeMs = audioFrame.renderTimeMs;
theAudioFrame.avsync_type = audioFrame.avsync_type;
theAudioFrame.presentationMs = audioFrame.presentationMs;
        reinterpret_cast<agora::media::media::IAudioFrameObserver *>(handle)->onPlaybackAudioFrameBeforeMixing(channelId,uid,theAudioFrame);
      }
      
bool agora_media__IAudioSpectrumObserver__onLocalAudioSpectrum(agora_media__IAudioSpectrumObserver__Handle handle,const agora_media__AudioSpectrumData__C& data) {
        agora::media::media::AudioSpectrumData theAudioSpectrumData;
theAudioSpectrumData.audioSpectrumData = data.audioSpectrumData;
theAudioSpectrumData.dataLength = data.dataLength;
        reinterpret_cast<agora::media::media::IAudioSpectrumObserver *>(handle)->onLocalAudioSpectrum(theAudioSpectrumData);
      }
      
bool agora_media__IAudioSpectrumObserver__onRemoteAudioSpectrum(agora_media__IAudioSpectrumObserver__Handle handle,const agora_media__UserAudioSpectrumInfo__C* spectrums,unsigned int spectrumNumber) {
        agora::media::media::AudioSpectrumData theAudioSpectrumData;
theAudioSpectrumData.audioSpectrumData = spectrums.spectrumData.audioSpectrumData;
theAudioSpectrumData.dataLength = spectrums.spectrumData.dataLength;
agora::media::media::UserAudioSpectrumInfo theUserAudioSpectrumInfo;
theUserAudioSpectrumInfo.uid = spectrums.uid;
theUserAudioSpectrumInfo.spectrumData = theAudioSpectrumData;
        reinterpret_cast<agora::media::media::IAudioSpectrumObserver *>(handle)->onRemoteAudioSpectrum(theUserAudioSpectrumInfo,spectrumNumber);
      }
      
bool agora_media__IVideoEncodedFrameObserver__onEncodedVideoFrameReceived(agora_media__IVideoEncodedFrameObserver__Handle handle,agora_rtc__uid_t__C uid,const uint8_t* imageBuffer,size_t length,const agora_rtc__EncodedVideoFrameInfo__C& videoEncodedFrameInfo) {
        agora::rtc::rtc::EncodedVideoFrameInfo theEncodedVideoFrameInfo;
theEncodedVideoFrameInfo.codecType = videoEncodedFrameInfo.codecType;
theEncodedVideoFrameInfo.width = videoEncodedFrameInfo.width;
theEncodedVideoFrameInfo.height = videoEncodedFrameInfo.height;
theEncodedVideoFrameInfo.framesPerSecond = videoEncodedFrameInfo.framesPerSecond;
theEncodedVideoFrameInfo.frameType = videoEncodedFrameInfo.frameType;
theEncodedVideoFrameInfo.rotation = videoEncodedFrameInfo.rotation;
theEncodedVideoFrameInfo.trackId = videoEncodedFrameInfo.trackId;
theEncodedVideoFrameInfo.captureTimeMs = videoEncodedFrameInfo.captureTimeMs;
theEncodedVideoFrameInfo.decodeTimeMs = videoEncodedFrameInfo.decodeTimeMs;
theEncodedVideoFrameInfo.uid = videoEncodedFrameInfo.uid;
theEncodedVideoFrameInfo.streamType = videoEncodedFrameInfo.streamType;
        reinterpret_cast<agora::media::media::IVideoEncodedFrameObserver *>(handle)->onEncodedVideoFrameReceived(uid,imageBuffer,length,theEncodedVideoFrameInfo);
      }
      
bool agora_media__IVideoFrameObserver__onCaptureVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_media__VideoFrame__C& videoFrame) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->onCaptureVideoFrame(sourceType,videoFrame);
      }
      
bool agora_media__IVideoFrameObserver__onPreEncodeVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_media__VideoFrame__C& videoFrame) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->onPreEncodeVideoFrame(sourceType,videoFrame);
      }
      
bool agora_media__IVideoFrameObserver__onMediaPlayerVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_media__VideoFrame__C& videoFrame,int mediaPlayerId) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->onMediaPlayerVideoFrame(videoFrame,mediaPlayerId);
      }
      
bool agora_media__IVideoFrameObserver__onRenderVideoFrame(agora_media__IVideoFrameObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C remoteUid,agora_media__VideoFrame__C& videoFrame) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->onRenderVideoFrame(channelId,remoteUid,videoFrame);
      }
      
bool agora_media__IVideoFrameObserver__onTranscodedVideoFrame(agora_media__IVideoFrameObserver__Handle handle,agora_media__VideoFrame__C& videoFrame) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->onTranscodedVideoFrame(videoFrame);
      }
      
agora_media__VIDEO_FRAME_PROCESS_MODE__C agora_media__IVideoFrameObserver__getVideoFrameProcessMode(agora_media__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->getVideoFrameProcessMode();
      }
      
agora_media_base__VIDEO_PIXEL_FORMAT__C agora_media__IVideoFrameObserver__getVideoFormatPreference(agora_media__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->getVideoFormatPreference();
      }
      
bool agora_media__IVideoFrameObserver__getRotationApplied(agora_media__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->getRotationApplied();
      }
      
bool agora_media__IVideoFrameObserver__getMirrorApplied(agora_media__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->getMirrorApplied();
      }
      
uint32_t agora_media__IVideoFrameObserver__getObservedFramePosition(agora_media__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->getObservedFramePosition();
      }
      
bool agora_media__IVideoFrameObserver__isExternal(agora_media__IVideoFrameObserver__Handle handle) {
        
        reinterpret_cast<agora::media::media::IVideoFrameObserver *>(handle)->isExternal();
      }
      
void agora_media__IMediaRecorderObserver__onRecorderStateChanged(agora_media__IMediaRecorderObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C uid,agora_media__RecorderState__C state,agora_media__RecorderErrorCode__C error) {
        
        reinterpret_cast<agora::media::media::IMediaRecorderObserver *>(handle)->onRecorderStateChanged(channelId,uid,state,error);
      }
      
void agora_media__IMediaRecorderObserver__onRecorderInfoUpdated(agora_media__IMediaRecorderObserver__Handle handle,const char* channelId,agora_rtc__uid_t__C uid,const agora_media__RecorderInfo__C& info) {
        agora::media::media::RecorderInfo theRecorderInfo;
theRecorderInfo.fileName = info.fileName;
theRecorderInfo.durationMs = info.durationMs;
theRecorderInfo.fileSize = info.fileSize;
        reinterpret_cast<agora::media::media::IMediaRecorderObserver *>(handle)->onRecorderInfoUpdated(channelId,uid,theRecorderInfo);
      }
      
int agora_media_base__IMediaPlayerCustomDataProvider__onReadData(agora_media_base__IMediaPlayerCustomDataProvider__Handle handle,unsigned char* buffer,int bufferSize) {
        
        reinterpret_cast<agora::media::base::base::IMediaPlayerCustomDataProvider *>(handle)->onReadData(buffer,bufferSize);
      }
      
int64_t agora_media_base__IMediaPlayerCustomDataProvider__onSeek(agora_media_base__IMediaPlayerCustomDataProvider__Handle handle,int64_t offset,int whence) {
        
        reinterpret_cast<agora::media::base::base::IMediaPlayerCustomDataProvider *>(handle)->onSeek(offset,whence);
      }
      
int32_t agora_commons__ILogWriter__writeLog(agora_commons__ILogWriter__Handle handle,agora_commons__LOG_LEVEL__C level,const char* message,uint16_t length) {
        
        reinterpret_cast<agora::commons::commons::ILogWriter *>(handle)->writeLog(level,message,length);
      }
      
int agora_media__IMediaEngine__registerAudioFrameObserver(agora_media__IMediaEngine__Handle handle,agora_media__IAudioFrameObserver__Handle* observer) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->registerAudioFrameObserver(observer);
      }
      
int agora_media__IMediaEngine__registerVideoFrameObserver(agora_media__IMediaEngine__Handle handle,agora_media_base__IVideoFrameObserver__Handle* observer) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->registerVideoFrameObserver(observer);
      }
      
int agora_media__IMediaEngine__registerVideoEncodedFrameObserver(agora_media__IMediaEngine__Handle handle,agora_media__IVideoEncodedFrameObserver__Handle* observer) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->registerVideoEncodedFrameObserver(observer);
      }
      
int agora_media__IMediaEngine__pushAudioFrame(agora_media__IMediaEngine__Handle handle,agora_media__AudioFrame__C* frame,agora_rtc__track_id_t__C trackId) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = frame.type;
theAudioFrame.samplesPerChannel = frame.samplesPerChannel;
theAudioFrame.bytesPerSample = frame.bytesPerSample;
theAudioFrame.channels = frame.channels;
theAudioFrame.samplesPerSec = frame.samplesPerSec;
theAudioFrame.buffer = frame.buffer;
theAudioFrame.renderTimeMs = frame.renderTimeMs;
theAudioFrame.avsync_type = frame.avsync_type;
theAudioFrame.presentationMs = frame.presentationMs;
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->pushAudioFrame(theAudioFrame,trackId);
      }
      
int agora_media__IMediaEngine__pullAudioFrame(agora_media__IMediaEngine__Handle handle,agora_media__AudioFrame__C* frame) {
        agora::media::IAudioFrameObserverBase::AudioFrame theAudioFrame;
theAudioFrame.type = frame.type;
theAudioFrame.samplesPerChannel = frame.samplesPerChannel;
theAudioFrame.bytesPerSample = frame.bytesPerSample;
theAudioFrame.channels = frame.channels;
theAudioFrame.samplesPerSec = frame.samplesPerSec;
theAudioFrame.buffer = frame.buffer;
theAudioFrame.renderTimeMs = frame.renderTimeMs;
theAudioFrame.avsync_type = frame.avsync_type;
theAudioFrame.presentationMs = frame.presentationMs;
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->pullAudioFrame(theAudioFrame);
      }
      
int agora_media__IMediaEngine__setExternalVideoSource(agora_media__IMediaEngine__Handle handle,bool enabled,bool useTexture,agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C sourceType,agora_rtc__SenderOptions__C encodedVideoOption) {
        agora::rtc::rtc::SenderOptions theSenderOptions;
theSenderOptions.ccMode = encodedVideoOption.ccMode;
theSenderOptions.codecType = encodedVideoOption.codecType;
theSenderOptions.targetBitrate = encodedVideoOption.targetBitrate;
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->setExternalVideoSource(enabled,useTexture,sourceType,theSenderOptions);
      }
      
int agora_media__IMediaEngine__setExternalAudioSource(agora_media__IMediaEngine__Handle handle,bool enabled,int sampleRate,int channels,bool localPlayback,bool publish) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->setExternalAudioSource(enabled,sampleRate,channels,localPlayback,publish);
      }
      
agora_rtc__track_id_t__C agora_media__IMediaEngine__createCustomAudioTrack(agora_media__IMediaEngine__Handle handle,agora_rtc__AUDIO_TRACK_TYPE__C trackType,const agora_rtc__AudioTrackConfig__C& config) {
        agora::rtc::rtc::AudioTrackConfig theAudioTrackConfig;
theAudioTrackConfig.enableLocalPlayback = config.enableLocalPlayback;
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->createCustomAudioTrack(trackType,theAudioTrackConfig);
      }
      
int agora_media__IMediaEngine__destroyCustomAudioTrack(agora_media__IMediaEngine__Handle handle,agora_rtc__track_id_t__C trackId) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->destroyCustomAudioTrack(trackId);
      }
      
int agora_media__IMediaEngine__setExternalAudioSink(agora_media__IMediaEngine__Handle handle,bool enabled,int sampleRate,int channels) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->setExternalAudioSink(enabled,sampleRate,channels);
      }
      
int agora_media__IMediaEngine__enableCustomAudioLocalPlayback(agora_media__IMediaEngine__Handle handle,agora_rtc__track_id_t__C trackId,bool enabled) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->enableCustomAudioLocalPlayback(trackId,enabled);
      }
      
int agora_media__IMediaEngine__pushVideoFrame(agora_media__IMediaEngine__Handle handle,agora_media_base__ExternalVideoFrame__C* frame,unsigned int videoTrackId) {
        agora::media::base::base::ExternalVideoFrame theExternalVideoFrame;
theExternalVideoFrame.type = frame.type;
theExternalVideoFrame.format = frame.format;
theExternalVideoFrame.buffer = frame.buffer;
theExternalVideoFrame.stride = frame.stride;
theExternalVideoFrame.height = frame.height;
theExternalVideoFrame.cropLeft = frame.cropLeft;
theExternalVideoFrame.cropTop = frame.cropTop;
theExternalVideoFrame.cropRight = frame.cropRight;
theExternalVideoFrame.cropBottom = frame.cropBottom;
theExternalVideoFrame.rotation = frame.rotation;
theExternalVideoFrame.timestamp = frame.timestamp;
theExternalVideoFrame.eglContext = frame.eglContext;
theExternalVideoFrame.eglType = frame.eglType;
theExternalVideoFrame.textureId = frame.textureId;
theExternalVideoFrame.matrix = frame.matrix;
theExternalVideoFrame.metadata_buffer = frame.metadata_buffer;
theExternalVideoFrame.metadata_size = frame.metadata_size;
theExternalVideoFrame.alphaBuffer = frame.alphaBuffer;
theExternalVideoFrame.d3d11_texture_2d = frame.d3d11_texture_2d;
theExternalVideoFrame.texture_slice_index = frame.texture_slice_index;
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->pushVideoFrame(theExternalVideoFrame,videoTrackId);
      }
      
int agora_media__IMediaEngine__pushEncodedVideoImage(agora_media__IMediaEngine__Handle handle,const uint8_t* imageBuffer,size_t length,const agora_rtc__EncodedVideoFrameInfo__C& videoEncodedFrameInfo,unsigned int videoTrackId) {
        agora::rtc::rtc::EncodedVideoFrameInfo theEncodedVideoFrameInfo;
theEncodedVideoFrameInfo.codecType = videoEncodedFrameInfo.codecType;
theEncodedVideoFrameInfo.width = videoEncodedFrameInfo.width;
theEncodedVideoFrameInfo.height = videoEncodedFrameInfo.height;
theEncodedVideoFrameInfo.framesPerSecond = videoEncodedFrameInfo.framesPerSecond;
theEncodedVideoFrameInfo.frameType = videoEncodedFrameInfo.frameType;
theEncodedVideoFrameInfo.rotation = videoEncodedFrameInfo.rotation;
theEncodedVideoFrameInfo.trackId = videoEncodedFrameInfo.trackId;
theEncodedVideoFrameInfo.captureTimeMs = videoEncodedFrameInfo.captureTimeMs;
theEncodedVideoFrameInfo.decodeTimeMs = videoEncodedFrameInfo.decodeTimeMs;
theEncodedVideoFrameInfo.uid = videoEncodedFrameInfo.uid;
theEncodedVideoFrameInfo.streamType = videoEncodedFrameInfo.streamType;
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->pushEncodedVideoImage(imageBuffer,length,theEncodedVideoFrameInfo,videoTrackId);
      }
      
int agora_media__IMediaEngine__addVideoFrameRenderer(agora_media__IMediaEngine__Handle handle,agora_media_base__IVideoFrameObserver__Handle* renderer) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->addVideoFrameRenderer(renderer);
      }
      
int agora_media__IMediaEngine__removeVideoFrameRenderer(agora_media__IMediaEngine__Handle handle,agora_media_base__IVideoFrameObserver__Handle* renderer) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->removeVideoFrameRenderer(renderer);
      }
      
void agora_media__IMediaEngine__release(agora_media__IMediaEngine__Handle handle) {
        
        reinterpret_cast<agora::media::media::IMediaEngine *>(handle)->release();
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerSourceStateChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,agora_media_base__MEDIA_PLAYER_STATE__C state,agora_media_base__MEDIA_PLAYER_ERROR__C ec) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerSourceStateChanged(state,ec);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPositionChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int64_t position_ms) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPositionChanged(position_ms);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerEvent(agora_rtc__IMediaPlayerSourceObserver__Handle handle,agora_media_base__MEDIA_PLAYER_EVENT__C eventCode,int64_t elapsedTime,const char* message) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerEvent(eventCode,elapsedTime,message);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onMetaData(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const void* data,int length) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onMetaData(data,length);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayBufferUpdated(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int64_t playCachedBuffer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayBufferUpdated(playCachedBuffer);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPreloadEvent(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const char* src,agora_media_base__PLAYER_PRELOAD_EVENT__C event) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPreloadEvent(src,event);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onCompleted(agora_rtc__IMediaPlayerSourceObserver__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onCompleted();
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onAgoraCDNTokenWillExpire(agora_rtc__IMediaPlayerSourceObserver__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onAgoraCDNTokenWillExpire();
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerSrcInfoChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const agora_media_base__SrcInfo__C& from,const agora_media_base__SrcInfo__C& to) {
        agora::media::base::base::SrcInfo theSrcInfo;
theSrcInfo.bitrateInKbps = from.bitrateInKbps;
theSrcInfo.name = from.name;
agora::media::base::base::SrcInfo theSrcInfo;
theSrcInfo.bitrateInKbps = to.bitrateInKbps;
theSrcInfo.name = to.name;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerSrcInfoChanged(theSrcInfo,theSrcInfo);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerInfoUpdated(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const agora_media_base__PlayerUpdatedInfo__C& info) {
        agora::media::base::base::CacheStatistics theCacheStatistics;
theCacheStatistics.fileSize = info.cacheStatistics.fileSize;
theCacheStatistics.cacheSize = info.cacheStatistics.cacheSize;
theCacheStatistics.downloadSize = info.cacheStatistics.downloadSize;
agora::media::base::base::PlayerUpdatedInfo thePlayerUpdatedInfo;
thePlayerUpdatedInfo.playerId = info.playerId;
thePlayerUpdatedInfo.deviceId = info.deviceId;
thePlayerUpdatedInfo.cacheStatistics = theCacheStatistics;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerInfoUpdated(thePlayerUpdatedInfo);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onAudioVolumeIndication(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onAudioVolumeIndication(volume);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerSourceStateChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,agora_media_base__MEDIA_PLAYER_STATE__C state,agora_media_base__MEDIA_PLAYER_ERROR__C ec) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerSourceStateChanged(state,ec);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPositionChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int64_t position_ms) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPositionChanged(position_ms);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerEvent(agora_rtc__IMediaPlayerSourceObserver__Handle handle,agora_media_base__MEDIA_PLAYER_EVENT__C eventCode,int64_t elapsedTime,const char* message) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerEvent(eventCode,elapsedTime,message);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onMetaData(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const void* data,int length) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onMetaData(data,length);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayBufferUpdated(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int64_t playCachedBuffer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayBufferUpdated(playCachedBuffer);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPreloadEvent(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const char* src,agora_media_base__PLAYER_PRELOAD_EVENT__C event) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPreloadEvent(src,event);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onCompleted(agora_rtc__IMediaPlayerSourceObserver__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onCompleted();
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onAgoraCDNTokenWillExpire(agora_rtc__IMediaPlayerSourceObserver__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onAgoraCDNTokenWillExpire();
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerSrcInfoChanged(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const agora_media_base__SrcInfo__C& from,const agora_media_base__SrcInfo__C& to) {
        agora::media::base::base::SrcInfo theSrcInfo;
theSrcInfo.bitrateInKbps = from.bitrateInKbps;
theSrcInfo.name = from.name;
agora::media::base::base::SrcInfo theSrcInfo;
theSrcInfo.bitrateInKbps = to.bitrateInKbps;
theSrcInfo.name = to.name;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerSrcInfoChanged(theSrcInfo,theSrcInfo);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onPlayerInfoUpdated(agora_rtc__IMediaPlayerSourceObserver__Handle handle,const agora_media_base__PlayerUpdatedInfo__C& info) {
        agora::media::base::base::CacheStatistics theCacheStatistics;
theCacheStatistics.fileSize = info.cacheStatistics.fileSize;
theCacheStatistics.cacheSize = info.cacheStatistics.cacheSize;
theCacheStatistics.downloadSize = info.cacheStatistics.downloadSize;
agora::media::base::base::PlayerUpdatedInfo thePlayerUpdatedInfo;
thePlayerUpdatedInfo.playerId = info.playerId;
thePlayerUpdatedInfo.deviceId = info.deviceId;
thePlayerUpdatedInfo.cacheStatistics = theCacheStatistics;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onPlayerInfoUpdated(thePlayerUpdatedInfo);
      }
      
void agora_rtc__IMediaPlayerSourceObserver__onAudioVolumeIndication(agora_rtc__IMediaPlayerSourceObserver__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSourceObserver *>(handle)->onAudioVolumeIndication(volume);
      }
      
int agora_rtc__IMediaPlayer__initialize(agora_rtc__IMediaPlayer__Handle handle,base__IAgoraService__Handle agora_service) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->initialize(agora_service);
      }
      
int agora_rtc__IMediaPlayer__getMediaPlayerId(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getMediaPlayerId();
      }
      
int agora_rtc__IMediaPlayer__open(agora_rtc__IMediaPlayer__Handle handle,const char* url,int64_t startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->open(url,startPos);
      }
      
int agora_rtc__IMediaPlayer__openWithCustomSource(agora_rtc__IMediaPlayer__Handle handle,int64_t startPos,agora_media_base__IMediaPlayerCustomDataProvider__Handle* provider) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->openWithCustomSource(startPos,provider);
      }
      
int agora_rtc__IMediaPlayer__openWithMediaSource(agora_rtc__IMediaPlayer__Handle handle,const agora_media_base__MediaSource__C& source) {
        agora::media::base::base::MediaSource theMediaSource;
theMediaSource.url = source.url;
theMediaSource.uri = source.uri;
theMediaSource.startPos = source.startPos;
theMediaSource.autoPlay = source.autoPlay;
theMediaSource.enableCache = source.enableCache;
theMediaSource.isAgoraSource = source.isAgoraSource;
theMediaSource.isLiveSource = source.isLiveSource;
theMediaSource.provider = source.provider;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->openWithMediaSource(theMediaSource);
      }
      
int agora_rtc__IMediaPlayer__play(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->play();
      }
      
int agora_rtc__IMediaPlayer__pause(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->pause();
      }
      
int agora_rtc__IMediaPlayer__stop(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->stop();
      }
      
int agora_rtc__IMediaPlayer__resume(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->resume();
      }
      
int agora_rtc__IMediaPlayer__seek(agora_rtc__IMediaPlayer__Handle handle,int64_t newPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->seek(newPos);
      }
      
int agora_rtc__IMediaPlayer__setAudioPitch(agora_rtc__IMediaPlayer__Handle handle,int pitch) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setAudioPitch(pitch);
      }
      
int agora_rtc__IMediaPlayer__getDuration(agora_rtc__IMediaPlayer__Handle handle,int64_t& duration) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getDuration(duration);
      }
      
int agora_rtc__IMediaPlayer__getPlayPosition(agora_rtc__IMediaPlayer__Handle handle,int64_t& pos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getPlayPosition(pos);
      }
      
int agora_rtc__IMediaPlayer__getStreamCount(agora_rtc__IMediaPlayer__Handle handle,int64_t& count) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getStreamCount(count);
      }
      
int agora_rtc__IMediaPlayer__getStreamInfo(agora_rtc__IMediaPlayer__Handle handle,int64_t index,agora_media_base__PlayerStreamInfo__C* info) {
        agora::media::base::base::PlayerStreamInfo thePlayerStreamInfo;
thePlayerStreamInfo.streamIndex = info.streamIndex;
thePlayerStreamInfo.streamType = info.streamType;
thePlayerStreamInfo.codecName = info.codecName;
thePlayerStreamInfo.language = info.language;
thePlayerStreamInfo.videoFrameRate = info.videoFrameRate;
thePlayerStreamInfo.videoBitRate = info.videoBitRate;
thePlayerStreamInfo.videoWidth = info.videoWidth;
thePlayerStreamInfo.videoHeight = info.videoHeight;
thePlayerStreamInfo.videoRotation = info.videoRotation;
thePlayerStreamInfo.audioSampleRate = info.audioSampleRate;
thePlayerStreamInfo.audioChannels = info.audioChannels;
thePlayerStreamInfo.audioBitsPerSample = info.audioBitsPerSample;
thePlayerStreamInfo.duration = info.duration;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getStreamInfo(index,thePlayerStreamInfo);
      }
      
int agora_rtc__IMediaPlayer__setLoopCount(agora_rtc__IMediaPlayer__Handle handle,int loopCount) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setLoopCount(loopCount);
      }
      
int agora_rtc__IMediaPlayer__setPlaybackSpeed(agora_rtc__IMediaPlayer__Handle handle,int speed) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setPlaybackSpeed(speed);
      }
      
int agora_rtc__IMediaPlayer__selectAudioTrack(agora_rtc__IMediaPlayer__Handle handle,int index) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->selectAudioTrack(index);
      }
      
int agora_rtc__IMediaPlayer__setPlayerOption(agora_rtc__IMediaPlayer__Handle handle,const char* key,int value) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setPlayerOption(key,value);
      }
      
int agora_rtc__IMediaPlayer__setPlayerOption(agora_rtc__IMediaPlayer__Handle handle,const char* key,const char* value) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setPlayerOption(key,value);
      }
      
int agora_rtc__IMediaPlayer__takeScreenshot(agora_rtc__IMediaPlayer__Handle handle,const char* filename) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->takeScreenshot(filename);
      }
      
int agora_rtc__IMediaPlayer__selectInternalSubtitle(agora_rtc__IMediaPlayer__Handle handle,int index) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->selectInternalSubtitle(index);
      }
      
int agora_rtc__IMediaPlayer__setExternalSubtitle(agora_rtc__IMediaPlayer__Handle handle,const char* url) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setExternalSubtitle(url);
      }
      
agora_media_base__MEDIA_PLAYER_STATE__C agora_rtc__IMediaPlayer__getState(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getState();
      }
      
int agora_rtc__IMediaPlayer__mute(agora_rtc__IMediaPlayer__Handle handle,bool muted) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->mute(muted);
      }
      
int agora_rtc__IMediaPlayer__getMute(agora_rtc__IMediaPlayer__Handle handle,bool& muted) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getMute(muted);
      }
      
int agora_rtc__IMediaPlayer__adjustPlayoutVolume(agora_rtc__IMediaPlayer__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->adjustPlayoutVolume(volume);
      }
      
int agora_rtc__IMediaPlayer__getPlayoutVolume(agora_rtc__IMediaPlayer__Handle handle,int& volume) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getPlayoutVolume(volume);
      }
      
int agora_rtc__IMediaPlayer__adjustPublishSignalVolume(agora_rtc__IMediaPlayer__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->adjustPublishSignalVolume(volume);
      }
      
int agora_rtc__IMediaPlayer__getPublishSignalVolume(agora_rtc__IMediaPlayer__Handle handle,int& volume) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getPublishSignalVolume(volume);
      }
      
int agora_rtc__IMediaPlayer__setView(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__view_t__C view) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setView(view);
      }
      
int agora_rtc__IMediaPlayer__setRenderMode(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__RENDER_MODE_TYPE__C renderMode) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setRenderMode(renderMode);
      }
      
int agora_rtc__IMediaPlayer__registerPlayerSourceObserver(agora_rtc__IMediaPlayer__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->registerPlayerSourceObserver(observer);
      }
      
int agora_rtc__IMediaPlayer__unregisterPlayerSourceObserver(agora_rtc__IMediaPlayer__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->unregisterPlayerSourceObserver(observer);
      }
      
int agora_rtc__IMediaPlayer__registerAudioFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->registerAudioFrameObserver(observer);
      }
      
int agora_rtc__IMediaPlayer__registerAudioFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->registerAudioFrameObserver(observer,mode);
      }
      
int agora_rtc__IMediaPlayer__unregisterAudioFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->unregisterAudioFrameObserver(observer);
      }
      
int agora_rtc__IMediaPlayer__registerVideoFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__IVideoFrameObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->registerVideoFrameObserver(observer);
      }
      
int agora_rtc__IMediaPlayer__unregisterVideoFrameObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__IVideoFrameObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->unregisterVideoFrameObserver(observer);
      }
      
int agora_rtc__IMediaPlayer__registerMediaPlayerAudioSpectrumObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer,int intervalInMS) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->registerMediaPlayerAudioSpectrumObserver(observer,intervalInMS);
      }
      
int agora_rtc__IMediaPlayer__unregisterMediaPlayerAudioSpectrumObserver(agora_rtc__IMediaPlayer__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->unregisterMediaPlayerAudioSpectrumObserver(observer);
      }
      
int agora_rtc__IMediaPlayer__setAudioDualMonoMode(agora_rtc__IMediaPlayer__Handle handle,agora_media_base__AUDIO_DUAL_MONO_MODE__C mode) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setAudioDualMonoMode(mode);
      }
      
const char* agora_rtc__IMediaPlayer__getPlayerSdkVersion(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getPlayerSdkVersion();
      }
      
const char* agora_rtc__IMediaPlayer__getPlaySrc(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getPlaySrc();
      }
      
int agora_rtc__IMediaPlayer__openWithAgoraCDNSrc(agora_rtc__IMediaPlayer__Handle handle,const char* src,int64_t startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->openWithAgoraCDNSrc(src,startPos);
      }
      
int agora_rtc__IMediaPlayer__getAgoraCDNLineCount(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getAgoraCDNLineCount();
      }
      
int agora_rtc__IMediaPlayer__switchAgoraCDNLineByIndex(agora_rtc__IMediaPlayer__Handle handle,int index) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->switchAgoraCDNLineByIndex(index);
      }
      
int agora_rtc__IMediaPlayer__getCurrentAgoraCDNIndex(agora_rtc__IMediaPlayer__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->getCurrentAgoraCDNIndex();
      }
      
int agora_rtc__IMediaPlayer__enableAutoSwitchAgoraCDN(agora_rtc__IMediaPlayer__Handle handle,bool enable) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->enableAutoSwitchAgoraCDN(enable);
      }
      
int agora_rtc__IMediaPlayer__renewAgoraCDNSrcToken(agora_rtc__IMediaPlayer__Handle handle,const char* token,int64_t ts) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->renewAgoraCDNSrcToken(token,ts);
      }
      
int agora_rtc__IMediaPlayer__switchAgoraCDNSrc(agora_rtc__IMediaPlayer__Handle handle,const char* src,bool syncPts) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->switchAgoraCDNSrc(src,syncPts);
      }
      
int agora_rtc__IMediaPlayer__switchSrc(agora_rtc__IMediaPlayer__Handle handle,const char* src,bool syncPts) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->switchSrc(src,syncPts);
      }
      
int agora_rtc__IMediaPlayer__preloadSrc(agora_rtc__IMediaPlayer__Handle handle,const char* src,int64_t startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->preloadSrc(src,startPos);
      }
      
int agora_rtc__IMediaPlayer__playPreloadedSrc(agora_rtc__IMediaPlayer__Handle handle,const char* src) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->playPreloadedSrc(src);
      }
      
int agora_rtc__IMediaPlayer__unloadSrc(agora_rtc__IMediaPlayer__Handle handle,const char* src) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->unloadSrc(src);
      }
      
int agora_rtc__IMediaPlayer__setSpatialAudioParams(agora_rtc__IMediaPlayer__Handle handle,const agora__SpatialAudioParams__C& params) {
        agora::agora::SpatialAudioParams theSpatialAudioParams;
theSpatialAudioParams.speaker_azimuth = params.speaker_azimuth;
theSpatialAudioParams.speaker_elevation = params.speaker_elevation;
theSpatialAudioParams.speaker_distance = params.speaker_distance;
theSpatialAudioParams.speaker_orientation = params.speaker_orientation;
theSpatialAudioParams.enable_blur = params.enable_blur;
theSpatialAudioParams.enable_air_absorb = params.enable_air_absorb;
theSpatialAudioParams.speaker_attenuation = params.speaker_attenuation;
theSpatialAudioParams.enable_doppler = params.enable_doppler;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setSpatialAudioParams(theSpatialAudioParams);
      }
      
int agora_rtc__IMediaPlayer__setSoundPositionParams(agora_rtc__IMediaPlayer__Handle handle,float pan,float gain) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayer *>(handle)->setSoundPositionParams(pan,gain);
      }
      
int agora_rtc__IMediaPlayerCacheManager__removeAllCaches(agora_rtc__IMediaPlayerCacheManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->removeAllCaches();
      }
      
int agora_rtc__IMediaPlayerCacheManager__removeOldCache(agora_rtc__IMediaPlayerCacheManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->removeOldCache();
      }
      
int agora_rtc__IMediaPlayerCacheManager__removeCacheByUri(agora_rtc__IMediaPlayerCacheManager__Handle handle,const char* uri) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->removeCacheByUri(uri);
      }
      
int agora_rtc__IMediaPlayerCacheManager__setCacheDir(agora_rtc__IMediaPlayerCacheManager__Handle handle,const char* path) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->setCacheDir(path);
      }
      
int agora_rtc__IMediaPlayerCacheManager__setMaxCacheFileCount(agora_rtc__IMediaPlayerCacheManager__Handle handle,int count) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->setMaxCacheFileCount(count);
      }
      
int agora_rtc__IMediaPlayerCacheManager__setMaxCacheFileSize(agora_rtc__IMediaPlayerCacheManager__Handle handle,int64_t cacheSize) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->setMaxCacheFileSize(cacheSize);
      }
      
int agora_rtc__IMediaPlayerCacheManager__enableAutoRemoveCache(agora_rtc__IMediaPlayerCacheManager__Handle handle,bool enable) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->enableAutoRemoveCache(enable);
      }
      
int agora_rtc__IMediaPlayerCacheManager__getCacheDir(agora_rtc__IMediaPlayerCacheManager__Handle handle,char* path,int length) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->getCacheDir(path,length);
      }
      
int agora_rtc__IMediaPlayerCacheManager__getMaxCacheFileCount(agora_rtc__IMediaPlayerCacheManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->getMaxCacheFileCount();
      }
      
int64_t agora_rtc__IMediaPlayerCacheManager__getMaxCacheFileSize(agora_rtc__IMediaPlayerCacheManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->getMaxCacheFileSize();
      }
      
int agora_rtc__IMediaPlayerCacheManager__getCacheFileCount(agora_rtc__IMediaPlayerCacheManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerCacheManager *>(handle)->getCacheFileCount();
      }
      
int agora_rtc__IMediaPlayerSource__getSourceId(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getSourceId();
      }
      
int agora_rtc__IMediaPlayerSource__open(agora_rtc__IMediaPlayerSource__Handle handle,const char* url,int64_t startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->open(url,startPos);
      }
      
int agora_rtc__IMediaPlayerSource__openWithCustomSource(agora_rtc__IMediaPlayerSource__Handle handle,int64_t startPos,agora_media_base__IMediaPlayerCustomDataProvider__Handle* provider) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->openWithCustomSource(startPos,provider);
      }
      
int agora_rtc__IMediaPlayerSource__openWithMediaSource(agora_rtc__IMediaPlayerSource__Handle handle,const agora_media_base__MediaSource__C& source) {
        agora::media::base::base::MediaSource theMediaSource;
theMediaSource.url = source.url;
theMediaSource.uri = source.uri;
theMediaSource.startPos = source.startPos;
theMediaSource.autoPlay = source.autoPlay;
theMediaSource.enableCache = source.enableCache;
theMediaSource.isAgoraSource = source.isAgoraSource;
theMediaSource.isLiveSource = source.isLiveSource;
theMediaSource.provider = source.provider;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->openWithMediaSource(theMediaSource);
      }
      
int agora_rtc__IMediaPlayerSource__play(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->play();
      }
      
int agora_rtc__IMediaPlayerSource__pause(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->pause();
      }
      
int agora_rtc__IMediaPlayerSource__stop(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->stop();
      }
      
int agora_rtc__IMediaPlayerSource__resume(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->resume();
      }
      
int agora_rtc__IMediaPlayerSource__seek(agora_rtc__IMediaPlayerSource__Handle handle,int64_t newPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->seek(newPos);
      }
      
int agora_rtc__IMediaPlayerSource__getDuration(agora_rtc__IMediaPlayerSource__Handle handle,int64_t& duration) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getDuration(duration);
      }
      
int agora_rtc__IMediaPlayerSource__getPlayPosition(agora_rtc__IMediaPlayerSource__Handle handle,int64_t& pos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getPlayPosition(pos);
      }
      
int agora_rtc__IMediaPlayerSource__getStreamCount(agora_rtc__IMediaPlayerSource__Handle handle,int64_t& count) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getStreamCount(count);
      }
      
int agora_rtc__IMediaPlayerSource__getStreamInfo(agora_rtc__IMediaPlayerSource__Handle handle,int64_t index,agora_media_base__PlayerStreamInfo__C* info) {
        agora::media::base::base::PlayerStreamInfo thePlayerStreamInfo;
thePlayerStreamInfo.streamIndex = info.streamIndex;
thePlayerStreamInfo.streamType = info.streamType;
thePlayerStreamInfo.codecName = info.codecName;
thePlayerStreamInfo.language = info.language;
thePlayerStreamInfo.videoFrameRate = info.videoFrameRate;
thePlayerStreamInfo.videoBitRate = info.videoBitRate;
thePlayerStreamInfo.videoWidth = info.videoWidth;
thePlayerStreamInfo.videoHeight = info.videoHeight;
thePlayerStreamInfo.videoRotation = info.videoRotation;
thePlayerStreamInfo.audioSampleRate = info.audioSampleRate;
thePlayerStreamInfo.audioChannels = info.audioChannels;
thePlayerStreamInfo.audioBitsPerSample = info.audioBitsPerSample;
thePlayerStreamInfo.duration = info.duration;
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getStreamInfo(index,thePlayerStreamInfo);
      }
      
int agora_rtc__IMediaPlayerSource__setLoopCount(agora_rtc__IMediaPlayerSource__Handle handle,int64_t loopCount) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->setLoopCount(loopCount);
      }
      
int agora_rtc__IMediaPlayerSource__setPlaybackSpeed(agora_rtc__IMediaPlayerSource__Handle handle,int speed) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->setPlaybackSpeed(speed);
      }
      
int agora_rtc__IMediaPlayerSource__selectAudioTrack(agora_rtc__IMediaPlayerSource__Handle handle,int64_t index) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->selectAudioTrack(index);
      }
      
int agora_rtc__IMediaPlayerSource__setPlayerOption(agora_rtc__IMediaPlayerSource__Handle handle,const char* key,int64_t value) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->setPlayerOption(key,value);
      }
      
int agora_rtc__IMediaPlayerSource__setPlayerOption(agora_rtc__IMediaPlayerSource__Handle handle,const char* key,const char* value) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->setPlayerOption(key,value);
      }
      
int agora_rtc__IMediaPlayerSource__takeScreenshot(agora_rtc__IMediaPlayerSource__Handle handle,const char* filename) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->takeScreenshot(filename);
      }
      
int agora_rtc__IMediaPlayerSource__selectInternalSubtitle(agora_rtc__IMediaPlayerSource__Handle handle,int64_t index) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->selectInternalSubtitle(index);
      }
      
int agora_rtc__IMediaPlayerSource__setExternalSubtitle(agora_rtc__IMediaPlayerSource__Handle handle,const char* url) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->setExternalSubtitle(url);
      }
      
agora_media_base__MEDIA_PLAYER_STATE__C agora_rtc__IMediaPlayerSource__getState(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getState();
      }
      
int agora_rtc__IMediaPlayerSource__registerPlayerSourceObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->registerPlayerSourceObserver(observer);
      }
      
int agora_rtc__IMediaPlayerSource__unregisterPlayerSourceObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_rtc__IMediaPlayerSourceObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->unregisterPlayerSourceObserver(observer);
      }
      
int agora_rtc__IMediaPlayerSource__registerAudioFrameObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->registerAudioFrameObserver(observer);
      }
      
int agora_rtc__IMediaPlayerSource__unregisterAudioFrameObserver(agora_rtc__IMediaPlayerSource__Handle handle,agora_media__IAudioPcmFrameSink__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->unregisterAudioFrameObserver(observer);
      }
      
int agora_rtc__IMediaPlayerSource__openWithAgoraCDNSrc(agora_rtc__IMediaPlayerSource__Handle handle,const char* src,int64_t startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->openWithAgoraCDNSrc(src,startPos);
      }
      
int agora_rtc__IMediaPlayerSource__getAgoraCDNLineCount(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getAgoraCDNLineCount();
      }
      
int agora_rtc__IMediaPlayerSource__switchAgoraCDNLineByIndex(agora_rtc__IMediaPlayerSource__Handle handle,int index) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->switchAgoraCDNLineByIndex(index);
      }
      
int agora_rtc__IMediaPlayerSource__getCurrentAgoraCDNIndex(agora_rtc__IMediaPlayerSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->getCurrentAgoraCDNIndex();
      }
      
int agora_rtc__IMediaPlayerSource__enableAutoSwitchAgoraCDN(agora_rtc__IMediaPlayerSource__Handle handle,bool enable) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->enableAutoSwitchAgoraCDN(enable);
      }
      
int agora_rtc__IMediaPlayerSource__renewAgoraCDNSrcToken(agora_rtc__IMediaPlayerSource__Handle handle,const char* token,int64_t ts) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->renewAgoraCDNSrcToken(token,ts);
      }
      
int agora_rtc__IMediaPlayerSource__switchAgoraCDNSrc(agora_rtc__IMediaPlayerSource__Handle handle,const char* src,bool syncPts) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->switchAgoraCDNSrc(src,syncPts);
      }
      
int agora_rtc__IMediaPlayerSource__switchSrc(agora_rtc__IMediaPlayerSource__Handle handle,const char* src,bool syncPts) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->switchSrc(src,syncPts);
      }
      
int agora_rtc__IMediaPlayerSource__preloadSrc(agora_rtc__IMediaPlayerSource__Handle handle,const char* src,int64_t startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->preloadSrc(src,startPos);
      }
      
int agora_rtc__IMediaPlayerSource__unloadSrc(agora_rtc__IMediaPlayerSource__Handle handle,const char* src) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->unloadSrc(src);
      }
      
int agora_rtc__IMediaPlayerSource__playPreloadedSrc(agora_rtc__IMediaPlayerSource__Handle handle,const char* src) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaPlayerSource *>(handle)->playPreloadedSrc(src);
      }
      
int agora_rtc__IMediaRecorder__setMediaRecorderObserver(agora_rtc__IMediaRecorder__Handle handle,agora_media__IMediaRecorderObserver__Handle* callback) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaRecorder *>(handle)->setMediaRecorderObserver(callback);
      }
      
int agora_rtc__IMediaRecorder__startRecording(agora_rtc__IMediaRecorder__Handle handle,const agora_media__MediaRecorderConfiguration__C& config) {
        agora::media::media::MediaRecorderConfiguration theMediaRecorderConfiguration;
theMediaRecorderConfiguration.storagePath = config.storagePath;
theMediaRecorderConfiguration.containerFormat = config.containerFormat;
theMediaRecorderConfiguration.streamType = config.streamType;
theMediaRecorderConfiguration.maxDurationMs = config.maxDurationMs;
theMediaRecorderConfiguration.recorderInfoUpdateInterval = config.recorderInfoUpdateInterval;
        reinterpret_cast<agora::rtc::rtc::IMediaRecorder *>(handle)->startRecording(theMediaRecorderConfiguration);
      }
      
int agora_rtc__IMediaRecorder__stopRecording(agora_rtc__IMediaRecorder__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaRecorder *>(handle)->stopRecording();
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onStateChanged(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_STATE__C state,agora_rtc__STREAMING_SRC_ERR__C err_code) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onStateChanged(state,err_code);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onOpenDone(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_ERR__C err_code) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onOpenDone(err_code);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onSeekDone(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_ERR__C err_code) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onSeekDone(err_code);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onEofOnce(agora_rtc__IMediaStreamingSourceObserver__Handle handle,int64_t progress_ms,int64_t repeat_count) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onEofOnce(progress_ms,repeat_count);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onProgress(agora_rtc__IMediaStreamingSourceObserver__Handle handle,int64_t position_ms) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onProgress(position_ms);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onMetaData(agora_rtc__IMediaStreamingSourceObserver__Handle handle,const void* data,int length) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onMetaData(data,length);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onStateChanged(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_STATE__C state,agora_rtc__STREAMING_SRC_ERR__C err_code) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onStateChanged(state,err_code);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onOpenDone(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_ERR__C err_code) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onOpenDone(err_code);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onSeekDone(agora_rtc__IMediaStreamingSourceObserver__Handle handle,agora_rtc__STREAMING_SRC_ERR__C err_code) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onSeekDone(err_code);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onEofOnce(agora_rtc__IMediaStreamingSourceObserver__Handle handle,int64_t progress_ms,int64_t repeat_count) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onEofOnce(progress_ms,repeat_count);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onProgress(agora_rtc__IMediaStreamingSourceObserver__Handle handle,int64_t position_ms) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onProgress(position_ms);
      }
      
void agora_rtc__IMediaStreamingSourceObserver__onMetaData(agora_rtc__IMediaStreamingSourceObserver__Handle handle,const void* data,int length) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSourceObserver *>(handle)->onMetaData(data,length);
      }
      
int agora_rtc__IMediaStreamingSource__open(agora_rtc__IMediaStreamingSource__Handle handle,const char* url,int64_t start_pos,bool auto_play) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->open(url,start_pos,auto_play);
      }
      
int agora_rtc__IMediaStreamingSource__close(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->close();
      }
      
int agora_rtc__IMediaStreamingSource__getSourceId(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->getSourceId();
      }
      
bool agora_rtc__IMediaStreamingSource__isVideoValid(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->isVideoValid();
      }
      
bool agora_rtc__IMediaStreamingSource__isAudioValid(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->isAudioValid();
      }
      
int agora_rtc__IMediaStreamingSource__getDuration(agora_rtc__IMediaStreamingSource__Handle handle,int64_t& duration) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->getDuration(duration);
      }
      
int agora_rtc__IMediaStreamingSource__getStreamCount(agora_rtc__IMediaStreamingSource__Handle handle,int64_t& count) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->getStreamCount(count);
      }
      
int agora_rtc__IMediaStreamingSource__getStreamInfo(agora_rtc__IMediaStreamingSource__Handle handle,int64_t index,agora_media_base__PlayerStreamInfo__C* out_info) {
        agora::media::base::base::PlayerStreamInfo thePlayerStreamInfo;
thePlayerStreamInfo.streamIndex = out_info.streamIndex;
thePlayerStreamInfo.streamType = out_info.streamType;
thePlayerStreamInfo.codecName = out_info.codecName;
thePlayerStreamInfo.language = out_info.language;
thePlayerStreamInfo.videoFrameRate = out_info.videoFrameRate;
thePlayerStreamInfo.videoBitRate = out_info.videoBitRate;
thePlayerStreamInfo.videoWidth = out_info.videoWidth;
thePlayerStreamInfo.videoHeight = out_info.videoHeight;
thePlayerStreamInfo.videoRotation = out_info.videoRotation;
thePlayerStreamInfo.audioSampleRate = out_info.audioSampleRate;
thePlayerStreamInfo.audioChannels = out_info.audioChannels;
thePlayerStreamInfo.audioBitsPerSample = out_info.audioBitsPerSample;
thePlayerStreamInfo.duration = out_info.duration;
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->getStreamInfo(index,thePlayerStreamInfo);
      }
      
int agora_rtc__IMediaStreamingSource__setLoopCount(agora_rtc__IMediaStreamingSource__Handle handle,int64_t loop_count) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->setLoopCount(loop_count);
      }
      
int agora_rtc__IMediaStreamingSource__play(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->play();
      }
      
int agora_rtc__IMediaStreamingSource__pause(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->pause();
      }
      
int agora_rtc__IMediaStreamingSource__stop(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->stop();
      }
      
int agora_rtc__IMediaStreamingSource__seek(agora_rtc__IMediaStreamingSource__Handle handle,int64_t new_pos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->seek(new_pos);
      }
      
int agora_rtc__IMediaStreamingSource__getCurrPosition(agora_rtc__IMediaStreamingSource__Handle handle,int64_t& pos) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->getCurrPosition(pos);
      }
      
agora_rtc__STREAMING_SRC_STATE__C agora_rtc__IMediaStreamingSource__getCurrState(agora_rtc__IMediaStreamingSource__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->getCurrState();
      }
      
int agora_rtc__IMediaStreamingSource__appendSeiData(agora_rtc__IMediaStreamingSource__Handle handle,const agora_rtc__InputSeiData__C& inSeiData) {
        agora::rtc::rtc::InputSeiData theInputSeiData;
theInputSeiData.type = inSeiData.type;
theInputSeiData.timestamp = inSeiData.timestamp;
theInputSeiData.frame_index = inSeiData.frame_index;
theInputSeiData.private_data = inSeiData.private_data;
theInputSeiData.data_size = inSeiData.data_size;
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->appendSeiData(theInputSeiData);
      }
      
int agora_rtc__IMediaStreamingSource__registerObserver(agora_rtc__IMediaStreamingSource__Handle handle,agora_rtc__IMediaStreamingSourceObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->registerObserver(observer);
      }
      
int agora_rtc__IMediaStreamingSource__unregisterObserver(agora_rtc__IMediaStreamingSource__Handle handle,agora_rtc__IMediaStreamingSourceObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->unregisterObserver(observer);
      }
      
int agora_rtc__IMediaStreamingSource__parseMediaInfo(agora_rtc__IMediaStreamingSource__Handle handle,const char* url,agora_media_base__PlayerStreamInfo__C& video_info,agora_media_base__PlayerStreamInfo__C& audio_info) {
        agora::media::base::base::PlayerStreamInfo thePlayerStreamInfo;
thePlayerStreamInfo.streamIndex = video_info.streamIndex;
thePlayerStreamInfo.streamType = video_info.streamType;
thePlayerStreamInfo.codecName = video_info.codecName;
thePlayerStreamInfo.language = video_info.language;
thePlayerStreamInfo.videoFrameRate = video_info.videoFrameRate;
thePlayerStreamInfo.videoBitRate = video_info.videoBitRate;
thePlayerStreamInfo.videoWidth = video_info.videoWidth;
thePlayerStreamInfo.videoHeight = video_info.videoHeight;
thePlayerStreamInfo.videoRotation = video_info.videoRotation;
thePlayerStreamInfo.audioSampleRate = video_info.audioSampleRate;
thePlayerStreamInfo.audioChannels = video_info.audioChannels;
thePlayerStreamInfo.audioBitsPerSample = video_info.audioBitsPerSample;
thePlayerStreamInfo.duration = video_info.duration;
agora::media::base::base::PlayerStreamInfo thePlayerStreamInfo;
thePlayerStreamInfo.streamIndex = audio_info.streamIndex;
thePlayerStreamInfo.streamType = audio_info.streamType;
thePlayerStreamInfo.codecName = audio_info.codecName;
thePlayerStreamInfo.language = audio_info.language;
thePlayerStreamInfo.videoFrameRate = audio_info.videoFrameRate;
thePlayerStreamInfo.videoBitRate = audio_info.videoBitRate;
thePlayerStreamInfo.videoWidth = audio_info.videoWidth;
thePlayerStreamInfo.videoHeight = audio_info.videoHeight;
thePlayerStreamInfo.videoRotation = audio_info.videoRotation;
thePlayerStreamInfo.audioSampleRate = audio_info.audioSampleRate;
thePlayerStreamInfo.audioChannels = audio_info.audioChannels;
thePlayerStreamInfo.audioBitsPerSample = audio_info.audioBitsPerSample;
thePlayerStreamInfo.duration = audio_info.duration;
        reinterpret_cast<agora::rtc::rtc::IMediaStreamingSource *>(handle)->parseMediaInfo(url,thePlayerStreamInfo,thePlayerStreamInfo);
      }
      
int agora_rtc__MusicChartCollection__getCount(agora_rtc__MusicChartCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::MusicChartCollection *>(handle)->getCount();
      }
      
agora_rtc__MusicChartInfo__C* agora_rtc__MusicChartCollection__get(agora_rtc__MusicChartCollection__Handle handle,int index) {
        
        reinterpret_cast<agora::rtc::rtc::MusicChartCollection *>(handle)->get(index);
      }
      
int agora_rtc__MusicCollection__getCount(agora_rtc__MusicCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::MusicCollection *>(handle)->getCount();
      }
      
int agora_rtc__MusicCollection__getTotal(agora_rtc__MusicCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::MusicCollection *>(handle)->getTotal();
      }
      
int agora_rtc__MusicCollection__getPage(agora_rtc__MusicCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::MusicCollection *>(handle)->getPage();
      }
      
int agora_rtc__MusicCollection__getPageSize(agora_rtc__MusicCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::MusicCollection *>(handle)->getPageSize();
      }
      
agora_rtc__Music__C* agora_rtc__MusicCollection__getMusic(agora_rtc__MusicCollection__Handle handle,int32_t index) {
        
        reinterpret_cast<agora::rtc::rtc::MusicCollection *>(handle)->getMusic(index);
      }
      
void agora_rtc__IMusicContentCenterEventHandler__onMusicChartsResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,agora_rtc__MusicChartCollection__Handle result,agora_rtc__MusicContentCenterStatusCode__C errorCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenterEventHandler *>(handle)->onMusicChartsResult(requestId,result,errorCode);
      }
      
void agora_rtc__IMusicContentCenterEventHandler__onMusicCollectionResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,agora_rtc__MusicCollection__Handle result,agora_rtc__MusicContentCenterStatusCode__C errorCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenterEventHandler *>(handle)->onMusicCollectionResult(requestId,result,errorCode);
      }
      
void agora_rtc__IMusicContentCenterEventHandler__onLyricResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,int64_t songCode,const char* lyricUrl,agora_rtc__MusicContentCenterStatusCode__C errorCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenterEventHandler *>(handle)->onLyricResult(requestId,songCode,lyricUrl,errorCode);
      }
      
void agora_rtc__IMusicContentCenterEventHandler__onSongSimpleInfoResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,int64_t songCode,const char* simpleInfo,agora_rtc__MusicContentCenterStatusCode__C errorCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenterEventHandler *>(handle)->onSongSimpleInfoResult(requestId,songCode,simpleInfo,errorCode);
      }
      
void agora_rtc__IMusicContentCenterEventHandler__onPreLoadEvent(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,int64_t songCode,int percent,const char* lyricUrl,agora_rtc__PreloadStatusCode__C status,agora_rtc__MusicContentCenterStatusCode__C errorCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenterEventHandler *>(handle)->onPreLoadEvent(requestId,songCode,percent,lyricUrl,status,errorCode);
      }
      
int agora_rtc__IMusicPlayer__open(agora_rtc__IMusicPlayer__Handle handle,int64_t songCode,int64_t startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicPlayer *>(handle)->open(songCode,startPos);
      }
      
int agora_rtc__IMusicContentCenter__initialize(agora_rtc__IMusicContentCenter__Handle handle,const agora_rtc__MusicContentCenterConfiguration__C& configuration) {
        agora::rtc::rtc::MusicContentCenterConfiguration theMusicContentCenterConfiguration;
theMusicContentCenterConfiguration.appId = configuration.appId;
theMusicContentCenterConfiguration.token = configuration.token;
theMusicContentCenterConfiguration.mccUid = configuration.mccUid;
theMusicContentCenterConfiguration.maxCacheSize = configuration.maxCacheSize;
theMusicContentCenterConfiguration.mccDomain = configuration.mccDomain;
theMusicContentCenterConfiguration.eventHandler = configuration.eventHandler;
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->initialize(theMusicContentCenterConfiguration);
      }
      
int agora_rtc__IMusicContentCenter__renewToken(agora_rtc__IMusicContentCenter__Handle handle,const char* token) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->renewToken(token);
      }
      
void agora_rtc__IMusicContentCenter__release(agora_rtc__IMusicContentCenter__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->release();
      }
      
int agora_rtc__IMusicContentCenter__registerEventHandler(agora_rtc__IMusicContentCenter__Handle handle,agora_rtc__IMusicContentCenterEventHandler__Handle* eventHandler) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->registerEventHandler(eventHandler);
      }
      
int agora_rtc__IMusicContentCenter__unregisterEventHandler(agora_rtc__IMusicContentCenter__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->unregisterEventHandler();
      }
      
agora_rtc__IMusicPlayer__Handle agora_rtc__IMusicContentCenter__createMusicPlayer(agora_rtc__IMusicContentCenter__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->createMusicPlayer();
      }
      
int agora_rtc__IMusicContentCenter__getMusicCharts(agora_rtc__IMusicContentCenter__Handle handle,char * requestId) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->getMusicCharts(requestId);
      }
      
int agora_rtc__IMusicContentCenter__getMusicCollectionByMusicChartId(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int32_t musicChartId,int32_t page,int32_t pageSize,const char* jsonOption) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->getMusicCollectionByMusicChartId(requestId,musicChartId,page,pageSize,jsonOption);
      }
      
int agora_rtc__IMusicContentCenter__searchMusic(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,const char* keyWord,int32_t page,int32_t pageSize,const char* jsonOption) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->searchMusic(requestId,keyWord,page,pageSize,jsonOption);
      }
      
int agora_rtc__IMusicContentCenter__preload(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode,const char* jsonOption) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->preload(songCode,jsonOption);
      }
      
int agora_rtc__IMusicContentCenter__preload(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int64_t songCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->preload(requestId,songCode);
      }
      
int agora_rtc__IMusicContentCenter__removeCache(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->removeCache(songCode);
      }
      
int agora_rtc__IMusicContentCenter__getCaches(agora_rtc__IMusicContentCenter__Handle handle,agora_rtc__MusicCacheInfo__C* cacheInfo,int32_t* cacheInfoSize) {
        agora::rtc::rtc::MusicCacheInfo theMusicCacheInfo;
theMusicCacheInfo.songCode = cacheInfo.songCode;
theMusicCacheInfo.status = cacheInfo.status;
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->getCaches(theMusicCacheInfo,cacheInfoSize);
      }
      
int agora_rtc__IMusicContentCenter__isPreloaded(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->isPreloaded(songCode);
      }
      
int agora_rtc__IMusicContentCenter__getLyric(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int64_t songCode,int32_t LyricType) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->getLyric(requestId,songCode,LyricType);
      }
      
int agora_rtc__IMusicContentCenter__getSongSimpleInfo(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int64_t songCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->getSongSimpleInfo(requestId,songCode);
      }
      
int agora_rtc__IMusicContentCenter__getInternalSongCode(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode,const char* jsonOption,int64_t& internalSongCode) {
        
        reinterpret_cast<agora::rtc::rtc::IMusicContentCenter *>(handle)->getInternalSongCode(songCode,jsonOption,internalSongCode);
      }
      
unsigned int agora_rtc__IScreenCaptureSourceList__getCount(agora_rtc__IScreenCaptureSourceList__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IScreenCaptureSourceList *>(handle)->getCount();
      }
      
agora_rtc__ScreenCaptureSourceInfo__C agora_rtc__IScreenCaptureSourceList__getSourceInfo(agora_rtc__IScreenCaptureSourceList__Handle handle,unsigned int index) {
        
        reinterpret_cast<agora::rtc::rtc::IScreenCaptureSourceList *>(handle)->getSourceInfo(index);
      }
      
void agora_rtc__IScreenCaptureSourceList__release(agora_rtc__IScreenCaptureSourceList__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IScreenCaptureSourceList *>(handle)->release();
      }
      
const char* agora_rtc__IRtcEngineEventHandler__eventHandlerType(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->eventHandlerType();
      }
      
void agora_rtc__IRtcEngineEventHandler__onJoinChannelSuccess(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* channel,agora_rtc__uid_t__C uid,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onJoinChannelSuccess(channel,uid,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRejoinChannelSuccess(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* channel,agora_rtc__uid_t__C uid,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRejoinChannelSuccess(channel,uid,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onProxyConnected(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* channel,agora_rtc__uid_t__C uid,agora_rtc__PROXY_TYPE__C proxyType,const char* localProxyIp,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onProxyConnected(channel,uid,proxyType,localProxyIp,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onError(agora_rtc__IRtcEngineEventHandler__Handle handle,int err,const char* msg) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onError(err,msg);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioQuality(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int quality,unsigned short delay,unsigned short lost) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioQuality(uid,quality,delay,lost);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLastmileProbeResult(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__LastmileProbeResult__C& result) {
        agora::rtc::rtc::LastmileProbeOneWayResult theLastmileProbeOneWayResult;
theLastmileProbeOneWayResult.packetLossRate = result.downlinkReport.packetLossRate;
theLastmileProbeOneWayResult.jitter = result.downlinkReport.jitter;
theLastmileProbeOneWayResult.availableBandwidth = result.downlinkReport.availableBandwidth;
agora::rtc::rtc::LastmileProbeOneWayResult theLastmileProbeOneWayResult;
theLastmileProbeOneWayResult.packetLossRate = result.uplinkReport.packetLossRate;
theLastmileProbeOneWayResult.jitter = result.uplinkReport.jitter;
theLastmileProbeOneWayResult.availableBandwidth = result.uplinkReport.availableBandwidth;
agora::rtc::rtc::LastmileProbeResult theLastmileProbeResult;
theLastmileProbeResult.state = result.state;
theLastmileProbeResult.uplinkReport = theLastmileProbeOneWayResult;
theLastmileProbeResult.downlinkReport = theLastmileProbeOneWayResult;
theLastmileProbeResult.rtt = result.rtt;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLastmileProbeResult(theLastmileProbeResult);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioVolumeIndication(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__AudioVolumeInfo__C* speakers,unsigned int speakerNumber,int totalVolume) {
        agora::rtc::rtc::AudioVolumeInfo theAudioVolumeInfo;
theAudioVolumeInfo.uid = speakers.uid;
theAudioVolumeInfo.volume = speakers.volume;
theAudioVolumeInfo.vad = speakers.vad;
theAudioVolumeInfo.voicePitch = speakers.voicePitch;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioVolumeIndication(theAudioVolumeInfo,speakerNumber,totalVolume);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLeaveChannel(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RtcStats__C& stats) {
        agora::rtc::rtc::RtcStats theRtcStats;
theRtcStats.duration = stats.duration;
theRtcStats.txBytes = stats.txBytes;
theRtcStats.rxBytes = stats.rxBytes;
theRtcStats.txAudioBytes = stats.txAudioBytes;
theRtcStats.txVideoBytes = stats.txVideoBytes;
theRtcStats.rxAudioBytes = stats.rxAudioBytes;
theRtcStats.rxVideoBytes = stats.rxVideoBytes;
theRtcStats.txKBitRate = stats.txKBitRate;
theRtcStats.rxKBitRate = stats.rxKBitRate;
theRtcStats.rxAudioKBitRate = stats.rxAudioKBitRate;
theRtcStats.txAudioKBitRate = stats.txAudioKBitRate;
theRtcStats.rxVideoKBitRate = stats.rxVideoKBitRate;
theRtcStats.txVideoKBitRate = stats.txVideoKBitRate;
theRtcStats.lastmileDelay = stats.lastmileDelay;
theRtcStats.userCount = stats.userCount;
theRtcStats.cpuAppUsage = stats.cpuAppUsage;
theRtcStats.cpuTotalUsage = stats.cpuTotalUsage;
theRtcStats.gatewayRtt = stats.gatewayRtt;
theRtcStats.memoryAppUsageRatio = stats.memoryAppUsageRatio;
theRtcStats.memoryTotalUsageRatio = stats.memoryTotalUsageRatio;
theRtcStats.memoryAppUsageInKbytes = stats.memoryAppUsageInKbytes;
theRtcStats.connectTimeMs = stats.connectTimeMs;
theRtcStats.firstAudioPacketDuration = stats.firstAudioPacketDuration;
theRtcStats.firstVideoPacketDuration = stats.firstVideoPacketDuration;
theRtcStats.firstVideoKeyFramePacketDuration = stats.firstVideoKeyFramePacketDuration;
theRtcStats.packetsBeforeFirstKeyFramePacket = stats.packetsBeforeFirstKeyFramePacket;
theRtcStats.firstAudioPacketDurationAfterUnmute = stats.firstAudioPacketDurationAfterUnmute;
theRtcStats.firstVideoPacketDurationAfterUnmute = stats.firstVideoPacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFramePacketDurationAfterUnmute = stats.firstVideoKeyFramePacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameDecodedDurationAfterUnmute = stats.firstVideoKeyFrameDecodedDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameRenderedDurationAfterUnmute = stats.firstVideoKeyFrameRenderedDurationAfterUnmute;
theRtcStats.txPacketLossRate = stats.txPacketLossRate;
theRtcStats.rxPacketLossRate = stats.rxPacketLossRate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLeaveChannel(theRtcStats);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRtcStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RtcStats__C& stats) {
        agora::rtc::rtc::RtcStats theRtcStats;
theRtcStats.duration = stats.duration;
theRtcStats.txBytes = stats.txBytes;
theRtcStats.rxBytes = stats.rxBytes;
theRtcStats.txAudioBytes = stats.txAudioBytes;
theRtcStats.txVideoBytes = stats.txVideoBytes;
theRtcStats.rxAudioBytes = stats.rxAudioBytes;
theRtcStats.rxVideoBytes = stats.rxVideoBytes;
theRtcStats.txKBitRate = stats.txKBitRate;
theRtcStats.rxKBitRate = stats.rxKBitRate;
theRtcStats.rxAudioKBitRate = stats.rxAudioKBitRate;
theRtcStats.txAudioKBitRate = stats.txAudioKBitRate;
theRtcStats.rxVideoKBitRate = stats.rxVideoKBitRate;
theRtcStats.txVideoKBitRate = stats.txVideoKBitRate;
theRtcStats.lastmileDelay = stats.lastmileDelay;
theRtcStats.userCount = stats.userCount;
theRtcStats.cpuAppUsage = stats.cpuAppUsage;
theRtcStats.cpuTotalUsage = stats.cpuTotalUsage;
theRtcStats.gatewayRtt = stats.gatewayRtt;
theRtcStats.memoryAppUsageRatio = stats.memoryAppUsageRatio;
theRtcStats.memoryTotalUsageRatio = stats.memoryTotalUsageRatio;
theRtcStats.memoryAppUsageInKbytes = stats.memoryAppUsageInKbytes;
theRtcStats.connectTimeMs = stats.connectTimeMs;
theRtcStats.firstAudioPacketDuration = stats.firstAudioPacketDuration;
theRtcStats.firstVideoPacketDuration = stats.firstVideoPacketDuration;
theRtcStats.firstVideoKeyFramePacketDuration = stats.firstVideoKeyFramePacketDuration;
theRtcStats.packetsBeforeFirstKeyFramePacket = stats.packetsBeforeFirstKeyFramePacket;
theRtcStats.firstAudioPacketDurationAfterUnmute = stats.firstAudioPacketDurationAfterUnmute;
theRtcStats.firstVideoPacketDurationAfterUnmute = stats.firstVideoPacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFramePacketDurationAfterUnmute = stats.firstVideoKeyFramePacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameDecodedDurationAfterUnmute = stats.firstVideoKeyFrameDecodedDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameRenderedDurationAfterUnmute = stats.firstVideoKeyFrameRenderedDurationAfterUnmute;
theRtcStats.txPacketLossRate = stats.txPacketLossRate;
theRtcStats.rxPacketLossRate = stats.rxPacketLossRate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRtcStats(theRtcStats);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioDeviceStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* deviceId,int deviceType,int deviceState) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioDeviceStateChanged(deviceId,deviceType,deviceState);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioMixingPositionChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int64_t position) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioMixingPositionChanged(position);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioMixingFinished(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioMixingFinished();
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioEffectFinished(agora_rtc__IRtcEngineEventHandler__Handle handle,int soundId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioEffectFinished(soundId);
      }
      
void agora_rtc__IRtcEngineEventHandler__onVideoDeviceStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* deviceId,int deviceType,int deviceState) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onVideoDeviceStateChanged(deviceId,deviceType,deviceState);
      }
      
void agora_rtc__IRtcEngineEventHandler__onNetworkQuality(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int txQuality,int rxQuality) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onNetworkQuality(uid,txQuality,rxQuality);
      }
      
void agora_rtc__IRtcEngineEventHandler__onIntraRequestReceived(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onIntraRequestReceived();
      }
      
void agora_rtc__IRtcEngineEventHandler__onUplinkNetworkInfoUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__UplinkNetworkInfo__C& info) {
        agora::rtc::rtc::UplinkNetworkInfo theUplinkNetworkInfo;
theUplinkNetworkInfo.video_encoder_target_bitrate_bps = info.video_encoder_target_bitrate_bps;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUplinkNetworkInfoUpdated(theUplinkNetworkInfo);
      }
      
void agora_rtc__IRtcEngineEventHandler__onDownlinkNetworkInfoUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__DownlinkNetworkInfo__C& info) {
        agora::rtc::DownlinkNetworkInfo::PeerDownlinkInfo thePeerDownlinkInfo;
thePeerDownlinkInfo.uid = info.peer_downlink_info.uid;
thePeerDownlinkInfo.stream_type = info.peer_downlink_info.stream_type;
thePeerDownlinkInfo.current_downscale_level = info.peer_downlink_info.current_downscale_level;
thePeerDownlinkInfo.expected_bitrate_bps = info.peer_downlink_info.expected_bitrate_bps;
agora::rtc::rtc::DownlinkNetworkInfo theDownlinkNetworkInfo;
theDownlinkNetworkInfo.lastmile_buffer_delay_time_ms = info.lastmile_buffer_delay_time_ms;
theDownlinkNetworkInfo.bandwidth_estimation_bps = info.bandwidth_estimation_bps;
theDownlinkNetworkInfo.total_downscale_level_count = info.total_downscale_level_count;
theDownlinkNetworkInfo.peer_downlink_info = thePeerDownlinkInfo;
theDownlinkNetworkInfo.total_received_video_count = info.total_received_video_count;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onDownlinkNetworkInfoUpdated(theDownlinkNetworkInfo);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLastmileQuality(agora_rtc__IRtcEngineEventHandler__Handle handle,int quality) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLastmileQuality(quality);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFirstLocalVideoFrame(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,int width,int height,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFirstLocalVideoFrame(source,width,height,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFirstLocalVideoFramePublished(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFirstLocalVideoFramePublished(source,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteVideoDecoded(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int width,int height,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFirstRemoteVideoDecoded(uid,width,height,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onVideoSizeChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_rtc__uid_t__C uid,int width,int height,int rotation) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onVideoSizeChanged(sourceType,uid,width,height,rotation);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLocalVideoStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,agora_rtc__LOCAL_VIDEO_STREAM_STATE__C state,agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C error) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLocalVideoStateChanged(source,state,error);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRemoteVideoStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__REMOTE_VIDEO_STATE__C state,agora_rtc__REMOTE_VIDEO_STATE_REASON__C reason,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRemoteVideoStateChanged(uid,state,reason,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteVideoFrame(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,int width,int height,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFirstRemoteVideoFrame(userId,width,height,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserJoined(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserJoined(uid,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserOffline(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__USER_OFFLINE_REASON_TYPE__C reason) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserOffline(uid,reason);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserMuteAudio(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool muted) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserMuteAudio(uid,muted);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserMuteVideo(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,bool muted) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserMuteVideo(userId,muted);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserEnableVideo(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserEnableVideo(uid,enabled);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,uint32_t state) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserStateChanged(uid,state);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserEnableLocalVideo(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserEnableLocalVideo(uid,enabled);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLocalAudioStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__LocalAudioStats__C& stats) {
        agora::rtc::rtc::LocalAudioStats theLocalAudioStats;
theLocalAudioStats.numChannels = stats.numChannels;
theLocalAudioStats.sentSampleRate = stats.sentSampleRate;
theLocalAudioStats.sentBitrate = stats.sentBitrate;
theLocalAudioStats.internalCodec = stats.internalCodec;
theLocalAudioStats.txPacketLossRate = stats.txPacketLossRate;
theLocalAudioStats.audioDeviceDelay = stats.audioDeviceDelay;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLocalAudioStats(theLocalAudioStats);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRemoteAudioStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RemoteAudioStats__C& stats) {
        agora::rtc::rtc::RemoteAudioStats theRemoteAudioStats;
theRemoteAudioStats.uid = stats.uid;
theRemoteAudioStats.quality = stats.quality;
theRemoteAudioStats.networkTransportDelay = stats.networkTransportDelay;
theRemoteAudioStats.jitterBufferDelay = stats.jitterBufferDelay;
theRemoteAudioStats.audioLossRate = stats.audioLossRate;
theRemoteAudioStats.numChannels = stats.numChannels;
theRemoteAudioStats.receivedSampleRate = stats.receivedSampleRate;
theRemoteAudioStats.receivedBitrate = stats.receivedBitrate;
theRemoteAudioStats.totalFrozenTime = stats.totalFrozenTime;
theRemoteAudioStats.frozenRate = stats.frozenRate;
theRemoteAudioStats.mosValue = stats.mosValue;
theRemoteAudioStats.frozenRateByCustomPlcCount = stats.frozenRateByCustomPlcCount;
theRemoteAudioStats.plcCount = stats.plcCount;
theRemoteAudioStats.totalActiveTime = stats.totalActiveTime;
theRemoteAudioStats.publishDuration = stats.publishDuration;
theRemoteAudioStats.qoeQuality = stats.qoeQuality;
theRemoteAudioStats.qualityChangedReason = stats.qualityChangedReason;
theRemoteAudioStats.rxAudioBytes = stats.rxAudioBytes;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRemoteAudioStats(theRemoteAudioStats);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLocalVideoStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,const agora_rtc__LocalVideoStats__C& stats) {
        agora::rtc::rtc::LocalVideoStats theLocalVideoStats;
theLocalVideoStats.uid = stats.uid;
theLocalVideoStats.sentBitrate = stats.sentBitrate;
theLocalVideoStats.sentFrameRate = stats.sentFrameRate;
theLocalVideoStats.captureFrameRate = stats.captureFrameRate;
theLocalVideoStats.captureFrameWidth = stats.captureFrameWidth;
theLocalVideoStats.captureFrameHeight = stats.captureFrameHeight;
theLocalVideoStats.regulatedCaptureFrameRate = stats.regulatedCaptureFrameRate;
theLocalVideoStats.regulatedCaptureFrameWidth = stats.regulatedCaptureFrameWidth;
theLocalVideoStats.regulatedCaptureFrameHeight = stats.regulatedCaptureFrameHeight;
theLocalVideoStats.encoderOutputFrameRate = stats.encoderOutputFrameRate;
theLocalVideoStats.encodedFrameWidth = stats.encodedFrameWidth;
theLocalVideoStats.encodedFrameHeight = stats.encodedFrameHeight;
theLocalVideoStats.rendererOutputFrameRate = stats.rendererOutputFrameRate;
theLocalVideoStats.targetBitrate = stats.targetBitrate;
theLocalVideoStats.targetFrameRate = stats.targetFrameRate;
theLocalVideoStats.qualityAdaptIndication = stats.qualityAdaptIndication;
theLocalVideoStats.encodedBitrate = stats.encodedBitrate;
theLocalVideoStats.encodedFrameCount = stats.encodedFrameCount;
theLocalVideoStats.codecType = stats.codecType;
theLocalVideoStats.txPacketLossRate = stats.txPacketLossRate;
theLocalVideoStats.captureBrightnessLevel = stats.captureBrightnessLevel;
theLocalVideoStats.dualStreamEnabled = stats.dualStreamEnabled;
theLocalVideoStats.hwEncoderAccelerating = stats.hwEncoderAccelerating;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLocalVideoStats(source,theLocalVideoStats);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRemoteVideoStats(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__RemoteVideoStats__C& stats) {
        agora::rtc::rtc::RemoteVideoStats theRemoteVideoStats;
theRemoteVideoStats.uid = stats.uid;
theRemoteVideoStats.delay = stats.delay;
theRemoteVideoStats.e2eDelay = stats.e2eDelay;
theRemoteVideoStats.width = stats.width;
theRemoteVideoStats.height = stats.height;
theRemoteVideoStats.receivedBitrate = stats.receivedBitrate;
theRemoteVideoStats.decoderOutputFrameRate = stats.decoderOutputFrameRate;
theRemoteVideoStats.rendererOutputFrameRate = stats.rendererOutputFrameRate;
theRemoteVideoStats.frameLossRate = stats.frameLossRate;
theRemoteVideoStats.packetLossRate = stats.packetLossRate;
theRemoteVideoStats.rxStreamType = stats.rxStreamType;
theRemoteVideoStats.totalFrozenTime = stats.totalFrozenTime;
theRemoteVideoStats.frozenRate = stats.frozenRate;
theRemoteVideoStats.avSyncTimeMs = stats.avSyncTimeMs;
theRemoteVideoStats.totalActiveTime = stats.totalActiveTime;
theRemoteVideoStats.publishDuration = stats.publishDuration;
theRemoteVideoStats.mosValue = stats.mosValue;
theRemoteVideoStats.rxVideoBytes = stats.rxVideoBytes;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRemoteVideoStats(theRemoteVideoStats);
      }
      
void agora_rtc__IRtcEngineEventHandler__onCameraReady(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onCameraReady();
      }
      
void agora_rtc__IRtcEngineEventHandler__onCameraFocusAreaChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int x,int y,int width,int height) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onCameraFocusAreaChanged(x,y,width,height);
      }
      
void agora_rtc__IRtcEngineEventHandler__onCameraExposureAreaChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int x,int y,int width,int height) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onCameraExposureAreaChanged(x,y,width,height);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFacePositionChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int imageWidth,int imageHeight,const agora_rtc__Rectangle__C* vecRectangle,const int* vecDistance,int numFaces) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = vecRectangle.x;
theRectangle.y = vecRectangle.y;
theRectangle.width = vecRectangle.width;
theRectangle.height = vecRectangle.height;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFacePositionChanged(imageWidth,imageHeight,theRectangle,vecDistance,numFaces);
      }
      
void agora_rtc__IRtcEngineEventHandler__onVideoStopped(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onVideoStopped();
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioMixingStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__AUDIO_MIXING_STATE_TYPE__C state,agora_rtc__AUDIO_MIXING_REASON_TYPE__C reason) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioMixingStateChanged(state,reason);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRhythmPlayerStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C state,agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C errorCode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRhythmPlayerStateChanged(state,errorCode);
      }
      
void agora_rtc__IRtcEngineEventHandler__onConnectionLost(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onConnectionLost();
      }
      
void agora_rtc__IRtcEngineEventHandler__onConnectionInterrupted(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onConnectionInterrupted();
      }
      
void agora_rtc__IRtcEngineEventHandler__onConnectionBanned(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onConnectionBanned();
      }
      
void agora_rtc__IRtcEngineEventHandler__onStreamMessage(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,int streamId,const char* data,size_t length,uint64_t sentTs) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onStreamMessage(userId,streamId,data,length,sentTs);
      }
      
void agora_rtc__IRtcEngineEventHandler__onStreamMessageError(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId,int streamId,int code,int missed,int cached) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onStreamMessageError(userId,streamId,code,missed,cached);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRequestToken(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRequestToken();
      }
      
void agora_rtc__IRtcEngineEventHandler__onTokenPrivilegeWillExpire(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* token) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onTokenPrivilegeWillExpire(token);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLicenseValidationFailure(agora_rtc__IRtcEngineEventHandler__Handle handle,agora__LICENSE_ERROR_TYPE__C error) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLicenseValidationFailure(error);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFirstLocalAudioFramePublished(agora_rtc__IRtcEngineEventHandler__Handle handle,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFirstLocalAudioFramePublished(elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteAudioFrame(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFirstRemoteAudioFrame(uid,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onFirstRemoteAudioDecoded(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onFirstRemoteAudioDecoded(uid,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLocalAudioStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__LOCAL_AUDIO_STREAM_STATE__C state,agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C error) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLocalAudioStateChanged(state,error);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRemoteAudioStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__REMOTE_AUDIO_STATE__C state,agora_rtc__REMOTE_AUDIO_STATE_REASON__C reason,int elapsed) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRemoteAudioStateChanged(uid,state,reason,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandler__onActiveSpeaker(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C userId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onActiveSpeaker(userId);
      }
      
void agora_rtc__IRtcEngineEventHandler__onContentInspectResult(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_media__CONTENT_INSPECT_RESULT__C result) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onContentInspectResult(result);
      }
      
void agora_rtc__IRtcEngineEventHandler__onSnapshotTaken(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,const char* filePath,int width,int height,int errCode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onSnapshotTaken(uid,filePath,width,height,errCode);
      }
      
void agora_rtc__IRtcEngineEventHandler__onClientRoleChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__CLIENT_ROLE_TYPE__C oldRole,agora_rtc__CLIENT_ROLE_TYPE__C newRole,const agora_rtc__ClientRoleOptions__C& newRoleOptions) {
        agora::rtc::rtc::ClientRoleOptions theClientRoleOptions;
theClientRoleOptions.audienceLatencyLevel = newRoleOptions.audienceLatencyLevel;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onClientRoleChanged(oldRole,newRole,theClientRoleOptions);
      }
      
void agora_rtc__IRtcEngineEventHandler__onClientRoleChangeFailed(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C reason,agora_rtc__CLIENT_ROLE_TYPE__C currentRole) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onClientRoleChangeFailed(reason,currentRole);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioDeviceVolumeChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__MEDIA_DEVICE_TYPE__C deviceType,int volume,bool muted) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioDeviceVolumeChanged(deviceType,volume,muted);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRtmpStreamingStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* url,agora_rtc__RTMP_STREAM_PUBLISH_STATE__C state,agora_rtc__RTMP_STREAM_PUBLISH_ERROR_TYPE__C errCode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRtmpStreamingStateChanged(url,state,errCode);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRtmpStreamingEvent(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* url,agora_rtc__RTMP_STREAMING_EVENT__C eventCode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRtmpStreamingEvent(url,eventCode);
      }
      
void agora_rtc__IRtcEngineEventHandler__onTranscodingUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onTranscodingUpdated();
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioRoutingChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int routing) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioRoutingChanged(routing);
      }
      
void agora_rtc__IRtcEngineEventHandler__onChannelMediaRelayStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,int state,int code) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onChannelMediaRelayStateChanged(state,code);
      }
      
void agora_rtc__IRtcEngineEventHandler__onChannelMediaRelayEvent(agora_rtc__IRtcEngineEventHandler__Handle handle,int code) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onChannelMediaRelayEvent(code);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLocalPublishFallbackToAudioOnly(agora_rtc__IRtcEngineEventHandler__Handle handle,bool isFallbackOrRecover) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLocalPublishFallbackToAudioOnly(isFallbackOrRecover);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRemoteSubscribeFallbackToAudioOnly(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,bool isFallbackOrRecover) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRemoteSubscribeFallbackToAudioOnly(uid,isFallbackOrRecover);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRemoteAudioTransportStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRemoteAudioTransportStats(uid,delay,lost,rxKBitRate);
      }
      
void agora_rtc__IRtcEngineEventHandler__onRemoteVideoTransportStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onRemoteVideoTransportStats(uid,delay,lost,rxKBitRate);
      }
      
void agora_rtc__IRtcEngineEventHandler__onConnectionStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__CONNECTION_STATE_TYPE__C state,agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C reason) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onConnectionStateChanged(state,reason);
      }
      
void agora_rtc__IRtcEngineEventHandler__onWlAccMessage(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__WLACC_MESSAGE_REASON__C reason,agora_rtc__WLACC_SUGGEST_ACTION__C action,const char* wlAccMsg) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onWlAccMessage(reason,action,wlAccMsg);
      }
      
void agora_rtc__IRtcEngineEventHandler__onWlAccStats(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__WlAccStats__C currentStats,agora_rtc__WlAccStats__C averageStats) {
        agora::rtc::rtc::WlAccStats theWlAccStats;
theWlAccStats.e2eDelayPercent = currentStats.e2eDelayPercent;
theWlAccStats.frozenRatioPercent = currentStats.frozenRatioPercent;
theWlAccStats.lossRatePercent = currentStats.lossRatePercent;
agora::rtc::rtc::WlAccStats theWlAccStats;
theWlAccStats.e2eDelayPercent = averageStats.e2eDelayPercent;
theWlAccStats.frozenRatioPercent = averageStats.frozenRatioPercent;
theWlAccStats.lossRatePercent = averageStats.lossRatePercent;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onWlAccStats(theWlAccStats,theWlAccStats);
      }
      
void agora_rtc__IRtcEngineEventHandler__onNetworkTypeChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__NETWORK_TYPE__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onNetworkTypeChanged(type);
      }
      
void agora_rtc__IRtcEngineEventHandler__onEncryptionError(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__ENCRYPTION_ERROR_TYPE__C errorType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onEncryptionError(errorType);
      }
      
void agora_rtc__IRtcEngineEventHandler__onPermissionError(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__PERMISSION_TYPE__C permissionType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onPermissionError(permissionType);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLocalUserRegistered(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,const char* userAccount) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLocalUserRegistered(uid,userAccount);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserInfoUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__UserInfo__C& info) {
        agora::rtc::rtc::UserInfo theUserInfo;
theUserInfo.uid = info.uid;
theUserInfo.userAccount = info.userAccount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserInfoUpdated(uid,theUserInfo);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUploadLogResult(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* requestId,bool success,agora_rtc__UPLOAD_ERROR_REASON__C reason) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUploadLogResult(requestId,success,reason);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioSubscribeStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* channel,agora_rtc__uid_t__C uid,agora_rtc__STREAM_SUBSCRIBE_STATE__C oldState,agora_rtc__STREAM_SUBSCRIBE_STATE__C newState,int elapseSinceLastState) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioSubscribeStateChanged(channel,uid,oldState,newState,elapseSinceLastState);
      }
      
void agora_rtc__IRtcEngineEventHandler__onVideoSubscribeStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* channel,agora_rtc__uid_t__C uid,agora_rtc__STREAM_SUBSCRIBE_STATE__C oldState,agora_rtc__STREAM_SUBSCRIBE_STATE__C newState,int elapseSinceLastState) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onVideoSubscribeStateChanged(channel,uid,oldState,newState,elapseSinceLastState);
      }
      
void agora_rtc__IRtcEngineEventHandler__onAudioPublishStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* channel,agora_rtc__STREAM_PUBLISH_STATE__C oldState,agora_rtc__STREAM_PUBLISH_STATE__C newState,int elapseSinceLastState) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onAudioPublishStateChanged(channel,oldState,newState,elapseSinceLastState);
      }
      
void agora_rtc__IRtcEngineEventHandler__onVideoPublishStateChanged(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C source,const char* channel,agora_rtc__STREAM_PUBLISH_STATE__C oldState,agora_rtc__STREAM_PUBLISH_STATE__C newState,int elapseSinceLastState) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onVideoPublishStateChanged(source,channel,oldState,newState,elapseSinceLastState);
      }
      
void agora_rtc__IRtcEngineEventHandler__onExtensionEvent(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* provider,const char* extension,const char* key,const char* value) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onExtensionEvent(provider,extension,key,value);
      }
      
void agora_rtc__IRtcEngineEventHandler__onExtensionStarted(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* provider,const char* extension) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onExtensionStarted(provider,extension);
      }
      
void agora_rtc__IRtcEngineEventHandler__onExtensionStopped(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* provider,const char* extension) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onExtensionStopped(provider,extension);
      }
      
void agora_rtc__IRtcEngineEventHandler__onExtensionError(agora_rtc__IRtcEngineEventHandler__Handle handle,const char* provider,const char* extension,int error,const char* message) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onExtensionError(provider,extension,error,message);
      }
      
void agora_rtc__IRtcEngineEventHandler__onUserAccountUpdated(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,const char* userAccount) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onUserAccountUpdated(uid,userAccount);
      }
      
void agora_rtc__IRtcEngineEventHandler__onLocalVideoTranscoderError(agora_rtc__IRtcEngineEventHandler__Handle handle,const agora_rtc__TranscodingVideoStream__C& stream,agora_rtc__VIDEO_TRANSCODER_ERROR__C error) {
        agora::rtc::rtc::TranscodingVideoStream theTranscodingVideoStream;
theTranscodingVideoStream.sourceType = stream.sourceType;
theTranscodingVideoStream.remoteUserUid = stream.remoteUserUid;
theTranscodingVideoStream.imageUrl = stream.imageUrl;
theTranscodingVideoStream.mediaPlayerId = stream.mediaPlayerId;
theTranscodingVideoStream.x = stream.x;
theTranscodingVideoStream.y = stream.y;
theTranscodingVideoStream.width = stream.width;
theTranscodingVideoStream.height = stream.height;
theTranscodingVideoStream.zOrder = stream.zOrder;
theTranscodingVideoStream.alpha = stream.alpha;
theTranscodingVideoStream.mirror = stream.mirror;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onLocalVideoTranscoderError(theTranscodingVideoStream,error);
      }
      
void agora_rtc__IRtcEngineEventHandler__onVideoRenderingTracingResult(agora_rtc__IRtcEngineEventHandler__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__MEDIA_TRACE_EVENT__C currentEvent,agora_rtc__VideoRenderingTracingInfo__C tracingInfo) {
        agora::rtc::rtc::VideoRenderingTracingInfo theVideoRenderingTracingInfo;
theVideoRenderingTracingInfo.elapsedTime = tracingInfo.elapsedTime;
theVideoRenderingTracingInfo.start2JoinChannel = tracingInfo.start2JoinChannel;
theVideoRenderingTracingInfo.join2JoinSuccess = tracingInfo.join2JoinSuccess;
theVideoRenderingTracingInfo.joinSuccess2RemoteJoined = tracingInfo.joinSuccess2RemoteJoined;
theVideoRenderingTracingInfo.remoteJoined2SetView = tracingInfo.remoteJoined2SetView;
theVideoRenderingTracingInfo.remoteJoined2UnmuteVideo = tracingInfo.remoteJoined2UnmuteVideo;
theVideoRenderingTracingInfo.remoteJoined2PacketReceived = tracingInfo.remoteJoined2PacketReceived;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandler *>(handle)->onVideoRenderingTracingResult(uid,currentEvent,theVideoRenderingTracingInfo);
      }
      
int agora_rtc__IVideoDeviceCollection__getCount(agora_rtc__IVideoDeviceCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceCollection *>(handle)->getCount();
      }
      
int agora_rtc__IVideoDeviceCollection__setDevice(agora_rtc__IVideoDeviceCollection__Handle handle,const char deviceIdUTF8[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceCollection *>(handle)->setDevice(deviceIdUTF8);
      }
      
int agora_rtc__IVideoDeviceCollection__getDevice(agora_rtc__IVideoDeviceCollection__Handle handle,int index,char deviceNameUTF8[512],char deviceIdUTF8[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceCollection *>(handle)->getDevice(index,deviceNameUTF8,deviceIdUTF8);
      }
      
void agora_rtc__IVideoDeviceCollection__release(agora_rtc__IVideoDeviceCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceCollection *>(handle)->release();
      }
      
agora_rtc__IVideoDeviceCollection__Handle* agora_rtc__IVideoDeviceManager__enumerateVideoDevices(agora_rtc__IVideoDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->enumerateVideoDevices();
      }
      
int agora_rtc__IVideoDeviceManager__setDevice(agora_rtc__IVideoDeviceManager__Handle handle,const char deviceIdUTF8[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->setDevice(deviceIdUTF8);
      }
      
int agora_rtc__IVideoDeviceManager__getDevice(agora_rtc__IVideoDeviceManager__Handle handle,char deviceIdUTF8[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->getDevice(deviceIdUTF8);
      }
      
int agora_rtc__IVideoDeviceManager__numberOfCapabilities(agora_rtc__IVideoDeviceManager__Handle handle,const char* deviceIdUTF8) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->numberOfCapabilities(deviceIdUTF8);
      }
      
int agora_rtc__IVideoDeviceManager__getCapability(agora_rtc__IVideoDeviceManager__Handle handle,const char* deviceIdUTF8,const uint32_t deviceCapabilityNumber,agora_rtc__VideoFormat__C& capability) {
        agora::rtc::rtc::VideoFormat theVideoFormat;
theVideoFormat.width = capability.width;
theVideoFormat.height = capability.height;
theVideoFormat.fps = capability.fps;
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->getCapability(deviceIdUTF8,deviceCapabilityNumber,theVideoFormat);
      }
      
int agora_rtc__IVideoDeviceManager__startDeviceTest(agora_rtc__IVideoDeviceManager__Handle handle,agora__view_t__C hwnd) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->startDeviceTest(hwnd);
      }
      
int agora_rtc__IVideoDeviceManager__stopDeviceTest(agora_rtc__IVideoDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->stopDeviceTest();
      }
      
void agora_rtc__IVideoDeviceManager__release(agora_rtc__IVideoDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IVideoDeviceManager *>(handle)->release();
      }
      
int agora_rtc__IMetadataObserver__getMaxMetadataSize(agora_rtc__IMetadataObserver__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IMetadataObserver *>(handle)->getMaxMetadataSize();
      }
      
bool agora_rtc__IMetadataObserver__onReadyToSendMetadata(agora_rtc__IMetadataObserver__Handle handle,agora_rtc__Metadata__C& metadata,agora_rtc__VIDEO_SOURCE_TYPE__C source_type) {
        agora::rtc::IMetadataObserver::Metadata theMetadata;
theMetadata.uid = metadata.uid;
theMetadata.size = metadata.size;
theMetadata.buffer = metadata.buffer;
theMetadata.timeStampMs = metadata.timeStampMs;
        reinterpret_cast<agora::rtc::rtc::IMetadataObserver *>(handle)->onReadyToSendMetadata(theMetadata,source_type);
      }
      
void agora_rtc__IMetadataObserver__onMetadataReceived(agora_rtc__IMetadataObserver__Handle handle,const agora_rtc__Metadata__C& metadata) {
        agora::rtc::IMetadataObserver::Metadata theMetadata;
theMetadata.uid = metadata.uid;
theMetadata.size = metadata.size;
theMetadata.buffer = metadata.buffer;
theMetadata.timeStampMs = metadata.timeStampMs;
        reinterpret_cast<agora::rtc::rtc::IMetadataObserver *>(handle)->onMetadataReceived(theMetadata);
      }
      
void agora_rtc__IDirectCdnStreamingEventHandler__onDirectCdnStreamingStateChanged(agora_rtc__IDirectCdnStreamingEventHandler__Handle handle,agora_rtc__DIRECT_CDN_STREAMING_STATE__C state,agora_rtc__DIRECT_CDN_STREAMING_ERROR__C error,const char* message) {
        
        reinterpret_cast<agora::rtc::rtc::IDirectCdnStreamingEventHandler *>(handle)->onDirectCdnStreamingStateChanged(state,error,message);
      }
      
void agora_rtc__IDirectCdnStreamingEventHandler__onDirectCdnStreamingStats(agora_rtc__IDirectCdnStreamingEventHandler__Handle handle,const agora_rtc__DirectCdnStreamingStats__C& stats) {
        agora::rtc::rtc::DirectCdnStreamingStats theDirectCdnStreamingStats;
theDirectCdnStreamingStats.videoWidth = stats.videoWidth;
theDirectCdnStreamingStats.videoHeight = stats.videoHeight;
theDirectCdnStreamingStats.fps = stats.fps;
theDirectCdnStreamingStats.videoBitrate = stats.videoBitrate;
theDirectCdnStreamingStats.audioBitrate = stats.audioBitrate;
        reinterpret_cast<agora::rtc::rtc::IDirectCdnStreamingEventHandler *>(handle)->onDirectCdnStreamingStats(theDirectCdnStreamingStats);
      }
      
void agora_rtc__IRtcEngine__release(agora_rtc__IRtcEngine__Handle handle,bool sync) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->release(sync);
      }
      
int agora_rtc__IRtcEngine__initialize(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__RtcEngineContext__C& context) {
        agora::commons::commons::LogConfig theLogConfig;
theLogConfig.filePath = context.logConfig.filePath;
theLogConfig.fileSizeInKB = context.logConfig.fileSizeInKB;
theLogConfig.level = context.logConfig.level;
agora::rtc::rtc::RtcEngineContext theRtcEngineContext;
theRtcEngineContext.eventHandler = context.eventHandler;
theRtcEngineContext.appId = context.appId;
theRtcEngineContext.context = context.context;
theRtcEngineContext.channelProfile = context.channelProfile;
theRtcEngineContext.license = context.license;
theRtcEngineContext.audioScenario = context.audioScenario;
theRtcEngineContext.areaCode = context.areaCode;
theRtcEngineContext.logConfig = theLogConfig;
theRtcEngineContext.threadPriority = context.threadPriority;
theRtcEngineContext.useExternalEglContext = context.useExternalEglContext;
theRtcEngineContext.domainLimit = context.domainLimit;
theRtcEngineContext.autoRegisterAgoraExtensions = context.autoRegisterAgoraExtensions;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->initialize(theRtcEngineContext);
      }
      
int agora_rtc__IRtcEngine__queryInterface(agora_rtc__IRtcEngine__Handle handle,agora_rtc__INTERFACE_ID_TYPE__C iid,void* inter) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->queryInterface(iid,inter);
      }
      
const char* agora_rtc__IRtcEngine__getVersion(agora_rtc__IRtcEngine__Handle handle,int* build) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getVersion(build);
      }
      
const char* agora_rtc__IRtcEngine__getErrorDescription(agora_rtc__IRtcEngine__Handle handle,int code) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getErrorDescription(code);
      }
      
int agora_rtc__IRtcEngine__queryCodecCapability(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CodecCapInfo__C* codecInfo,int& size) {
        agora::rtc::rtc::CodecCapLevels theCodecCapLevels;
theCodecCapLevels.hwDecodingLevel = codecInfo.codecLevels.hwDecodingLevel;
theCodecCapLevels.swDecodingLevel = codecInfo.codecLevels.swDecodingLevel;
agora::rtc::rtc::CodecCapInfo theCodecCapInfo;
theCodecCapInfo.codecType = codecInfo.codecType;
theCodecCapInfo.codecCapMask = codecInfo.codecCapMask;
theCodecCapInfo.codecLevels = theCodecCapLevels;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->queryCodecCapability(theCodecCapInfo,size);
      }
      
int agora_rtc__IRtcEngine__preloadChannel(agora_rtc__IRtcEngine__Handle handle,const char* token,const char* channelId,agora_rtc__uid_t__C uid) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->preloadChannel(token,channelId,uid);
      }
      
int agora_rtc__IRtcEngine__preloadChannel(agora_rtc__IRtcEngine__Handle handle,const char* token,const char* channelId,const char* userAccount) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->preloadChannel(token,channelId,userAccount);
      }
      
int agora_rtc__IRtcEngine__updatePreloadChannelToken(agora_rtc__IRtcEngine__Handle handle,const char* token) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updatePreloadChannelToken(token);
      }
      
int agora_rtc__IRtcEngine__joinChannel(agora_rtc__IRtcEngine__Handle handle,const char* token,const char* channelId,const char* info,agora_rtc__uid_t__C uid) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->joinChannel(token,channelId,info,uid);
      }
      
int agora_rtc__IRtcEngine__joinChannel(agora_rtc__IRtcEngine__Handle handle,const char* token,const char* channelId,agora_rtc__uid_t__C uid,const agora_rtc__ChannelMediaOptions__C& options) {
        agora::rtc::rtc::ChannelMediaOptions theChannelMediaOptions;
theChannelMediaOptions.publishCameraTrack = options.publishCameraTrack;
theChannelMediaOptions.publishSecondaryCameraTrack = options.publishSecondaryCameraTrack;
theChannelMediaOptions.publishThirdCameraTrack = options.publishThirdCameraTrack;
theChannelMediaOptions.publishFourthCameraTrack = options.publishFourthCameraTrack;
theChannelMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theChannelMediaOptions.publishScreenCaptureVideo = options.publishScreenCaptureVideo;
theChannelMediaOptions.publishScreenCaptureAudio = options.publishScreenCaptureAudio;
theChannelMediaOptions.publishScreenTrack = options.publishScreenTrack;
theChannelMediaOptions.publishSecondaryScreenTrack = options.publishSecondaryScreenTrack;
theChannelMediaOptions.publishThirdScreenTrack = options.publishThirdScreenTrack;
theChannelMediaOptions.publishFourthScreenTrack = options.publishFourthScreenTrack;
theChannelMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theChannelMediaOptions.publishCustomAudioTrackId = options.publishCustomAudioTrackId;
theChannelMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theChannelMediaOptions.publishEncodedVideoTrack = options.publishEncodedVideoTrack;
theChannelMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theChannelMediaOptions.publishMediaPlayerVideoTrack = options.publishMediaPlayerVideoTrack;
theChannelMediaOptions.publishTranscodedVideoTrack = options.publishTranscodedVideoTrack;
theChannelMediaOptions.autoSubscribeAudio = options.autoSubscribeAudio;
theChannelMediaOptions.autoSubscribeVideo = options.autoSubscribeVideo;
theChannelMediaOptions.enableAudioRecordingOrPlayout = options.enableAudioRecordingOrPlayout;
theChannelMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theChannelMediaOptions.clientRoleType = options.clientRoleType;
theChannelMediaOptions.audienceLatencyLevel = options.audienceLatencyLevel;
theChannelMediaOptions.defaultVideoStreamType = options.defaultVideoStreamType;
theChannelMediaOptions.channelProfile = options.channelProfile;
theChannelMediaOptions.audioDelayMs = options.audioDelayMs;
theChannelMediaOptions.mediaPlayerAudioDelayMs = options.mediaPlayerAudioDelayMs;
theChannelMediaOptions.token = options.token;
theChannelMediaOptions.enableBuiltInMediaEncryption = options.enableBuiltInMediaEncryption;
theChannelMediaOptions.publishRhythmPlayerTrack = options.publishRhythmPlayerTrack;
theChannelMediaOptions.isInteractiveAudience = options.isInteractiveAudience;
theChannelMediaOptions.customVideoTrackId = options.customVideoTrackId;
theChannelMediaOptions.isAudioFilterable = options.isAudioFilterable;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->joinChannel(token,channelId,uid,theChannelMediaOptions);
      }
      
int agora_rtc__IRtcEngine__updateChannelMediaOptions(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaOptions__C& options) {
        agora::rtc::rtc::ChannelMediaOptions theChannelMediaOptions;
theChannelMediaOptions.publishCameraTrack = options.publishCameraTrack;
theChannelMediaOptions.publishSecondaryCameraTrack = options.publishSecondaryCameraTrack;
theChannelMediaOptions.publishThirdCameraTrack = options.publishThirdCameraTrack;
theChannelMediaOptions.publishFourthCameraTrack = options.publishFourthCameraTrack;
theChannelMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theChannelMediaOptions.publishScreenCaptureVideo = options.publishScreenCaptureVideo;
theChannelMediaOptions.publishScreenCaptureAudio = options.publishScreenCaptureAudio;
theChannelMediaOptions.publishScreenTrack = options.publishScreenTrack;
theChannelMediaOptions.publishSecondaryScreenTrack = options.publishSecondaryScreenTrack;
theChannelMediaOptions.publishThirdScreenTrack = options.publishThirdScreenTrack;
theChannelMediaOptions.publishFourthScreenTrack = options.publishFourthScreenTrack;
theChannelMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theChannelMediaOptions.publishCustomAudioTrackId = options.publishCustomAudioTrackId;
theChannelMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theChannelMediaOptions.publishEncodedVideoTrack = options.publishEncodedVideoTrack;
theChannelMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theChannelMediaOptions.publishMediaPlayerVideoTrack = options.publishMediaPlayerVideoTrack;
theChannelMediaOptions.publishTranscodedVideoTrack = options.publishTranscodedVideoTrack;
theChannelMediaOptions.autoSubscribeAudio = options.autoSubscribeAudio;
theChannelMediaOptions.autoSubscribeVideo = options.autoSubscribeVideo;
theChannelMediaOptions.enableAudioRecordingOrPlayout = options.enableAudioRecordingOrPlayout;
theChannelMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theChannelMediaOptions.clientRoleType = options.clientRoleType;
theChannelMediaOptions.audienceLatencyLevel = options.audienceLatencyLevel;
theChannelMediaOptions.defaultVideoStreamType = options.defaultVideoStreamType;
theChannelMediaOptions.channelProfile = options.channelProfile;
theChannelMediaOptions.audioDelayMs = options.audioDelayMs;
theChannelMediaOptions.mediaPlayerAudioDelayMs = options.mediaPlayerAudioDelayMs;
theChannelMediaOptions.token = options.token;
theChannelMediaOptions.enableBuiltInMediaEncryption = options.enableBuiltInMediaEncryption;
theChannelMediaOptions.publishRhythmPlayerTrack = options.publishRhythmPlayerTrack;
theChannelMediaOptions.isInteractiveAudience = options.isInteractiveAudience;
theChannelMediaOptions.customVideoTrackId = options.customVideoTrackId;
theChannelMediaOptions.isAudioFilterable = options.isAudioFilterable;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateChannelMediaOptions(theChannelMediaOptions);
      }
      
int agora_rtc__IRtcEngine__leaveChannel(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->leaveChannel();
      }
      
int agora_rtc__IRtcEngine__leaveChannel(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LeaveChannelOptions__C& options) {
        agora::rtc::rtc::LeaveChannelOptions theLeaveChannelOptions;
theLeaveChannelOptions.stopAudioMixing = options.stopAudioMixing;
theLeaveChannelOptions.stopAllEffect = options.stopAllEffect;
theLeaveChannelOptions.stopMicrophoneRecording = options.stopMicrophoneRecording;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->leaveChannel(theLeaveChannelOptions);
      }
      
int agora_rtc__IRtcEngine__renewToken(agora_rtc__IRtcEngine__Handle handle,const char* token) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->renewToken(token);
      }
      
int agora_rtc__IRtcEngine__setChannelProfile(agora_rtc__IRtcEngine__Handle handle,agora__CHANNEL_PROFILE_TYPE__C profile) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setChannelProfile(profile);
      }
      
int agora_rtc__IRtcEngine__setClientRole(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CLIENT_ROLE_TYPE__C role) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setClientRole(role);
      }
      
int agora_rtc__IRtcEngine__setClientRole(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CLIENT_ROLE_TYPE__C role,const agora_rtc__ClientRoleOptions__C& options) {
        agora::rtc::rtc::ClientRoleOptions theClientRoleOptions;
theClientRoleOptions.audienceLatencyLevel = options.audienceLatencyLevel;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setClientRole(role,theClientRoleOptions);
      }
      
int agora_rtc__IRtcEngine__startEchoTest(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startEchoTest();
      }
      
int agora_rtc__IRtcEngine__startEchoTest(agora_rtc__IRtcEngine__Handle handle,int intervalInSeconds) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startEchoTest(intervalInSeconds);
      }
      
int agora_rtc__IRtcEngine__startEchoTest(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__EchoTestConfiguration__C& config) {
        agora::rtc::rtc::EchoTestConfiguration theEchoTestConfiguration;
theEchoTestConfiguration.view = config.view;
theEchoTestConfiguration.enableAudio = config.enableAudio;
theEchoTestConfiguration.enableVideo = config.enableVideo;
theEchoTestConfiguration.token = config.token;
theEchoTestConfiguration.channelId = config.channelId;
theEchoTestConfiguration.intervalInSeconds = config.intervalInSeconds;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startEchoTest(theEchoTestConfiguration);
      }
      
int agora_rtc__IRtcEngine__stopEchoTest(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopEchoTest();
      }
      
int agora_rtc__IRtcEngine__enableMultiCamera(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__CameraCapturerConfiguration__C& config) {
        agora::rtc::rtc::VideoFormat theVideoFormat;
theVideoFormat.width = config.format.width;
theVideoFormat.height = config.format.height;
theVideoFormat.fps = config.format.fps;
agora::rtc::rtc::CameraCapturerConfiguration theCameraCapturerConfiguration;
theCameraCapturerConfiguration.cameraDirection = config.cameraDirection;
theCameraCapturerConfiguration.deviceId = config.deviceId;
theCameraCapturerConfiguration.format = theVideoFormat;
theCameraCapturerConfiguration.followEncodeDimensionRatio = config.followEncodeDimensionRatio;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableMultiCamera(enabled,theCameraCapturerConfiguration);
      }
      
int agora_rtc__IRtcEngine__enableVideo(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableVideo();
      }
      
int agora_rtc__IRtcEngine__disableVideo(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->disableVideo();
      }
      
int agora_rtc__IRtcEngine__startPreview(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startPreview();
      }
      
int agora_rtc__IRtcEngine__startPreview(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startPreview(sourceType);
      }
      
int agora_rtc__IRtcEngine__stopPreview(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopPreview();
      }
      
int agora_rtc__IRtcEngine__stopPreview(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopPreview(sourceType);
      }
      
int agora_rtc__IRtcEngine__startLastmileProbeTest(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LastmileProbeConfig__C& config) {
        agora::rtc::rtc::LastmileProbeConfig theLastmileProbeConfig;
theLastmileProbeConfig.probeUplink = config.probeUplink;
theLastmileProbeConfig.probeDownlink = config.probeDownlink;
theLastmileProbeConfig.expectedUplinkBitrate = config.expectedUplinkBitrate;
theLastmileProbeConfig.expectedDownlinkBitrate = config.expectedDownlinkBitrate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startLastmileProbeTest(theLastmileProbeConfig);
      }
      
int agora_rtc__IRtcEngine__stopLastmileProbeTest(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopLastmileProbeTest();
      }
      
int agora_rtc__IRtcEngine__setVideoEncoderConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoEncoderConfiguration__C& config) {
        agora::rtc::rtc::AdvanceOptions theAdvanceOptions;
theAdvanceOptions.encodingPreference = config.advanceOptions.encodingPreference;
theAdvanceOptions.compressionPreference = config.advanceOptions.compressionPreference;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = config.dimensions.width;
theVideoDimensions.height = config.dimensions.height;
agora::rtc::rtc::VideoEncoderConfiguration theVideoEncoderConfiguration;
theVideoEncoderConfiguration.codecType = config.codecType;
theVideoEncoderConfiguration.dimensions = theVideoDimensions;
theVideoEncoderConfiguration.frameRate = config.frameRate;
theVideoEncoderConfiguration.bitrate = config.bitrate;
theVideoEncoderConfiguration.minBitrate = config.minBitrate;
theVideoEncoderConfiguration.orientationMode = config.orientationMode;
theVideoEncoderConfiguration.degradationPreference = config.degradationPreference;
theVideoEncoderConfiguration.mirrorMode = config.mirrorMode;
theVideoEncoderConfiguration.advanceOptions = theAdvanceOptions;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVideoEncoderConfiguration(theVideoEncoderConfiguration);
      }
      
int agora_rtc__IRtcEngine__setBeautyEffectOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__BeautyOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type) {
        agora::rtc::rtc::BeautyOptions theBeautyOptions;
theBeautyOptions.lighteningContrastLevel = options.lighteningContrastLevel;
theBeautyOptions.lighteningLevel = options.lighteningLevel;
theBeautyOptions.smoothnessLevel = options.smoothnessLevel;
theBeautyOptions.rednessLevel = options.rednessLevel;
theBeautyOptions.sharpnessLevel = options.sharpnessLevel;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setBeautyEffectOptions(enabled,theBeautyOptions,type);
      }
      
int agora_rtc__IRtcEngine__setLowlightEnhanceOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__LowlightEnhanceOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type) {
        agora::rtc::rtc::LowlightEnhanceOptions theLowlightEnhanceOptions;
theLowlightEnhanceOptions.mode = options.mode;
theLowlightEnhanceOptions.level = options.level;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLowlightEnhanceOptions(enabled,theLowlightEnhanceOptions,type);
      }
      
int agora_rtc__IRtcEngine__setVideoDenoiserOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__VideoDenoiserOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type) {
        agora::rtc::rtc::VideoDenoiserOptions theVideoDenoiserOptions;
theVideoDenoiserOptions.mode = options.mode;
theVideoDenoiserOptions.level = options.level;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVideoDenoiserOptions(enabled,theVideoDenoiserOptions,type);
      }
      
int agora_rtc__IRtcEngine__setColorEnhanceOptions(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__ColorEnhanceOptions__C& options,agora_media__MEDIA_SOURCE_TYPE__C type) {
        agora::rtc::rtc::ColorEnhanceOptions theColorEnhanceOptions;
theColorEnhanceOptions.strengthLevel = options.strengthLevel;
theColorEnhanceOptions.skinProtectLevel = options.skinProtectLevel;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setColorEnhanceOptions(enabled,theColorEnhanceOptions,type);
      }
      
int agora_rtc__IRtcEngine__enableVirtualBackground(agora_rtc__IRtcEngine__Handle handle,bool enabled,agora_rtc__VirtualBackgroundSource__C backgroundSource,agora_rtc__SegmentationProperty__C segproperty,agora_media__MEDIA_SOURCE_TYPE__C type) {
        agora::rtc::rtc::VirtualBackgroundSource theVirtualBackgroundSource;
theVirtualBackgroundSource.background_source_type = backgroundSource.background_source_type;
theVirtualBackgroundSource.color = backgroundSource.color;
theVirtualBackgroundSource.source = backgroundSource.source;
theVirtualBackgroundSource.blur_degree = backgroundSource.blur_degree;
agora::rtc::rtc::SegmentationProperty theSegmentationProperty;
theSegmentationProperty.modelType = segproperty.modelType;
theSegmentationProperty.greenCapacity = segproperty.greenCapacity;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableVirtualBackground(enabled,theVirtualBackgroundSource,theSegmentationProperty,type);
      }
      
int agora_rtc__IRtcEngine__setupRemoteVideo(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoCanvas__C& canvas) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = canvas.cropArea.x;
theRectangle.y = canvas.cropArea.y;
theRectangle.width = canvas.cropArea.width;
theRectangle.height = canvas.cropArea.height;
agora::rtc::rtc::VideoCanvas theVideoCanvas;
theVideoCanvas.view = canvas.view;
theVideoCanvas.uid = canvas.uid;
theVideoCanvas.backgroundColor = canvas.backgroundColor;
theVideoCanvas.renderMode = canvas.renderMode;
theVideoCanvas.mirrorMode = canvas.mirrorMode;
theVideoCanvas.setupMode = canvas.setupMode;
theVideoCanvas.sourceType = canvas.sourceType;
theVideoCanvas.mediaPlayerId = canvas.mediaPlayerId;
theVideoCanvas.cropArea = theRectangle;
theVideoCanvas.enableAlphaMask = canvas.enableAlphaMask;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setupRemoteVideo(theVideoCanvas);
      }
      
int agora_rtc__IRtcEngine__setupLocalVideo(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoCanvas__C& canvas) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = canvas.cropArea.x;
theRectangle.y = canvas.cropArea.y;
theRectangle.width = canvas.cropArea.width;
theRectangle.height = canvas.cropArea.height;
agora::rtc::rtc::VideoCanvas theVideoCanvas;
theVideoCanvas.view = canvas.view;
theVideoCanvas.uid = canvas.uid;
theVideoCanvas.backgroundColor = canvas.backgroundColor;
theVideoCanvas.renderMode = canvas.renderMode;
theVideoCanvas.mirrorMode = canvas.mirrorMode;
theVideoCanvas.setupMode = canvas.setupMode;
theVideoCanvas.sourceType = canvas.sourceType;
theVideoCanvas.mediaPlayerId = canvas.mediaPlayerId;
theVideoCanvas.cropArea = theRectangle;
theVideoCanvas.enableAlphaMask = canvas.enableAlphaMask;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setupLocalVideo(theVideoCanvas);
      }
      
int agora_rtc__IRtcEngine__setVideoScenario(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_APPLICATION_SCENARIO_TYPE__C scenarioType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVideoScenario(scenarioType);
      }
      
int agora_rtc__IRtcEngine__enableAudio(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableAudio();
      }
      
int agora_rtc__IRtcEngine__disableAudio(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->disableAudio();
      }
      
int agora_rtc__IRtcEngine__setAudioProfile(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_PROFILE_TYPE__C profile,agora_rtc__AUDIO_SCENARIO_TYPE__C scenario) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioProfile(profile,scenario);
      }
      
int agora_rtc__IRtcEngine__setAudioProfile(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_PROFILE_TYPE__C profile) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioProfile(profile);
      }
      
int agora_rtc__IRtcEngine__setAudioScenario(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_SCENARIO_TYPE__C scenario) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioScenario(scenario);
      }
      
int agora_rtc__IRtcEngine__enableLocalAudio(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableLocalAudio(enabled);
      }
      
int agora_rtc__IRtcEngine__muteLocalAudioStream(agora_rtc__IRtcEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->muteLocalAudioStream(mute);
      }
      
int agora_rtc__IRtcEngine__muteAllRemoteAudioStreams(agora_rtc__IRtcEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->muteAllRemoteAudioStreams(mute);
      }
      
int agora_rtc__IRtcEngine__setDefaultMuteAllRemoteAudioStreams(agora_rtc__IRtcEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setDefaultMuteAllRemoteAudioStreams(mute);
      }
      
int agora_rtc__IRtcEngine__muteRemoteAudioStream(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->muteRemoteAudioStream(uid,mute);
      }
      
int agora_rtc__IRtcEngine__muteLocalVideoStream(agora_rtc__IRtcEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->muteLocalVideoStream(mute);
      }
      
int agora_rtc__IRtcEngine__enableLocalVideo(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableLocalVideo(enabled);
      }
      
int agora_rtc__IRtcEngine__muteAllRemoteVideoStreams(agora_rtc__IRtcEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->muteAllRemoteVideoStreams(mute);
      }
      
int agora_rtc__IRtcEngine__setDefaultMuteAllRemoteVideoStreams(agora_rtc__IRtcEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setDefaultMuteAllRemoteVideoStreams(mute);
      }
      
int agora_rtc__IRtcEngine__muteRemoteVideoStream(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->muteRemoteVideoStream(uid,mute);
      }
      
int agora_rtc__IRtcEngine__setRemoteVideoStreamType(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__VIDEO_STREAM_TYPE__C streamType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteVideoStreamType(uid,streamType);
      }
      
int agora_rtc__IRtcEngine__setRemoteVideoSubscriptionOptions(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__VideoSubscriptionOptions__C& options) {
        agora::rtc::rtc::VideoSubscriptionOptions theVideoSubscriptionOptions;
theVideoSubscriptionOptions.type = options.type;
theVideoSubscriptionOptions.encodedFrameOnly = options.encodedFrameOnly;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteVideoSubscriptionOptions(uid,theVideoSubscriptionOptions);
      }
      
int agora_rtc__IRtcEngine__setRemoteDefaultVideoStreamType(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_STREAM_TYPE__C streamType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteDefaultVideoStreamType(streamType);
      }
      
int agora_rtc__IRtcEngine__setSubscribeAudioBlocklist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setSubscribeAudioBlocklist(uidList,uidNumber);
      }
      
int agora_rtc__IRtcEngine__setSubscribeAudioAllowlist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setSubscribeAudioAllowlist(uidList,uidNumber);
      }
      
int agora_rtc__IRtcEngine__setSubscribeVideoBlocklist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setSubscribeVideoBlocklist(uidList,uidNumber);
      }
      
int agora_rtc__IRtcEngine__setSubscribeVideoAllowlist(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setSubscribeVideoAllowlist(uidList,uidNumber);
      }
      
int agora_rtc__IRtcEngine__enableAudioVolumeIndication(agora_rtc__IRtcEngine__Handle handle,int interval,int smooth,bool reportVad) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableAudioVolumeIndication(interval,smooth,reportVad);
      }
      
int agora_rtc__IRtcEngine__startAudioRecording(agora_rtc__IRtcEngine__Handle handle,const char* filePath,agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C quality) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startAudioRecording(filePath,quality);
      }
      
int agora_rtc__IRtcEngine__startAudioRecording(agora_rtc__IRtcEngine__Handle handle,const char* filePath,int sampleRate,agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C quality) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startAudioRecording(filePath,sampleRate,quality);
      }
      
int agora_rtc__IRtcEngine__startAudioRecording(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__AudioRecordingConfiguration__C& config) {
        agora::rtc::rtc::AudioRecordingConfiguration theAudioRecordingConfiguration;
theAudioRecordingConfiguration.filePath = config.filePath;
theAudioRecordingConfiguration.encode = config.encode;
theAudioRecordingConfiguration.sampleRate = config.sampleRate;
theAudioRecordingConfiguration.fileRecordingType = config.fileRecordingType;
theAudioRecordingConfiguration.quality = config.quality;
theAudioRecordingConfiguration.recordingChannel = config.recordingChannel;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startAudioRecording(theAudioRecordingConfiguration);
      }
      
int agora_rtc__IRtcEngine__registerAudioEncodedFrameObserver(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__AudioEncodedFrameObserverConfig__C& config,agora_rtc__IAudioEncodedFrameObserver__Handle* observer) {
        agora::rtc::rtc::AudioEncodedFrameObserverConfig theAudioEncodedFrameObserverConfig;
theAudioEncodedFrameObserverConfig.postionType = config.postionType;
theAudioEncodedFrameObserverConfig.encodingType = config.encodingType;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->registerAudioEncodedFrameObserver(theAudioEncodedFrameObserverConfig,observer);
      }
      
int agora_rtc__IRtcEngine__stopAudioRecording(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopAudioRecording();
      }
      
agora_rtc__IMediaPlayer__Handle agora_rtc__IRtcEngine__createMediaPlayer(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->createMediaPlayer();
      }
      
int agora_rtc__IRtcEngine__destroyMediaPlayer(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMediaPlayer__Handle media_player) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->destroyMediaPlayer(media_player);
      }
      
agora_rtc__IMediaRecorder__Handle agora_rtc__IRtcEngine__createMediaRecorder(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__RecorderStreamInfo__C& info) {
        agora::rtc::rtc::RecorderStreamInfo theRecorderStreamInfo;
theRecorderStreamInfo.channelId = info.channelId;
theRecorderStreamInfo.uid = info.uid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->createMediaRecorder(theRecorderStreamInfo);
      }
      
int agora_rtc__IRtcEngine__destroyMediaRecorder(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMediaRecorder__Handle mediaRecorder) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->destroyMediaRecorder(mediaRecorder);
      }
      
int agora_rtc__IRtcEngine__startAudioMixing(agora_rtc__IRtcEngine__Handle handle,const char* filePath,bool loopback,int cycle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startAudioMixing(filePath,loopback,cycle);
      }
      
int agora_rtc__IRtcEngine__startAudioMixing(agora_rtc__IRtcEngine__Handle handle,const char* filePath,bool loopback,int cycle,int startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startAudioMixing(filePath,loopback,cycle,startPos);
      }
      
int agora_rtc__IRtcEngine__stopAudioMixing(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopAudioMixing();
      }
      
int agora_rtc__IRtcEngine__pauseAudioMixing(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->pauseAudioMixing();
      }
      
int agora_rtc__IRtcEngine__resumeAudioMixing(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->resumeAudioMixing();
      }
      
int agora_rtc__IRtcEngine__selectAudioTrack(agora_rtc__IRtcEngine__Handle handle,int index) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->selectAudioTrack(index);
      }
      
int agora_rtc__IRtcEngine__getAudioTrackCount(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getAudioTrackCount();
      }
      
int agora_rtc__IRtcEngine__adjustAudioMixingVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustAudioMixingVolume(volume);
      }
      
int agora_rtc__IRtcEngine__adjustAudioMixingPublishVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustAudioMixingPublishVolume(volume);
      }
      
int agora_rtc__IRtcEngine__getAudioMixingPublishVolume(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getAudioMixingPublishVolume();
      }
      
int agora_rtc__IRtcEngine__adjustAudioMixingPlayoutVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustAudioMixingPlayoutVolume(volume);
      }
      
int agora_rtc__IRtcEngine__getAudioMixingPlayoutVolume(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getAudioMixingPlayoutVolume();
      }
      
int agora_rtc__IRtcEngine__getAudioMixingDuration(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getAudioMixingDuration();
      }
      
int agora_rtc__IRtcEngine__getAudioMixingCurrentPosition(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getAudioMixingCurrentPosition();
      }
      
int agora_rtc__IRtcEngine__setAudioMixingPosition(agora_rtc__IRtcEngine__Handle handle,int pos) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioMixingPosition(pos);
      }
      
int agora_rtc__IRtcEngine__setAudioMixingDualMonoMode(agora_rtc__IRtcEngine__Handle handle,agora_media__AUDIO_MIXING_DUAL_MONO_MODE__C mode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioMixingDualMonoMode(mode);
      }
      
int agora_rtc__IRtcEngine__setAudioMixingPitch(agora_rtc__IRtcEngine__Handle handle,int pitch) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioMixingPitch(pitch);
      }
      
int agora_rtc__IRtcEngine__getEffectsVolume(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getEffectsVolume();
      }
      
int agora_rtc__IRtcEngine__setEffectsVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setEffectsVolume(volume);
      }
      
int agora_rtc__IRtcEngine__preloadEffect(agora_rtc__IRtcEngine__Handle handle,int soundId,const char* filePath,int startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->preloadEffect(soundId,filePath,startPos);
      }
      
int agora_rtc__IRtcEngine__playEffect(agora_rtc__IRtcEngine__Handle handle,int soundId,const char* filePath,int loopCount,double pitch,double pan,int gain,bool publish,int startPos) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->playEffect(soundId,filePath,loopCount,pitch,pan,gain,publish,startPos);
      }
      
int agora_rtc__IRtcEngine__playAllEffects(agora_rtc__IRtcEngine__Handle handle,int loopCount,double pitch,double pan,int gain,bool publish) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->playAllEffects(loopCount,pitch,pan,gain,publish);
      }
      
int agora_rtc__IRtcEngine__getVolumeOfEffect(agora_rtc__IRtcEngine__Handle handle,int soundId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getVolumeOfEffect(soundId);
      }
      
int agora_rtc__IRtcEngine__setVolumeOfEffect(agora_rtc__IRtcEngine__Handle handle,int soundId,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVolumeOfEffect(soundId,volume);
      }
      
int agora_rtc__IRtcEngine__pauseEffect(agora_rtc__IRtcEngine__Handle handle,int soundId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->pauseEffect(soundId);
      }
      
int agora_rtc__IRtcEngine__pauseAllEffects(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->pauseAllEffects();
      }
      
int agora_rtc__IRtcEngine__resumeEffect(agora_rtc__IRtcEngine__Handle handle,int soundId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->resumeEffect(soundId);
      }
      
int agora_rtc__IRtcEngine__resumeAllEffects(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->resumeAllEffects();
      }
      
int agora_rtc__IRtcEngine__stopEffect(agora_rtc__IRtcEngine__Handle handle,int soundId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopEffect(soundId);
      }
      
int agora_rtc__IRtcEngine__stopAllEffects(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopAllEffects();
      }
      
int agora_rtc__IRtcEngine__unloadEffect(agora_rtc__IRtcEngine__Handle handle,int soundId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->unloadEffect(soundId);
      }
      
int agora_rtc__IRtcEngine__unloadAllEffects(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->unloadAllEffects();
      }
      
int agora_rtc__IRtcEngine__getEffectDuration(agora_rtc__IRtcEngine__Handle handle,const char* filePath) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getEffectDuration(filePath);
      }
      
int agora_rtc__IRtcEngine__setEffectPosition(agora_rtc__IRtcEngine__Handle handle,int soundId,int pos) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setEffectPosition(soundId,pos);
      }
      
int agora_rtc__IRtcEngine__getEffectCurrentPosition(agora_rtc__IRtcEngine__Handle handle,int soundId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getEffectCurrentPosition(soundId);
      }
      
int agora_rtc__IRtcEngine__enableSoundPositionIndication(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableSoundPositionIndication(enabled);
      }
      
int agora_rtc__IRtcEngine__setRemoteVoicePosition(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,double pan,double gain) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteVoicePosition(uid,pan,gain);
      }
      
int agora_rtc__IRtcEngine__enableSpatialAudio(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableSpatialAudio(enabled);
      }
      
int agora_rtc__IRtcEngine__setRemoteUserSpatialAudioParams(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,const agora__SpatialAudioParams__C& params) {
        agora::agora::SpatialAudioParams theSpatialAudioParams;
theSpatialAudioParams.speaker_azimuth = params.speaker_azimuth;
theSpatialAudioParams.speaker_elevation = params.speaker_elevation;
theSpatialAudioParams.speaker_distance = params.speaker_distance;
theSpatialAudioParams.speaker_orientation = params.speaker_orientation;
theSpatialAudioParams.enable_blur = params.enable_blur;
theSpatialAudioParams.enable_air_absorb = params.enable_air_absorb;
theSpatialAudioParams.speaker_attenuation = params.speaker_attenuation;
theSpatialAudioParams.enable_doppler = params.enable_doppler;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteUserSpatialAudioParams(uid,theSpatialAudioParams);
      }
      
int agora_rtc__IRtcEngine__setVoiceBeautifierPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_BEAUTIFIER_PRESET__C preset) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVoiceBeautifierPreset(preset);
      }
      
int agora_rtc__IRtcEngine__setAudioEffectPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_EFFECT_PRESET__C preset) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioEffectPreset(preset);
      }
      
int agora_rtc__IRtcEngine__setVoiceConversionPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_CONVERSION_PRESET__C preset) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVoiceConversionPreset(preset);
      }
      
int agora_rtc__IRtcEngine__setAudioEffectParameters(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_EFFECT_PRESET__C preset,int param1,int param2) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioEffectParameters(preset,param1,param2);
      }
      
int agora_rtc__IRtcEngine__setVoiceBeautifierParameters(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_BEAUTIFIER_PRESET__C preset,int param1,int param2) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVoiceBeautifierParameters(preset,param1,param2);
      }
      
int agora_rtc__IRtcEngine__setVoiceConversionParameters(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VOICE_CONVERSION_PRESET__C preset,int param1,int param2) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setVoiceConversionParameters(preset,param1,param2);
      }
      
int agora_rtc__IRtcEngine__setLocalVoicePitch(agora_rtc__IRtcEngine__Handle handle,double pitch) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalVoicePitch(pitch);
      }
      
int agora_rtc__IRtcEngine__setLocalVoiceFormant(agora_rtc__IRtcEngine__Handle handle,double formantRatio) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalVoiceFormant(formantRatio);
      }
      
int agora_rtc__IRtcEngine__setLocalVoiceEqualization(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_EQUALIZATION_BAND_FREQUENCY__C bandFrequency,int bandGain) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalVoiceEqualization(bandFrequency,bandGain);
      }
      
int agora_rtc__IRtcEngine__setLocalVoiceReverb(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_REVERB_TYPE__C reverbKey,int value) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalVoiceReverb(reverbKey,value);
      }
      
int agora_rtc__IRtcEngine__setHeadphoneEQPreset(agora_rtc__IRtcEngine__Handle handle,agora_rtc__HEADPHONE_EQUALIZER_PRESET__C preset) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setHeadphoneEQPreset(preset);
      }
      
int agora_rtc__IRtcEngine__setHeadphoneEQParameters(agora_rtc__IRtcEngine__Handle handle,int lowGain,int highGain) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setHeadphoneEQParameters(lowGain,highGain);
      }
      
int agora_rtc__IRtcEngine__setLogFile(agora_rtc__IRtcEngine__Handle handle,const char* filePath) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLogFile(filePath);
      }
      
int agora_rtc__IRtcEngine__setLogFilter(agora_rtc__IRtcEngine__Handle handle,unsigned int filter) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLogFilter(filter);
      }
      
int agora_rtc__IRtcEngine__setLogLevel(agora_rtc__IRtcEngine__Handle handle,agora_commons__LOG_LEVEL__C level) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLogLevel(level);
      }
      
int agora_rtc__IRtcEngine__setLogFileSize(agora_rtc__IRtcEngine__Handle handle,unsigned int fileSizeInKBytes) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLogFileSize(fileSizeInKBytes);
      }
      
int agora_rtc__IRtcEngine__uploadLogFile(agora_rtc__IRtcEngine__Handle handle,char * requestId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->uploadLogFile(requestId);
      }
      
int agora_rtc__IRtcEngine__setLocalRenderMode(agora_rtc__IRtcEngine__Handle handle,agora_media_base__RENDER_MODE_TYPE__C renderMode,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalRenderMode(renderMode,mirrorMode);
      }
      
int agora_rtc__IRtcEngine__setRemoteRenderMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_media_base__RENDER_MODE_TYPE__C renderMode,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteRenderMode(uid,renderMode,mirrorMode);
      }
      
int agora_rtc__IRtcEngine__setLocalRenderMode(agora_rtc__IRtcEngine__Handle handle,agora_media_base__RENDER_MODE_TYPE__C renderMode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalRenderMode(renderMode);
      }
      
int agora_rtc__IRtcEngine__setLocalVideoMirrorMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalVideoMirrorMode(mirrorMode);
      }
      
int agora_rtc__IRtcEngine__enableDualStreamMode(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableDualStreamMode(enabled);
      }
      
int agora_rtc__IRtcEngine__enableDualStreamMode(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__SimulcastStreamConfig__C& streamConfig) {
        agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = streamConfig.dimensions.width;
theVideoDimensions.height = streamConfig.dimensions.height;
agora::rtc::rtc::SimulcastStreamConfig theSimulcastStreamConfig;
theSimulcastStreamConfig.dimensions = theVideoDimensions;
theSimulcastStreamConfig.kBitrate = streamConfig.kBitrate;
theSimulcastStreamConfig.framerate = streamConfig.framerate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableDualStreamMode(enabled,theSimulcastStreamConfig);
      }
      
int agora_rtc__IRtcEngine__setDualStreamMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__SIMULCAST_STREAM_MODE__C mode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setDualStreamMode(mode);
      }
      
int agora_rtc__IRtcEngine__setDualStreamMode(agora_rtc__IRtcEngine__Handle handle,agora_rtc__SIMULCAST_STREAM_MODE__C mode,const agora_rtc__SimulcastStreamConfig__C& streamConfig) {
        agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = streamConfig.dimensions.width;
theVideoDimensions.height = streamConfig.dimensions.height;
agora::rtc::rtc::SimulcastStreamConfig theSimulcastStreamConfig;
theSimulcastStreamConfig.dimensions = theVideoDimensions;
theSimulcastStreamConfig.kBitrate = streamConfig.kBitrate;
theSimulcastStreamConfig.framerate = streamConfig.framerate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setDualStreamMode(mode,theSimulcastStreamConfig);
      }
      
int agora_rtc__IRtcEngine__enableCustomAudioLocalPlayback(agora_rtc__IRtcEngine__Handle handle,agora_rtc__track_id_t__C trackId,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableCustomAudioLocalPlayback(trackId,enabled);
      }
      
int agora_rtc__IRtcEngine__setRecordingAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode,int samplesPerCall) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRecordingAudioFrameParameters(sampleRate,channel,mode,samplesPerCall);
      }
      
int agora_rtc__IRtcEngine__setPlaybackAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode,int samplesPerCall) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setPlaybackAudioFrameParameters(sampleRate,channel,mode,samplesPerCall);
      }
      
int agora_rtc__IRtcEngine__setMixedAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,int samplesPerCall) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setMixedAudioFrameParameters(sampleRate,channel,samplesPerCall);
      }
      
int agora_rtc__IRtcEngine__setEarMonitoringAudioFrameParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel,agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode,int samplesPerCall) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setEarMonitoringAudioFrameParameters(sampleRate,channel,mode,samplesPerCall);
      }
      
int agora_rtc__IRtcEngine__setPlaybackAudioFrameBeforeMixingParameters(agora_rtc__IRtcEngine__Handle handle,int sampleRate,int channel) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setPlaybackAudioFrameBeforeMixingParameters(sampleRate,channel);
      }
      
int agora_rtc__IRtcEngine__enableAudioSpectrumMonitor(agora_rtc__IRtcEngine__Handle handle,int intervalInMS) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableAudioSpectrumMonitor(intervalInMS);
      }
      
int agora_rtc__IRtcEngine__disableAudioSpectrumMonitor(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->disableAudioSpectrumMonitor();
      }
      
int agora_rtc__IRtcEngine__registerAudioSpectrumObserver(agora_rtc__IRtcEngine__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->registerAudioSpectrumObserver(observer);
      }
      
int agora_rtc__IRtcEngine__unregisterAudioSpectrumObserver(agora_rtc__IRtcEngine__Handle handle,agora_media__IAudioSpectrumObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->unregisterAudioSpectrumObserver(observer);
      }
      
int agora_rtc__IRtcEngine__adjustRecordingSignalVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustRecordingSignalVolume(volume);
      }
      
int agora_rtc__IRtcEngine__muteRecordingSignal(agora_rtc__IRtcEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->muteRecordingSignal(mute);
      }
      
int agora_rtc__IRtcEngine__adjustPlaybackSignalVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustPlaybackSignalVolume(volume);
      }
      
int agora_rtc__IRtcEngine__adjustUserPlaybackSignalVolume(agora_rtc__IRtcEngine__Handle handle,unsigned int uid,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustUserPlaybackSignalVolume(uid,volume);
      }
      
int agora_rtc__IRtcEngine__setLocalPublishFallbackOption(agora_rtc__IRtcEngine__Handle handle,agora_rtc__STREAM_FALLBACK_OPTIONS__C option) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalPublishFallbackOption(option);
      }
      
int agora_rtc__IRtcEngine__setRemoteSubscribeFallbackOption(agora_rtc__IRtcEngine__Handle handle,agora_rtc__STREAM_FALLBACK_OPTIONS__C option) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteSubscribeFallbackOption(option);
      }
      
int agora_rtc__IRtcEngine__setHighPriorityUserList(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C* uidList,int uidNum,agora_rtc__STREAM_FALLBACK_OPTIONS__C option) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setHighPriorityUserList(uidList,uidNum,option);
      }
      
int agora_rtc__IRtcEngine__enableLoopbackRecording(agora_rtc__IRtcEngine__Handle handle,bool enabled,const char* deviceName) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableLoopbackRecording(enabled,deviceName);
      }
      
int agora_rtc__IRtcEngine__adjustLoopbackSignalVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustLoopbackSignalVolume(volume);
      }
      
int agora_rtc__IRtcEngine__getLoopbackRecordingVolume(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getLoopbackRecordingVolume();
      }
      
int agora_rtc__IRtcEngine__enableInEarMonitoring(agora_rtc__IRtcEngine__Handle handle,bool enabled,int includeAudioFilters) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableInEarMonitoring(enabled,includeAudioFilters);
      }
      
int agora_rtc__IRtcEngine__setInEarMonitoringVolume(agora_rtc__IRtcEngine__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setInEarMonitoringVolume(volume);
      }
      
int agora_rtc__IRtcEngine__loadExtensionProvider(agora_rtc__IRtcEngine__Handle handle,const char* path,bool unload_after_use) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->loadExtensionProvider(path,unload_after_use);
      }
      
int agora_rtc__IRtcEngine__setExtensionProviderProperty(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* key,const char* value) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setExtensionProviderProperty(provider,key,value);
      }
      
int agora_rtc__IRtcEngine__registerExtension(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* extension,agora_media__MEDIA_SOURCE_TYPE__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->registerExtension(provider,extension,type);
      }
      
int agora_rtc__IRtcEngine__enableExtension(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* extension,bool enable,agora_media__MEDIA_SOURCE_TYPE__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableExtension(provider,extension,enable,type);
      }
      
int agora_rtc__IRtcEngine__enableExtension(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* extension,const agora_rtc__ExtensionInfo__C& extensionInfo,bool enable) {
        agora::rtc::rtc::ExtensionInfo theExtensionInfo;
theExtensionInfo.mediaSourceType = extensionInfo.mediaSourceType;
theExtensionInfo.remoteUid = extensionInfo.remoteUid;
theExtensionInfo.channelId = extensionInfo.channelId;
theExtensionInfo.localUid = extensionInfo.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableExtension(provider,extension,theExtensionInfo,enable);
      }
      
int agora_rtc__IRtcEngine__setExtensionProperty(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* extension,const char* key,const char* value,agora_media__MEDIA_SOURCE_TYPE__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setExtensionProperty(provider,extension,key,value,type);
      }
      
int agora_rtc__IRtcEngine__getExtensionProperty(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* extension,const char* key,char* value,int buf_len,agora_media__MEDIA_SOURCE_TYPE__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getExtensionProperty(provider,extension,key,value,buf_len,type);
      }
      
int agora_rtc__IRtcEngine__setExtensionProperty(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* extension,const agora_rtc__ExtensionInfo__C& extensionInfo,const char* key,const char* value) {
        agora::rtc::rtc::ExtensionInfo theExtensionInfo;
theExtensionInfo.mediaSourceType = extensionInfo.mediaSourceType;
theExtensionInfo.remoteUid = extensionInfo.remoteUid;
theExtensionInfo.channelId = extensionInfo.channelId;
theExtensionInfo.localUid = extensionInfo.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setExtensionProperty(provider,extension,theExtensionInfo,key,value);
      }
      
int agora_rtc__IRtcEngine__getExtensionProperty(agora_rtc__IRtcEngine__Handle handle,const char* provider,const char* extension,const agora_rtc__ExtensionInfo__C& extensionInfo,const char* key,char* value,int buf_len) {
        agora::rtc::rtc::ExtensionInfo theExtensionInfo;
theExtensionInfo.mediaSourceType = extensionInfo.mediaSourceType;
theExtensionInfo.remoteUid = extensionInfo.remoteUid;
theExtensionInfo.channelId = extensionInfo.channelId;
theExtensionInfo.localUid = extensionInfo.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getExtensionProperty(provider,extension,theExtensionInfo,key,value,buf_len);
      }
      
int agora_rtc__IRtcEngine__setCameraCapturerConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__CameraCapturerConfiguration__C& config) {
        agora::rtc::rtc::VideoFormat theVideoFormat;
theVideoFormat.width = config.format.width;
theVideoFormat.height = config.format.height;
theVideoFormat.fps = config.format.fps;
agora::rtc::rtc::CameraCapturerConfiguration theCameraCapturerConfiguration;
theCameraCapturerConfiguration.cameraDirection = config.cameraDirection;
theCameraCapturerConfiguration.deviceId = config.deviceId;
theCameraCapturerConfiguration.format = theVideoFormat;
theCameraCapturerConfiguration.followEncodeDimensionRatio = config.followEncodeDimensionRatio;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraCapturerConfiguration(theCameraCapturerConfiguration);
      }
      
agora_rtc__video_track_id_t__C agora_rtc__IRtcEngine__createCustomVideoTrack(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->createCustomVideoTrack();
      }
      
agora_rtc__video_track_id_t__C agora_rtc__IRtcEngine__createCustomEncodedVideoTrack(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__SenderOptions__C& sender_option) {
        agora::rtc::rtc::SenderOptions theSenderOptions;
theSenderOptions.ccMode = sender_option.ccMode;
theSenderOptions.codecType = sender_option.codecType;
theSenderOptions.targetBitrate = sender_option.targetBitrate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->createCustomEncodedVideoTrack(theSenderOptions);
      }
      
int agora_rtc__IRtcEngine__destroyCustomVideoTrack(agora_rtc__IRtcEngine__Handle handle,agora_rtc__video_track_id_t__C video_track_id) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->destroyCustomVideoTrack(video_track_id);
      }
      
int agora_rtc__IRtcEngine__destroyCustomEncodedVideoTrack(agora_rtc__IRtcEngine__Handle handle,agora_rtc__video_track_id_t__C video_track_id) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->destroyCustomEncodedVideoTrack(video_track_id);
      }
      
int agora_rtc__IRtcEngine__switchCamera(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->switchCamera();
      }
      
bool agora_rtc__IRtcEngine__isCameraZoomSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraZoomSupported();
      }
      
bool agora_rtc__IRtcEngine__isCameraFaceDetectSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraFaceDetectSupported();
      }
      
bool agora_rtc__IRtcEngine__isCameraTorchSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraTorchSupported();
      }
      
bool agora_rtc__IRtcEngine__isCameraFocusSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraFocusSupported();
      }
      
bool agora_rtc__IRtcEngine__isCameraAutoFocusFaceModeSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraAutoFocusFaceModeSupported();
      }
      
int agora_rtc__IRtcEngine__setCameraZoomFactor(agora_rtc__IRtcEngine__Handle handle,float factor) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraZoomFactor(factor);
      }
      
int agora_rtc__IRtcEngine__enableFaceDetection(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableFaceDetection(enabled);
      }
      
float agora_rtc__IRtcEngine__getCameraMaxZoomFactor(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getCameraMaxZoomFactor();
      }
      
int agora_rtc__IRtcEngine__setCameraFocusPositionInPreview(agora_rtc__IRtcEngine__Handle handle,float positionX,float positionY) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraFocusPositionInPreview(positionX,positionY);
      }
      
int agora_rtc__IRtcEngine__setCameraTorchOn(agora_rtc__IRtcEngine__Handle handle,bool isOn) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraTorchOn(isOn);
      }
      
int agora_rtc__IRtcEngine__setCameraAutoFocusFaceModeEnabled(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraAutoFocusFaceModeEnabled(enabled);
      }
      
bool agora_rtc__IRtcEngine__isCameraExposurePositionSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraExposurePositionSupported();
      }
      
int agora_rtc__IRtcEngine__setCameraExposurePosition(agora_rtc__IRtcEngine__Handle handle,float positionXinView,float positionYinView) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraExposurePosition(positionXinView,positionYinView);
      }
      
bool agora_rtc__IRtcEngine__isCameraExposureSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraExposureSupported();
      }
      
int agora_rtc__IRtcEngine__setCameraExposureFactor(agora_rtc__IRtcEngine__Handle handle,float factor) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraExposureFactor(factor);
      }
      
bool agora_rtc__IRtcEngine__isCameraAutoExposureFaceModeSupported(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isCameraAutoExposureFaceModeSupported();
      }
      
int agora_rtc__IRtcEngine__setCameraAutoExposureFaceModeEnabled(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraAutoExposureFaceModeEnabled(enabled);
      }
      
int agora_rtc__IRtcEngine__setDefaultAudioRouteToSpeakerphone(agora_rtc__IRtcEngine__Handle handle,bool defaultToSpeaker) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setDefaultAudioRouteToSpeakerphone(defaultToSpeaker);
      }
      
int agora_rtc__IRtcEngine__setEnableSpeakerphone(agora_rtc__IRtcEngine__Handle handle,bool speakerOn) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setEnableSpeakerphone(speakerOn);
      }
      
bool agora_rtc__IRtcEngine__isSpeakerphoneEnabled(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isSpeakerphoneEnabled();
      }
      
int agora_rtc__IRtcEngine__setRouteInCommunicationMode(agora_rtc__IRtcEngine__Handle handle,int route) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRouteInCommunicationMode(route);
      }
      
agora_rtc__IScreenCaptureSourceList__Handle* agora_rtc__IRtcEngine__getScreenCaptureSources(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__SIZE__C& thumbSize,const agora_rtc__SIZE__C& iconSize,const bool includeScreen) {
        agora::rtc::rtc::SIZE theSIZE;
theSIZE.width = thumbSize.width;
theSIZE.height = thumbSize.height;
agora::rtc::rtc::SIZE theSIZE;
theSIZE.width = iconSize.width;
theSIZE.height = iconSize.height;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getScreenCaptureSources(theSIZE,theSIZE,includeScreen);
      }
      
int agora_rtc__IRtcEngine__setAudioSessionOperationRestriction(agora_rtc__IRtcEngine__Handle handle,agora__AUDIO_SESSION_OPERATION_RESTRICTION__C restriction) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAudioSessionOperationRestriction(restriction);
      }
      
int agora_rtc__IRtcEngine__startScreenCaptureByDisplayId(agora_rtc__IRtcEngine__Handle handle,uint32_t displayId,const agora_rtc__Rectangle__C& regionRect,const agora_rtc__ScreenCaptureParameters__C& captureParams) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = regionRect.x;
theRectangle.y = regionRect.y;
theRectangle.width = regionRect.width;
theRectangle.height = regionRect.height;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = captureParams.dimensions.width;
theVideoDimensions.height = captureParams.dimensions.height;
agora::rtc::rtc::ScreenCaptureParameters theScreenCaptureParameters;
theScreenCaptureParameters.dimensions = theVideoDimensions;
theScreenCaptureParameters.frameRate = captureParams.frameRate;
theScreenCaptureParameters.bitrate = captureParams.bitrate;
theScreenCaptureParameters.captureMouseCursor = captureParams.captureMouseCursor;
theScreenCaptureParameters.windowFocus = captureParams.windowFocus;
theScreenCaptureParameters.excludeWindowList = captureParams.excludeWindowList;
theScreenCaptureParameters.excludeWindowCount = captureParams.excludeWindowCount;
theScreenCaptureParameters.highLightWidth = captureParams.highLightWidth;
theScreenCaptureParameters.highLightColor = captureParams.highLightColor;
theScreenCaptureParameters.enableHighLight = captureParams.enableHighLight;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startScreenCaptureByDisplayId(displayId,theRectangle,theScreenCaptureParameters);
      }
      
int agora_rtc__IRtcEngine__startScreenCaptureByScreenRect(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__Rectangle__C& screenRect,const agora_rtc__Rectangle__C& regionRect,const agora_rtc__ScreenCaptureParameters__C& captureParams) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = screenRect.x;
theRectangle.y = screenRect.y;
theRectangle.width = screenRect.width;
theRectangle.height = screenRect.height;
agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = regionRect.x;
theRectangle.y = regionRect.y;
theRectangle.width = regionRect.width;
theRectangle.height = regionRect.height;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = captureParams.dimensions.width;
theVideoDimensions.height = captureParams.dimensions.height;
agora::rtc::rtc::ScreenCaptureParameters theScreenCaptureParameters;
theScreenCaptureParameters.dimensions = theVideoDimensions;
theScreenCaptureParameters.frameRate = captureParams.frameRate;
theScreenCaptureParameters.bitrate = captureParams.bitrate;
theScreenCaptureParameters.captureMouseCursor = captureParams.captureMouseCursor;
theScreenCaptureParameters.windowFocus = captureParams.windowFocus;
theScreenCaptureParameters.excludeWindowList = captureParams.excludeWindowList;
theScreenCaptureParameters.excludeWindowCount = captureParams.excludeWindowCount;
theScreenCaptureParameters.highLightWidth = captureParams.highLightWidth;
theScreenCaptureParameters.highLightColor = captureParams.highLightColor;
theScreenCaptureParameters.enableHighLight = captureParams.enableHighLight;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startScreenCaptureByScreenRect(theRectangle,theRectangle,theScreenCaptureParameters);
      }
      
int agora_rtc__IRtcEngine__getAudioDeviceInfo(agora_rtc__IRtcEngine__Handle handle,agora_rtc__DeviceInfo__C& deviceInfo) {
        agora::rtc::rtc::DeviceInfo theDeviceInfo;
theDeviceInfo.isLowLatencyAudioSupported = deviceInfo.isLowLatencyAudioSupported;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getAudioDeviceInfo(theDeviceInfo);
      }
      
int agora_rtc__IRtcEngine__startScreenCaptureByWindowId(agora_rtc__IRtcEngine__Handle handle,agora__view_t__C windowId,const agora_rtc__Rectangle__C& regionRect,const agora_rtc__ScreenCaptureParameters__C& captureParams) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = regionRect.x;
theRectangle.y = regionRect.y;
theRectangle.width = regionRect.width;
theRectangle.height = regionRect.height;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = captureParams.dimensions.width;
theVideoDimensions.height = captureParams.dimensions.height;
agora::rtc::rtc::ScreenCaptureParameters theScreenCaptureParameters;
theScreenCaptureParameters.dimensions = theVideoDimensions;
theScreenCaptureParameters.frameRate = captureParams.frameRate;
theScreenCaptureParameters.bitrate = captureParams.bitrate;
theScreenCaptureParameters.captureMouseCursor = captureParams.captureMouseCursor;
theScreenCaptureParameters.windowFocus = captureParams.windowFocus;
theScreenCaptureParameters.excludeWindowList = captureParams.excludeWindowList;
theScreenCaptureParameters.excludeWindowCount = captureParams.excludeWindowCount;
theScreenCaptureParameters.highLightWidth = captureParams.highLightWidth;
theScreenCaptureParameters.highLightColor = captureParams.highLightColor;
theScreenCaptureParameters.enableHighLight = captureParams.enableHighLight;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startScreenCaptureByWindowId(windowId,theRectangle,theScreenCaptureParameters);
      }
      
int agora_rtc__IRtcEngine__setScreenCaptureContentHint(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_CONTENT_HINT__C contentHint) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setScreenCaptureContentHint(contentHint);
      }
      
int agora_rtc__IRtcEngine__updateScreenCaptureRegion(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__Rectangle__C& regionRect) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = regionRect.x;
theRectangle.y = regionRect.y;
theRectangle.width = regionRect.width;
theRectangle.height = regionRect.height;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateScreenCaptureRegion(theRectangle);
      }
      
int agora_rtc__IRtcEngine__updateScreenCaptureParameters(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ScreenCaptureParameters__C& captureParams) {
        agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = captureParams.dimensions.width;
theVideoDimensions.height = captureParams.dimensions.height;
agora::rtc::rtc::ScreenCaptureParameters theScreenCaptureParameters;
theScreenCaptureParameters.dimensions = theVideoDimensions;
theScreenCaptureParameters.frameRate = captureParams.frameRate;
theScreenCaptureParameters.bitrate = captureParams.bitrate;
theScreenCaptureParameters.captureMouseCursor = captureParams.captureMouseCursor;
theScreenCaptureParameters.windowFocus = captureParams.windowFocus;
theScreenCaptureParameters.excludeWindowList = captureParams.excludeWindowList;
theScreenCaptureParameters.excludeWindowCount = captureParams.excludeWindowCount;
theScreenCaptureParameters.highLightWidth = captureParams.highLightWidth;
theScreenCaptureParameters.highLightColor = captureParams.highLightColor;
theScreenCaptureParameters.enableHighLight = captureParams.enableHighLight;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateScreenCaptureParameters(theScreenCaptureParameters);
      }
      
int agora_rtc__IRtcEngine__startScreenCapture(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ScreenCaptureParameters2__C& captureParams) {
        agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = captureParams.videoParams.dimensions.width;
theVideoDimensions.height = captureParams.videoParams.dimensions.height;
agora::rtc::rtc::ScreenVideoParameters theScreenVideoParameters;
theScreenVideoParameters.dimensions = theVideoDimensions;
theScreenVideoParameters.frameRate = captureParams.videoParams.frameRate;
theScreenVideoParameters.bitrate = captureParams.videoParams.bitrate;
theScreenVideoParameters.contentHint = captureParams.videoParams.contentHint;
agora::rtc::rtc::ScreenAudioParameters theScreenAudioParameters;
theScreenAudioParameters.sampleRate = captureParams.audioParams.sampleRate;
theScreenAudioParameters.channels = captureParams.audioParams.channels;
theScreenAudioParameters.captureSignalVolume = captureParams.audioParams.captureSignalVolume;
agora::rtc::rtc::ScreenCaptureParameters2 theScreenCaptureParameters2;
theScreenCaptureParameters2.captureAudio = captureParams.captureAudio;
theScreenCaptureParameters2.audioParams = theScreenAudioParameters;
theScreenCaptureParameters2.captureVideo = captureParams.captureVideo;
theScreenCaptureParameters2.videoParams = theScreenVideoParameters;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startScreenCapture(theScreenCaptureParameters2);
      }
      
int agora_rtc__IRtcEngine__updateScreenCapture(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ScreenCaptureParameters2__C& captureParams) {
        agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = captureParams.videoParams.dimensions.width;
theVideoDimensions.height = captureParams.videoParams.dimensions.height;
agora::rtc::rtc::ScreenVideoParameters theScreenVideoParameters;
theScreenVideoParameters.dimensions = theVideoDimensions;
theScreenVideoParameters.frameRate = captureParams.videoParams.frameRate;
theScreenVideoParameters.bitrate = captureParams.videoParams.bitrate;
theScreenVideoParameters.contentHint = captureParams.videoParams.contentHint;
agora::rtc::rtc::ScreenAudioParameters theScreenAudioParameters;
theScreenAudioParameters.sampleRate = captureParams.audioParams.sampleRate;
theScreenAudioParameters.channels = captureParams.audioParams.channels;
theScreenAudioParameters.captureSignalVolume = captureParams.audioParams.captureSignalVolume;
agora::rtc::rtc::ScreenCaptureParameters2 theScreenCaptureParameters2;
theScreenCaptureParameters2.captureAudio = captureParams.captureAudio;
theScreenCaptureParameters2.audioParams = theScreenAudioParameters;
theScreenCaptureParameters2.captureVideo = captureParams.captureVideo;
theScreenCaptureParameters2.videoParams = theScreenVideoParameters;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateScreenCapture(theScreenCaptureParameters2);
      }
      
int agora_rtc__IRtcEngine__queryScreenCaptureCapability(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->queryScreenCaptureCapability();
      }
      
int agora_rtc__IRtcEngine__setScreenCaptureScenario(agora_rtc__IRtcEngine__Handle handle,agora_rtc__SCREEN_SCENARIO_TYPE__C screenScenario) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setScreenCaptureScenario(screenScenario);
      }
      
int agora_rtc__IRtcEngine__stopScreenCapture(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopScreenCapture();
      }
      
int agora_rtc__IRtcEngine__getCallId(agora_rtc__IRtcEngine__Handle handle,char * callId) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getCallId(callId);
      }
      
int agora_rtc__IRtcEngine__rate(agora_rtc__IRtcEngine__Handle handle,const char* callId,int rating,const char* description) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->rate(callId,rating,description);
      }
      
int agora_rtc__IRtcEngine__complain(agora_rtc__IRtcEngine__Handle handle,const char* callId,const char* description) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->complain(callId,description);
      }
      
int agora_rtc__IRtcEngine__startRtmpStreamWithoutTranscoding(agora_rtc__IRtcEngine__Handle handle,const char* url) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startRtmpStreamWithoutTranscoding(url);
      }
      
int agora_rtc__IRtcEngine__startRtmpStreamWithTranscoding(agora_rtc__IRtcEngine__Handle handle,const char* url,const agora_rtc__LiveTranscoding__C& transcoding) {
        agora::rtc::rtc::LiveStreamAdvancedFeature theLiveStreamAdvancedFeature;
theLiveStreamAdvancedFeature.featureName = transcoding.advancedFeatures.featureName;
theLiveStreamAdvancedFeature.opened = transcoding.advancedFeatures.opened;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.backgroundImage.url;
theRtcImage.x = transcoding.backgroundImage.x;
theRtcImage.y = transcoding.backgroundImage.y;
theRtcImage.width = transcoding.backgroundImage.width;
theRtcImage.height = transcoding.backgroundImage.height;
theRtcImage.zOrder = transcoding.backgroundImage.zOrder;
theRtcImage.alpha = transcoding.backgroundImage.alpha;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.watermark.url;
theRtcImage.x = transcoding.watermark.x;
theRtcImage.y = transcoding.watermark.y;
theRtcImage.width = transcoding.watermark.width;
theRtcImage.height = transcoding.watermark.height;
theRtcImage.zOrder = transcoding.watermark.zOrder;
theRtcImage.alpha = transcoding.watermark.alpha;
agora::rtc::rtc::TranscodingUser theTranscodingUser;
theTranscodingUser.uid = transcoding.transcodingUsers.uid;
theTranscodingUser.x = transcoding.transcodingUsers.x;
theTranscodingUser.y = transcoding.transcodingUsers.y;
theTranscodingUser.width = transcoding.transcodingUsers.width;
theTranscodingUser.height = transcoding.transcodingUsers.height;
theTranscodingUser.zOrder = transcoding.transcodingUsers.zOrder;
theTranscodingUser.alpha = transcoding.transcodingUsers.alpha;
theTranscodingUser.audioChannel = transcoding.transcodingUsers.audioChannel;
agora::rtc::rtc::LiveTranscoding theLiveTranscoding;
theLiveTranscoding.width = transcoding.width;
theLiveTranscoding.height = transcoding.height;
theLiveTranscoding.videoBitrate = transcoding.videoBitrate;
theLiveTranscoding.videoFramerate = transcoding.videoFramerate;
theLiveTranscoding.lowLatency = transcoding.lowLatency;
theLiveTranscoding.videoGop = transcoding.videoGop;
theLiveTranscoding.videoCodecProfile = transcoding.videoCodecProfile;
theLiveTranscoding.backgroundColor = transcoding.backgroundColor;
theLiveTranscoding.videoCodecType = transcoding.videoCodecType;
theLiveTranscoding.userCount = transcoding.userCount;
theLiveTranscoding.transcodingUsers = theTranscodingUser;
theLiveTranscoding.transcodingExtraInfo = transcoding.transcodingExtraInfo;
theLiveTranscoding.metadata = transcoding.metadata;
theLiveTranscoding.watermark = theRtcImage;
theLiveTranscoding.watermarkCount = transcoding.watermarkCount;
theLiveTranscoding.backgroundImage = theRtcImage;
theLiveTranscoding.backgroundImageCount = transcoding.backgroundImageCount;
theLiveTranscoding.audioSampleRate = transcoding.audioSampleRate;
theLiveTranscoding.audioBitrate = transcoding.audioBitrate;
theLiveTranscoding.audioChannels = transcoding.audioChannels;
theLiveTranscoding.audioCodecProfile = transcoding.audioCodecProfile;
theLiveTranscoding.advancedFeatures = theLiveStreamAdvancedFeature;
theLiveTranscoding.advancedFeatureCount = transcoding.advancedFeatureCount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startRtmpStreamWithTranscoding(url,theLiveTranscoding);
      }
      
int agora_rtc__IRtcEngine__updateRtmpTranscoding(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LiveTranscoding__C& transcoding) {
        agora::rtc::rtc::LiveStreamAdvancedFeature theLiveStreamAdvancedFeature;
theLiveStreamAdvancedFeature.featureName = transcoding.advancedFeatures.featureName;
theLiveStreamAdvancedFeature.opened = transcoding.advancedFeatures.opened;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.backgroundImage.url;
theRtcImage.x = transcoding.backgroundImage.x;
theRtcImage.y = transcoding.backgroundImage.y;
theRtcImage.width = transcoding.backgroundImage.width;
theRtcImage.height = transcoding.backgroundImage.height;
theRtcImage.zOrder = transcoding.backgroundImage.zOrder;
theRtcImage.alpha = transcoding.backgroundImage.alpha;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.watermark.url;
theRtcImage.x = transcoding.watermark.x;
theRtcImage.y = transcoding.watermark.y;
theRtcImage.width = transcoding.watermark.width;
theRtcImage.height = transcoding.watermark.height;
theRtcImage.zOrder = transcoding.watermark.zOrder;
theRtcImage.alpha = transcoding.watermark.alpha;
agora::rtc::rtc::TranscodingUser theTranscodingUser;
theTranscodingUser.uid = transcoding.transcodingUsers.uid;
theTranscodingUser.x = transcoding.transcodingUsers.x;
theTranscodingUser.y = transcoding.transcodingUsers.y;
theTranscodingUser.width = transcoding.transcodingUsers.width;
theTranscodingUser.height = transcoding.transcodingUsers.height;
theTranscodingUser.zOrder = transcoding.transcodingUsers.zOrder;
theTranscodingUser.alpha = transcoding.transcodingUsers.alpha;
theTranscodingUser.audioChannel = transcoding.transcodingUsers.audioChannel;
agora::rtc::rtc::LiveTranscoding theLiveTranscoding;
theLiveTranscoding.width = transcoding.width;
theLiveTranscoding.height = transcoding.height;
theLiveTranscoding.videoBitrate = transcoding.videoBitrate;
theLiveTranscoding.videoFramerate = transcoding.videoFramerate;
theLiveTranscoding.lowLatency = transcoding.lowLatency;
theLiveTranscoding.videoGop = transcoding.videoGop;
theLiveTranscoding.videoCodecProfile = transcoding.videoCodecProfile;
theLiveTranscoding.backgroundColor = transcoding.backgroundColor;
theLiveTranscoding.videoCodecType = transcoding.videoCodecType;
theLiveTranscoding.userCount = transcoding.userCount;
theLiveTranscoding.transcodingUsers = theTranscodingUser;
theLiveTranscoding.transcodingExtraInfo = transcoding.transcodingExtraInfo;
theLiveTranscoding.metadata = transcoding.metadata;
theLiveTranscoding.watermark = theRtcImage;
theLiveTranscoding.watermarkCount = transcoding.watermarkCount;
theLiveTranscoding.backgroundImage = theRtcImage;
theLiveTranscoding.backgroundImageCount = transcoding.backgroundImageCount;
theLiveTranscoding.audioSampleRate = transcoding.audioSampleRate;
theLiveTranscoding.audioBitrate = transcoding.audioBitrate;
theLiveTranscoding.audioChannels = transcoding.audioChannels;
theLiveTranscoding.audioCodecProfile = transcoding.audioCodecProfile;
theLiveTranscoding.advancedFeatures = theLiveStreamAdvancedFeature;
theLiveTranscoding.advancedFeatureCount = transcoding.advancedFeatureCount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateRtmpTranscoding(theLiveTranscoding);
      }
      
int agora_rtc__IRtcEngine__stopRtmpStream(agora_rtc__IRtcEngine__Handle handle,const char* url) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopRtmpStream(url);
      }
      
int agora_rtc__IRtcEngine__startLocalVideoTranscoder(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LocalTranscoderConfiguration__C& config) {
        agora::rtc::rtc::AdvanceOptions theAdvanceOptions;
theAdvanceOptions.encodingPreference = config.videoOutputConfiguration.advanceOptions.encodingPreference;
theAdvanceOptions.compressionPreference = config.videoOutputConfiguration.advanceOptions.compressionPreference;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = config.videoOutputConfiguration.dimensions.width;
theVideoDimensions.height = config.videoOutputConfiguration.dimensions.height;
agora::rtc::rtc::VideoEncoderConfiguration theVideoEncoderConfiguration;
theVideoEncoderConfiguration.codecType = config.videoOutputConfiguration.codecType;
theVideoEncoderConfiguration.dimensions = theVideoDimensions;
theVideoEncoderConfiguration.frameRate = config.videoOutputConfiguration.frameRate;
theVideoEncoderConfiguration.bitrate = config.videoOutputConfiguration.bitrate;
theVideoEncoderConfiguration.minBitrate = config.videoOutputConfiguration.minBitrate;
theVideoEncoderConfiguration.orientationMode = config.videoOutputConfiguration.orientationMode;
theVideoEncoderConfiguration.degradationPreference = config.videoOutputConfiguration.degradationPreference;
theVideoEncoderConfiguration.mirrorMode = config.videoOutputConfiguration.mirrorMode;
theVideoEncoderConfiguration.advanceOptions = theAdvanceOptions;
agora::rtc::rtc::TranscodingVideoStream theTranscodingVideoStream;
theTranscodingVideoStream.sourceType = config.videoInputStreams.sourceType;
theTranscodingVideoStream.remoteUserUid = config.videoInputStreams.remoteUserUid;
theTranscodingVideoStream.imageUrl = config.videoInputStreams.imageUrl;
theTranscodingVideoStream.mediaPlayerId = config.videoInputStreams.mediaPlayerId;
theTranscodingVideoStream.x = config.videoInputStreams.x;
theTranscodingVideoStream.y = config.videoInputStreams.y;
theTranscodingVideoStream.width = config.videoInputStreams.width;
theTranscodingVideoStream.height = config.videoInputStreams.height;
theTranscodingVideoStream.zOrder = config.videoInputStreams.zOrder;
theTranscodingVideoStream.alpha = config.videoInputStreams.alpha;
theTranscodingVideoStream.mirror = config.videoInputStreams.mirror;
agora::rtc::rtc::LocalTranscoderConfiguration theLocalTranscoderConfiguration;
theLocalTranscoderConfiguration.streamCount = config.streamCount;
theLocalTranscoderConfiguration.videoInputStreams = theTranscodingVideoStream;
theLocalTranscoderConfiguration.videoOutputConfiguration = theVideoEncoderConfiguration;
theLocalTranscoderConfiguration.syncWithPrimaryCamera = config.syncWithPrimaryCamera;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startLocalVideoTranscoder(theLocalTranscoderConfiguration);
      }
      
int agora_rtc__IRtcEngine__updateLocalTranscoderConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LocalTranscoderConfiguration__C& config) {
        agora::rtc::rtc::AdvanceOptions theAdvanceOptions;
theAdvanceOptions.encodingPreference = config.videoOutputConfiguration.advanceOptions.encodingPreference;
theAdvanceOptions.compressionPreference = config.videoOutputConfiguration.advanceOptions.compressionPreference;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = config.videoOutputConfiguration.dimensions.width;
theVideoDimensions.height = config.videoOutputConfiguration.dimensions.height;
agora::rtc::rtc::VideoEncoderConfiguration theVideoEncoderConfiguration;
theVideoEncoderConfiguration.codecType = config.videoOutputConfiguration.codecType;
theVideoEncoderConfiguration.dimensions = theVideoDimensions;
theVideoEncoderConfiguration.frameRate = config.videoOutputConfiguration.frameRate;
theVideoEncoderConfiguration.bitrate = config.videoOutputConfiguration.bitrate;
theVideoEncoderConfiguration.minBitrate = config.videoOutputConfiguration.minBitrate;
theVideoEncoderConfiguration.orientationMode = config.videoOutputConfiguration.orientationMode;
theVideoEncoderConfiguration.degradationPreference = config.videoOutputConfiguration.degradationPreference;
theVideoEncoderConfiguration.mirrorMode = config.videoOutputConfiguration.mirrorMode;
theVideoEncoderConfiguration.advanceOptions = theAdvanceOptions;
agora::rtc::rtc::TranscodingVideoStream theTranscodingVideoStream;
theTranscodingVideoStream.sourceType = config.videoInputStreams.sourceType;
theTranscodingVideoStream.remoteUserUid = config.videoInputStreams.remoteUserUid;
theTranscodingVideoStream.imageUrl = config.videoInputStreams.imageUrl;
theTranscodingVideoStream.mediaPlayerId = config.videoInputStreams.mediaPlayerId;
theTranscodingVideoStream.x = config.videoInputStreams.x;
theTranscodingVideoStream.y = config.videoInputStreams.y;
theTranscodingVideoStream.width = config.videoInputStreams.width;
theTranscodingVideoStream.height = config.videoInputStreams.height;
theTranscodingVideoStream.zOrder = config.videoInputStreams.zOrder;
theTranscodingVideoStream.alpha = config.videoInputStreams.alpha;
theTranscodingVideoStream.mirror = config.videoInputStreams.mirror;
agora::rtc::rtc::LocalTranscoderConfiguration theLocalTranscoderConfiguration;
theLocalTranscoderConfiguration.streamCount = config.streamCount;
theLocalTranscoderConfiguration.videoInputStreams = theTranscodingVideoStream;
theLocalTranscoderConfiguration.videoOutputConfiguration = theVideoEncoderConfiguration;
theLocalTranscoderConfiguration.syncWithPrimaryCamera = config.syncWithPrimaryCamera;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateLocalTranscoderConfiguration(theLocalTranscoderConfiguration);
      }
      
int agora_rtc__IRtcEngine__stopLocalVideoTranscoder(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopLocalVideoTranscoder();
      }
      
int agora_rtc__IRtcEngine__startCameraCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,const agora_rtc__CameraCapturerConfiguration__C& config) {
        agora::rtc::rtc::VideoFormat theVideoFormat;
theVideoFormat.width = config.format.width;
theVideoFormat.height = config.format.height;
theVideoFormat.fps = config.format.fps;
agora::rtc::rtc::CameraCapturerConfiguration theCameraCapturerConfiguration;
theCameraCapturerConfiguration.cameraDirection = config.cameraDirection;
theCameraCapturerConfiguration.deviceId = config.deviceId;
theCameraCapturerConfiguration.format = theVideoFormat;
theCameraCapturerConfiguration.followEncodeDimensionRatio = config.followEncodeDimensionRatio;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startCameraCapture(sourceType,theCameraCapturerConfiguration);
      }
      
int agora_rtc__IRtcEngine__stopCameraCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopCameraCapture(sourceType);
      }
      
int agora_rtc__IRtcEngine__setCameraDeviceOrientation(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C type,agora_rtc__VIDEO_ORIENTATION__C orientation) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCameraDeviceOrientation(type,orientation);
      }
      
int agora_rtc__IRtcEngine__setScreenCaptureOrientation(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C type,agora_rtc__VIDEO_ORIENTATION__C orientation) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setScreenCaptureOrientation(type,orientation);
      }
      
int agora_rtc__IRtcEngine__startScreenCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,const agora_rtc__ScreenCaptureConfiguration__C& config) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = config.regionRect.x;
theRectangle.y = config.regionRect.y;
theRectangle.width = config.regionRect.width;
theRectangle.height = config.regionRect.height;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = config.params.dimensions.width;
theVideoDimensions.height = config.params.dimensions.height;
agora::rtc::rtc::ScreenCaptureParameters theScreenCaptureParameters;
theScreenCaptureParameters.dimensions = theVideoDimensions;
theScreenCaptureParameters.frameRate = config.params.frameRate;
theScreenCaptureParameters.bitrate = config.params.bitrate;
theScreenCaptureParameters.captureMouseCursor = config.params.captureMouseCursor;
theScreenCaptureParameters.windowFocus = config.params.windowFocus;
theScreenCaptureParameters.excludeWindowList = config.params.excludeWindowList;
theScreenCaptureParameters.excludeWindowCount = config.params.excludeWindowCount;
theScreenCaptureParameters.highLightWidth = config.params.highLightWidth;
theScreenCaptureParameters.highLightColor = config.params.highLightColor;
theScreenCaptureParameters.enableHighLight = config.params.enableHighLight;
agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = config.screenRect.x;
theRectangle.y = config.screenRect.y;
theRectangle.width = config.screenRect.width;
theRectangle.height = config.screenRect.height;
agora::rtc::rtc::ScreenCaptureConfiguration theScreenCaptureConfiguration;
theScreenCaptureConfiguration.isCaptureWindow = config.isCaptureWindow;
theScreenCaptureConfiguration.displayId = config.displayId;
theScreenCaptureConfiguration.screenRect = theRectangle;
theScreenCaptureConfiguration.windowId = config.windowId;
theScreenCaptureConfiguration.params = theScreenCaptureParameters;
theScreenCaptureConfiguration.regionRect = theRectangle;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startScreenCapture(sourceType,theScreenCaptureConfiguration);
      }
      
int agora_rtc__IRtcEngine__stopScreenCapture(agora_rtc__IRtcEngine__Handle handle,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopScreenCapture(sourceType);
      }
      
agora_rtc__CONNECTION_STATE_TYPE__C agora_rtc__IRtcEngine__getConnectionState(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getConnectionState();
      }
      
bool agora_rtc__IRtcEngine__registerEventHandler(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->registerEventHandler(eventHandler);
      }
      
bool agora_rtc__IRtcEngine__unregisterEventHandler(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->unregisterEventHandler(eventHandler);
      }
      
int agora_rtc__IRtcEngine__setRemoteUserPriority(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__PRIORITY_TYPE__C userPriority) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setRemoteUserPriority(uid,userPriority);
      }
      
int agora_rtc__IRtcEngine__registerPacketObserver(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IPacketObserver__Handle* observer) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->registerPacketObserver(observer);
      }
      
int agora_rtc__IRtcEngine__setEncryptionMode(agora_rtc__IRtcEngine__Handle handle,const char* encryptionMode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setEncryptionMode(encryptionMode);
      }
      
int agora_rtc__IRtcEngine__setEncryptionSecret(agora_rtc__IRtcEngine__Handle handle,const char* secret) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setEncryptionSecret(secret);
      }
      
int agora_rtc__IRtcEngine__enableEncryption(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_rtc__EncryptionConfig__C& config) {
        agora::rtc::rtc::EncryptionConfig theEncryptionConfig;
theEncryptionConfig.encryptionMode = config.encryptionMode;
theEncryptionConfig.encryptionKey = config.encryptionKey;
theEncryptionConfig.encryptionKdfSalt = config.encryptionKdfSalt;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableEncryption(enabled,theEncryptionConfig);
      }
      
int agora_rtc__IRtcEngine__createDataStream(agora_rtc__IRtcEngine__Handle handle,int* streamId,bool reliable,bool ordered) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->createDataStream(streamId,reliable,ordered);
      }
      
int agora_rtc__IRtcEngine__createDataStream(agora_rtc__IRtcEngine__Handle handle,int* streamId,agora_rtc__DataStreamConfig__C& config) {
        agora::rtc::rtc::DataStreamConfig theDataStreamConfig;
theDataStreamConfig.syncWithAudio = config.syncWithAudio;
theDataStreamConfig.ordered = config.ordered;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->createDataStream(streamId,theDataStreamConfig);
      }
      
int agora_rtc__IRtcEngine__sendStreamMessage(agora_rtc__IRtcEngine__Handle handle,int streamId,const char* data,size_t length) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->sendStreamMessage(streamId,data,length);
      }
      
int agora_rtc__IRtcEngine__addVideoWatermark(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__RtcImage__C& watermark) {
        agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = watermark.url;
theRtcImage.x = watermark.x;
theRtcImage.y = watermark.y;
theRtcImage.width = watermark.width;
theRtcImage.height = watermark.height;
theRtcImage.zOrder = watermark.zOrder;
theRtcImage.alpha = watermark.alpha;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->addVideoWatermark(theRtcImage);
      }
      
int agora_rtc__IRtcEngine__addVideoWatermark(agora_rtc__IRtcEngine__Handle handle,const char* watermarkUrl,const agora_rtc__WatermarkOptions__C& options) {
        agora::rtc::rtc::WatermarkRatio theWatermarkRatio;
theWatermarkRatio.xRatio = options.watermarkRatio.xRatio;
theWatermarkRatio.yRatio = options.watermarkRatio.yRatio;
theWatermarkRatio.widthRatio = options.watermarkRatio.widthRatio;
agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = options.positionInPortraitMode.x;
theRectangle.y = options.positionInPortraitMode.y;
theRectangle.width = options.positionInPortraitMode.width;
theRectangle.height = options.positionInPortraitMode.height;
agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = options.positionInLandscapeMode.x;
theRectangle.y = options.positionInLandscapeMode.y;
theRectangle.width = options.positionInLandscapeMode.width;
theRectangle.height = options.positionInLandscapeMode.height;
agora::rtc::rtc::WatermarkOptions theWatermarkOptions;
theWatermarkOptions.visibleInPreview = options.visibleInPreview;
theWatermarkOptions.positionInLandscapeMode = theRectangle;
theWatermarkOptions.positionInPortraitMode = theRectangle;
theWatermarkOptions.watermarkRatio = theWatermarkRatio;
theWatermarkOptions.mode = options.mode;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->addVideoWatermark(watermarkUrl,theWatermarkOptions);
      }
      
int agora_rtc__IRtcEngine__clearVideoWatermarks(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->clearVideoWatermarks();
      }
      
int agora_rtc__IRtcEngine__pauseAudio(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->pauseAudio();
      }
      
int agora_rtc__IRtcEngine__resumeAudio(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->resumeAudio();
      }
      
int agora_rtc__IRtcEngine__enableWebSdkInteroperability(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableWebSdkInteroperability(enabled);
      }
      
int agora_rtc__IRtcEngine__sendCustomReportMessage(agora_rtc__IRtcEngine__Handle handle,const char* id,const char* category,const char* event,const char* label,int value) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->sendCustomReportMessage(id,category,event,label,value);
      }
      
int agora_rtc__IRtcEngine__registerMediaMetadataObserver(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMetadataObserver__Handle* observer,agora_rtc__METADATA_TYPE__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->registerMediaMetadataObserver(observer,type);
      }
      
int agora_rtc__IRtcEngine__unregisterMediaMetadataObserver(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IMetadataObserver__Handle* observer,agora_rtc__METADATA_TYPE__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->unregisterMediaMetadataObserver(observer,type);
      }
      
int agora_rtc__IRtcEngine__startAudioFrameDump(agora_rtc__IRtcEngine__Handle handle,const char* channel_id,agora_rtc__uid_t__C user_id,const char* location,const char* uuid,const char* passwd,long duration_ms,bool auto_upload) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startAudioFrameDump(channel_id,user_id,location,uuid,passwd,duration_ms,auto_upload);
      }
      
int agora_rtc__IRtcEngine__stopAudioFrameDump(agora_rtc__IRtcEngine__Handle handle,const char* channel_id,agora_rtc__uid_t__C user_id,const char* location) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopAudioFrameDump(channel_id,user_id,location);
      }
      
int agora_rtc__IRtcEngine__setAINSMode(agora_rtc__IRtcEngine__Handle handle,bool enabled,agora_rtc__AUDIO_AINS_MODE__C mode) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAINSMode(enabled,mode);
      }
      
int agora_rtc__IRtcEngine__registerLocalUserAccount(agora_rtc__IRtcEngine__Handle handle,const char* appId,const char* userAccount) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->registerLocalUserAccount(appId,userAccount);
      }
      
int agora_rtc__IRtcEngine__joinChannelWithUserAccount(agora_rtc__IRtcEngine__Handle handle,const char* token,const char* channelId,const char* userAccount) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->joinChannelWithUserAccount(token,channelId,userAccount);
      }
      
int agora_rtc__IRtcEngine__joinChannelWithUserAccount(agora_rtc__IRtcEngine__Handle handle,const char* token,const char* channelId,const char* userAccount,const agora_rtc__ChannelMediaOptions__C& options) {
        agora::rtc::rtc::ChannelMediaOptions theChannelMediaOptions;
theChannelMediaOptions.publishCameraTrack = options.publishCameraTrack;
theChannelMediaOptions.publishSecondaryCameraTrack = options.publishSecondaryCameraTrack;
theChannelMediaOptions.publishThirdCameraTrack = options.publishThirdCameraTrack;
theChannelMediaOptions.publishFourthCameraTrack = options.publishFourthCameraTrack;
theChannelMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theChannelMediaOptions.publishScreenCaptureVideo = options.publishScreenCaptureVideo;
theChannelMediaOptions.publishScreenCaptureAudio = options.publishScreenCaptureAudio;
theChannelMediaOptions.publishScreenTrack = options.publishScreenTrack;
theChannelMediaOptions.publishSecondaryScreenTrack = options.publishSecondaryScreenTrack;
theChannelMediaOptions.publishThirdScreenTrack = options.publishThirdScreenTrack;
theChannelMediaOptions.publishFourthScreenTrack = options.publishFourthScreenTrack;
theChannelMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theChannelMediaOptions.publishCustomAudioTrackId = options.publishCustomAudioTrackId;
theChannelMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theChannelMediaOptions.publishEncodedVideoTrack = options.publishEncodedVideoTrack;
theChannelMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theChannelMediaOptions.publishMediaPlayerVideoTrack = options.publishMediaPlayerVideoTrack;
theChannelMediaOptions.publishTranscodedVideoTrack = options.publishTranscodedVideoTrack;
theChannelMediaOptions.autoSubscribeAudio = options.autoSubscribeAudio;
theChannelMediaOptions.autoSubscribeVideo = options.autoSubscribeVideo;
theChannelMediaOptions.enableAudioRecordingOrPlayout = options.enableAudioRecordingOrPlayout;
theChannelMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theChannelMediaOptions.clientRoleType = options.clientRoleType;
theChannelMediaOptions.audienceLatencyLevel = options.audienceLatencyLevel;
theChannelMediaOptions.defaultVideoStreamType = options.defaultVideoStreamType;
theChannelMediaOptions.channelProfile = options.channelProfile;
theChannelMediaOptions.audioDelayMs = options.audioDelayMs;
theChannelMediaOptions.mediaPlayerAudioDelayMs = options.mediaPlayerAudioDelayMs;
theChannelMediaOptions.token = options.token;
theChannelMediaOptions.enableBuiltInMediaEncryption = options.enableBuiltInMediaEncryption;
theChannelMediaOptions.publishRhythmPlayerTrack = options.publishRhythmPlayerTrack;
theChannelMediaOptions.isInteractiveAudience = options.isInteractiveAudience;
theChannelMediaOptions.customVideoTrackId = options.customVideoTrackId;
theChannelMediaOptions.isAudioFilterable = options.isAudioFilterable;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->joinChannelWithUserAccount(token,channelId,userAccount,theChannelMediaOptions);
      }
      
int agora_rtc__IRtcEngine__joinChannelWithUserAccountEx(agora_rtc__IRtcEngine__Handle handle,const char* token,const char* channelId,const char* userAccount,const agora_rtc__ChannelMediaOptions__C& options,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler) {
        agora::rtc::rtc::ChannelMediaOptions theChannelMediaOptions;
theChannelMediaOptions.publishCameraTrack = options.publishCameraTrack;
theChannelMediaOptions.publishSecondaryCameraTrack = options.publishSecondaryCameraTrack;
theChannelMediaOptions.publishThirdCameraTrack = options.publishThirdCameraTrack;
theChannelMediaOptions.publishFourthCameraTrack = options.publishFourthCameraTrack;
theChannelMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theChannelMediaOptions.publishScreenCaptureVideo = options.publishScreenCaptureVideo;
theChannelMediaOptions.publishScreenCaptureAudio = options.publishScreenCaptureAudio;
theChannelMediaOptions.publishScreenTrack = options.publishScreenTrack;
theChannelMediaOptions.publishSecondaryScreenTrack = options.publishSecondaryScreenTrack;
theChannelMediaOptions.publishThirdScreenTrack = options.publishThirdScreenTrack;
theChannelMediaOptions.publishFourthScreenTrack = options.publishFourthScreenTrack;
theChannelMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theChannelMediaOptions.publishCustomAudioTrackId = options.publishCustomAudioTrackId;
theChannelMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theChannelMediaOptions.publishEncodedVideoTrack = options.publishEncodedVideoTrack;
theChannelMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theChannelMediaOptions.publishMediaPlayerVideoTrack = options.publishMediaPlayerVideoTrack;
theChannelMediaOptions.publishTranscodedVideoTrack = options.publishTranscodedVideoTrack;
theChannelMediaOptions.autoSubscribeAudio = options.autoSubscribeAudio;
theChannelMediaOptions.autoSubscribeVideo = options.autoSubscribeVideo;
theChannelMediaOptions.enableAudioRecordingOrPlayout = options.enableAudioRecordingOrPlayout;
theChannelMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theChannelMediaOptions.clientRoleType = options.clientRoleType;
theChannelMediaOptions.audienceLatencyLevel = options.audienceLatencyLevel;
theChannelMediaOptions.defaultVideoStreamType = options.defaultVideoStreamType;
theChannelMediaOptions.channelProfile = options.channelProfile;
theChannelMediaOptions.audioDelayMs = options.audioDelayMs;
theChannelMediaOptions.mediaPlayerAudioDelayMs = options.mediaPlayerAudioDelayMs;
theChannelMediaOptions.token = options.token;
theChannelMediaOptions.enableBuiltInMediaEncryption = options.enableBuiltInMediaEncryption;
theChannelMediaOptions.publishRhythmPlayerTrack = options.publishRhythmPlayerTrack;
theChannelMediaOptions.isInteractiveAudience = options.isInteractiveAudience;
theChannelMediaOptions.customVideoTrackId = options.customVideoTrackId;
theChannelMediaOptions.isAudioFilterable = options.isAudioFilterable;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->joinChannelWithUserAccountEx(token,channelId,userAccount,theChannelMediaOptions,eventHandler);
      }
      
int agora_rtc__IRtcEngine__getUserInfoByUserAccount(agora_rtc__IRtcEngine__Handle handle,const char* userAccount,agora_rtc__UserInfo__C* userInfo) {
        agora::rtc::rtc::UserInfo theUserInfo;
theUserInfo.uid = userInfo.uid;
theUserInfo.userAccount = userInfo.userAccount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getUserInfoByUserAccount(userAccount,theUserInfo);
      }
      
int agora_rtc__IRtcEngine__getUserInfoByUid(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__UserInfo__C* userInfo) {
        agora::rtc::rtc::UserInfo theUserInfo;
theUserInfo.uid = userInfo.uid;
theUserInfo.userAccount = userInfo.userAccount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getUserInfoByUid(uid,theUserInfo);
      }
      
int agora_rtc__IRtcEngine__startOrUpdateChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration) {
        agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.destInfos.channelName;
theChannelMediaInfo.token = configuration.destInfos.token;
theChannelMediaInfo.uid = configuration.destInfos.uid;
agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.srcInfo.channelName;
theChannelMediaInfo.token = configuration.srcInfo.token;
theChannelMediaInfo.uid = configuration.srcInfo.uid;
agora::rtc::rtc::ChannelMediaRelayConfiguration theChannelMediaRelayConfiguration;
theChannelMediaRelayConfiguration.srcInfo = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destInfos = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destCount = configuration.destCount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startOrUpdateChannelMediaRelay(theChannelMediaRelayConfiguration);
      }
      
int agora_rtc__IRtcEngine__startChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration) {
        agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.destInfos.channelName;
theChannelMediaInfo.token = configuration.destInfos.token;
theChannelMediaInfo.uid = configuration.destInfos.uid;
agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.srcInfo.channelName;
theChannelMediaInfo.token = configuration.srcInfo.token;
theChannelMediaInfo.uid = configuration.srcInfo.uid;
agora::rtc::rtc::ChannelMediaRelayConfiguration theChannelMediaRelayConfiguration;
theChannelMediaRelayConfiguration.srcInfo = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destInfos = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destCount = configuration.destCount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startChannelMediaRelay(theChannelMediaRelayConfiguration);
      }
      
int agora_rtc__IRtcEngine__updateChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration) {
        agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.destInfos.channelName;
theChannelMediaInfo.token = configuration.destInfos.token;
theChannelMediaInfo.uid = configuration.destInfos.uid;
agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.srcInfo.channelName;
theChannelMediaInfo.token = configuration.srcInfo.token;
theChannelMediaInfo.uid = configuration.srcInfo.uid;
agora::rtc::rtc::ChannelMediaRelayConfiguration theChannelMediaRelayConfiguration;
theChannelMediaRelayConfiguration.srcInfo = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destInfos = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destCount = configuration.destCount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateChannelMediaRelay(theChannelMediaRelayConfiguration);
      }
      
int agora_rtc__IRtcEngine__stopChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopChannelMediaRelay();
      }
      
int agora_rtc__IRtcEngine__pauseAllChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->pauseAllChannelMediaRelay();
      }
      
int agora_rtc__IRtcEngine__resumeAllChannelMediaRelay(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->resumeAllChannelMediaRelay();
      }
      
int agora_rtc__IRtcEngine__setDirectCdnStreamingAudioConfiguration(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AUDIO_PROFILE_TYPE__C profile) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setDirectCdnStreamingAudioConfiguration(profile);
      }
      
int agora_rtc__IRtcEngine__setDirectCdnStreamingVideoConfiguration(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__VideoEncoderConfiguration__C& config) {
        agora::rtc::rtc::AdvanceOptions theAdvanceOptions;
theAdvanceOptions.encodingPreference = config.advanceOptions.encodingPreference;
theAdvanceOptions.compressionPreference = config.advanceOptions.compressionPreference;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = config.dimensions.width;
theVideoDimensions.height = config.dimensions.height;
agora::rtc::rtc::VideoEncoderConfiguration theVideoEncoderConfiguration;
theVideoEncoderConfiguration.codecType = config.codecType;
theVideoEncoderConfiguration.dimensions = theVideoDimensions;
theVideoEncoderConfiguration.frameRate = config.frameRate;
theVideoEncoderConfiguration.bitrate = config.bitrate;
theVideoEncoderConfiguration.minBitrate = config.minBitrate;
theVideoEncoderConfiguration.orientationMode = config.orientationMode;
theVideoEncoderConfiguration.degradationPreference = config.degradationPreference;
theVideoEncoderConfiguration.mirrorMode = config.mirrorMode;
theVideoEncoderConfiguration.advanceOptions = theAdvanceOptions;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setDirectCdnStreamingVideoConfiguration(theVideoEncoderConfiguration);
      }
      
int agora_rtc__IRtcEngine__startDirectCdnStreaming(agora_rtc__IRtcEngine__Handle handle,agora_rtc__IDirectCdnStreamingEventHandler__Handle* eventHandler,const char* publishUrl,const agora_rtc__DirectCdnStreamingMediaOptions__C& options) {
        agora::rtc::rtc::DirectCdnStreamingMediaOptions theDirectCdnStreamingMediaOptions;
theDirectCdnStreamingMediaOptions.publishCameraTrack = options.publishCameraTrack;
theDirectCdnStreamingMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theDirectCdnStreamingMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theDirectCdnStreamingMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theDirectCdnStreamingMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theDirectCdnStreamingMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theDirectCdnStreamingMediaOptions.customVideoTrackId = options.customVideoTrackId;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startDirectCdnStreaming(eventHandler,publishUrl,theDirectCdnStreamingMediaOptions);
      }
      
int agora_rtc__IRtcEngine__stopDirectCdnStreaming(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopDirectCdnStreaming();
      }
      
int agora_rtc__IRtcEngine__updateDirectCdnStreamingMediaOptions(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__DirectCdnStreamingMediaOptions__C& options) {
        agora::rtc::rtc::DirectCdnStreamingMediaOptions theDirectCdnStreamingMediaOptions;
theDirectCdnStreamingMediaOptions.publishCameraTrack = options.publishCameraTrack;
theDirectCdnStreamingMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theDirectCdnStreamingMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theDirectCdnStreamingMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theDirectCdnStreamingMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theDirectCdnStreamingMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theDirectCdnStreamingMediaOptions.customVideoTrackId = options.customVideoTrackId;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->updateDirectCdnStreamingMediaOptions(theDirectCdnStreamingMediaOptions);
      }
      
int agora_rtc__IRtcEngine__startRhythmPlayer(agora_rtc__IRtcEngine__Handle handle,const char* sound1,const char* sound2,const agora_rtc__AgoraRhythmPlayerConfig__C& config) {
        agora::rtc::rtc::AgoraRhythmPlayerConfig theAgoraRhythmPlayerConfig;
theAgoraRhythmPlayerConfig.beatsPerMeasure = config.beatsPerMeasure;
theAgoraRhythmPlayerConfig.beatsPerMinute = config.beatsPerMinute;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startRhythmPlayer(sound1,sound2,theAgoraRhythmPlayerConfig);
      }
      
int agora_rtc__IRtcEngine__stopRhythmPlayer(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->stopRhythmPlayer();
      }
      
int agora_rtc__IRtcEngine__configRhythmPlayer(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__AgoraRhythmPlayerConfig__C& config) {
        agora::rtc::rtc::AgoraRhythmPlayerConfig theAgoraRhythmPlayerConfig;
theAgoraRhythmPlayerConfig.beatsPerMeasure = config.beatsPerMeasure;
theAgoraRhythmPlayerConfig.beatsPerMinute = config.beatsPerMinute;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->configRhythmPlayer(theAgoraRhythmPlayerConfig);
      }
      
int agora_rtc__IRtcEngine__takeSnapshot(agora_rtc__IRtcEngine__Handle handle,agora_rtc__uid_t__C uid,const char* filePath) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->takeSnapshot(uid,filePath);
      }
      
int agora_rtc__IRtcEngine__enableContentInspect(agora_rtc__IRtcEngine__Handle handle,bool enabled,const agora_media__ContentInspectConfig__C& config) {
        agora::media::media::ContentInspectModule theContentInspectModule;
theContentInspectModule.type = config.modules.type;
theContentInspectModule.interval = config.modules.interval;
agora::media::media::ContentInspectConfig theContentInspectConfig;
theContentInspectConfig.extraInfo = config.extraInfo;
theContentInspectConfig.serverConfig = config.serverConfig;
theContentInspectConfig.modules = theContentInspectModule;
theContentInspectConfig.moduleCount = config.moduleCount;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableContentInspect(enabled,theContentInspectConfig);
      }
      
int agora_rtc__IRtcEngine__adjustCustomAudioPublishVolume(agora_rtc__IRtcEngine__Handle handle,agora_rtc__track_id_t__C trackId,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustCustomAudioPublishVolume(trackId,volume);
      }
      
int agora_rtc__IRtcEngine__adjustCustomAudioPlayoutVolume(agora_rtc__IRtcEngine__Handle handle,agora_rtc__track_id_t__C trackId,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->adjustCustomAudioPlayoutVolume(trackId,volume);
      }
      
int agora_rtc__IRtcEngine__setCloudProxy(agora_rtc__IRtcEngine__Handle handle,agora_rtc__CLOUD_PROXY_TYPE__C proxyType) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setCloudProxy(proxyType);
      }
      
int agora_rtc__IRtcEngine__setLocalAccessPoint(agora_rtc__IRtcEngine__Handle handle,const agora_rtc__LocalAccessPointConfiguration__C& config) {
        agora::rtc::rtc::LogUploadServerInfo theLogUploadServerInfo;
theLogUploadServerInfo.serverDomain = config.advancedConfig.logUploadServer.serverDomain;
theLogUploadServerInfo.serverPath = config.advancedConfig.logUploadServer.serverPath;
theLogUploadServerInfo.serverPort = config.advancedConfig.logUploadServer.serverPort;
theLogUploadServerInfo.serverHttps = config.advancedConfig.logUploadServer.serverHttps;
agora::rtc::rtc::AdvancedConfigInfo theAdvancedConfigInfo;
theAdvancedConfigInfo.logUploadServer = theLogUploadServerInfo;
agora::rtc::rtc::LocalAccessPointConfiguration theLocalAccessPointConfiguration;
theLocalAccessPointConfiguration.ipList = config.ipList;
theLocalAccessPointConfiguration.ipListSize = config.ipListSize;
theLocalAccessPointConfiguration.domainList = config.domainList;
theLocalAccessPointConfiguration.domainListSize = config.domainListSize;
theLocalAccessPointConfiguration.verifyDomainName = config.verifyDomainName;
theLocalAccessPointConfiguration.mode = config.mode;
theLocalAccessPointConfiguration.advancedConfig = theAdvancedConfigInfo;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setLocalAccessPoint(theLocalAccessPointConfiguration);
      }
      
int agora_rtc__IRtcEngine__setAdvancedAudioOptions(agora_rtc__IRtcEngine__Handle handle,agora_rtc__AdvancedAudioOptions__C& options,int sourceType) {
        agora::rtc::rtc::AdvancedAudioOptions theAdvancedAudioOptions;
theAdvancedAudioOptions.audioProcessingChannels = options.audioProcessingChannels;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAdvancedAudioOptions(theAdvancedAudioOptions,sourceType);
      }
      
int agora_rtc__IRtcEngine__setAVSyncSource(agora_rtc__IRtcEngine__Handle handle,const char* channelId,agora_rtc__uid_t__C uid) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setAVSyncSource(channelId,uid);
      }
      
int agora_rtc__IRtcEngine__enableVideoImageSource(agora_rtc__IRtcEngine__Handle handle,bool enable,const agora_rtc__ImageTrackOptions__C& options) {
        agora::rtc::rtc::ImageTrackOptions theImageTrackOptions;
theImageTrackOptions.imageUrl = options.imageUrl;
theImageTrackOptions.fps = options.fps;
theImageTrackOptions.mirrorMode = options.mirrorMode;
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableVideoImageSource(enable,theImageTrackOptions);
      }
      
int64_t agora_rtc__IRtcEngine__getCurrentMonotonicTimeInMs(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getCurrentMonotonicTimeInMs();
      }
      
int agora_rtc__IRtcEngine__enableWirelessAccelerate(agora_rtc__IRtcEngine__Handle handle,bool enabled) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableWirelessAccelerate(enabled);
      }
      
int agora_rtc__IRtcEngine__getNetworkType(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getNetworkType();
      }
      
int agora_rtc__IRtcEngine__setParameters(agora_rtc__IRtcEngine__Handle handle,const char* parameters) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->setParameters(parameters);
      }
      
int agora_rtc__IRtcEngine__startMediaRenderingTracing(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->startMediaRenderingTracing();
      }
      
int agora_rtc__IRtcEngine__enableInstantMediaRendering(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->enableInstantMediaRendering();
      }
      
uint64_t agora_rtc__IRtcEngine__getNtpWallTimeInMs(agora_rtc__IRtcEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->getNtpWallTimeInMs();
      }
      
bool agora_rtc__IRtcEngine__isFeatureAvailableOnDevice(agora_rtc__IRtcEngine__Handle handle,agora_rtc__FeatureType__C type) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngine *>(handle)->isFeatureAvailableOnDevice(type);
      }
      


const char* agora_rtc__IRtcEngineEventHandlerEx__eventHandlerType(agora_rtc__IRtcEngineEventHandlerEx__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->eventHandlerType();
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onJoinChannelSuccess(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onJoinChannelSuccess(theRtcConnection,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRejoinChannelSuccess(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRejoinChannelSuccess(theRtcConnection,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onAudioQuality(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int quality,unsigned short delay,unsigned short lost) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onAudioQuality(theRtcConnection,remoteUid,quality,delay,lost);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onAudioVolumeIndication(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__AudioVolumeInfo__C* speakers,unsigned int speakerNumber,int totalVolume) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::AudioVolumeInfo theAudioVolumeInfo;
theAudioVolumeInfo.uid = speakers.uid;
theAudioVolumeInfo.volume = speakers.volume;
theAudioVolumeInfo.vad = speakers.vad;
theAudioVolumeInfo.voicePitch = speakers.voicePitch;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onAudioVolumeIndication(theRtcConnection,theAudioVolumeInfo,speakerNumber,totalVolume);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onLeaveChannel(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RtcStats__C& stats) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::RtcStats theRtcStats;
theRtcStats.duration = stats.duration;
theRtcStats.txBytes = stats.txBytes;
theRtcStats.rxBytes = stats.rxBytes;
theRtcStats.txAudioBytes = stats.txAudioBytes;
theRtcStats.txVideoBytes = stats.txVideoBytes;
theRtcStats.rxAudioBytes = stats.rxAudioBytes;
theRtcStats.rxVideoBytes = stats.rxVideoBytes;
theRtcStats.txKBitRate = stats.txKBitRate;
theRtcStats.rxKBitRate = stats.rxKBitRate;
theRtcStats.rxAudioKBitRate = stats.rxAudioKBitRate;
theRtcStats.txAudioKBitRate = stats.txAudioKBitRate;
theRtcStats.rxVideoKBitRate = stats.rxVideoKBitRate;
theRtcStats.txVideoKBitRate = stats.txVideoKBitRate;
theRtcStats.lastmileDelay = stats.lastmileDelay;
theRtcStats.userCount = stats.userCount;
theRtcStats.cpuAppUsage = stats.cpuAppUsage;
theRtcStats.cpuTotalUsage = stats.cpuTotalUsage;
theRtcStats.gatewayRtt = stats.gatewayRtt;
theRtcStats.memoryAppUsageRatio = stats.memoryAppUsageRatio;
theRtcStats.memoryTotalUsageRatio = stats.memoryTotalUsageRatio;
theRtcStats.memoryAppUsageInKbytes = stats.memoryAppUsageInKbytes;
theRtcStats.connectTimeMs = stats.connectTimeMs;
theRtcStats.firstAudioPacketDuration = stats.firstAudioPacketDuration;
theRtcStats.firstVideoPacketDuration = stats.firstVideoPacketDuration;
theRtcStats.firstVideoKeyFramePacketDuration = stats.firstVideoKeyFramePacketDuration;
theRtcStats.packetsBeforeFirstKeyFramePacket = stats.packetsBeforeFirstKeyFramePacket;
theRtcStats.firstAudioPacketDurationAfterUnmute = stats.firstAudioPacketDurationAfterUnmute;
theRtcStats.firstVideoPacketDurationAfterUnmute = stats.firstVideoPacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFramePacketDurationAfterUnmute = stats.firstVideoKeyFramePacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameDecodedDurationAfterUnmute = stats.firstVideoKeyFrameDecodedDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameRenderedDurationAfterUnmute = stats.firstVideoKeyFrameRenderedDurationAfterUnmute;
theRtcStats.txPacketLossRate = stats.txPacketLossRate;
theRtcStats.rxPacketLossRate = stats.rxPacketLossRate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onLeaveChannel(theRtcConnection,theRtcStats);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRtcStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RtcStats__C& stats) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::RtcStats theRtcStats;
theRtcStats.duration = stats.duration;
theRtcStats.txBytes = stats.txBytes;
theRtcStats.rxBytes = stats.rxBytes;
theRtcStats.txAudioBytes = stats.txAudioBytes;
theRtcStats.txVideoBytes = stats.txVideoBytes;
theRtcStats.rxAudioBytes = stats.rxAudioBytes;
theRtcStats.rxVideoBytes = stats.rxVideoBytes;
theRtcStats.txKBitRate = stats.txKBitRate;
theRtcStats.rxKBitRate = stats.rxKBitRate;
theRtcStats.rxAudioKBitRate = stats.rxAudioKBitRate;
theRtcStats.txAudioKBitRate = stats.txAudioKBitRate;
theRtcStats.rxVideoKBitRate = stats.rxVideoKBitRate;
theRtcStats.txVideoKBitRate = stats.txVideoKBitRate;
theRtcStats.lastmileDelay = stats.lastmileDelay;
theRtcStats.userCount = stats.userCount;
theRtcStats.cpuAppUsage = stats.cpuAppUsage;
theRtcStats.cpuTotalUsage = stats.cpuTotalUsage;
theRtcStats.gatewayRtt = stats.gatewayRtt;
theRtcStats.memoryAppUsageRatio = stats.memoryAppUsageRatio;
theRtcStats.memoryTotalUsageRatio = stats.memoryTotalUsageRatio;
theRtcStats.memoryAppUsageInKbytes = stats.memoryAppUsageInKbytes;
theRtcStats.connectTimeMs = stats.connectTimeMs;
theRtcStats.firstAudioPacketDuration = stats.firstAudioPacketDuration;
theRtcStats.firstVideoPacketDuration = stats.firstVideoPacketDuration;
theRtcStats.firstVideoKeyFramePacketDuration = stats.firstVideoKeyFramePacketDuration;
theRtcStats.packetsBeforeFirstKeyFramePacket = stats.packetsBeforeFirstKeyFramePacket;
theRtcStats.firstAudioPacketDurationAfterUnmute = stats.firstAudioPacketDurationAfterUnmute;
theRtcStats.firstVideoPacketDurationAfterUnmute = stats.firstVideoPacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFramePacketDurationAfterUnmute = stats.firstVideoKeyFramePacketDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameDecodedDurationAfterUnmute = stats.firstVideoKeyFrameDecodedDurationAfterUnmute;
theRtcStats.firstVideoKeyFrameRenderedDurationAfterUnmute = stats.firstVideoKeyFrameRenderedDurationAfterUnmute;
theRtcStats.txPacketLossRate = stats.txPacketLossRate;
theRtcStats.rxPacketLossRate = stats.rxPacketLossRate;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRtcStats(theRtcConnection,theRtcStats);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onNetworkQuality(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int txQuality,int rxQuality) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onNetworkQuality(theRtcConnection,remoteUid,txQuality,rxQuality);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onIntraRequestReceived(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onIntraRequestReceived(theRtcConnection);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onFirstLocalVideoFramePublished(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onFirstLocalVideoFramePublished(theRtcConnection,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteVideoDecoded(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int width,int height,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onFirstRemoteVideoDecoded(theRtcConnection,remoteUid,width,height,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onVideoSizeChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__VIDEO_SOURCE_TYPE__C sourceType,agora_rtc__uid_t__C uid,int width,int height,int rotation) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onVideoSizeChanged(theRtcConnection,sourceType,uid,width,height,rotation);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onLocalVideoStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__LOCAL_VIDEO_STREAM_STATE__C state,agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C errorCode) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onLocalVideoStateChanged(theRtcConnection,state,errorCode);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteVideoStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,agora_rtc__REMOTE_VIDEO_STATE__C state,agora_rtc__REMOTE_VIDEO_STATE_REASON__C reason,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRemoteVideoStateChanged(theRtcConnection,remoteUid,state,reason,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteVideoFrame(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int width,int height,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onFirstRemoteVideoFrame(theRtcConnection,remoteUid,width,height,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserJoined(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserJoined(theRtcConnection,remoteUid,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserOffline(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,agora_rtc__USER_OFFLINE_REASON_TYPE__C reason) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserOffline(theRtcConnection,remoteUid,reason);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserMuteAudio(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool muted) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserMuteAudio(theRtcConnection,remoteUid,muted);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserMuteVideo(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool muted) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserMuteVideo(theRtcConnection,remoteUid,muted);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserEnableVideo(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool enabled) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserEnableVideo(theRtcConnection,remoteUid,enabled);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserEnableLocalVideo(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,bool enabled) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserEnableLocalVideo(theRtcConnection,remoteUid,enabled);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,uint32_t state) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserStateChanged(theRtcConnection,remoteUid,state);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onLocalAudioStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__LocalAudioStats__C& stats) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::LocalAudioStats theLocalAudioStats;
theLocalAudioStats.numChannels = stats.numChannels;
theLocalAudioStats.sentSampleRate = stats.sentSampleRate;
theLocalAudioStats.sentBitrate = stats.sentBitrate;
theLocalAudioStats.internalCodec = stats.internalCodec;
theLocalAudioStats.txPacketLossRate = stats.txPacketLossRate;
theLocalAudioStats.audioDeviceDelay = stats.audioDeviceDelay;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onLocalAudioStats(theRtcConnection,theLocalAudioStats);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteAudioStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RemoteAudioStats__C& stats) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::RemoteAudioStats theRemoteAudioStats;
theRemoteAudioStats.uid = stats.uid;
theRemoteAudioStats.quality = stats.quality;
theRemoteAudioStats.networkTransportDelay = stats.networkTransportDelay;
theRemoteAudioStats.jitterBufferDelay = stats.jitterBufferDelay;
theRemoteAudioStats.audioLossRate = stats.audioLossRate;
theRemoteAudioStats.numChannels = stats.numChannels;
theRemoteAudioStats.receivedSampleRate = stats.receivedSampleRate;
theRemoteAudioStats.receivedBitrate = stats.receivedBitrate;
theRemoteAudioStats.totalFrozenTime = stats.totalFrozenTime;
theRemoteAudioStats.frozenRate = stats.frozenRate;
theRemoteAudioStats.mosValue = stats.mosValue;
theRemoteAudioStats.frozenRateByCustomPlcCount = stats.frozenRateByCustomPlcCount;
theRemoteAudioStats.plcCount = stats.plcCount;
theRemoteAudioStats.totalActiveTime = stats.totalActiveTime;
theRemoteAudioStats.publishDuration = stats.publishDuration;
theRemoteAudioStats.qoeQuality = stats.qoeQuality;
theRemoteAudioStats.qualityChangedReason = stats.qualityChangedReason;
theRemoteAudioStats.rxAudioBytes = stats.rxAudioBytes;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRemoteAudioStats(theRtcConnection,theRemoteAudioStats);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onLocalVideoStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__LocalVideoStats__C& stats) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::LocalVideoStats theLocalVideoStats;
theLocalVideoStats.uid = stats.uid;
theLocalVideoStats.sentBitrate = stats.sentBitrate;
theLocalVideoStats.sentFrameRate = stats.sentFrameRate;
theLocalVideoStats.captureFrameRate = stats.captureFrameRate;
theLocalVideoStats.captureFrameWidth = stats.captureFrameWidth;
theLocalVideoStats.captureFrameHeight = stats.captureFrameHeight;
theLocalVideoStats.regulatedCaptureFrameRate = stats.regulatedCaptureFrameRate;
theLocalVideoStats.regulatedCaptureFrameWidth = stats.regulatedCaptureFrameWidth;
theLocalVideoStats.regulatedCaptureFrameHeight = stats.regulatedCaptureFrameHeight;
theLocalVideoStats.encoderOutputFrameRate = stats.encoderOutputFrameRate;
theLocalVideoStats.encodedFrameWidth = stats.encodedFrameWidth;
theLocalVideoStats.encodedFrameHeight = stats.encodedFrameHeight;
theLocalVideoStats.rendererOutputFrameRate = stats.rendererOutputFrameRate;
theLocalVideoStats.targetBitrate = stats.targetBitrate;
theLocalVideoStats.targetFrameRate = stats.targetFrameRate;
theLocalVideoStats.qualityAdaptIndication = stats.qualityAdaptIndication;
theLocalVideoStats.encodedBitrate = stats.encodedBitrate;
theLocalVideoStats.encodedFrameCount = stats.encodedFrameCount;
theLocalVideoStats.codecType = stats.codecType;
theLocalVideoStats.txPacketLossRate = stats.txPacketLossRate;
theLocalVideoStats.captureBrightnessLevel = stats.captureBrightnessLevel;
theLocalVideoStats.dualStreamEnabled = stats.dualStreamEnabled;
theLocalVideoStats.hwEncoderAccelerating = stats.hwEncoderAccelerating;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onLocalVideoStats(theRtcConnection,theLocalVideoStats);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteVideoStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__RemoteVideoStats__C& stats) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::RemoteVideoStats theRemoteVideoStats;
theRemoteVideoStats.uid = stats.uid;
theRemoteVideoStats.delay = stats.delay;
theRemoteVideoStats.e2eDelay = stats.e2eDelay;
theRemoteVideoStats.width = stats.width;
theRemoteVideoStats.height = stats.height;
theRemoteVideoStats.receivedBitrate = stats.receivedBitrate;
theRemoteVideoStats.decoderOutputFrameRate = stats.decoderOutputFrameRate;
theRemoteVideoStats.rendererOutputFrameRate = stats.rendererOutputFrameRate;
theRemoteVideoStats.frameLossRate = stats.frameLossRate;
theRemoteVideoStats.packetLossRate = stats.packetLossRate;
theRemoteVideoStats.rxStreamType = stats.rxStreamType;
theRemoteVideoStats.totalFrozenTime = stats.totalFrozenTime;
theRemoteVideoStats.frozenRate = stats.frozenRate;
theRemoteVideoStats.avSyncTimeMs = stats.avSyncTimeMs;
theRemoteVideoStats.totalActiveTime = stats.totalActiveTime;
theRemoteVideoStats.publishDuration = stats.publishDuration;
theRemoteVideoStats.mosValue = stats.mosValue;
theRemoteVideoStats.rxVideoBytes = stats.rxVideoBytes;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRemoteVideoStats(theRtcConnection,theRemoteVideoStats);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionLost(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onConnectionLost(theRtcConnection);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionInterrupted(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onConnectionInterrupted(theRtcConnection);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionBanned(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onConnectionBanned(theRtcConnection);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onStreamMessage(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int streamId,const char* data,size_t length,uint64_t sentTs) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onStreamMessage(theRtcConnection,remoteUid,streamId,data,length,sentTs);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onStreamMessageError(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,int streamId,int code,int missed,int cached) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onStreamMessageError(theRtcConnection,remoteUid,streamId,code,missed,cached);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRequestToken(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRequestToken(theRtcConnection);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onLicenseValidationFailure(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora__LICENSE_ERROR_TYPE__C reason) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onLicenseValidationFailure(theRtcConnection,reason);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onTokenPrivilegeWillExpire(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const char* token) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onTokenPrivilegeWillExpire(theRtcConnection,token);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onFirstLocalAudioFramePublished(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onFirstLocalAudioFramePublished(theRtcConnection,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteAudioFrame(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C userId,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onFirstRemoteAudioFrame(theRtcConnection,userId,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onFirstRemoteAudioDecoded(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onFirstRemoteAudioDecoded(theRtcConnection,uid,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onLocalAudioStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__LOCAL_AUDIO_STREAM_STATE__C state,agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C error) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onLocalAudioStateChanged(theRtcConnection,state,error);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteAudioStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,agora_rtc__REMOTE_AUDIO_STATE__C state,agora_rtc__REMOTE_AUDIO_STATE_REASON__C reason,int elapsed) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRemoteAudioStateChanged(theRtcConnection,remoteUid,state,reason,elapsed);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onActiveSpeaker(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onActiveSpeaker(theRtcConnection,uid);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onClientRoleChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__CLIENT_ROLE_TYPE__C oldRole,agora_rtc__CLIENT_ROLE_TYPE__C newRole,const agora_rtc__ClientRoleOptions__C& newRoleOptions) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::ClientRoleOptions theClientRoleOptions;
theClientRoleOptions.audienceLatencyLevel = newRoleOptions.audienceLatencyLevel;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onClientRoleChanged(theRtcConnection,oldRole,newRole,theClientRoleOptions);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onClientRoleChangeFailed(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C reason,agora_rtc__CLIENT_ROLE_TYPE__C currentRole) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onClientRoleChangeFailed(theRtcConnection,reason,currentRole);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteAudioTransportStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRemoteAudioTransportStats(theRtcConnection,remoteUid,delay,lost,rxKBitRate);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onRemoteVideoTransportStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,unsigned short delay,unsigned short lost,unsigned short rxKBitRate) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onRemoteVideoTransportStats(theRtcConnection,remoteUid,delay,lost,rxKBitRate);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onConnectionStateChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__CONNECTION_STATE_TYPE__C state,agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C reason) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onConnectionStateChanged(theRtcConnection,state,reason);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onWlAccMessage(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__WLACC_MESSAGE_REASON__C reason,agora_rtc__WLACC_SUGGEST_ACTION__C action,const char* wlAccMsg) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onWlAccMessage(theRtcConnection,reason,action,wlAccMsg);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onWlAccStats(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__WlAccStats__C currentStats,agora_rtc__WlAccStats__C averageStats) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::WlAccStats theWlAccStats;
theWlAccStats.e2eDelayPercent = currentStats.e2eDelayPercent;
theWlAccStats.frozenRatioPercent = currentStats.frozenRatioPercent;
theWlAccStats.lossRatePercent = currentStats.lossRatePercent;
agora::rtc::rtc::WlAccStats theWlAccStats;
theWlAccStats.e2eDelayPercent = averageStats.e2eDelayPercent;
theWlAccStats.frozenRatioPercent = averageStats.frozenRatioPercent;
theWlAccStats.lossRatePercent = averageStats.lossRatePercent;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onWlAccStats(theRtcConnection,theWlAccStats,theWlAccStats);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onNetworkTypeChanged(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__NETWORK_TYPE__C type) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onNetworkTypeChanged(theRtcConnection,type);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onEncryptionError(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__ENCRYPTION_ERROR_TYPE__C errorType) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onEncryptionError(theRtcConnection,errorType);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUploadLogResult(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const char* requestId,bool success,agora_rtc__UPLOAD_ERROR_REASON__C reason) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUploadLogResult(theRtcConnection,requestId,success,reason);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onUserAccountUpdated(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C remoteUid,const char* userAccount) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onUserAccountUpdated(theRtcConnection,remoteUid,userAccount);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onSnapshotTaken(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,const char* filePath,int width,int height,int errCode) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onSnapshotTaken(theRtcConnection,uid,filePath,width,height,errCode);
      }
      
void agora_rtc__IRtcEngineEventHandlerEx__onVideoRenderingTracingResult(agora_rtc__IRtcEngineEventHandlerEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,agora_rtc__MEDIA_TRACE_EVENT__C currentEvent,agora_rtc__VideoRenderingTracingInfo__C tracingInfo) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::VideoRenderingTracingInfo theVideoRenderingTracingInfo;
theVideoRenderingTracingInfo.elapsedTime = tracingInfo.elapsedTime;
theVideoRenderingTracingInfo.start2JoinChannel = tracingInfo.start2JoinChannel;
theVideoRenderingTracingInfo.join2JoinSuccess = tracingInfo.join2JoinSuccess;
theVideoRenderingTracingInfo.joinSuccess2RemoteJoined = tracingInfo.joinSuccess2RemoteJoined;
theVideoRenderingTracingInfo.remoteJoined2SetView = tracingInfo.remoteJoined2SetView;
theVideoRenderingTracingInfo.remoteJoined2UnmuteVideo = tracingInfo.remoteJoined2UnmuteVideo;
theVideoRenderingTracingInfo.remoteJoined2PacketReceived = tracingInfo.remoteJoined2PacketReceived;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEventHandlerEx *>(handle)->onVideoRenderingTracingResult(theRtcConnection,uid,currentEvent,theVideoRenderingTracingInfo);
      }
      
int agora_rtc__IRtcEngineEx__joinChannelEx(agora_rtc__IRtcEngineEx__Handle handle,const char* token,const agora_rtc__RtcConnection__C& connection,const agora_rtc__ChannelMediaOptions__C& options,agora_rtc__IRtcEngineEventHandler__Handle* eventHandler) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::ChannelMediaOptions theChannelMediaOptions;
theChannelMediaOptions.publishCameraTrack = options.publishCameraTrack;
theChannelMediaOptions.publishSecondaryCameraTrack = options.publishSecondaryCameraTrack;
theChannelMediaOptions.publishThirdCameraTrack = options.publishThirdCameraTrack;
theChannelMediaOptions.publishFourthCameraTrack = options.publishFourthCameraTrack;
theChannelMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theChannelMediaOptions.publishScreenCaptureVideo = options.publishScreenCaptureVideo;
theChannelMediaOptions.publishScreenCaptureAudio = options.publishScreenCaptureAudio;
theChannelMediaOptions.publishScreenTrack = options.publishScreenTrack;
theChannelMediaOptions.publishSecondaryScreenTrack = options.publishSecondaryScreenTrack;
theChannelMediaOptions.publishThirdScreenTrack = options.publishThirdScreenTrack;
theChannelMediaOptions.publishFourthScreenTrack = options.publishFourthScreenTrack;
theChannelMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theChannelMediaOptions.publishCustomAudioTrackId = options.publishCustomAudioTrackId;
theChannelMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theChannelMediaOptions.publishEncodedVideoTrack = options.publishEncodedVideoTrack;
theChannelMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theChannelMediaOptions.publishMediaPlayerVideoTrack = options.publishMediaPlayerVideoTrack;
theChannelMediaOptions.publishTranscodedVideoTrack = options.publishTranscodedVideoTrack;
theChannelMediaOptions.autoSubscribeAudio = options.autoSubscribeAudio;
theChannelMediaOptions.autoSubscribeVideo = options.autoSubscribeVideo;
theChannelMediaOptions.enableAudioRecordingOrPlayout = options.enableAudioRecordingOrPlayout;
theChannelMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theChannelMediaOptions.clientRoleType = options.clientRoleType;
theChannelMediaOptions.audienceLatencyLevel = options.audienceLatencyLevel;
theChannelMediaOptions.defaultVideoStreamType = options.defaultVideoStreamType;
theChannelMediaOptions.channelProfile = options.channelProfile;
theChannelMediaOptions.audioDelayMs = options.audioDelayMs;
theChannelMediaOptions.mediaPlayerAudioDelayMs = options.mediaPlayerAudioDelayMs;
theChannelMediaOptions.token = options.token;
theChannelMediaOptions.enableBuiltInMediaEncryption = options.enableBuiltInMediaEncryption;
theChannelMediaOptions.publishRhythmPlayerTrack = options.publishRhythmPlayerTrack;
theChannelMediaOptions.isInteractiveAudience = options.isInteractiveAudience;
theChannelMediaOptions.customVideoTrackId = options.customVideoTrackId;
theChannelMediaOptions.isAudioFilterable = options.isAudioFilterable;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->joinChannelEx(token,theRtcConnection,theChannelMediaOptions,eventHandler);
      }
      
int agora_rtc__IRtcEngineEx__leaveChannelEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->leaveChannelEx(theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__leaveChannelEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,const agora_rtc__LeaveChannelOptions__C& options) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::LeaveChannelOptions theLeaveChannelOptions;
theLeaveChannelOptions.stopAudioMixing = options.stopAudioMixing;
theLeaveChannelOptions.stopAllEffect = options.stopAllEffect;
theLeaveChannelOptions.stopMicrophoneRecording = options.stopMicrophoneRecording;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->leaveChannelEx(theRtcConnection,theLeaveChannelOptions);
      }
      
int agora_rtc__IRtcEngineEx__updateChannelMediaOptionsEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaOptions__C& options,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::ChannelMediaOptions theChannelMediaOptions;
theChannelMediaOptions.publishCameraTrack = options.publishCameraTrack;
theChannelMediaOptions.publishSecondaryCameraTrack = options.publishSecondaryCameraTrack;
theChannelMediaOptions.publishThirdCameraTrack = options.publishThirdCameraTrack;
theChannelMediaOptions.publishFourthCameraTrack = options.publishFourthCameraTrack;
theChannelMediaOptions.publishMicrophoneTrack = options.publishMicrophoneTrack;
theChannelMediaOptions.publishScreenCaptureVideo = options.publishScreenCaptureVideo;
theChannelMediaOptions.publishScreenCaptureAudio = options.publishScreenCaptureAudio;
theChannelMediaOptions.publishScreenTrack = options.publishScreenTrack;
theChannelMediaOptions.publishSecondaryScreenTrack = options.publishSecondaryScreenTrack;
theChannelMediaOptions.publishThirdScreenTrack = options.publishThirdScreenTrack;
theChannelMediaOptions.publishFourthScreenTrack = options.publishFourthScreenTrack;
theChannelMediaOptions.publishCustomAudioTrack = options.publishCustomAudioTrack;
theChannelMediaOptions.publishCustomAudioTrackId = options.publishCustomAudioTrackId;
theChannelMediaOptions.publishCustomVideoTrack = options.publishCustomVideoTrack;
theChannelMediaOptions.publishEncodedVideoTrack = options.publishEncodedVideoTrack;
theChannelMediaOptions.publishMediaPlayerAudioTrack = options.publishMediaPlayerAudioTrack;
theChannelMediaOptions.publishMediaPlayerVideoTrack = options.publishMediaPlayerVideoTrack;
theChannelMediaOptions.publishTranscodedVideoTrack = options.publishTranscodedVideoTrack;
theChannelMediaOptions.autoSubscribeAudio = options.autoSubscribeAudio;
theChannelMediaOptions.autoSubscribeVideo = options.autoSubscribeVideo;
theChannelMediaOptions.enableAudioRecordingOrPlayout = options.enableAudioRecordingOrPlayout;
theChannelMediaOptions.publishMediaPlayerId = options.publishMediaPlayerId;
theChannelMediaOptions.clientRoleType = options.clientRoleType;
theChannelMediaOptions.audienceLatencyLevel = options.audienceLatencyLevel;
theChannelMediaOptions.defaultVideoStreamType = options.defaultVideoStreamType;
theChannelMediaOptions.channelProfile = options.channelProfile;
theChannelMediaOptions.audioDelayMs = options.audioDelayMs;
theChannelMediaOptions.mediaPlayerAudioDelayMs = options.mediaPlayerAudioDelayMs;
theChannelMediaOptions.token = options.token;
theChannelMediaOptions.enableBuiltInMediaEncryption = options.enableBuiltInMediaEncryption;
theChannelMediaOptions.publishRhythmPlayerTrack = options.publishRhythmPlayerTrack;
theChannelMediaOptions.isInteractiveAudience = options.isInteractiveAudience;
theChannelMediaOptions.customVideoTrackId = options.customVideoTrackId;
theChannelMediaOptions.isAudioFilterable = options.isAudioFilterable;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->updateChannelMediaOptionsEx(theChannelMediaOptions,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setVideoEncoderConfigurationEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__VideoEncoderConfiguration__C& config,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::AdvanceOptions theAdvanceOptions;
theAdvanceOptions.encodingPreference = config.advanceOptions.encodingPreference;
theAdvanceOptions.compressionPreference = config.advanceOptions.compressionPreference;
agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = config.dimensions.width;
theVideoDimensions.height = config.dimensions.height;
agora::rtc::rtc::VideoEncoderConfiguration theVideoEncoderConfiguration;
theVideoEncoderConfiguration.codecType = config.codecType;
theVideoEncoderConfiguration.dimensions = theVideoDimensions;
theVideoEncoderConfiguration.frameRate = config.frameRate;
theVideoEncoderConfiguration.bitrate = config.bitrate;
theVideoEncoderConfiguration.minBitrate = config.minBitrate;
theVideoEncoderConfiguration.orientationMode = config.orientationMode;
theVideoEncoderConfiguration.degradationPreference = config.degradationPreference;
theVideoEncoderConfiguration.mirrorMode = config.mirrorMode;
theVideoEncoderConfiguration.advanceOptions = theAdvanceOptions;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setVideoEncoderConfigurationEx(theVideoEncoderConfiguration,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setupRemoteVideoEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__VideoCanvas__C& canvas,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = canvas.cropArea.x;
theRectangle.y = canvas.cropArea.y;
theRectangle.width = canvas.cropArea.width;
theRectangle.height = canvas.cropArea.height;
agora::rtc::rtc::VideoCanvas theVideoCanvas;
theVideoCanvas.view = canvas.view;
theVideoCanvas.uid = canvas.uid;
theVideoCanvas.backgroundColor = canvas.backgroundColor;
theVideoCanvas.renderMode = canvas.renderMode;
theVideoCanvas.mirrorMode = canvas.mirrorMode;
theVideoCanvas.setupMode = canvas.setupMode;
theVideoCanvas.sourceType = canvas.sourceType;
theVideoCanvas.mediaPlayerId = canvas.mediaPlayerId;
theVideoCanvas.cropArea = theRectangle;
theVideoCanvas.enableAlphaMask = canvas.enableAlphaMask;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setupRemoteVideoEx(theVideoCanvas,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__muteRemoteAudioStreamEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,bool mute,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->muteRemoteAudioStreamEx(uid,mute,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__muteRemoteVideoStreamEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,bool mute,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->muteRemoteVideoStreamEx(uid,mute,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setRemoteVideoStreamTypeEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__VIDEO_STREAM_TYPE__C streamType,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setRemoteVideoStreamTypeEx(uid,streamType,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__muteLocalAudioStreamEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->muteLocalAudioStreamEx(mute,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__muteLocalVideoStreamEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->muteLocalVideoStreamEx(mute,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__muteAllRemoteAudioStreamsEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->muteAllRemoteAudioStreamsEx(mute,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__muteAllRemoteVideoStreamsEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->muteAllRemoteVideoStreamsEx(mute,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setSubscribeAudioBlocklistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setSubscribeAudioBlocklistEx(uidList,uidNumber,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setSubscribeAudioAllowlistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setSubscribeAudioAllowlistEx(uidList,uidNumber,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setSubscribeVideoBlocklistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setSubscribeVideoBlocklistEx(uidList,uidNumber,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setSubscribeVideoAllowlistEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNumber,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setSubscribeVideoAllowlistEx(uidList,uidNumber,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setRemoteVideoSubscriptionOptionsEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__VideoSubscriptionOptions__C& options,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::VideoSubscriptionOptions theVideoSubscriptionOptions;
theVideoSubscriptionOptions.type = options.type;
theVideoSubscriptionOptions.encodedFrameOnly = options.encodedFrameOnly;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setRemoteVideoSubscriptionOptionsEx(uid,theVideoSubscriptionOptions,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setRemoteVoicePositionEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,double pan,double gain,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setRemoteVoicePositionEx(uid,pan,gain,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setRemoteUserSpatialAudioParamsEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,const agora__SpatialAudioParams__C& params,const agora_rtc__RtcConnection__C& connection) {
        agora::agora::SpatialAudioParams theSpatialAudioParams;
theSpatialAudioParams.speaker_azimuth = params.speaker_azimuth;
theSpatialAudioParams.speaker_elevation = params.speaker_elevation;
theSpatialAudioParams.speaker_distance = params.speaker_distance;
theSpatialAudioParams.speaker_orientation = params.speaker_orientation;
theSpatialAudioParams.enable_blur = params.enable_blur;
theSpatialAudioParams.enable_air_absorb = params.enable_air_absorb;
theSpatialAudioParams.speaker_attenuation = params.speaker_attenuation;
theSpatialAudioParams.enable_doppler = params.enable_doppler;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setRemoteUserSpatialAudioParamsEx(uid,theSpatialAudioParams,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setRemoteRenderModeEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,agora_media_base__RENDER_MODE_TYPE__C renderMode,agora_rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setRemoteRenderModeEx(uid,renderMode,mirrorMode,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__enableLoopbackRecordingEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,bool enabled,const char* deviceName) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->enableLoopbackRecordingEx(theRtcConnection,enabled,deviceName);
      }
      
int agora_rtc__IRtcEngineEx__adjustRecordingSignalVolumeEx(agora_rtc__IRtcEngineEx__Handle handle,int volume,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->adjustRecordingSignalVolumeEx(volume,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__muteRecordingSignalEx(agora_rtc__IRtcEngineEx__Handle handle,bool mute,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->muteRecordingSignalEx(mute,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__adjustUserPlaybackSignalVolumeEx(agora_rtc__IRtcEngineEx__Handle handle,unsigned int uid,int volume,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->adjustUserPlaybackSignalVolumeEx(uid,volume,theRtcConnection);
      }
      
agora_rtc__CONNECTION_STATE_TYPE__C agora_rtc__IRtcEngineEx__getConnectionStateEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->getConnectionStateEx(theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__enableEncryptionEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,bool enabled,const agora_rtc__EncryptionConfig__C& config) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
agora::rtc::rtc::EncryptionConfig theEncryptionConfig;
theEncryptionConfig.encryptionMode = config.encryptionMode;
theEncryptionConfig.encryptionKey = config.encryptionKey;
theEncryptionConfig.encryptionKdfSalt = config.encryptionKdfSalt;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->enableEncryptionEx(theRtcConnection,enabled,theEncryptionConfig);
      }
      
int agora_rtc__IRtcEngineEx__createDataStreamEx(agora_rtc__IRtcEngineEx__Handle handle,int* streamId,bool reliable,bool ordered,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->createDataStreamEx(streamId,reliable,ordered,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__createDataStreamEx(agora_rtc__IRtcEngineEx__Handle handle,int* streamId,agora_rtc__DataStreamConfig__C& config,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::DataStreamConfig theDataStreamConfig;
theDataStreamConfig.syncWithAudio = config.syncWithAudio;
theDataStreamConfig.ordered = config.ordered;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->createDataStreamEx(streamId,theDataStreamConfig,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__sendStreamMessageEx(agora_rtc__IRtcEngineEx__Handle handle,int streamId,const char* data,size_t length,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->sendStreamMessageEx(streamId,data,length,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__addVideoWatermarkEx(agora_rtc__IRtcEngineEx__Handle handle,const char* watermarkUrl,const agora_rtc__WatermarkOptions__C& options,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::WatermarkRatio theWatermarkRatio;
theWatermarkRatio.xRatio = options.watermarkRatio.xRatio;
theWatermarkRatio.yRatio = options.watermarkRatio.yRatio;
theWatermarkRatio.widthRatio = options.watermarkRatio.widthRatio;
agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = options.positionInPortraitMode.x;
theRectangle.y = options.positionInPortraitMode.y;
theRectangle.width = options.positionInPortraitMode.width;
theRectangle.height = options.positionInPortraitMode.height;
agora::rtc::rtc::Rectangle theRectangle;
theRectangle.x = options.positionInLandscapeMode.x;
theRectangle.y = options.positionInLandscapeMode.y;
theRectangle.width = options.positionInLandscapeMode.width;
theRectangle.height = options.positionInLandscapeMode.height;
agora::rtc::rtc::WatermarkOptions theWatermarkOptions;
theWatermarkOptions.visibleInPreview = options.visibleInPreview;
theWatermarkOptions.positionInLandscapeMode = theRectangle;
theWatermarkOptions.positionInPortraitMode = theRectangle;
theWatermarkOptions.watermarkRatio = theWatermarkRatio;
theWatermarkOptions.mode = options.mode;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->addVideoWatermarkEx(watermarkUrl,theWatermarkOptions,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__clearVideoWatermarkEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->clearVideoWatermarkEx(theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__sendCustomReportMessageEx(agora_rtc__IRtcEngineEx__Handle handle,const char* id,const char* category,const char* event,const char* label,int value,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->sendCustomReportMessageEx(id,category,event,label,value,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__enableAudioVolumeIndicationEx(agora_rtc__IRtcEngineEx__Handle handle,int interval,int smooth,bool reportVad,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->enableAudioVolumeIndicationEx(interval,smooth,reportVad,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__startRtmpStreamWithoutTranscodingEx(agora_rtc__IRtcEngineEx__Handle handle,const char* url,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->startRtmpStreamWithoutTranscodingEx(url,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__startRtmpStreamWithTranscodingEx(agora_rtc__IRtcEngineEx__Handle handle,const char* url,const agora_rtc__LiveTranscoding__C& transcoding,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::LiveStreamAdvancedFeature theLiveStreamAdvancedFeature;
theLiveStreamAdvancedFeature.featureName = transcoding.advancedFeatures.featureName;
theLiveStreamAdvancedFeature.opened = transcoding.advancedFeatures.opened;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.backgroundImage.url;
theRtcImage.x = transcoding.backgroundImage.x;
theRtcImage.y = transcoding.backgroundImage.y;
theRtcImage.width = transcoding.backgroundImage.width;
theRtcImage.height = transcoding.backgroundImage.height;
theRtcImage.zOrder = transcoding.backgroundImage.zOrder;
theRtcImage.alpha = transcoding.backgroundImage.alpha;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.watermark.url;
theRtcImage.x = transcoding.watermark.x;
theRtcImage.y = transcoding.watermark.y;
theRtcImage.width = transcoding.watermark.width;
theRtcImage.height = transcoding.watermark.height;
theRtcImage.zOrder = transcoding.watermark.zOrder;
theRtcImage.alpha = transcoding.watermark.alpha;
agora::rtc::rtc::TranscodingUser theTranscodingUser;
theTranscodingUser.uid = transcoding.transcodingUsers.uid;
theTranscodingUser.x = transcoding.transcodingUsers.x;
theTranscodingUser.y = transcoding.transcodingUsers.y;
theTranscodingUser.width = transcoding.transcodingUsers.width;
theTranscodingUser.height = transcoding.transcodingUsers.height;
theTranscodingUser.zOrder = transcoding.transcodingUsers.zOrder;
theTranscodingUser.alpha = transcoding.transcodingUsers.alpha;
theTranscodingUser.audioChannel = transcoding.transcodingUsers.audioChannel;
agora::rtc::rtc::LiveTranscoding theLiveTranscoding;
theLiveTranscoding.width = transcoding.width;
theLiveTranscoding.height = transcoding.height;
theLiveTranscoding.videoBitrate = transcoding.videoBitrate;
theLiveTranscoding.videoFramerate = transcoding.videoFramerate;
theLiveTranscoding.lowLatency = transcoding.lowLatency;
theLiveTranscoding.videoGop = transcoding.videoGop;
theLiveTranscoding.videoCodecProfile = transcoding.videoCodecProfile;
theLiveTranscoding.backgroundColor = transcoding.backgroundColor;
theLiveTranscoding.videoCodecType = transcoding.videoCodecType;
theLiveTranscoding.userCount = transcoding.userCount;
theLiveTranscoding.transcodingUsers = theTranscodingUser;
theLiveTranscoding.transcodingExtraInfo = transcoding.transcodingExtraInfo;
theLiveTranscoding.metadata = transcoding.metadata;
theLiveTranscoding.watermark = theRtcImage;
theLiveTranscoding.watermarkCount = transcoding.watermarkCount;
theLiveTranscoding.backgroundImage = theRtcImage;
theLiveTranscoding.backgroundImageCount = transcoding.backgroundImageCount;
theLiveTranscoding.audioSampleRate = transcoding.audioSampleRate;
theLiveTranscoding.audioBitrate = transcoding.audioBitrate;
theLiveTranscoding.audioChannels = transcoding.audioChannels;
theLiveTranscoding.audioCodecProfile = transcoding.audioCodecProfile;
theLiveTranscoding.advancedFeatures = theLiveStreamAdvancedFeature;
theLiveTranscoding.advancedFeatureCount = transcoding.advancedFeatureCount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->startRtmpStreamWithTranscodingEx(url,theLiveTranscoding,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__updateRtmpTranscodingEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__LiveTranscoding__C& transcoding,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::LiveStreamAdvancedFeature theLiveStreamAdvancedFeature;
theLiveStreamAdvancedFeature.featureName = transcoding.advancedFeatures.featureName;
theLiveStreamAdvancedFeature.opened = transcoding.advancedFeatures.opened;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.backgroundImage.url;
theRtcImage.x = transcoding.backgroundImage.x;
theRtcImage.y = transcoding.backgroundImage.y;
theRtcImage.width = transcoding.backgroundImage.width;
theRtcImage.height = transcoding.backgroundImage.height;
theRtcImage.zOrder = transcoding.backgroundImage.zOrder;
theRtcImage.alpha = transcoding.backgroundImage.alpha;
agora::rtc::rtc::RtcImage theRtcImage;
theRtcImage.url = transcoding.watermark.url;
theRtcImage.x = transcoding.watermark.x;
theRtcImage.y = transcoding.watermark.y;
theRtcImage.width = transcoding.watermark.width;
theRtcImage.height = transcoding.watermark.height;
theRtcImage.zOrder = transcoding.watermark.zOrder;
theRtcImage.alpha = transcoding.watermark.alpha;
agora::rtc::rtc::TranscodingUser theTranscodingUser;
theTranscodingUser.uid = transcoding.transcodingUsers.uid;
theTranscodingUser.x = transcoding.transcodingUsers.x;
theTranscodingUser.y = transcoding.transcodingUsers.y;
theTranscodingUser.width = transcoding.transcodingUsers.width;
theTranscodingUser.height = transcoding.transcodingUsers.height;
theTranscodingUser.zOrder = transcoding.transcodingUsers.zOrder;
theTranscodingUser.alpha = transcoding.transcodingUsers.alpha;
theTranscodingUser.audioChannel = transcoding.transcodingUsers.audioChannel;
agora::rtc::rtc::LiveTranscoding theLiveTranscoding;
theLiveTranscoding.width = transcoding.width;
theLiveTranscoding.height = transcoding.height;
theLiveTranscoding.videoBitrate = transcoding.videoBitrate;
theLiveTranscoding.videoFramerate = transcoding.videoFramerate;
theLiveTranscoding.lowLatency = transcoding.lowLatency;
theLiveTranscoding.videoGop = transcoding.videoGop;
theLiveTranscoding.videoCodecProfile = transcoding.videoCodecProfile;
theLiveTranscoding.backgroundColor = transcoding.backgroundColor;
theLiveTranscoding.videoCodecType = transcoding.videoCodecType;
theLiveTranscoding.userCount = transcoding.userCount;
theLiveTranscoding.transcodingUsers = theTranscodingUser;
theLiveTranscoding.transcodingExtraInfo = transcoding.transcodingExtraInfo;
theLiveTranscoding.metadata = transcoding.metadata;
theLiveTranscoding.watermark = theRtcImage;
theLiveTranscoding.watermarkCount = transcoding.watermarkCount;
theLiveTranscoding.backgroundImage = theRtcImage;
theLiveTranscoding.backgroundImageCount = transcoding.backgroundImageCount;
theLiveTranscoding.audioSampleRate = transcoding.audioSampleRate;
theLiveTranscoding.audioBitrate = transcoding.audioBitrate;
theLiveTranscoding.audioChannels = transcoding.audioChannels;
theLiveTranscoding.audioCodecProfile = transcoding.audioCodecProfile;
theLiveTranscoding.advancedFeatures = theLiveStreamAdvancedFeature;
theLiveTranscoding.advancedFeatureCount = transcoding.advancedFeatureCount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->updateRtmpTranscodingEx(theLiveTranscoding,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__stopRtmpStreamEx(agora_rtc__IRtcEngineEx__Handle handle,const char* url,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->stopRtmpStreamEx(url,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__startOrUpdateChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.destInfos.channelName;
theChannelMediaInfo.token = configuration.destInfos.token;
theChannelMediaInfo.uid = configuration.destInfos.uid;
agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.srcInfo.channelName;
theChannelMediaInfo.token = configuration.srcInfo.token;
theChannelMediaInfo.uid = configuration.srcInfo.uid;
agora::rtc::rtc::ChannelMediaRelayConfiguration theChannelMediaRelayConfiguration;
theChannelMediaRelayConfiguration.srcInfo = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destInfos = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destCount = configuration.destCount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->startOrUpdateChannelMediaRelayEx(theChannelMediaRelayConfiguration,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__startChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.destInfos.channelName;
theChannelMediaInfo.token = configuration.destInfos.token;
theChannelMediaInfo.uid = configuration.destInfos.uid;
agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.srcInfo.channelName;
theChannelMediaInfo.token = configuration.srcInfo.token;
theChannelMediaInfo.uid = configuration.srcInfo.uid;
agora::rtc::rtc::ChannelMediaRelayConfiguration theChannelMediaRelayConfiguration;
theChannelMediaRelayConfiguration.srcInfo = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destInfos = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destCount = configuration.destCount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->startChannelMediaRelayEx(theChannelMediaRelayConfiguration,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__updateChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__ChannelMediaRelayConfiguration__C& configuration,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.destInfos.channelName;
theChannelMediaInfo.token = configuration.destInfos.token;
theChannelMediaInfo.uid = configuration.destInfos.uid;
agora::rtc::rtc::ChannelMediaInfo theChannelMediaInfo;
theChannelMediaInfo.channelName = configuration.srcInfo.channelName;
theChannelMediaInfo.token = configuration.srcInfo.token;
theChannelMediaInfo.uid = configuration.srcInfo.uid;
agora::rtc::rtc::ChannelMediaRelayConfiguration theChannelMediaRelayConfiguration;
theChannelMediaRelayConfiguration.srcInfo = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destInfos = theChannelMediaInfo;
theChannelMediaRelayConfiguration.destCount = configuration.destCount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->updateChannelMediaRelayEx(theChannelMediaRelayConfiguration,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__stopChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->stopChannelMediaRelayEx(theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__pauseAllChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->pauseAllChannelMediaRelayEx(theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__resumeAllChannelMediaRelayEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->resumeAllChannelMediaRelayEx(theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__getUserInfoByUserAccountEx(agora_rtc__IRtcEngineEx__Handle handle,const char* userAccount,agora_rtc__UserInfo__C* userInfo,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::UserInfo theUserInfo;
theUserInfo.uid = userInfo.uid;
theUserInfo.userAccount = userInfo.userAccount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->getUserInfoByUserAccountEx(userAccount,theUserInfo,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__getUserInfoByUidEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C uid,agora_rtc__UserInfo__C* userInfo,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::UserInfo theUserInfo;
theUserInfo.uid = userInfo.uid;
theUserInfo.userAccount = userInfo.userAccount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->getUserInfoByUidEx(uid,theUserInfo,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__enableDualStreamModeEx(agora_rtc__IRtcEngineEx__Handle handle,bool enabled,const agora_rtc__SimulcastStreamConfig__C& streamConfig,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = streamConfig.dimensions.width;
theVideoDimensions.height = streamConfig.dimensions.height;
agora::rtc::rtc::SimulcastStreamConfig theSimulcastStreamConfig;
theSimulcastStreamConfig.dimensions = theVideoDimensions;
theSimulcastStreamConfig.kBitrate = streamConfig.kBitrate;
theSimulcastStreamConfig.framerate = streamConfig.framerate;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->enableDualStreamModeEx(enabled,theSimulcastStreamConfig,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setDualStreamModeEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__SIMULCAST_STREAM_MODE__C mode,const agora_rtc__SimulcastStreamConfig__C& streamConfig,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::VideoDimensions theVideoDimensions;
theVideoDimensions.width = streamConfig.dimensions.width;
theVideoDimensions.height = streamConfig.dimensions.height;
agora::rtc::rtc::SimulcastStreamConfig theSimulcastStreamConfig;
theSimulcastStreamConfig.dimensions = theVideoDimensions;
theSimulcastStreamConfig.kBitrate = streamConfig.kBitrate;
theSimulcastStreamConfig.framerate = streamConfig.framerate;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setDualStreamModeEx(mode,theSimulcastStreamConfig,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__setHighPriorityUserListEx(agora_rtc__IRtcEngineEx__Handle handle,agora_rtc__uid_t__C* uidList,int uidNum,agora_rtc__STREAM_FALLBACK_OPTIONS__C option,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->setHighPriorityUserListEx(uidList,uidNum,option,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__takeSnapshotEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection,agora_rtc__uid_t__C uid,const char* filePath) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->takeSnapshotEx(theRtcConnection,uid,filePath);
      }
      
int agora_rtc__IRtcEngineEx__enableContentInspectEx(agora_rtc__IRtcEngineEx__Handle handle,bool enabled,const agora_media__ContentInspectConfig__C& config,const agora_rtc__RtcConnection__C& connection) {
        agora::media::media::ContentInspectModule theContentInspectModule;
theContentInspectModule.type = config.modules.type;
theContentInspectModule.interval = config.modules.interval;
agora::media::media::ContentInspectConfig theContentInspectConfig;
theContentInspectConfig.extraInfo = config.extraInfo;
theContentInspectConfig.serverConfig = config.serverConfig;
theContentInspectConfig.modules = theContentInspectModule;
theContentInspectConfig.moduleCount = config.moduleCount;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->enableContentInspectEx(enabled,theContentInspectConfig,theRtcConnection);
      }
      
int agora_rtc__IRtcEngineEx__startMediaRenderingTracingEx(agora_rtc__IRtcEngineEx__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IRtcEngineEx *>(handle)->startMediaRenderingTracingEx(theRtcConnection);
      }
      
void agora_rtc__IBaseSpatialAudioEngine__release(agora_rtc__IBaseSpatialAudioEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->release();
      }
      
int agora_rtc__IBaseSpatialAudioEngine__setMaxAudioRecvCount(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int maxCount) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->setMaxAudioRecvCount(maxCount);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__setAudioRecvRange(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float range) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->setAudioRecvRange(range);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__setDistanceUnit(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float unit) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->setDistanceUnit(unit);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__updateSelfPosition(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float position[3],float axisForward[3],float axisRight[3],float axisUp[3]) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->updateSelfPosition(position,axisForward,axisRight,axisUp);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__updateSelfPositionEx(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float position[3],float axisForward[3],float axisRight[3],float axisUp[3],const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->updateSelfPositionEx(position,axisForward,axisRight,axisUp,theRtcConnection);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__updatePlayerPositionInfo(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int playerId,const agora_rtc__RemoteVoicePositionInfo__C& positionInfo) {
        agora::rtc::rtc::RemoteVoicePositionInfo theRemoteVoicePositionInfo;
theRemoteVoicePositionInfo.position = positionInfo.position;
theRemoteVoicePositionInfo.forward = positionInfo.forward;
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->updatePlayerPositionInfo(playerId,theRemoteVoicePositionInfo);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__setParameters(agora_rtc__IBaseSpatialAudioEngine__Handle handle,const char* params) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->setParameters(params);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__muteLocalAudioStream(agora_rtc__IBaseSpatialAudioEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->muteLocalAudioStream(mute);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__muteAllRemoteAudioStreams(agora_rtc__IBaseSpatialAudioEngine__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->muteAllRemoteAudioStreams(mute);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__setZones(agora_rtc__IBaseSpatialAudioEngine__Handle handle,const agora_rtc__SpatialAudioZone__C* zones,unsigned int zoneCount) {
        agora::rtc::rtc::SpatialAudioZone theSpatialAudioZone;
theSpatialAudioZone.zoneSetId = zones.zoneSetId;
theSpatialAudioZone.position = zones.position;
theSpatialAudioZone.forward = zones.forward;
theSpatialAudioZone.right = zones.right;
theSpatialAudioZone.up = zones.up;
theSpatialAudioZone.forwardLength = zones.forwardLength;
theSpatialAudioZone.rightLength = zones.rightLength;
theSpatialAudioZone.upLength = zones.upLength;
theSpatialAudioZone.audioAttenuation = zones.audioAttenuation;
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->setZones(theSpatialAudioZone,zoneCount);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__setPlayerAttenuation(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int playerId,double attenuation,bool forceSet) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->setPlayerAttenuation(playerId,attenuation,forceSet);
      }
      
int agora_rtc__IBaseSpatialAudioEngine__muteRemoteAudioStream(agora_rtc__IBaseSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IBaseSpatialAudioEngine *>(handle)->muteRemoteAudioStream(uid,mute);
      }
      
int agora_rtc__ILocalSpatialAudioEngine__initialize(agora_rtc__ILocalSpatialAudioEngine__Handle handle,const agora_rtc__LocalSpatialAudioConfig__C& config) {
        agora::rtc::rtc::LocalSpatialAudioConfig theLocalSpatialAudioConfig;
theLocalSpatialAudioConfig.rtcEngine = config.rtcEngine;
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->initialize(theLocalSpatialAudioConfig);
      }
      
int agora_rtc__ILocalSpatialAudioEngine__updateRemotePosition(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RemoteVoicePositionInfo__C& posInfo) {
        agora::rtc::rtc::RemoteVoicePositionInfo theRemoteVoicePositionInfo;
theRemoteVoicePositionInfo.position = posInfo.position;
theRemoteVoicePositionInfo.forward = posInfo.forward;
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->updateRemotePosition(uid,theRemoteVoicePositionInfo);
      }
      
int agora_rtc__ILocalSpatialAudioEngine__updateRemotePositionEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RemoteVoicePositionInfo__C& posInfo,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RemoteVoicePositionInfo theRemoteVoicePositionInfo;
theRemoteVoicePositionInfo.position = posInfo.position;
theRemoteVoicePositionInfo.forward = posInfo.forward;
agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->updateRemotePositionEx(uid,theRemoteVoicePositionInfo,theRtcConnection);
      }
      
int agora_rtc__ILocalSpatialAudioEngine__removeRemotePosition(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid) {
        
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->removeRemotePosition(uid);
      }
      
int agora_rtc__ILocalSpatialAudioEngine__removeRemotePositionEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->removeRemotePositionEx(uid,theRtcConnection);
      }
      
int agora_rtc__ILocalSpatialAudioEngine__clearRemotePositions(agora_rtc__ILocalSpatialAudioEngine__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->clearRemotePositions();
      }
      
int agora_rtc__ILocalSpatialAudioEngine__clearRemotePositionsEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,const agora_rtc__RtcConnection__C& connection) {
        agora::rtc::rtc::RtcConnection theRtcConnection;
theRtcConnection.channelId = connection.channelId;
theRtcConnection.localUid = connection.localUid;
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->clearRemotePositionsEx(theRtcConnection);
      }
      
int agora_rtc__ILocalSpatialAudioEngine__setRemoteAudioAttenuation(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,double attenuation,bool forceSet) {
        
        reinterpret_cast<agora::rtc::rtc::ILocalSpatialAudioEngine *>(handle)->setRemoteAudioAttenuation(uid,attenuation,forceSet);
      }
      
int agora_rtc__IAudioDeviceCollection__getCount(agora_rtc__IAudioDeviceCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->getCount();
      }
      
int agora_rtc__IAudioDeviceCollection__getDevice(agora_rtc__IAudioDeviceCollection__Handle handle,int index,char deviceName[512],char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->getDevice(index,deviceName,deviceId);
      }
      
int agora_rtc__IAudioDeviceCollection__setDevice(agora_rtc__IAudioDeviceCollection__Handle handle,const char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->setDevice(deviceId);
      }
      
int agora_rtc__IAudioDeviceCollection__getDefaultDevice(agora_rtc__IAudioDeviceCollection__Handle handle,char deviceName[512],char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->getDefaultDevice(deviceName,deviceId);
      }
      
int agora_rtc__IAudioDeviceCollection__setApplicationVolume(agora_rtc__IAudioDeviceCollection__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->setApplicationVolume(volume);
      }
      
int agora_rtc__IAudioDeviceCollection__getApplicationVolume(agora_rtc__IAudioDeviceCollection__Handle handle,int& volume) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->getApplicationVolume(volume);
      }
      
int agora_rtc__IAudioDeviceCollection__setApplicationMute(agora_rtc__IAudioDeviceCollection__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->setApplicationMute(mute);
      }
      
int agora_rtc__IAudioDeviceCollection__isApplicationMute(agora_rtc__IAudioDeviceCollection__Handle handle,bool& mute) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->isApplicationMute(mute);
      }
      
void agora_rtc__IAudioDeviceCollection__release(agora_rtc__IAudioDeviceCollection__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceCollection *>(handle)->release();
      }
      
agora_rtc__IAudioDeviceCollection__Handle* agora_rtc__IAudioDeviceManager__enumeratePlaybackDevices(agora_rtc__IAudioDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->enumeratePlaybackDevices();
      }
      
agora_rtc__IAudioDeviceCollection__Handle* agora_rtc__IAudioDeviceManager__enumerateRecordingDevices(agora_rtc__IAudioDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->enumerateRecordingDevices();
      }
      
int agora_rtc__IAudioDeviceManager__setPlaybackDevice(agora_rtc__IAudioDeviceManager__Handle handle,const char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->setPlaybackDevice(deviceId);
      }
      
int agora_rtc__IAudioDeviceManager__getPlaybackDevice(agora_rtc__IAudioDeviceManager__Handle handle,char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getPlaybackDevice(deviceId);
      }
      
int agora_rtc__IAudioDeviceManager__getPlaybackDeviceInfo(agora_rtc__IAudioDeviceManager__Handle handle,char deviceId[512],char deviceName[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getPlaybackDeviceInfo(deviceId,deviceName);
      }
      
int agora_rtc__IAudioDeviceManager__setPlaybackDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->setPlaybackDeviceVolume(volume);
      }
      
int agora_rtc__IAudioDeviceManager__getPlaybackDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int* volume) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getPlaybackDeviceVolume(volume);
      }
      
int agora_rtc__IAudioDeviceManager__setRecordingDevice(agora_rtc__IAudioDeviceManager__Handle handle,const char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->setRecordingDevice(deviceId);
      }
      
int agora_rtc__IAudioDeviceManager__getRecordingDevice(agora_rtc__IAudioDeviceManager__Handle handle,char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getRecordingDevice(deviceId);
      }
      
int agora_rtc__IAudioDeviceManager__getRecordingDeviceInfo(agora_rtc__IAudioDeviceManager__Handle handle,char deviceId[512],char deviceName[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getRecordingDeviceInfo(deviceId,deviceName);
      }
      
int agora_rtc__IAudioDeviceManager__setRecordingDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int volume) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->setRecordingDeviceVolume(volume);
      }
      
int agora_rtc__IAudioDeviceManager__getRecordingDeviceVolume(agora_rtc__IAudioDeviceManager__Handle handle,int* volume) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getRecordingDeviceVolume(volume);
      }
      
int agora_rtc__IAudioDeviceManager__setLoopbackDevice(agora_rtc__IAudioDeviceManager__Handle handle,const char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->setLoopbackDevice(deviceId);
      }
      
int agora_rtc__IAudioDeviceManager__getLoopbackDevice(agora_rtc__IAudioDeviceManager__Handle handle,char deviceId[512]) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getLoopbackDevice(deviceId);
      }
      
int agora_rtc__IAudioDeviceManager__setPlaybackDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->setPlaybackDeviceMute(mute);
      }
      
int agora_rtc__IAudioDeviceManager__getPlaybackDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool* mute) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getPlaybackDeviceMute(mute);
      }
      
int agora_rtc__IAudioDeviceManager__setRecordingDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool mute) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->setRecordingDeviceMute(mute);
      }
      
int agora_rtc__IAudioDeviceManager__getRecordingDeviceMute(agora_rtc__IAudioDeviceManager__Handle handle,bool* mute) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->getRecordingDeviceMute(mute);
      }
      
int agora_rtc__IAudioDeviceManager__startPlaybackDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle,const char* testAudioFilePath) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->startPlaybackDeviceTest(testAudioFilePath);
      }
      
int agora_rtc__IAudioDeviceManager__stopPlaybackDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->stopPlaybackDeviceTest();
      }
      
int agora_rtc__IAudioDeviceManager__startRecordingDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle,int indicationInterval) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->startRecordingDeviceTest(indicationInterval);
      }
      
int agora_rtc__IAudioDeviceManager__stopRecordingDeviceTest(agora_rtc__IAudioDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->stopRecordingDeviceTest();
      }
      
int agora_rtc__IAudioDeviceManager__startAudioDeviceLoopbackTest(agora_rtc__IAudioDeviceManager__Handle handle,int indicationInterval) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->startAudioDeviceLoopbackTest(indicationInterval);
      }
      
int agora_rtc__IAudioDeviceManager__stopAudioDeviceLoopbackTest(agora_rtc__IAudioDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->stopAudioDeviceLoopbackTest();
      }
      
int agora_rtc__IAudioDeviceManager__followSystemPlaybackDevice(agora_rtc__IAudioDeviceManager__Handle handle,bool enable) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->followSystemPlaybackDevice(enable);
      }
      
int agora_rtc__IAudioDeviceManager__followSystemRecordingDevice(agora_rtc__IAudioDeviceManager__Handle handle,bool enable) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->followSystemRecordingDevice(enable);
      }
      
int agora_rtc__IAudioDeviceManager__followSystemLoopbackDevice(agora_rtc__IAudioDeviceManager__Handle handle,bool enable) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->followSystemLoopbackDevice(enable);
      }
      
void agora_rtc__IAudioDeviceManager__release(agora_rtc__IAudioDeviceManager__Handle handle) {
        
        reinterpret_cast<agora::rtc::rtc::IAudioDeviceManager *>(handle)->release();
      }
      
