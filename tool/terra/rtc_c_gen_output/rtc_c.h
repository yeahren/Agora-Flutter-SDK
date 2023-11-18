
typedef struct agora__UserInfo__C
{
  util__AString__C userId;
bool hasAudio;
bool hasVideo;
} agora__UserInfo__C;


typedef struct agora__rtc__VideoDimensions__C
{
  int width;
int height;
} agora__rtc__VideoDimensions__C;


typedef struct agora__rtc__SenderOptions__C
{
  agora__rtc__TCcMode__C ccMode;
agora__rtc__VIDEO_CODEC_TYPE__C codecType;
int targetBitrate;
} agora__rtc__SenderOptions__C;


typedef struct agora__rtc__EncodedAudioFrameAdvancedSettings__C
{
  bool speech;
bool sendEvenIfEmpty;
} agora__rtc__EncodedAudioFrameAdvancedSettings__C;


typedef struct agora__rtc__EncodedAudioFrameInfo__C
{
  agora__rtc__AUDIO_CODEC_TYPE__C codec;
int sampleRateHz;
int samplesPerChannel;
int numberOfChannels;
agora__rtc__EncodedAudioFrameAdvancedSettings__C advancedSettings;
int64_t__C captureTimeMs;
} agora__rtc__EncodedAudioFrameInfo__C;


typedef struct agora__rtc__AudioPcmDataInfo__C
{
  size_t__C samplesPerChannel;
int16_t__C channelNum;
size_t__C samplesOut;
int64_t__C elapsedTimeMs;
int64_t__C ntpTimeMs;
} agora__rtc__AudioPcmDataInfo__C;


typedef struct agora__rtc__VideoSubscriptionOptions__C
{
  Optional<agora__rtc__VIDEO_STREAM_TYPE>__C type;
Optional<bool>__C encodedFrameOnly;
} agora__rtc__VideoSubscriptionOptions__C;


typedef struct agora__rtc__EncodedVideoFrameInfo__C
{
  agora__rtc__VIDEO_CODEC_TYPE__C codecType;
int width;
int height;
int framesPerSecond;
agora__rtc__VIDEO_FRAME_TYPE__C frameType;
agora__rtc__VIDEO_ORIENTATION__C rotation;
int trackId;
int64_t__C captureTimeMs;
int64_t__C decodeTimeMs;
agora__rtc__uid_t__C uid;
agora__rtc__VIDEO_STREAM_TYPE__C streamType;
} agora__rtc__EncodedVideoFrameInfo__C;


typedef struct agora__rtc__AdvanceOptions__C
{
  agora__rtc__ENCODING_PREFERENCE__C encodingPreference;
agora__rtc__COMPRESSION_PREFERENCE__C compressionPreference;
} agora__rtc__AdvanceOptions__C;


typedef struct agora__rtc__CodecCapLevels__C
{
  agora__rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C hwDecodingLevel;
agora__rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C swDecodingLevel;
} agora__rtc__CodecCapLevels__C;


typedef struct agora__rtc__CodecCapInfo__C
{
  agora__rtc__VIDEO_CODEC_TYPE__C codecType;
int codecCapMask;
agora__rtc__CodecCapLevels__C codecLevels;
} agora__rtc__CodecCapInfo__C;


typedef struct agora__rtc__VideoEncoderConfiguration__C
{
  agora__rtc__VIDEO_CODEC_TYPE__C codecType;
agora__rtc__VideoDimensions__C dimensions;
int frameRate;
int bitrate;
int minBitrate;
agora__rtc__ORIENTATION_MODE__C orientationMode;
agora__rtc__DEGRADATION_PREFERENCE__C degradationPreference;
agora__rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode;
agora__rtc__AdvanceOptions__C advanceOptions;
} agora__rtc__VideoEncoderConfiguration__C;


typedef struct agora__rtc__DataStreamConfig__C
{
  bool syncWithAudio;
bool ordered;
} agora__rtc__DataStreamConfig__C;


typedef struct agora__rtc__SimulcastStreamConfig__C
{
  agora__rtc__VideoDimensions__C dimensions;
int kBitrate;
int framerate;
} agora__rtc__SimulcastStreamConfig__C;


typedef struct agora__rtc__Rectangle__C
{
  int x;
int y;
int width;
int height;
} agora__rtc__Rectangle__C;


typedef struct agora__rtc__WatermarkRatio__C
{
  float xRatio;
float yRatio;
float widthRatio;
} agora__rtc__WatermarkRatio__C;


typedef struct agora__rtc__WatermarkOptions__C
{
  bool visibleInPreview;
agora__rtc__Rectangle__C positionInLandscapeMode;
agora__rtc__Rectangle__C positionInPortraitMode;
agora__rtc__WatermarkRatio__C watermarkRatio;
agora__rtc__WATERMARK_FIT_MODE__C mode;
} agora__rtc__WatermarkOptions__C;


typedef struct agora__rtc__RtcStats__C
{
  unsigned int duration;
unsigned int txBytes;
unsigned int rxBytes;
unsigned int txAudioBytes;
unsigned int txVideoBytes;
unsigned int rxAudioBytes;
unsigned int rxVideoBytes;
unsigned short txKBitRate;
unsigned short rxKBitRate;
unsigned short rxAudioKBitRate;
unsigned short txAudioKBitRate;
unsigned short rxVideoKBitRate;
unsigned short txVideoKBitRate;
unsigned short lastmileDelay;
unsigned int userCount;
double cpuAppUsage;
double cpuTotalUsage;
int gatewayRtt;
double memoryAppUsageRatio;
double memoryTotalUsageRatio;
int memoryAppUsageInKbytes;
int connectTimeMs;
int firstAudioPacketDuration;
int firstVideoPacketDuration;
int firstVideoKeyFramePacketDuration;
int packetsBeforeFirstKeyFramePacket;
int firstAudioPacketDurationAfterUnmute;
int firstVideoPacketDurationAfterUnmute;
int firstVideoKeyFramePacketDurationAfterUnmute;
int firstVideoKeyFrameDecodedDurationAfterUnmute;
int firstVideoKeyFrameRenderedDurationAfterUnmute;
int txPacketLossRate;
int rxPacketLossRate;
} agora__rtc__RtcStats__C;


typedef struct agora__rtc__ClientRoleOptions__C
{
  agora__rtc__AUDIENCE_LATENCY_LEVEL_TYPE__C audienceLatencyLevel;
} agora__rtc__ClientRoleOptions__C;


typedef struct agora__rtc__VideoFormat__C
{
  int width;
int height;
int fps;
} agora__rtc__VideoFormat__C;


typedef struct agora__rtc__VideoTrackInfo__C
{
  bool isLocal;
agora__rtc__uid_t__C ownerUid;
agora__rtc__track_id_t__C trackId;
char const* channelId;
agora__rtc__VIDEO_STREAM_TYPE__C streamType;
agora__rtc__VIDEO_CODEC_TYPE__C codecType;
bool encodedFrameOnly;
agora__rtc__VIDEO_SOURCE_TYPE__C sourceType;
uint32_t__C observationPosition;
} agora__rtc__VideoTrackInfo__C;


typedef struct agora__rtc__AudioVolumeInfo__C
{
  agora__rtc__uid_t__C uid;
unsigned int volume;
unsigned int vad;
double voicePitch;
} agora__rtc__AudioVolumeInfo__C;


typedef struct agora__rtc__DeviceInfo__C
{
  bool isLowLatencyAudioSupported;
} agora__rtc__DeviceInfo__C;


typedef struct agora__rtc__Packet__C
{
  unsigned char const* buffer;
unsigned int size;
} agora__rtc__Packet__C;


typedef struct agora__rtc__LocalAudioStats__C
{
  int numChannels;
int sentSampleRate;
int sentBitrate;
int internalCodec;
unsigned short txPacketLossRate;
int audioDeviceDelay;
} agora__rtc__LocalAudioStats__C;


typedef struct agora__rtc__RtcImage__C
{
  char const* url;
int x;
int y;
int width;
int height;
int zOrder;
double alpha;
} agora__rtc__RtcImage__C;


typedef struct agora__rtc__LiveStreamAdvancedFeature__C
{
  char const* featureName;
bool opened;
} agora__rtc__LiveStreamAdvancedFeature__C;


typedef struct agora__rtc__TranscodingUser__C
{
  agora__rtc__uid_t__C uid;
int x;
int y;
int width;
int height;
int zOrder;
double alpha;
int audioChannel;
} agora__rtc__TranscodingUser__C;


typedef struct agora__rtc__LiveTranscoding__C
{
  int width;
int height;
int videoBitrate;
int videoFramerate;
bool lowLatency;
int videoGop;
agora__rtc__VIDEO_CODEC_PROFILE_TYPE__C videoCodecProfile;
unsigned int backgroundColor;
agora__rtc__VIDEO_CODEC_TYPE_FOR_STREAM__C videoCodecType;
unsigned int userCount;
agora__rtc__TranscodingUser*__C transcodingUsers;
char const* transcodingExtraInfo;
char const* metadata;
agora__rtc__RtcImage*__C watermark;
unsigned int watermarkCount;
agora__rtc__RtcImage*__C backgroundImage;
unsigned int backgroundImageCount;
agora__rtc__AUDIO_SAMPLE_RATE_TYPE__C audioSampleRate;
int audioBitrate;
int audioChannels;
agora__rtc__AUDIO_CODEC_PROFILE_TYPE__C audioCodecProfile;
agora__rtc__LiveStreamAdvancedFeature*__C advancedFeatures;
unsigned int advancedFeatureCount;
} agora__rtc__LiveTranscoding__C;


typedef struct agora__rtc__TranscodingVideoStream__C
{
  agora__rtc__VIDEO_SOURCE_TYPE__C sourceType;
agora__rtc__uid_t__C remoteUserUid;
char const* imageUrl;
int mediaPlayerId;
int x;
int y;
int width;
int height;
int zOrder;
double alpha;
bool mirror;
} agora__rtc__TranscodingVideoStream__C;


typedef struct agora__rtc__LocalTranscoderConfiguration__C
{
  unsigned int streamCount;
agora__rtc__TranscodingVideoStream*__C videoInputStreams;
agora__rtc__VideoEncoderConfiguration__C videoOutputConfiguration;
bool syncWithPrimaryCamera;
} agora__rtc__LocalTranscoderConfiguration__C;


typedef struct agora__rtc__LastmileProbeConfig__C
{
  bool probeUplink;
bool probeDownlink;
unsigned int expectedUplinkBitrate;
unsigned int expectedDownlinkBitrate;
} agora__rtc__LastmileProbeConfig__C;


typedef struct agora__rtc__LastmileProbeOneWayResult__C
{
  unsigned int packetLossRate;
unsigned int jitter;
unsigned int availableBandwidth;
} agora__rtc__LastmileProbeOneWayResult__C;


typedef struct agora__rtc__LastmileProbeResult__C
{
  agora__rtc__LASTMILE_PROBE_RESULT_STATE__C state;
agora__rtc__LastmileProbeOneWayResult__C uplinkReport;
agora__rtc__LastmileProbeOneWayResult__C downlinkReport;
unsigned int rtt;
} agora__rtc__LastmileProbeResult__C;


typedef struct agora__rtc__WlAccStats__C
{
  unsigned short e2eDelayPercent;
unsigned short frozenRatioPercent;
unsigned short lossRatePercent;
} agora__rtc__WlAccStats__C;


typedef struct agora__rtc__VideoCanvas__C
{
  agora__view_t__C view;
agora__rtc__uid_t__C uid;
uint32_t__C backgroundColor;
media__base__RENDER_MODE_TYPE__C renderMode;
agora__rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode;
agora__rtc__VIDEO_VIEW_SETUP_MODE__C setupMode;
agora__rtc__VIDEO_SOURCE_TYPE__C sourceType;
int mediaPlayerId;
agora__rtc__Rectangle__C cropArea;
bool enableAlphaMask;
} agora__rtc__VideoCanvas__C;


typedef struct agora__rtc__BeautyOptions__C
{
  agora__rtc__BeautyOptions__LIGHTENING_CONTRAST_LEVEL__C lighteningContrastLevel;
float lighteningLevel;
float smoothnessLevel;
float rednessLevel;
float sharpnessLevel;
} agora__rtc__BeautyOptions__C;


typedef struct agora__rtc__LowlightEnhanceOptions__C
{
  agora__rtc__LowlightEnhanceOptions__LOW_LIGHT_ENHANCE_MODE__C mode;
agora__rtc__LowlightEnhanceOptions__LOW_LIGHT_ENHANCE_LEVEL__C level;
} agora__rtc__LowlightEnhanceOptions__C;


typedef struct agora__rtc__VideoDenoiserOptions__C
{
  agora__rtc__VideoDenoiserOptions__VIDEO_DENOISER_MODE__C mode;
agora__rtc__VideoDenoiserOptions__VIDEO_DENOISER_LEVEL__C level;
} agora__rtc__VideoDenoiserOptions__C;


typedef struct agora__rtc__ColorEnhanceOptions__C
{
  float strengthLevel;
float skinProtectLevel;
} agora__rtc__ColorEnhanceOptions__C;


typedef struct agora__rtc__VirtualBackgroundSource__C
{
  agora__rtc__VirtualBackgroundSource__BACKGROUND_SOURCE_TYPE__C background_source_type;
unsigned int color;
char const* source;
agora__rtc__VirtualBackgroundSource__BACKGROUND_BLUR_DEGREE__C blur_degree;
} agora__rtc__VirtualBackgroundSource__C;


typedef struct agora__rtc__SegmentationProperty__C
{
  agora__rtc__SegmentationProperty__SEG_MODEL_TYPE__C modelType;
float greenCapacity;
} agora__rtc__SegmentationProperty__C;


typedef struct agora__rtc__AudioTrackConfig__C
{
  bool enableLocalPlayback;
} agora__rtc__AudioTrackConfig__C;


typedef struct agora__rtc__ScreenCaptureParameters__C
{
  agora__rtc__VideoDimensions__C dimensions;
int frameRate;
int bitrate;
bool captureMouseCursor;
bool windowFocus;
agora__view_t*__C excludeWindowList;
int excludeWindowCount;
int highLightWidth;
unsigned int highLightColor;
bool enableHighLight;
} agora__rtc__ScreenCaptureParameters__C;


typedef struct agora__rtc__AudioRecordingConfiguration__C
{
  char const* filePath;
bool encode;
int sampleRate;
agora__rtc__AUDIO_FILE_RECORDING_TYPE__C fileRecordingType;
agora__rtc__AUDIO_RECORDING_QUALITY_TYPE__C quality;
int recordingChannel;
} agora__rtc__AudioRecordingConfiguration__C;


typedef struct agora__rtc__AudioEncodedFrameObserverConfig__C
{
  agora__rtc__AUDIO_ENCODED_FRAME_OBSERVER_POSITION__C postionType;
agora__rtc__AUDIO_ENCODING_TYPE__C encodingType;
} agora__rtc__AudioEncodedFrameObserverConfig__C;


typedef struct agora__rtc__ChannelMediaInfo__C
{
  char const* channelName;
char const* token;
agora__rtc__uid_t__C uid;
} agora__rtc__ChannelMediaInfo__C;


typedef struct agora__rtc__ChannelMediaRelayConfiguration__C
{
  agora__rtc__ChannelMediaInfo*__C srcInfo;
agora__rtc__ChannelMediaInfo*__C destInfos;
int destCount;
} agora__rtc__ChannelMediaRelayConfiguration__C;


typedef struct agora__rtc__UplinkNetworkInfo__C
{
  int video_encoder_target_bitrate_bps;
} agora__rtc__UplinkNetworkInfo__C;


typedef struct agora__rtc__DownlinkNetworkInfo__C
{
  int lastmile_buffer_delay_time_ms;
int bandwidth_estimation_bps;
int total_downscale_level_count;
agora__rtc__DownlinkNetworkInfo__PeerDownlinkInfo*__C peer_downlink_info;
int total_received_video_count;
} agora__rtc__DownlinkNetworkInfo__C;


typedef struct agora__rtc__PeerDownlinkInfo__C
{
  char const* uid;
agora__rtc__VIDEO_STREAM_TYPE__C stream_type;
agora__rtc__REMOTE_VIDEO_DOWNSCALE_LEVEL__C current_downscale_level;
int expected_bitrate_bps;
} agora__rtc__PeerDownlinkInfo__C;


typedef struct agora__rtc__EncryptionConfig__C
{
  agora__rtc__ENCRYPTION_MODE__C encryptionMode;
char const* encryptionKey;
uint8_t[32]__C encryptionKdfSalt;
} agora__rtc__EncryptionConfig__C;


typedef struct agora__rtc__EchoTestConfiguration__C
{
  agora__view_t__C view;
bool enableAudio;
bool enableVideo;
char const* token;
char const* channelId;
int intervalInSeconds;
} agora__rtc__EchoTestConfiguration__C;


typedef struct agora__rtc__UserInfo__C
{
  agora__rtc__uid_t__C uid;
char[256] userAccount;
} agora__rtc__UserInfo__C;


typedef struct agora__rtc__ScreenVideoParameters__C
{
  agora__rtc__VideoDimensions__C dimensions;
int frameRate;
int bitrate;
agora__rtc__VIDEO_CONTENT_HINT__C contentHint;
} agora__rtc__ScreenVideoParameters__C;


typedef struct agora__rtc__ScreenAudioParameters__C
{
  int sampleRate;
int channels;
int captureSignalVolume;
} agora__rtc__ScreenAudioParameters__C;


typedef struct agora__rtc__ScreenCaptureParameters2__C
{
  bool captureAudio;
agora__rtc__ScreenAudioParameters__C audioParams;
bool captureVideo;
agora__rtc__ScreenVideoParameters__C videoParams;
} agora__rtc__ScreenCaptureParameters2__C;


typedef struct agora__rtc__VideoRenderingTracingInfo__C
{
  int elapsedTime;
int start2JoinChannel;
int join2JoinSuccess;
int joinSuccess2RemoteJoined;
int remoteJoined2SetView;
int remoteJoined2UnmuteVideo;
int remoteJoined2PacketReceived;
} agora__rtc__VideoRenderingTracingInfo__C;


typedef struct agora__rtc__RecorderStreamInfo__C
{
  char const* channelId;
agora__rtc__uid_t__C uid;
} agora__rtc__RecorderStreamInfo__C;


typedef struct agora__rtc__LogUploadServerInfo__C
{
  char const* serverDomain;
char const* serverPath;
int serverPort;
bool serverHttps;
} agora__rtc__LogUploadServerInfo__C;


typedef struct agora__rtc__AdvancedConfigInfo__C
{
  agora__rtc__LogUploadServerInfo__C logUploadServer;
} agora__rtc__AdvancedConfigInfo__C;


typedef struct agora__rtc__LocalAccessPointConfiguration__C
{
  char const** ipList;
int ipListSize;
char const** domainList;
int domainListSize;
char const* verifyDomainName;
agora__rtc__LOCAL_PROXY_MODE__C mode;
agora__rtc__AdvancedConfigInfo__C advancedConfig;
} agora__rtc__LocalAccessPointConfiguration__C;


typedef struct agora__SpatialAudioParams__C
{
  Optional<double>__C speaker_azimuth;
Optional<double>__C speaker_elevation;
Optional<double>__C speaker_distance;
Optional<int>__C speaker_orientation;
Optional<bool>__C enable_blur;
Optional<bool>__C enable_air_absorb;
Optional<double>__C speaker_attenuation;
Optional<bool>__C enable_doppler;
} agora__SpatialAudioParams__C;


typedef struct agora__rtc__AudioParameters__C
{
  int sample_rate;
size_t__C channels;
size_t__C frames_per_buffer;
} agora__rtc__AudioParameters__C;


typedef struct agora__media__ContentInspectModule__C
{
  agora__media__CONTENT_INSPECT_TYPE__C type;
unsigned int interval;
} agora__media__ContentInspectModule__C;


typedef struct agora__media__ContentInspectConfig__C
{
  char const* extraInfo;
char const* serverConfig;
agora__media__ContentInspectModule[32]__C modules;
int moduleCount;
} agora__media__ContentInspectConfig__C;


typedef struct agora__media__base__PacketOptions__C
{
  uint32_t__C timestamp;
uint8_t__C audioLevelIndication;
} agora__media__base__PacketOptions__C;


typedef struct agora__media__base__AudioEncodedFrameInfo__C
{
  uint64_t__C sendTs;
uint8_t__C codec;
} agora__media__base__AudioEncodedFrameInfo__C;


typedef struct agora__media__base__AudioPcmFrame__C
{
  int64_t__C capture_timestamp;
size_t__C samples_per_channel_;
int sample_rate_hz_;
size_t__C num_channels_;
rtc__BYTES_PER_SAMPLE__C bytes_per_sample;
int16_t[3840]__C data_;
} agora__media__base__AudioPcmFrame__C;


typedef struct agora__media__base__ExternalVideoFrame__C
{
  agora__media__base__ExternalVideoFrame__VIDEO_BUFFER_TYPE__C type;
agora__media__base__VIDEO_PIXEL_FORMAT__C format;
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
agora__media__base__ExternalVideoFrame__EGL_CONTEXT_TYPE__C eglType;
int textureId;
float[16] matrix;
uint8_t*__C metadata_buffer;
int metadata_size;
uint8_t*__C alphaBuffer;
void* d3d11_texture_2d;
int texture_slice_index;
} agora__media__base__ExternalVideoFrame__C;


typedef struct agora__media__base__VideoFrame__C
{
  agora__media__base__VIDEO_PIXEL_FORMAT__C type;
int width;
int height;
int yStride;
int uStride;
int vStride;
uint8_t*__C yBuffer;
uint8_t*__C uBuffer;
uint8_t*__C vBuffer;
int rotation;
int64_t__C renderTimeMs;
int avsync_type;
uint8_t*__C metadata_buffer;
int metadata_size;
void* sharedContext;
int textureId;
void* d3d11Texture2d;
float[16] matrix;
uint8_t*__C alphaBuffer;
void* pixelBuffer;
} agora__media__base__VideoFrame__C;


typedef struct agora__media__AudioFrame__C
{
  agora__media__IAudioFrameObserverBase__AUDIO_FRAME_TYPE__C type;
int samplesPerChannel;
agora__rtc__BYTES_PER_SAMPLE__C bytesPerSample;
int channels;
int samplesPerSec;
void* buffer;
int64_t__C renderTimeMs;
int avsync_type;
int64_t__C presentationMs;
} agora__media__AudioFrame__C;


typedef struct agora__media__AudioParams__C
{
  int sample_rate;
int channels;
rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C mode;
int samples_per_call;
} agora__media__AudioParams__C;


typedef struct agora__media__AudioSpectrumData__C
{
  float const* audioSpectrumData;
int dataLength;
} agora__media__AudioSpectrumData__C;


typedef struct agora__media__UserAudioSpectrumInfo__C
{
  agora__rtc__uid_t__C uid;
AudioSpectrumData__C spectrumData;
} agora__media__UserAudioSpectrumInfo__C;


typedef struct agora__media__MediaRecorderConfiguration__C
{
  char const* storagePath;
agora__media__MediaRecorderContainerFormat__C containerFormat;
agora__media__MediaRecorderStreamType__C streamType;
int maxDurationMs;
int recorderInfoUpdateInterval;
} agora__media__MediaRecorderConfiguration__C;


typedef struct agora__media__RecorderInfo__C
{
  char const* fileName;
unsigned int durationMs;
unsigned int fileSize;
} agora__media__RecorderInfo__C;


typedef struct agora__media__base__PlayerStreamInfo__C
{
  int streamIndex;
agora__media__base__MEDIA_STREAM_TYPE__C streamType;
char[50] codecName;
char[50] language;
int videoFrameRate;
int videoBitRate;
int videoWidth;
int videoHeight;
int videoRotation;
int audioSampleRate;
int audioChannels;
int audioBitsPerSample;
int64_t__C duration;
} agora__media__base__PlayerStreamInfo__C;


typedef struct agora__media__base__SrcInfo__C
{
  int bitrateInKbps;
char const* name;
} agora__media__base__SrcInfo__C;


typedef struct agora__media__base__CacheStatistics__C
{
  int64_t__C fileSize;
int64_t__C cacheSize;
int64_t__C downloadSize;
} agora__media__base__CacheStatistics__C;


typedef struct agora__media__base__PlayerUpdatedInfo__C
{
  Optional<const char *>__C playerId;
Optional<const char *>__C deviceId;
Optional<agora__media__base__CacheStatistics>__C cacheStatistics;
} agora__media__base__PlayerUpdatedInfo__C;


typedef struct agora__media__base__MediaSource__C
{
  char const* url;
char const* uri;
int64_t__C startPos;
bool autoPlay;
bool enableCache;
Optional<bool>__C isAgoraSource;
Optional<bool>__C isLiveSource;
agora__media__base__IMediaPlayerCustomDataProvider*__C provider;
} agora__media__base__MediaSource__C;


typedef struct agora__commons__LogConfig__C
{
  char const* filePath;
uint32_t__C fileSizeInKB;
agora__commons__LOG_LEVEL__C level;
} agora__commons__LogConfig__C;


typedef struct agora__rtc__InputSeiData__C
{
  int32_t__C type;
int64_t__C timestamp;
int64_t__C frame_index;
uint8_t*__C private_data;
int32_t__C data_size;
} agora__rtc__InputSeiData__C;


typedef struct agora__rtc__MusicChartInfo__C
{
  char const* chartName;
int32_t__C id;
} agora__rtc__MusicChartInfo__C;


typedef struct agora__rtc__MusicCacheInfo__C
{
  int64_t__C songCode;
agora__rtc__MUSIC_CACHE_STATUS_TYPE__C status;
} agora__rtc__MusicCacheInfo__C;


typedef struct agora__rtc__MvProperty__C
{
  char const* resolution;
char const* bandwidth;
} agora__rtc__MvProperty__C;


typedef struct agora__rtc__ClimaxSegment__C
{
  int32_t__C startTimeMs;
int32_t__C endTimeMs;
} agora__rtc__ClimaxSegment__C;


typedef struct agora__rtc__Music__C
{
  int64_t__C songCode;
char const* name;
char const* singer;
char const* poster;
char const* releaseTime;
int32_t__C durationS;
int32_t__C type;
int32_t__C pitchType;
int32_t__C lyricCount;
int32_t*__C lyricList;
int32_t__C climaxSegmentCount;
agora__rtc__ClimaxSegment*__C climaxSegmentList;
int32_t__C mvPropertyCount;
agora__rtc__MvProperty*__C mvPropertyList;
} agora__rtc__Music__C;


typedef struct agora__rtc__MusicContentCenterConfiguration__C
{
  char const* appId;
char const* token;
int64_t__C mccUid;
int32_t__C maxCacheSize;
char const* mccDomain;
agora__rtc__IMusicContentCenterEventHandler*__C eventHandler;
} agora__rtc__MusicContentCenterConfiguration__C;


typedef struct agora__rtc__AgoraRhythmPlayerConfig__C
{
  int beatsPerMeasure;
int beatsPerMinute;
} agora__rtc__AgoraRhythmPlayerConfig__C;


typedef struct agora__rtc__LocalVideoStats__C
{
  agora__rtc__uid_t__C uid;
int sentBitrate;
int sentFrameRate;
int captureFrameRate;
int captureFrameWidth;
int captureFrameHeight;
int regulatedCaptureFrameRate;
int regulatedCaptureFrameWidth;
int regulatedCaptureFrameHeight;
int encoderOutputFrameRate;
int encodedFrameWidth;
int encodedFrameHeight;
int rendererOutputFrameRate;
int targetBitrate;
int targetFrameRate;
agora__rtc__QUALITY_ADAPT_INDICATION__C qualityAdaptIndication;
int encodedBitrate;
int encodedFrameCount;
agora__rtc__VIDEO_CODEC_TYPE__C codecType;
unsigned short txPacketLossRate;
agora__rtc__CAPTURE_BRIGHTNESS_LEVEL_TYPE__C captureBrightnessLevel;
bool dualStreamEnabled;
int hwEncoderAccelerating;
} agora__rtc__LocalVideoStats__C;


typedef struct agora__rtc__RemoteAudioStats__C
{
  agora__rtc__uid_t__C uid;
int quality;
int networkTransportDelay;
int jitterBufferDelay;
int audioLossRate;
int numChannels;
int receivedSampleRate;
int receivedBitrate;
int totalFrozenTime;
int frozenRate;
int mosValue;
uint32_t__C frozenRateByCustomPlcCount;
uint32_t__C plcCount;
int totalActiveTime;
int publishDuration;
int qoeQuality;
int qualityChangedReason;
unsigned int rxAudioBytes;
} agora__rtc__RemoteAudioStats__C;


typedef struct agora__rtc__RemoteVideoStats__C
{
  agora__rtc__uid_t__C uid;
int delay;
int e2eDelay;
int width;
int height;
int receivedBitrate;
int decoderOutputFrameRate;
int rendererOutputFrameRate;
int frameLossRate;
int packetLossRate;
agora__rtc__VIDEO_STREAM_TYPE__C rxStreamType;
int totalFrozenTime;
int frozenRate;
int avSyncTimeMs;
int totalActiveTime;
int publishDuration;
int mosValue;
unsigned int rxVideoBytes;
} agora__rtc__RemoteVideoStats__C;


typedef struct agora__rtc__VideoCompositingLayout__C
{
  int canvasWidth;
int canvasHeight;
char const* backgroundColor;
agora__rtc__VideoCompositingLayout__Region const*__C regions;
int regionCount;
char const* appData;
int appDataLength;
} agora__rtc__VideoCompositingLayout__C;


typedef struct agora__rtc__Region__C
{
  agora__rtc__uid_t__C uid;
double x;
double y;
double width;
double height;
int zOrder;
double alpha;
media__base__RENDER_MODE_TYPE__C renderMode;
} agora__rtc__Region__C;


typedef struct agora__rtc__InjectStreamConfig__C
{
  int width;
int height;
int videoGop;
int videoFramerate;
int videoBitrate;
agora__rtc__AUDIO_SAMPLE_RATE_TYPE__C audioSampleRate;
int audioBitrate;
int audioChannels;
} agora__rtc__InjectStreamConfig__C;


typedef struct agora__rtc__PublisherConfiguration__C
{
  int width;
int height;
int framerate;
int bitrate;
int defaultLayout;
int lifecycle;
bool owner;
int injectStreamWidth;
int injectStreamHeight;
char const* injectStreamUrl;
char const* publishUrl;
char const* rawStreamUrl;
char const* extraInfo;
} agora__rtc__PublisherConfiguration__C;


typedef struct agora__rtc__CameraCapturerConfiguration__C
{
  agora__rtc__CAMERA_DIRECTION__C cameraDirection;
char[512] deviceId;
agora__rtc__VideoFormat__C format;
bool followEncodeDimensionRatio;
} agora__rtc__CameraCapturerConfiguration__C;


typedef struct agora__rtc__ScreenCaptureConfiguration__C
{
  bool isCaptureWindow;
uint32_t__C displayId;
agora__rtc__Rectangle__C screenRect;
agora__view_t__C windowId;
agora__rtc__ScreenCaptureParameters__C params;
agora__rtc__Rectangle__C regionRect;
} agora__rtc__ScreenCaptureConfiguration__C;


typedef struct agora__rtc__SIZE__C
{
  int width;
int height;
} agora__rtc__SIZE__C;


typedef struct agora__rtc__ThumbImageBuffer__C
{
  char const* buffer;
unsigned int length;
unsigned int width;
unsigned int height;
} agora__rtc__ThumbImageBuffer__C;


typedef struct agora__rtc__ScreenCaptureSourceInfo__C
{
  agora__rtc__ScreenCaptureSourceType__C type;
agora__view_t__C sourceId;
char const* sourceName;
agora__rtc__ThumbImageBuffer__C thumbImage;
agora__rtc__ThumbImageBuffer__C iconImage;
char const* processPath;
char const* sourceTitle;
bool primaryMonitor;
bool isOccluded;
agora__rtc__Rectangle__C position;
bool minimizeWindow;
agora__view_t__C sourceDisplayId;
} agora__rtc__ScreenCaptureSourceInfo__C;


typedef struct agora__rtc__AdvancedAudioOptions__C
{
  Optional<int>__C audioProcessingChannels;
} agora__rtc__AdvancedAudioOptions__C;


typedef struct agora__rtc__ImageTrackOptions__C
{
  char const* imageUrl;
int fps;
agora__rtc__VIDEO_MIRROR_MODE_TYPE__C mirrorMode;
} agora__rtc__ImageTrackOptions__C;


typedef struct agora__rtc__ChannelMediaOptions__C
{
  Optional<bool>__C publishCameraTrack;
Optional<bool>__C publishSecondaryCameraTrack;
Optional<bool>__C publishThirdCameraTrack;
Optional<bool>__C publishFourthCameraTrack;
Optional<bool>__C publishMicrophoneTrack;
Optional<bool>__C publishScreenCaptureVideo;
Optional<bool>__C publishScreenCaptureAudio;
Optional<bool>__C publishScreenTrack;
Optional<bool>__C publishSecondaryScreenTrack;
Optional<bool>__C publishThirdScreenTrack;
Optional<bool>__C publishFourthScreenTrack;
Optional<bool>__C publishCustomAudioTrack;
Optional<int>__C publishCustomAudioTrackId;
Optional<bool>__C publishCustomVideoTrack;
Optional<bool>__C publishEncodedVideoTrack;
Optional<bool>__C publishMediaPlayerAudioTrack;
Optional<bool>__C publishMediaPlayerVideoTrack;
Optional<bool>__C publishTranscodedVideoTrack;
Optional<bool>__C autoSubscribeAudio;
Optional<bool>__C autoSubscribeVideo;
Optional<bool>__C enableAudioRecordingOrPlayout;
Optional<int>__C publishMediaPlayerId;
Optional<agora__rtc__CLIENT_ROLE_TYPE>__C clientRoleType;
Optional<agora__rtc__AUDIENCE_LATENCY_LEVEL_TYPE>__C audienceLatencyLevel;
Optional<agora__rtc__VIDEO_STREAM_TYPE>__C defaultVideoStreamType;
Optional<agora__CHANNEL_PROFILE_TYPE>__C channelProfile;
Optional<int>__C audioDelayMs;
Optional<int>__C mediaPlayerAudioDelayMs;
Optional<const char *>__C token;
Optional<bool>__C enableBuiltInMediaEncryption;
Optional<bool>__C publishRhythmPlayerTrack;
Optional<bool>__C isInteractiveAudience;
Optional<agora__rtc__video_track_id_t>__C customVideoTrackId;
Optional<bool>__C isAudioFilterable;
} agora__rtc__ChannelMediaOptions__C;


typedef struct agora__rtc__LeaveChannelOptions__C
{
  bool stopAudioMixing;
bool stopAllEffect;
bool stopMicrophoneRecording;
} agora__rtc__LeaveChannelOptions__C;


typedef struct agora__rtc__RtcEngineContext__C
{
  agora__rtc__IRtcEngineEventHandler*__C eventHandler;
char const* appId;
void* context;
agora__CHANNEL_PROFILE_TYPE__C channelProfile;
char const* license;
agora__rtc__AUDIO_SCENARIO_TYPE__C audioScenario;
unsigned int areaCode;
commons__LogConfig__C logConfig;
Optional<agora__rtc__THREAD_PRIORITY_TYPE>__C threadPriority;
bool useExternalEglContext;
bool domainLimit;
bool autoRegisterAgoraExtensions;
} agora__rtc__RtcEngineContext__C;


typedef struct agora__rtc__Metadata__C
{
  unsigned int uid;
unsigned int size;
unsigned char* buffer;
long long timeStampMs;
} agora__rtc__Metadata__C;


typedef struct agora__rtc__DirectCdnStreamingStats__C
{
  int videoWidth;
int videoHeight;
int fps;
int videoBitrate;
int audioBitrate;
} agora__rtc__DirectCdnStreamingStats__C;


typedef struct agora__rtc__DirectCdnStreamingMediaOptions__C
{
  Optional<bool>__C publishCameraTrack;
Optional<bool>__C publishMicrophoneTrack;
Optional<bool>__C publishCustomAudioTrack;
Optional<bool>__C publishCustomVideoTrack;
Optional<bool>__C publishMediaPlayerAudioTrack;
Optional<int>__C publishMediaPlayerId;
Optional<agora__rtc__video_track_id_t>__C customVideoTrackId;
} agora__rtc__DirectCdnStreamingMediaOptions__C;


typedef struct agora__rtc__ExtensionInfo__C
{
  agora__media__MEDIA_SOURCE_TYPE__C mediaSourceType;
agora__rtc__uid_t__C remoteUid;
char const* channelId;
agora__rtc__uid_t__C localUid;
} agora__rtc__ExtensionInfo__C;


typedef struct agora__rtc__RtcConnection__C
{
  char const* channelId;
agora__rtc__uid_t__C localUid;
} agora__rtc__RtcConnection__C;


typedef struct agora__rtc__RemoteVoicePositionInfo__C
{
  float[3] position;
float[3] forward;
} agora__rtc__RemoteVoicePositionInfo__C;


typedef struct agora__rtc__SpatialAudioZone__C
{
  int zoneSetId;
float[3] position;
float[3] forward;
float[3] right;
float[3] up;
float forwardLength;
float rightLength;
float upLength;
float audioAttenuation;
} agora__rtc__SpatialAudioZone__C;


typedef struct agora__rtc__LocalSpatialAudioConfig__C
{
  agora__rtc__IRtcEngine*__C rtcEngine;
} agora__rtc__LocalSpatialAudioConfig__C;

typedef enum agora__CHANNEL_PROFILE_TYPE__C
{
  CHANNEL_PROFILE_COMMUNICATION= 0;
CHANNEL_PROFILE_LIVE_BROADCASTING= 1;
CHANNEL_PROFILE_GAME= 2;
CHANNEL_PROFILE_CLOUD_GAMING= 3;
CHANNEL_PROFILE_COMMUNICATION_1v1= 4;
} agora__CHANNEL_PROFILE_TYPE__C;


typedef enum agora__WARN_CODE_TYPE__C
{
  WARN_INVALID_VIEW= 8;
WARN_INIT_VIDEO= 16;
WARN_PENDING= 20;
WARN_NO_AVAILABLE_CHANNEL= 103;
WARN_LOOKUP_CHANNEL_TIMEOUT= 104;
WARN_LOOKUP_CHANNEL_REJECTED= 105;
WARN_OPEN_CHANNEL_TIMEOUT= 106;
WARN_OPEN_CHANNEL_REJECTED= 107;
WARN_SWITCH_LIVE_VIDEO_TIMEOUT= 111;
WARN_SET_CLIENT_ROLE_TIMEOUT= 118;
WARN_OPEN_CHANNEL_INVALID_TICKET= 121;
WARN_OPEN_CHANNEL_TRY_NEXT_VOS= 122;
WARN_CHANNEL_CONNECTION_UNRECOVERABLE= 131;
WARN_CHANNEL_CONNECTION_IP_CHANGED= 132;
WARN_CHANNEL_CONNECTION_PORT_CHANGED= 133;
WARN_CHANNEL_SOCKET_ERROR= 134;
WARN_AUDIO_MIXING_OPEN_ERROR= 701;
WARN_ADM_RUNTIME_PLAYOUT_WARNING= 1014;
WARN_ADM_RUNTIME_RECORDING_WARNING= 1016;
WARN_ADM_RECORD_AUDIO_SILENCE= 1019;
WARN_ADM_PLAYOUT_MALFUNCTION= 1020;
WARN_ADM_RECORD_MALFUNCTION= 1021;
WARN_ADM_RECORD_AUDIO_LOWLEVEL= 1031;
WARN_ADM_PLAYOUT_AUDIO_LOWLEVEL= 1032;
WARN_ADM_WINDOWS_NO_DATA_READY_EVENT= 1040;
WARN_APM_HOWLING= 1051;
WARN_ADM_GLITCH_STATE= 1052;
WARN_ADM_IMPROPER_SETTINGS= 1053;
WARN_ADM_WIN_CORE_NO_RECORDING_DEVICE= 1322;
WARN_ADM_WIN_CORE_NO_PLAYOUT_DEVICE= 1323;
WARN_ADM_WIN_CORE_IMPROPER_CAPTURE_RELEASE= 1324;
} agora__WARN_CODE_TYPE__C;


typedef enum agora__ERROR_CODE_TYPE__C
{
  ERR_OK= 0;
ERR_FAILED= 1;
ERR_INVALID_ARGUMENT= 2;
ERR_NOT_READY= 3;
ERR_NOT_SUPPORTED= 4;
ERR_REFUSED= 5;
ERR_BUFFER_TOO_SMALL= 6;
ERR_NOT_INITIALIZED= 7;
ERR_INVALID_STATE= 8;
ERR_NO_PERMISSION= 9;
ERR_TIMEDOUT= 10;
ERR_CANCELED= 11;
ERR_TOO_OFTEN= 12;
ERR_BIND_SOCKET= 13;
ERR_NET_DOWN= 14;
ERR_JOIN_CHANNEL_REJECTED= 17;
ERR_LEAVE_CHANNEL_REJECTED= 18;
ERR_ALREADY_IN_USE= 19;
ERR_ABORTED= 20;
ERR_INIT_NET_ENGINE= 21;
ERR_RESOURCE_LIMITED= 22;
ERR_INVALID_APP_ID= 101;
ERR_INVALID_CHANNEL_NAME= 102;
ERR_NO_SERVER_RESOURCES= 103;
ERR_TOKEN_EXPIRED= 109;
ERR_INVALID_TOKEN= 110;
ERR_CONNECTION_INTERRUPTED= 111;
ERR_CONNECTION_LOST= 112;
ERR_NOT_IN_CHANNEL= 113;
ERR_SIZE_TOO_LARGE= 114;
ERR_BITRATE_LIMIT= 115;
ERR_TOO_MANY_DATA_STREAMS= 116;
ERR_STREAM_MESSAGE_TIMEOUT= 117;
ERR_SET_CLIENT_ROLE_NOT_AUTHORIZED= 119;
ERR_DECRYPTION_FAILED= 120;
ERR_INVALID_USER_ID= 121;
ERR_CLIENT_IS_BANNED_BY_SERVER= 123;
ERR_ENCRYPTED_STREAM_NOT_ALLOWED_PUBLISH= 130;
ERR_LICENSE_CREDENTIAL_INVALID= 131;
ERR_INVALID_USER_ACCOUNT= 134;
ERR_MODULE_NOT_FOUND= 157;
ERR_CERT_RAW= 157;
ERR_CERT_JSON_PART= 158;
ERR_CERT_JSON_INVAL= 159;
ERR_CERT_JSON_NOMEM= 160;
ERR_CERT_CUSTOM= 161;
ERR_CERT_CREDENTIAL= 162;
ERR_CERT_SIGN= 163;
ERR_CERT_FAIL= 164;
ERR_CERT_BUF= 165;
ERR_CERT_NULL= 166;
ERR_CERT_DUEDATE= 167;
ERR_CERT_REQUEST= 168;
ERR_PCMSEND_FORMAT= 200;
ERR_PCMSEND_BUFFEROVERFLOW= 201;
ERR_LOGIN_ALREADY_LOGIN= 428;
ERR_LOAD_MEDIA_ENGINE= 1001;
ERR_ADM_GENERAL_ERROR= 1005;
ERR_ADM_INIT_PLAYOUT= 1008;
ERR_ADM_START_PLAYOUT= 1009;
ERR_ADM_STOP_PLAYOUT= 1010;
ERR_ADM_INIT_RECORDING= 1011;
ERR_ADM_START_RECORDING= 1012;
ERR_ADM_STOP_RECORDING= 1013;
ERR_VDM_CAMERA_NOT_AUTHORIZED= 1501;
ERR_ADM_APPLICATION_LOOPBACK= 2007;
} agora__ERROR_CODE_TYPE__C;


typedef enum agora__LICENSE_ERROR_TYPE__C
{
  LICENSE_ERR_INVALID= 1;
LICENSE_ERR_EXPIRE= 2;
LICENSE_ERR_MINUTES_EXCEED= 3;
LICENSE_ERR_LIMITED_PERIOD= 4;
LICENSE_ERR_DIFF_DEVICES= 5;
LICENSE_ERR_INTERNAL= 99;
} agora__LICENSE_ERROR_TYPE__C;


typedef enum agora__AUDIO_SESSION_OPERATION_RESTRICTION__C
{
  AUDIO_SESSION_OPERATION_RESTRICTION_NONE= 0;
AUDIO_SESSION_OPERATION_RESTRICTION_SET_CATEGORY= 1;
AUDIO_SESSION_OPERATION_RESTRICTION_CONFIGURE_SESSION= 1<<1;
AUDIO_SESSION_OPERATION_RESTRICTION_DEACTIVATE_SESSION= 1<<2;
AUDIO_SESSION_OPERATION_RESTRICTION_ALL= 1<<7;
} agora__AUDIO_SESSION_OPERATION_RESTRICTION__C;


typedef enum agora_rtc__USER_OFFLINE_REASON_TYPE__C
{
  USER_OFFLINE_QUIT= 0;
USER_OFFLINE_DROPPED= 1;
USER_OFFLINE_BECOME_AUDIENCE= 2;
} agora_rtc__USER_OFFLINE_REASON_TYPE__C;


typedef enum agora_rtc__INTERFACE_ID_TYPE__C
{
  AGORA_IID_AUDIO_DEVICE_MANAGER= 1;
AGORA_IID_VIDEO_DEVICE_MANAGER= 2;
AGORA_IID_PARAMETER_ENGINE= 3;
AGORA_IID_MEDIA_ENGINE= 4;
AGORA_IID_AUDIO_ENGINE= 5;
AGORA_IID_VIDEO_ENGINE= 6;
AGORA_IID_RTC_CONNECTION= 7;
AGORA_IID_SIGNALING_ENGINE= 8;
AGORA_IID_MEDIA_ENGINE_REGULATOR= 9;
AGORA_IID_CLOUD_SPATIAL_AUDIO= 10;
AGORA_IID_LOCAL_SPATIAL_AUDIO= 11;
AGORA_IID_STATE_SYNC= 13;
AGORA_IID_METACHAT_SERVICE= 14;
AGORA_IID_MUSIC_CONTENT_CENTER= 15;
AGORA_IID_H265_TRANSCODER= 16;
} agora_rtc__INTERFACE_ID_TYPE__C;


typedef enum agora_rtc__QUALITY_TYPE__C
{
  QUALITY_UNKNOWN= 0;
QUALITY_EXCELLENT= 1;
QUALITY_GOOD= 2;
QUALITY_POOR= 3;
QUALITY_BAD= 4;
QUALITY_VBAD= 5;
QUALITY_DOWN= 6;
QUALITY_UNSUPPORTED= 7;
QUALITY_DETECTING= 8;
} agora_rtc__QUALITY_TYPE__C;


typedef enum agora_rtc__FIT_MODE_TYPE__C
{
  MODE_COVER= 1;
MODE_CONTAIN= 2;
} agora_rtc__FIT_MODE_TYPE__C;


typedef enum agora_rtc__VIDEO_ORIENTATION__C
{
  VIDEO_ORIENTATION_0= 0;
VIDEO_ORIENTATION_90= 90;
VIDEO_ORIENTATION_180= 180;
VIDEO_ORIENTATION_270= 270;
} agora_rtc__VIDEO_ORIENTATION__C;


typedef enum agora_rtc__FRAME_RATE__C
{
  FRAME_RATE_FPS_1= 1;
FRAME_RATE_FPS_7= 7;
FRAME_RATE_FPS_10= 10;
FRAME_RATE_FPS_15= 15;
FRAME_RATE_FPS_24= 24;
FRAME_RATE_FPS_30= 30;
FRAME_RATE_FPS_60= 60;
} agora_rtc__FRAME_RATE__C;


typedef enum agora_rtc__FRAME_WIDTH__C
{
  FRAME_WIDTH_960= 960;
} agora_rtc__FRAME_WIDTH__C;


typedef enum agora_rtc__FRAME_HEIGHT__C
{
  FRAME_HEIGHT_540= 540;
} agora_rtc__FRAME_HEIGHT__C;


typedef enum agora_rtc__VIDEO_FRAME_TYPE__C
{
  VIDEO_FRAME_TYPE_BLANK_FRAME= 0;
VIDEO_FRAME_TYPE_KEY_FRAME= 3;
VIDEO_FRAME_TYPE_DELTA_FRAME= 4;
VIDEO_FRAME_TYPE_B_FRAME= 5;
VIDEO_FRAME_TYPE_DROPPABLE_FRAME= 6;
VIDEO_FRAME_TYPE_UNKNOW;
} agora_rtc__VIDEO_FRAME_TYPE__C;


typedef enum agora_rtc__ORIENTATION_MODE__C
{
  ORIENTATION_MODE_ADAPTIVE= 0;
ORIENTATION_MODE_FIXED_LANDSCAPE= 1;
ORIENTATION_MODE_FIXED_PORTRAIT= 2;
} agora_rtc__ORIENTATION_MODE__C;


typedef enum agora_rtc__DEGRADATION_PREFERENCE__C
{
  MAINTAIN_QUALITY= 0;
MAINTAIN_FRAMERATE= 1;
MAINTAIN_BALANCED= 2;
MAINTAIN_RESOLUTION= 3;
DISABLED= 100;
} agora_rtc__DEGRADATION_PREFERENCE__C;


typedef enum agora_rtc__SCREEN_CAPTURE_FRAMERATE_CAPABILITY__C
{
  SCREEN_CAPTURE_FRAMERATE_CAPABILITY_15_FPS= 0;
SCREEN_CAPTURE_FRAMERATE_CAPABILITY_30_FPS= 1;
SCREEN_CAPTURE_FRAMERATE_CAPABILITY_60_FPS= 2;
} agora_rtc__SCREEN_CAPTURE_FRAMERATE_CAPABILITY__C;


typedef enum agora_rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C
{
  CODEC_CAPABILITY_LEVEL_UNSPECIFIED= -1;
CODEC_CAPABILITY_LEVEL_BASIC_SUPPORT= 5;
CODEC_CAPABILITY_LEVEL_1080P30FPS= 10;
CODEC_CAPABILITY_LEVEL_1080P60FPS= 20;
CODEC_CAPABILITY_LEVEL_4K60FPS= 30;
} agora_rtc__VIDEO_CODEC_CAPABILITY_LEVEL__C;


typedef enum agora_rtc__VIDEO_CODEC_TYPE__C
{
  VIDEO_CODEC_NONE= 0;
VIDEO_CODEC_VP8= 1;
VIDEO_CODEC_H264= 2;
VIDEO_CODEC_H265= 3;
VIDEO_CODEC_GENERIC= 6;
VIDEO_CODEC_GENERIC_H264= 7;
VIDEO_CODEC_AV1= 12;
VIDEO_CODEC_VP9= 13;
VIDEO_CODEC_GENERIC_JPEG= 20;
} agora_rtc__VIDEO_CODEC_TYPE__C;


typedef enum agora_rtc__TCcMode__C
{
  CC_ENABLED;
CC_DISABLED;
} agora_rtc__TCcMode__C;


typedef enum agora_rtc__AUDIO_CODEC_TYPE__C
{
  AUDIO_CODEC_OPUS= 1;
AUDIO_CODEC_PCMA= 3;
AUDIO_CODEC_PCMU= 4;
AUDIO_CODEC_G722= 5;
AUDIO_CODEC_AACLC= 8;
AUDIO_CODEC_HEAAC= 9;
AUDIO_CODEC_JC1= 10;
AUDIO_CODEC_HEAAC2= 11;
AUDIO_CODEC_LPCNET= 12;
} agora_rtc__AUDIO_CODEC_TYPE__C;


typedef enum agora_rtc__AUDIO_ENCODING_TYPE__C
{
  AUDIO_ENCODING_TYPE_AAC_16000_LOW= 0x010101;
AUDIO_ENCODING_TYPE_AAC_16000_MEDIUM= 0x010102;
AUDIO_ENCODING_TYPE_AAC_32000_LOW= 0x010201;
AUDIO_ENCODING_TYPE_AAC_32000_MEDIUM= 0x010202;
AUDIO_ENCODING_TYPE_AAC_32000_HIGH= 0x010203;
AUDIO_ENCODING_TYPE_AAC_48000_MEDIUM= 0x010302;
AUDIO_ENCODING_TYPE_AAC_48000_HIGH= 0x010303;
AUDIO_ENCODING_TYPE_OPUS_16000_LOW= 0x020101;
AUDIO_ENCODING_TYPE_OPUS_16000_MEDIUM= 0x020102;
AUDIO_ENCODING_TYPE_OPUS_48000_MEDIUM= 0x020302;
AUDIO_ENCODING_TYPE_OPUS_48000_HIGH= 0x020303;
} agora_rtc__AUDIO_ENCODING_TYPE__C;


typedef enum agora_rtc__WATERMARK_FIT_MODE__C
{
  FIT_MODE_COVER_POSITION;
FIT_MODE_USE_IMAGE_RATIO;
} agora_rtc__WATERMARK_FIT_MODE__C;


typedef enum agora_rtc__H264PacketizeMode__C
{
  NonInterleaved= 0;
SingleNalUnit;
} agora_rtc__H264PacketizeMode__C;


typedef enum agora_rtc__VIDEO_STREAM_TYPE__C
{
  VIDEO_STREAM_HIGH= 0;
VIDEO_STREAM_LOW= 1;
} agora_rtc__VIDEO_STREAM_TYPE__C;


typedef enum agora_rtc__COMPRESSION_PREFERENCE__C
{
  PREFER_LOW_LATENCY;
PREFER_QUALITY;
} agora_rtc__COMPRESSION_PREFERENCE__C;


typedef enum agora_rtc__ENCODING_PREFERENCE__C
{
  PREFER_AUTO= -1;
PREFER_SOFTWARE= 0;
PREFER_HARDWARE= 1;
} agora_rtc__ENCODING_PREFERENCE__C;


typedef enum agora_rtc__VIDEO_MIRROR_MODE_TYPE__C
{
  VIDEO_MIRROR_MODE_AUTO= 0;
VIDEO_MIRROR_MODE_ENABLED= 1;
VIDEO_MIRROR_MODE_DISABLED= 2;
} agora_rtc__VIDEO_MIRROR_MODE_TYPE__C;


typedef enum agora_rtc__CODEC_CAP_MASK__C
{
  CODEC_CAP_MASK_NONE= 0;
CODEC_CAP_MASK_HW_DEC= 1<<0;
CODEC_CAP_MASK_HW_ENC= 1<<1;
CODEC_CAP_MASK_SW_DEC= 1<<2;
CODEC_CAP_MASK_SW_ENC= 1<<3;
} agora_rtc__CODEC_CAP_MASK__C;


typedef enum agora_rtc__SIMULCAST_STREAM_MODE__C
{
  AUTO_SIMULCAST_STREAM= -1;
DISABLE_SIMULCAST_STREAM= 0;
ENABLE_SIMULCAST_STREAM= 1;
} agora_rtc__SIMULCAST_STREAM_MODE__C;


typedef enum agora_rtc__CLIENT_ROLE_TYPE__C
{
  CLIENT_ROLE_BROADCASTER= 1;
CLIENT_ROLE_AUDIENCE= 2;
} agora_rtc__CLIENT_ROLE_TYPE__C;


typedef enum agora_rtc__QUALITY_ADAPT_INDICATION__C
{
  ADAPT_NONE= 0;
ADAPT_UP_BANDWIDTH= 1;
ADAPT_DOWN_BANDWIDTH= 2;
} agora_rtc__QUALITY_ADAPT_INDICATION__C;


typedef enum agora_rtc__AUDIENCE_LATENCY_LEVEL_TYPE__C
{
  AUDIENCE_LATENCY_LEVEL_LOW_LATENCY= 1;
AUDIENCE_LATENCY_LEVEL_ULTRA_LOW_LATENCY= 2;
} agora_rtc__AUDIENCE_LATENCY_LEVEL_TYPE__C;


typedef enum agora_rtc__EXPERIENCE_QUALITY_TYPE__C
{
  EXPERIENCE_QUALITY_GOOD= 0;
EXPERIENCE_QUALITY_BAD= 1;
} agora_rtc__EXPERIENCE_QUALITY_TYPE__C;


typedef enum agora_rtc__EXPERIENCE_POOR_REASON__C
{
  EXPERIENCE_REASON_NONE= 0;
REMOTE_NETWORK_QUALITY_POOR= 1;
LOCAL_NETWORK_QUALITY_POOR= 2;
WIRELESS_SIGNAL_POOR= 4;
WIFI_BLUETOOTH_COEXIST= 8;
} agora_rtc__EXPERIENCE_POOR_REASON__C;


typedef enum agora_rtc__AUDIO_AINS_MODE__C
{
  AINS_MODE_BALANCED= 0;
AINS_MODE_AGGRESSIVE= 1;
AINS_MODE_ULTRALOWLATENCY= 2;
} agora_rtc__AUDIO_AINS_MODE__C;


typedef enum agora_rtc__AUDIO_PROFILE_TYPE__C
{
  AUDIO_PROFILE_DEFAULT= 0;
AUDIO_PROFILE_SPEECH_STANDARD= 1;
AUDIO_PROFILE_MUSIC_STANDARD= 2;
AUDIO_PROFILE_MUSIC_STANDARD_STEREO= 3;
AUDIO_PROFILE_MUSIC_HIGH_QUALITY= 4;
AUDIO_PROFILE_MUSIC_HIGH_QUALITY_STEREO= 5;
AUDIO_PROFILE_IOT= 6;
AUDIO_PROFILE_NUM= 7;
} agora_rtc__AUDIO_PROFILE_TYPE__C;


typedef enum agora_rtc__AUDIO_SCENARIO_TYPE__C
{
  AUDIO_SCENARIO_DEFAULT= 0;
AUDIO_SCENARIO_GAME_STREAMING= 3;
AUDIO_SCENARIO_CHATROOM= 5;
AUDIO_SCENARIO_CHORUS= 7;
AUDIO_SCENARIO_MEETING= 8;
AUDIO_SCENARIO_NUM= 9;
} agora_rtc__AUDIO_SCENARIO_TYPE__C;


typedef enum agora_rtc____C
{
  kMaxWidthInPixels= 3840;
kMaxHeightInPixels= 2160;
kMaxFps= 60;
} agora_rtc____C;


typedef enum agora_rtc__VIDEO_CONTENT_HINT__C
{
  CONTENT_HINT_NONE;
CONTENT_HINT_MOTION;
CONTENT_HINT_DETAILS;
} agora_rtc__VIDEO_CONTENT_HINT__C;


typedef enum agora_rtc__SCREEN_SCENARIO_TYPE__C
{
  SCREEN_SCENARIO_DOCUMENT= 1;
SCREEN_SCENARIO_GAMING= 2;
SCREEN_SCENARIO_VIDEO= 3;
SCREEN_SCENARIO_RDC= 4;
} agora_rtc__SCREEN_SCENARIO_TYPE__C;


typedef enum agora_rtc__VIDEO_APPLICATION_SCENARIO_TYPE__C
{
  APPLICATION_SCENARIO_GENERAL= 0;
APPLICATION_SCENARIO_MEETING= 1;
} agora_rtc__VIDEO_APPLICATION_SCENARIO_TYPE__C;


typedef enum agora_rtc__CAPTURE_BRIGHTNESS_LEVEL_TYPE__C
{
  CAPTURE_BRIGHTNESS_LEVEL_INVALID= -1;
CAPTURE_BRIGHTNESS_LEVEL_NORMAL= 0;
CAPTURE_BRIGHTNESS_LEVEL_BRIGHT= 1;
CAPTURE_BRIGHTNESS_LEVEL_DARK= 2;
} agora_rtc__CAPTURE_BRIGHTNESS_LEVEL_TYPE__C;


typedef enum agora_rtc__LOCAL_AUDIO_STREAM_STATE__C
{
  LOCAL_AUDIO_STREAM_STATE_STOPPED= 0;
LOCAL_AUDIO_STREAM_STATE_RECORDING= 1;
LOCAL_AUDIO_STREAM_STATE_ENCODING= 2;
LOCAL_AUDIO_STREAM_STATE_FAILED= 3;
} agora_rtc__LOCAL_AUDIO_STREAM_STATE__C;


typedef enum agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C
{
  LOCAL_AUDIO_STREAM_ERROR_OK= 0;
LOCAL_AUDIO_STREAM_ERROR_FAILURE= 1;
LOCAL_AUDIO_STREAM_ERROR_DEVICE_NO_PERMISSION= 2;
LOCAL_AUDIO_STREAM_ERROR_DEVICE_BUSY= 3;
LOCAL_AUDIO_STREAM_ERROR_RECORD_FAILURE= 4;
LOCAL_AUDIO_STREAM_ERROR_ENCODE_FAILURE= 5;
LOCAL_AUDIO_STREAM_ERROR_NO_RECORDING_DEVICE= 6;
LOCAL_AUDIO_STREAM_ERROR_NO_PLAYOUT_DEVICE= 7;
LOCAL_AUDIO_STREAM_ERROR_INTERRUPTED= 8;
LOCAL_AUDIO_STREAM_ERROR_RECORD_INVALID_ID= 9;
LOCAL_AUDIO_STREAM_ERROR_PLAYOUT_INVALID_ID= 10;
} agora_rtc__LOCAL_AUDIO_STREAM_ERROR__C;


typedef enum agora_rtc__LOCAL_VIDEO_STREAM_STATE__C
{
  LOCAL_VIDEO_STREAM_STATE_STOPPED= 0;
LOCAL_VIDEO_STREAM_STATE_CAPTURING= 1;
LOCAL_VIDEO_STREAM_STATE_ENCODING= 2;
LOCAL_VIDEO_STREAM_STATE_FAILED= 3;
} agora_rtc__LOCAL_VIDEO_STREAM_STATE__C;


typedef enum agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C
{
  LOCAL_VIDEO_STREAM_ERROR_OK= 0;
LOCAL_VIDEO_STREAM_ERROR_FAILURE= 1;
LOCAL_VIDEO_STREAM_ERROR_DEVICE_NO_PERMISSION= 2;
LOCAL_VIDEO_STREAM_ERROR_DEVICE_BUSY= 3;
LOCAL_VIDEO_STREAM_ERROR_CAPTURE_FAILURE= 4;
LOCAL_VIDEO_STREAM_ERROR_ENCODE_FAILURE= 5;
LOCAL_VIDEO_STREAM_ERROR_CAPTURE_INBACKGROUND= 6;
LOCAL_VIDEO_STREAM_ERROR_CAPTURE_MULTIPLE_FOREGROUND_APPS= 7;
LOCAL_VIDEO_STREAM_ERROR_DEVICE_NOT_FOUND= 8;
LOCAL_VIDEO_STREAM_ERROR_DEVICE_DISCONNECTED= 9;
LOCAL_VIDEO_STREAM_ERROR_DEVICE_INVALID_ID= 10;
LOCAL_VIDEO_STREAM_ERROR_DEVICE_SYSTEM_PRESSURE= 101;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_MINIMIZED= 11;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_CLOSED= 12;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_OCCLUDED= 13;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_NOT_SUPPORTED= 20;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_FAILURE= 21;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_NO_PERMISSION= 22;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_PAUSED= 23;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_RESUMED= 24;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_HIDDEN= 25;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_RECOVER_FROM_HIDDEN= 26;
LOCAL_VIDEO_STREAM_ERROR_SCREEN_CAPTURE_WINDOW_RECOVER_FROM_MINIMIZED= 27;
} agora_rtc__LOCAL_VIDEO_STREAM_ERROR__C;


typedef enum agora_rtc__REMOTE_AUDIO_STATE__C
{
  REMOTE_AUDIO_STATE_STOPPED= 0;
REMOTE_AUDIO_STATE_STARTING= 1;
REMOTE_AUDIO_STATE_DECODING= 2;
REMOTE_AUDIO_STATE_FROZEN= 3;
REMOTE_AUDIO_STATE_FAILED= 4;
} agora_rtc__REMOTE_AUDIO_STATE__C;


typedef enum agora_rtc__REMOTE_AUDIO_STATE_REASON__C
{
  REMOTE_AUDIO_REASON_INTERNAL= 0;
REMOTE_AUDIO_REASON_NETWORK_CONGESTION= 1;
REMOTE_AUDIO_REASON_NETWORK_RECOVERY= 2;
REMOTE_AUDIO_REASON_LOCAL_MUTED= 3;
REMOTE_AUDIO_REASON_LOCAL_UNMUTED= 4;
REMOTE_AUDIO_REASON_REMOTE_MUTED= 5;
REMOTE_AUDIO_REASON_REMOTE_UNMUTED= 6;
REMOTE_AUDIO_REASON_REMOTE_OFFLINE= 7;
} agora_rtc__REMOTE_AUDIO_STATE_REASON__C;


typedef enum agora_rtc__REMOTE_VIDEO_STATE__C
{
  REMOTE_VIDEO_STATE_STOPPED= 0;
REMOTE_VIDEO_STATE_STARTING= 1;
REMOTE_VIDEO_STATE_DECODING= 2;
REMOTE_VIDEO_STATE_FROZEN= 3;
REMOTE_VIDEO_STATE_FAILED= 4;
} agora_rtc__REMOTE_VIDEO_STATE__C;


typedef enum agora_rtc__REMOTE_VIDEO_STATE_REASON__C
{
  REMOTE_VIDEO_STATE_REASON_INTERNAL= 0;
REMOTE_VIDEO_STATE_REASON_NETWORK_CONGESTION= 1;
REMOTE_VIDEO_STATE_REASON_NETWORK_RECOVERY= 2;
REMOTE_VIDEO_STATE_REASON_LOCAL_MUTED= 3;
REMOTE_VIDEO_STATE_REASON_LOCAL_UNMUTED= 4;
REMOTE_VIDEO_STATE_REASON_REMOTE_MUTED= 5;
REMOTE_VIDEO_STATE_REASON_REMOTE_UNMUTED= 6;
REMOTE_VIDEO_STATE_REASON_REMOTE_OFFLINE= 7;
REMOTE_VIDEO_STATE_REASON_AUDIO_FALLBACK= 8;
REMOTE_VIDEO_STATE_REASON_AUDIO_FALLBACK_RECOVERY= 9;
REMOTE_VIDEO_STATE_REASON_VIDEO_STREAM_TYPE_CHANGE_TO_LOW= 10;
REMOTE_VIDEO_STATE_REASON_VIDEO_STREAM_TYPE_CHANGE_TO_HIGH= 11;
REMOTE_VIDEO_STATE_REASON_SDK_IN_BACKGROUND= 12;
REMOTE_VIDEO_STATE_REASON_CODEC_NOT_SUPPORT= 13;
} agora_rtc__REMOTE_VIDEO_STATE_REASON__C;


typedef enum agora_rtc__REMOTE_USER_STATE__C
{
  USER_STATE_MUTE_AUDIO= (1<<0);
USER_STATE_MUTE_VIDEO= (1<<1);
USER_STATE_ENABLE_VIDEO= (1<<4);
USER_STATE_ENABLE_LOCAL_VIDEO= (1<<8);
} agora_rtc__REMOTE_USER_STATE__C;


typedef enum agora_rtc__REMOTE_VIDEO_DOWNSCALE_LEVEL__C
{
  REMOTE_VIDEO_DOWNSCALE_LEVEL_NONE;
REMOTE_VIDEO_DOWNSCALE_LEVEL_1;
REMOTE_VIDEO_DOWNSCALE_LEVEL_2;
REMOTE_VIDEO_DOWNSCALE_LEVEL_3;
REMOTE_VIDEO_DOWNSCALE_LEVEL_4;
} agora_rtc__REMOTE_VIDEO_DOWNSCALE_LEVEL__C;


typedef enum agora_rtc__AUDIO_SAMPLE_RATE_TYPE__C
{
  AUDIO_SAMPLE_RATE_32000= 32000;
AUDIO_SAMPLE_RATE_44100= 44100;
AUDIO_SAMPLE_RATE_48000= 48000;
} agora_rtc__AUDIO_SAMPLE_RATE_TYPE__C;


typedef enum agora_rtc__VIDEO_CODEC_TYPE_FOR_STREAM__C
{
  VIDEO_CODEC_H264_FOR_STREAM= 1;
VIDEO_CODEC_H265_FOR_STREAM= 2;
} agora_rtc__VIDEO_CODEC_TYPE_FOR_STREAM__C;


typedef enum agora_rtc__VIDEO_CODEC_PROFILE_TYPE__C
{
  VIDEO_CODEC_PROFILE_BASELINE= 66;
VIDEO_CODEC_PROFILE_MAIN= 77;
VIDEO_CODEC_PROFILE_HIGH= 100;
} agora_rtc__VIDEO_CODEC_PROFILE_TYPE__C;


typedef enum agora_rtc__AUDIO_CODEC_PROFILE_TYPE__C
{
  AUDIO_CODEC_PROFILE_LC_AAC= 0;
AUDIO_CODEC_PROFILE_HE_AAC= 1;
AUDIO_CODEC_PROFILE_HE_AAC_V2= 2;
} agora_rtc__AUDIO_CODEC_PROFILE_TYPE__C;


typedef enum agora_rtc__RTMP_STREAM_PUBLISH_STATE__C
{
  RTMP_STREAM_PUBLISH_STATE_IDLE= 0;
RTMP_STREAM_PUBLISH_STATE_CONNECTING= 1;
RTMP_STREAM_PUBLISH_STATE_RUNNING= 2;
RTMP_STREAM_PUBLISH_STATE_RECOVERING= 3;
RTMP_STREAM_PUBLISH_STATE_FAILURE= 4;
RTMP_STREAM_PUBLISH_STATE_DISCONNECTING= 5;
} agora_rtc__RTMP_STREAM_PUBLISH_STATE__C;


typedef enum agora_rtc__RTMP_STREAM_PUBLISH_ERROR_TYPE__C
{
  RTMP_STREAM_PUBLISH_ERROR_OK= 0;
RTMP_STREAM_PUBLISH_ERROR_INVALID_ARGUMENT= 1;
RTMP_STREAM_PUBLISH_ERROR_ENCRYPTED_STREAM_NOT_ALLOWED= 2;
RTMP_STREAM_PUBLISH_ERROR_CONNECTION_TIMEOUT= 3;
RTMP_STREAM_PUBLISH_ERROR_INTERNAL_SERVER_ERROR= 4;
RTMP_STREAM_PUBLISH_ERROR_RTMP_SERVER_ERROR= 5;
RTMP_STREAM_PUBLISH_ERROR_TOO_OFTEN= 6;
RTMP_STREAM_PUBLISH_ERROR_REACH_LIMIT= 7;
RTMP_STREAM_PUBLISH_ERROR_NOT_AUTHORIZED= 8;
RTMP_STREAM_PUBLISH_ERROR_STREAM_NOT_FOUND= 9;
RTMP_STREAM_PUBLISH_ERROR_FORMAT_NOT_SUPPORTED= 10;
RTMP_STREAM_PUBLISH_ERROR_NOT_BROADCASTER= 11;
RTMP_STREAM_PUBLISH_ERROR_TRANSCODING_NO_MIX_STREAM= 13;
RTMP_STREAM_PUBLISH_ERROR_NET_DOWN= 14;
RTMP_STREAM_PUBLISH_ERROR_INVALID_APPID= 15;
RTMP_STREAM_PUBLISH_ERROR_INVALID_PRIVILEGE= 16;
RTMP_STREAM_UNPUBLISH_ERROR_OK= 100;
} agora_rtc__RTMP_STREAM_PUBLISH_ERROR_TYPE__C;


typedef enum agora_rtc__RTMP_STREAMING_EVENT__C
{
  RTMP_STREAMING_EVENT_FAILED_LOAD_IMAGE= 1;
RTMP_STREAMING_EVENT_URL_ALREADY_IN_USE= 2;
RTMP_STREAMING_EVENT_ADVANCED_FEATURE_NOT_SUPPORT= 3;
RTMP_STREAMING_EVENT_REQUEST_TOO_OFTEN= 4;
} agora_rtc__RTMP_STREAMING_EVENT__C;


typedef enum agora_rtc__CONNECTION_STATE_TYPE__C
{
  CONNECTION_STATE_DISCONNECTED= 1;
CONNECTION_STATE_CONNECTING= 2;
CONNECTION_STATE_CONNECTED= 3;
CONNECTION_STATE_RECONNECTING= 4;
CONNECTION_STATE_FAILED= 5;
} agora_rtc__CONNECTION_STATE_TYPE__C;


typedef enum agora_rtc__VIDEO_TRANSCODER_ERROR__C
{
  VT_ERR_OK= 0;
VT_ERR_VIDEO_SOURCE_NOT_READY= 1;
VT_ERR_INVALID_VIDEO_SOURCE_TYPE= 2;
VT_ERR_INVALID_IMAGE_PATH= 3;
VT_ERR_UNSUPPORT_IMAGE_FORMAT= 4;
VT_ERR_INVALID_LAYOUT= 5;
VT_ERR_INTERNAL= 20;
} agora_rtc__VIDEO_TRANSCODER_ERROR__C;


typedef enum agora_rtc__LASTMILE_PROBE_RESULT_STATE__C
{
  LASTMILE_PROBE_RESULT_COMPLETE= 1;
LASTMILE_PROBE_RESULT_INCOMPLETE_NO_BWE= 2;
LASTMILE_PROBE_RESULT_UNAVAILABLE= 3;
} agora_rtc__LASTMILE_PROBE_RESULT_STATE__C;


typedef enum agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C
{
  CONNECTION_CHANGED_CONNECTING= 0;
CONNECTION_CHANGED_JOIN_SUCCESS= 1;
CONNECTION_CHANGED_INTERRUPTED= 2;
CONNECTION_CHANGED_BANNED_BY_SERVER= 3;
CONNECTION_CHANGED_JOIN_FAILED= 4;
CONNECTION_CHANGED_LEAVE_CHANNEL= 5;
CONNECTION_CHANGED_INVALID_APP_ID= 6;
CONNECTION_CHANGED_INVALID_CHANNEL_NAME= 7;
CONNECTION_CHANGED_INVALID_TOKEN= 8;
CONNECTION_CHANGED_TOKEN_EXPIRED= 9;
CONNECTION_CHANGED_REJECTED_BY_SERVER= 10;
CONNECTION_CHANGED_SETTING_PROXY_SERVER= 11;
CONNECTION_CHANGED_RENEW_TOKEN= 12;
CONNECTION_CHANGED_CLIENT_IP_ADDRESS_CHANGED= 13;
CONNECTION_CHANGED_KEEP_ALIVE_TIMEOUT= 14;
CONNECTION_CHANGED_REJOIN_SUCCESS= 15;
CONNECTION_CHANGED_LOST= 16;
CONNECTION_CHANGED_ECHO_TEST= 17;
CONNECTION_CHANGED_CLIENT_IP_ADDRESS_CHANGED_BY_USER= 18;
CONNECTION_CHANGED_SAME_UID_LOGIN= 19;
CONNECTION_CHANGED_TOO_MANY_BROADCASTERS= 20;
CONNECTION_CHANGED_LICENSE_VALIDATION_FAILURE= 21;
CONNECTION_CHANGED_CERTIFICATION_VERYFY_FAILURE= 22;
} agora_rtc__CONNECTION_CHANGED_REASON_TYPE__C;


typedef enum agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C
{
  CLIENT_ROLE_CHANGE_FAILED_TOO_MANY_BROADCASTERS= 1;
CLIENT_ROLE_CHANGE_FAILED_NOT_AUTHORIZED= 2;
CLIENT_ROLE_CHANGE_FAILED_REQUEST_TIME_OUT= 3;
CLIENT_ROLE_CHANGE_FAILED_CONNECTION_FAILED= 4;
} agora_rtc__CLIENT_ROLE_CHANGE_FAILED_REASON__C;


typedef enum agora_rtc__WLACC_MESSAGE_REASON__C
{
  WLACC_MESSAGE_REASON_WEAK_SIGNAL= 0;
WLACC_MESSAGE_REASON_CHANNEL_CONGESTION= 1;
} agora_rtc__WLACC_MESSAGE_REASON__C;


typedef enum agora_rtc__WLACC_SUGGEST_ACTION__C
{
  WLACC_SUGGEST_ACTION_CLOSE_TO_WIFI= 0;
WLACC_SUGGEST_ACTION_CONNECT_SSID= 1;
WLACC_SUGGEST_ACTION_CHECK_5G= 2;
WLACC_SUGGEST_ACTION_MODIFY_SSID= 3;
} agora_rtc__WLACC_SUGGEST_ACTION__C;


typedef enum agora_rtc__NETWORK_TYPE__C
{
  NETWORK_TYPE_UNKNOWN= -1;
NETWORK_TYPE_DISCONNECTED= 0;
NETWORK_TYPE_LAN= 1;
NETWORK_TYPE_WIFI= 2;
NETWORK_TYPE_MOBILE_2G= 3;
NETWORK_TYPE_MOBILE_3G= 4;
NETWORK_TYPE_MOBILE_4G= 5;
NETWORK_TYPE_MOBILE_5G= 6;
} agora_rtc__NETWORK_TYPE__C;


typedef enum agora_rtc__VIDEO_VIEW_SETUP_MODE__C
{
  VIDEO_VIEW_SETUP_REPLACE= 0;
VIDEO_VIEW_SETUP_ADD= 1;
VIDEO_VIEW_SETUP_REMOVE= 2;
} agora_rtc__VIDEO_VIEW_SETUP_MODE__C;


typedef enum agora_rtc__LIGHTENING_CONTRAST_LEVEL__C
{
  LIGHTENING_CONTRAST_LOW= 0;
LIGHTENING_CONTRAST_NORMAL= 1;
LIGHTENING_CONTRAST_HIGH= 2;
} agora_rtc__LIGHTENING_CONTRAST_LEVEL__C;


typedef enum agora_rtc__LOW_LIGHT_ENHANCE_MODE__C
{
  LOW_LIGHT_ENHANCE_AUTO= 0;
LOW_LIGHT_ENHANCE_MANUAL= 1;
} agora_rtc__LOW_LIGHT_ENHANCE_MODE__C;


typedef enum agora_rtc__LOW_LIGHT_ENHANCE_LEVEL__C
{
  LOW_LIGHT_ENHANCE_LEVEL_HIGH_QUALITY= 0;
LOW_LIGHT_ENHANCE_LEVEL_FAST= 1;
} agora_rtc__LOW_LIGHT_ENHANCE_LEVEL__C;


typedef enum agora_rtc__VIDEO_DENOISER_MODE__C
{
  VIDEO_DENOISER_AUTO= 0;
VIDEO_DENOISER_MANUAL= 1;
} agora_rtc__VIDEO_DENOISER_MODE__C;


typedef enum agora_rtc__VIDEO_DENOISER_LEVEL__C
{
  VIDEO_DENOISER_LEVEL_HIGH_QUALITY= 0;
VIDEO_DENOISER_LEVEL_FAST= 1;
VIDEO_DENOISER_LEVEL_STRENGTH= 2;
} agora_rtc__VIDEO_DENOISER_LEVEL__C;


typedef enum agora_rtc__BACKGROUND_SOURCE_TYPE__C
{
  BACKGROUND_NONE= 0;
BACKGROUND_COLOR= 1;
BACKGROUND_IMG= 2;
BACKGROUND_BLUR= 3;
BACKGROUND_VIDEO= 4;
} agora_rtc__BACKGROUND_SOURCE_TYPE__C;


typedef enum agora_rtc__BACKGROUND_BLUR_DEGREE__C
{
  BLUR_DEGREE_LOW= 1;
BLUR_DEGREE_MEDIUM= 2;
BLUR_DEGREE_HIGH= 3;
} agora_rtc__BACKGROUND_BLUR_DEGREE__C;


typedef enum agora_rtc__SEG_MODEL_TYPE__C
{
  SEG_MODEL_AI= 1;
SEG_MODEL_GREEN= 2;
} agora_rtc__SEG_MODEL_TYPE__C;


typedef enum agora_rtc__AUDIO_TRACK_TYPE__C
{
  AUDIO_TRACK_INVALID= -1;
AUDIO_TRACK_MIXABLE= 0;
AUDIO_TRACK_DIRECT= 1;
} agora_rtc__AUDIO_TRACK_TYPE__C;


typedef enum agora_rtc__VOICE_BEAUTIFIER_PRESET__C
{
  VOICE_BEAUTIFIER_OFF= 0x00000000;
CHAT_BEAUTIFIER_MAGNETIC= 0x01010100;
CHAT_BEAUTIFIER_FRESH= 0x01010200;
CHAT_BEAUTIFIER_VITALITY= 0x01010300;
SINGING_BEAUTIFIER= 0x01020100;
TIMBRE_TRANSFORMATION_VIGOROUS= 0x01030100;
TIMBRE_TRANSFORMATION_DEEP= 0x01030200;
TIMBRE_TRANSFORMATION_MELLOW= 0x01030300;
TIMBRE_TRANSFORMATION_FALSETTO= 0x01030400;
TIMBRE_TRANSFORMATION_FULL= 0x01030500;
TIMBRE_TRANSFORMATION_CLEAR= 0x01030600;
TIMBRE_TRANSFORMATION_RESOUNDING= 0x01030700;
TIMBRE_TRANSFORMATION_RINGING= 0x01030800;
ULTRA_HIGH_QUALITY_VOICE= 0x01040100;
} agora_rtc__VOICE_BEAUTIFIER_PRESET__C;


typedef enum agora_rtc__AUDIO_EFFECT_PRESET__C
{
  AUDIO_EFFECT_OFF= 0x00000000;
ROOM_ACOUSTICS_KTV= 0x02010100;
ROOM_ACOUSTICS_VOCAL_CONCERT= 0x02010200;
ROOM_ACOUSTICS_STUDIO= 0x02010300;
ROOM_ACOUSTICS_PHONOGRAPH= 0x02010400;
ROOM_ACOUSTICS_VIRTUAL_STEREO= 0x02010500;
ROOM_ACOUSTICS_SPACIAL= 0x02010600;
ROOM_ACOUSTICS_ETHEREAL= 0x02010700;
ROOM_ACOUSTICS_3D_VOICE= 0x02010800;
ROOM_ACOUSTICS_VIRTUAL_SURROUND_SOUND= 0x02010900;
VOICE_CHANGER_EFFECT_UNCLE= 0x02020100;
VOICE_CHANGER_EFFECT_OLDMAN= 0x02020200;
VOICE_CHANGER_EFFECT_BOY= 0x02020300;
VOICE_CHANGER_EFFECT_SISTER= 0x02020400;
VOICE_CHANGER_EFFECT_GIRL= 0x02020500;
VOICE_CHANGER_EFFECT_PIGKING= 0x02020600;
VOICE_CHANGER_EFFECT_HULK= 0x02020700;
STYLE_TRANSFORMATION_RNB= 0x02030100;
STYLE_TRANSFORMATION_POPULAR= 0x02030200;
PITCH_CORRECTION= 0x02040100;
} agora_rtc__AUDIO_EFFECT_PRESET__C;


typedef enum agora_rtc__VOICE_CONVERSION_PRESET__C
{
  VOICE_CONVERSION_OFF= 0x00000000;
VOICE_CHANGER_NEUTRAL= 0x03010100;
VOICE_CHANGER_SWEET= 0x03010200;
VOICE_CHANGER_SOLID= 0x03010300;
VOICE_CHANGER_BASS= 0x03010400;
VOICE_CHANGER_CARTOON= 0x03010500;
VOICE_CHANGER_CHILDLIKE= 0x03010600;
VOICE_CHANGER_PHONE_OPERATOR= 0x03010700;
VOICE_CHANGER_MONSTER= 0x03010800;
VOICE_CHANGER_TRANSFORMERS= 0x03010900;
VOICE_CHANGER_GROOT= 0x03010A00;
VOICE_CHANGER_DARTH_VADER= 0x03010B00;
VOICE_CHANGER_IRON_LADY= 0x03010C00;
VOICE_CHANGER_SHIN_CHAN= 0x03010D00;
VOICE_CHANGER_GIRLISH_MAN= 0x03010E00;
VOICE_CHANGER_CHIPMUNK= 0x03010F00;
} agora_rtc__VOICE_CONVERSION_PRESET__C;


typedef enum agora_rtc__HEADPHONE_EQUALIZER_PRESET__C
{
  HEADPHONE_EQUALIZER_OFF= 0x00000000;
HEADPHONE_EQUALIZER_OVEREAR= 0x04000001;
HEADPHONE_EQUALIZER_INEAR= 0x04000002;
} agora_rtc__HEADPHONE_EQUALIZER_PRESET__C;


typedef enum agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C
{
  AUDIO_RECORDING_QUALITY_LOW= 0;
AUDIO_RECORDING_QUALITY_MEDIUM= 1;
AUDIO_RECORDING_QUALITY_HIGH= 2;
AUDIO_RECORDING_QUALITY_ULTRA_HIGH= 3;
} agora_rtc__AUDIO_RECORDING_QUALITY_TYPE__C;


typedef enum agora_rtc__AUDIO_FILE_RECORDING_TYPE__C
{
  AUDIO_FILE_RECORDING_MIC= 1;
AUDIO_FILE_RECORDING_PLAYBACK= 2;
AUDIO_FILE_RECORDING_MIXED= 3;
} agora_rtc__AUDIO_FILE_RECORDING_TYPE__C;


typedef enum agora_rtc__AUDIO_ENCODED_FRAME_OBSERVER_POSITION__C
{
  AUDIO_ENCODED_FRAME_OBSERVER_POSITION_RECORD= 1;
AUDIO_ENCODED_FRAME_OBSERVER_POSITION_PLAYBACK= 2;
AUDIO_ENCODED_FRAME_OBSERVER_POSITION_MIXED= 3;
} agora_rtc__AUDIO_ENCODED_FRAME_OBSERVER_POSITION__C;


typedef enum agora_rtc__AREA_CODE__C
{
  AREA_CODE_CN= 0x00000001;
AREA_CODE_NA= 0x00000002;
AREA_CODE_EU= 0x00000004;
AREA_CODE_AS= 0x00000008;
AREA_CODE_JP= 0x00000010;
AREA_CODE_IN= 0x00000020;
AREA_CODE_GLOB= (0xFFFFFFFF);
} agora_rtc__AREA_CODE__C;


typedef enum agora_rtc__AREA_CODE_EX__C
{
  AREA_CODE_OC= 0x00000040;
AREA_CODE_SA= 0x00000080;
AREA_CODE_AF= 0x00000100;
AREA_CODE_KR= 0x00000200;
AREA_CODE_HKMC= 0x00000400;
AREA_CODE_US= 0x00000800;
AREA_CODE_OVS= 0xFFFFFFFE;
} agora_rtc__AREA_CODE_EX__C;


typedef enum agora_rtc__CHANNEL_MEDIA_RELAY_ERROR__C
{
  RELAY_OK= 0;
RELAY_ERROR_SERVER_ERROR_RESPONSE= 1;
RELAY_ERROR_SERVER_NO_RESPONSE= 2;
RELAY_ERROR_NO_RESOURCE_AVAILABLE= 3;
RELAY_ERROR_FAILED_JOIN_SRC= 4;
RELAY_ERROR_FAILED_JOIN_DEST= 5;
RELAY_ERROR_FAILED_PACKET_RECEIVED_FROM_SRC= 6;
RELAY_ERROR_FAILED_PACKET_SENT_TO_DEST= 7;
RELAY_ERROR_SERVER_CONNECTION_LOST= 8;
RELAY_ERROR_INTERNAL_ERROR= 9;
RELAY_ERROR_SRC_TOKEN_EXPIRED= 10;
RELAY_ERROR_DEST_TOKEN_EXPIRED= 11;
} agora_rtc__CHANNEL_MEDIA_RELAY_ERROR__C;


typedef enum agora_rtc__CHANNEL_MEDIA_RELAY_EVENT__C
{
  RELAY_EVENT_NETWORK_DISCONNECTED= 0;
RELAY_EVENT_NETWORK_CONNECTED= 1;
RELAY_EVENT_PACKET_JOINED_SRC_CHANNEL= 2;
RELAY_EVENT_PACKET_JOINED_DEST_CHANNEL= 3;
RELAY_EVENT_PACKET_SENT_TO_DEST_CHANNEL= 4;
RELAY_EVENT_PACKET_RECEIVED_VIDEO_FROM_SRC= 5;
RELAY_EVENT_PACKET_RECEIVED_AUDIO_FROM_SRC= 6;
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL= 7;
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL_REFUSED= 8;
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL_NOT_CHANGE= 9;
RELAY_EVENT_PACKET_UPDATE_DEST_CHANNEL_IS_NULL= 10;
RELAY_EVENT_VIDEO_PROFILE_UPDATE= 11;
RELAY_EVENT_PAUSE_SEND_PACKET_TO_DEST_CHANNEL_SUCCESS= 12;
RELAY_EVENT_PAUSE_SEND_PACKET_TO_DEST_CHANNEL_FAILED= 13;
RELAY_EVENT_RESUME_SEND_PACKET_TO_DEST_CHANNEL_SUCCESS= 14;
RELAY_EVENT_RESUME_SEND_PACKET_TO_DEST_CHANNEL_FAILED= 15;
} agora_rtc__CHANNEL_MEDIA_RELAY_EVENT__C;


typedef enum agora_rtc__CHANNEL_MEDIA_RELAY_STATE__C
{
  RELAY_STATE_IDLE= 0;
RELAY_STATE_CONNECTING= 1;
RELAY_STATE_RUNNING= 2;
RELAY_STATE_FAILURE= 3;
} agora_rtc__CHANNEL_MEDIA_RELAY_STATE__C;


typedef enum agora_rtc__ENCRYPTION_MODE__C
{
  AES_128_XTS= 1;
AES_128_ECB= 2;
AES_256_XTS= 3;
SM4_128_ECB= 4;
AES_128_GCM= 5;
AES_256_GCM= 6;
AES_128_GCM2= 7;
AES_256_GCM2= 8;
MODE_END;
} agora_rtc__ENCRYPTION_MODE__C;


typedef enum agora_rtc__ENCRYPTION_ERROR_TYPE__C
{
  ENCRYPTION_ERROR_INTERNAL_FAILURE= 0;
ENCRYPTION_ERROR_DECRYPTION_FAILURE= 1;
ENCRYPTION_ERROR_ENCRYPTION_FAILURE= 2;
} agora_rtc__ENCRYPTION_ERROR_TYPE__C;


typedef enum agora_rtc__UPLOAD_ERROR_REASON__C
{
  UPLOAD_SUCCESS= 0;
UPLOAD_NET_ERROR= 1;
UPLOAD_SERVER_ERROR= 2;
} agora_rtc__UPLOAD_ERROR_REASON__C;


typedef enum agora_rtc__PERMISSION_TYPE__C
{
  RECORD_AUDIO= 0;
CAMERA= 1;
SCREEN_CAPTURE= 2;
} agora_rtc__PERMISSION_TYPE__C;


typedef enum agora_rtc__MAX_USER_ACCOUNT_LENGTH_TYPE__C
{
  MAX_USER_ACCOUNT_LENGTH= 256;
} agora_rtc__MAX_USER_ACCOUNT_LENGTH_TYPE__C;


typedef enum agora_rtc__STREAM_SUBSCRIBE_STATE__C
{
  SUB_STATE_IDLE= 0;
SUB_STATE_NO_SUBSCRIBED= 1;
SUB_STATE_SUBSCRIBING= 2;
SUB_STATE_SUBSCRIBED= 3;
} agora_rtc__STREAM_SUBSCRIBE_STATE__C;


typedef enum agora_rtc__STREAM_PUBLISH_STATE__C
{
  PUB_STATE_IDLE= 0;
PUB_STATE_NO_PUBLISHED= 1;
PUB_STATE_PUBLISHING= 2;
PUB_STATE_PUBLISHED= 3;
} agora_rtc__STREAM_PUBLISH_STATE__C;


typedef enum agora_rtc__EAR_MONITORING_FILTER_TYPE__C
{
  EAR_MONITORING_FILTER_NONE= (1<<0);
EAR_MONITORING_FILTER_BUILT_IN_AUDIO_FILTERS= (1<<1);
EAR_MONITORING_FILTER_NOISE_SUPPRESSION= (1<<2);
} agora_rtc__EAR_MONITORING_FILTER_TYPE__C;


typedef enum agora_rtc__THREAD_PRIORITY_TYPE__C
{
  LOWEST= 0;
LOW= 1;
NORMAL= 2;
HIGH= 3;
HIGHEST= 4;
CRITICAL= 5;
} agora_rtc__THREAD_PRIORITY_TYPE__C;


typedef enum agora_rtc__MEDIA_TRACE_EVENT__C
{
  MEDIA_TRACE_EVENT_VIDEO_RENDERED= 0;
MEDIA_TRACE_EVENT_VIDEO_DECODED;
} agora_rtc__MEDIA_TRACE_EVENT__C;


typedef enum agora_rtc__CONFIG_FETCH_TYPE__C
{
  CONFIG_FETCH_TYPE_INITIALIZE= 1;
CONFIG_FETCH_TYPE_JOIN_CHANNEL= 2;
} agora_rtc__CONFIG_FETCH_TYPE__C;


typedef enum agora_rtc__LOCAL_PROXY_MODE__C
{
  ConnectivityFirst= 0;
LocalOnly= 1;
} agora_rtc__LOCAL_PROXY_MODE__C;


typedef enum agora_rtc__VIDEO_SOURCE_TYPE__C
{
  VIDEO_SOURCE_CAMERA_PRIMARY= 0;
VIDEO_SOURCE_CAMERA= VIDEO_SOURCE_CAMERA_PRIMARY;
VIDEO_SOURCE_CAMERA_SECONDARY= 1;
VIDEO_SOURCE_SCREEN_PRIMARY= 2;
VIDEO_SOURCE_SCREEN= VIDEO_SOURCE_SCREEN_PRIMARY;
VIDEO_SOURCE_SCREEN_SECONDARY= 3;
VIDEO_SOURCE_CUSTOM= 4;
VIDEO_SOURCE_MEDIA_PLAYER= 5;
VIDEO_SOURCE_RTC_IMAGE_PNG= 6;
VIDEO_SOURCE_RTC_IMAGE_JPEG= 7;
VIDEO_SOURCE_RTC_IMAGE_GIF= 8;
VIDEO_SOURCE_REMOTE= 9;
VIDEO_SOURCE_TRANSCODED= 10;
VIDEO_SOURCE_CAMERA_THIRD= 11;
VIDEO_SOURCE_CAMERA_FOURTH= 12;
VIDEO_SOURCE_SCREEN_THIRD= 13;
VIDEO_SOURCE_SCREEN_FOURTH= 14;
VIDEO_SOURCE_UNKNOWN= 100;
} agora_rtc__VIDEO_SOURCE_TYPE__C;


typedef enum agora_rtc__AudioRoute__C
{
  ROUTE_DEFAULT= -1;
ROUTE_HEADSET= 0;
ROUTE_EARPIECE= 1;
ROUTE_HEADSETNOMIC= 2;
ROUTE_SPEAKERPHONE= 3;
ROUTE_LOUDSPEAKER= 4;
ROUTE_HEADSETBLUETOOTH= 5;
ROUTE_USB= 6;
ROUTE_HDMI= 7;
ROUTE_DISPLAYPORT= 8;
ROUTE_AIRPLAY= 9;
} agora_rtc__AudioRoute__C;


typedef enum agora_rtc__BYTES_PER_SAMPLE__C
{
  TWO_BYTES_PER_SAMPLE= 2;
} agora_rtc__BYTES_PER_SAMPLE__C;


typedef enum agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C
{
  RAW_AUDIO_FRAME_OP_MODE_READ_ONLY= 0;
RAW_AUDIO_FRAME_OP_MODE_READ_WRITE= 2;
} agora_rtc__RAW_AUDIO_FRAME_OP_MODE_TYPE__C;


typedef enum agora_media__MEDIA_SOURCE_TYPE__C
{
  AUDIO_PLAYOUT_SOURCE= 0;
AUDIO_RECORDING_SOURCE= 1;
PRIMARY_CAMERA_SOURCE= 2;
SECONDARY_CAMERA_SOURCE= 3;
PRIMARY_SCREEN_SOURCE= 4;
SECONDARY_SCREEN_SOURCE= 5;
CUSTOM_VIDEO_SOURCE= 6;
MEDIA_PLAYER_SOURCE= 7;
RTC_IMAGE_PNG_SOURCE= 8;
RTC_IMAGE_JPEG_SOURCE= 9;
RTC_IMAGE_GIF_SOURCE= 10;
REMOTE_VIDEO_SOURCE= 11;
TRANSCODED_VIDEO_SOURCE= 12;
UNKNOWN_MEDIA_SOURCE= 100;
} agora_media__MEDIA_SOURCE_TYPE__C;


typedef enum agora_media__CONTENT_INSPECT_RESULT__C
{
  CONTENT_INSPECT_NEUTRAL= 1;
CONTENT_INSPECT_SEXY= 2;
CONTENT_INSPECT_PORN= 3;
} agora_media__CONTENT_INSPECT_RESULT__C;


typedef enum agora_media__CONTENT_INSPECT_TYPE__C
{
  CONTENT_INSPECT_INVALID= 0;
CONTENT_INSPECT_MODERATION= 1;
CONTENT_INSPECT_SUPERVISION= 2;
CONTENT_INSPECT_IMAGE_MODERATION= 3;
} agora_media__CONTENT_INSPECT_TYPE__C;


typedef enum agora_media_base____C
{
  kMaxDataSizeSamples= 3840;
kMaxDataSizeBytes= kMaxDataSizeSamples*sizeof(int16_t);
} agora_media_base____C;


typedef enum agora_media_base__AUDIO_DUAL_MONO_MODE__C
{
  AUDIO_DUAL_MONO_STEREO= 0;
AUDIO_DUAL_MONO_L= 1;
AUDIO_DUAL_MONO_R= 2;
AUDIO_DUAL_MONO_MIX= 3;
} agora_media_base__AUDIO_DUAL_MONO_MODE__C;


typedef enum agora_media_base__VIDEO_PIXEL_FORMAT__C
{
  VIDEO_PIXEL_DEFAULT= 0;
VIDEO_PIXEL_I420= 1;
VIDEO_PIXEL_BGRA= 2;
VIDEO_PIXEL_NV21= 3;
VIDEO_PIXEL_RGBA= 4;
VIDEO_PIXEL_NV12= 8;
VIDEO_TEXTURE_2D= 10;
VIDEO_TEXTURE_OES= 11;
VIDEO_CVPIXEL_NV12= 12;
VIDEO_CVPIXEL_I420= 13;
VIDEO_CVPIXEL_BGRA= 14;
VIDEO_PIXEL_I422= 16;
VIDEO_TEXTURE_ID3D11TEXTURE2D= 17;
} agora_media_base__VIDEO_PIXEL_FORMAT__C;


typedef enum agora_media_base__RENDER_MODE_TYPE__C
{
  RENDER_MODE_HIDDEN= 1;
RENDER_MODE_FIT= 2;
RENDER_MODE_ADAPTIVE= 3;
} agora_media_base__RENDER_MODE_TYPE__C;


typedef enum agora_media_base__CAMERA_VIDEO_SOURCE_TYPE__C
{
  CAMERA_SOURCE_FRONT= 0;
CAMERA_SOURCE_BACK= 1;
VIDEO_SOURCE_UNSPECIFIED= 2;
} agora_media_base__CAMERA_VIDEO_SOURCE_TYPE__C;


typedef enum agora_media_base__EGL_CONTEXT_TYPE__C
{
  EGL_CONTEXT10= 0;
EGL_CONTEXT14= 1;
} agora_media_base__EGL_CONTEXT_TYPE__C;


typedef enum agora_media_base__VIDEO_BUFFER_TYPE__C
{
  VIDEO_BUFFER_RAW_DATA= 1;
VIDEO_BUFFER_ARRAY= 2;
VIDEO_BUFFER_TEXTURE= 3;
} agora_media_base__VIDEO_BUFFER_TYPE__C;


typedef enum agora_media_base__MEDIA_PLAYER_SOURCE_TYPE__C
{
  MEDIA_PLAYER_SOURCE_DEFAULT;
MEDIA_PLAYER_SOURCE_FULL_FEATURED;
MEDIA_PLAYER_SOURCE_SIMPLE;
} agora_media_base__MEDIA_PLAYER_SOURCE_TYPE__C;


typedef enum agora_media_base__VIDEO_MODULE_POSITION__C
{
  POSITION_POST_CAPTURER= 1<<0;
POSITION_PRE_RENDERER= 1<<1;
POSITION_PRE_ENCODER= 1<<2;
} agora_media_base__VIDEO_MODULE_POSITION__C;


typedef enum agora_media__AUDIO_FRAME_TYPE__C
{
  FRAME_TYPE_PCM16= 0;
} agora_media__AUDIO_FRAME_TYPE__C;


typedef enum agora_media____C
{
  MAX_HANDLE_TIME_CNT= 10;
} agora_media____C;


typedef enum agora_media__AUDIO_FRAME_POSITION__C
{
  AUDIO_FRAME_POSITION_NONE= 0x0000;
AUDIO_FRAME_POSITION_PLAYBACK= 0x0001;
AUDIO_FRAME_POSITION_RECORD= 0x0002;
AUDIO_FRAME_POSITION_MIXED= 0x0004;
AUDIO_FRAME_POSITION_BEFORE_MIXING= 0x0008;
AUDIO_FRAME_POSITION_EAR_MONITORING= 0x0010;
} agora_media__AUDIO_FRAME_POSITION__C;


typedef enum agora_media__VIDEO_FRAME_PROCESS_MODE__C
{
  PROCESS_MODE_READ_ONLY;
PROCESS_MODE_READ_WRITE;
} agora_media__VIDEO_FRAME_PROCESS_MODE__C;


typedef enum agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C
{
  VIDEO_FRAME= 0;
ENCODED_VIDEO_FRAME;
} agora_media__EXTERNAL_VIDEO_SOURCE_TYPE__C;


typedef enum agora_media__MediaRecorderContainerFormat__C
{
  FORMAT_MP4= 1;
} agora_media__MediaRecorderContainerFormat__C;


typedef enum agora_media__MediaRecorderStreamType__C
{
  STREAM_TYPE_AUDIO= 0x01;
STREAM_TYPE_VIDEO= 0x02;
STREAM_TYPE_BOTH= STREAM_TYPE_AUDIO|STREAM_TYPE_VIDEO;
} agora_media__MediaRecorderStreamType__C;


typedef enum agora_media__RecorderState__C
{
  RECORDER_STATE_ERROR= -1;
RECORDER_STATE_START= 2;
RECORDER_STATE_STOP= 3;
} agora_media__RecorderState__C;


typedef enum agora_media__RecorderErrorCode__C
{
  RECORDER_ERROR_NONE= 0;
RECORDER_ERROR_WRITE_FAILED= 1;
RECORDER_ERROR_NO_STREAM= 2;
RECORDER_ERROR_OVER_MAX_DURATION= 3;
RECORDER_ERROR_CONFIG_CHANGED= 4;
} agora_media__RecorderErrorCode__C;


typedef enum agora_media_base__MEDIA_PLAYER_STATE__C
{
  PLAYER_STATE_IDLE= 0;
PLAYER_STATE_OPENING;
PLAYER_STATE_OPEN_COMPLETED;
PLAYER_STATE_PLAYING;
PLAYER_STATE_PAUSED;
PLAYER_STATE_PLAYBACK_COMPLETED;
PLAYER_STATE_PLAYBACK_ALL_LOOPS_COMPLETED;
PLAYER_STATE_STOPPED;
PLAYER_STATE_PAUSING_INTERNAL= 50;
PLAYER_STATE_STOPPING_INTERNAL;
PLAYER_STATE_SEEKING_INTERNAL;
PLAYER_STATE_GETTING_INTERNAL;
PLAYER_STATE_NONE_INTERNAL;
PLAYER_STATE_DO_NOTHING_INTERNAL;
PLAYER_STATE_SET_TRACK_INTERNAL;
PLAYER_STATE_FAILED= 100;
} agora_media_base__MEDIA_PLAYER_STATE__C;


typedef enum agora_media_base__MEDIA_PLAYER_ERROR__C
{
  PLAYER_ERROR_NONE= 0;
PLAYER_ERROR_INVALID_ARGUMENTS= -1;
PLAYER_ERROR_INTERNAL= -2;
PLAYER_ERROR_NO_RESOURCE= -3;
PLAYER_ERROR_INVALID_MEDIA_SOURCE= -4;
PLAYER_ERROR_UNKNOWN_STREAM_TYPE= -5;
PLAYER_ERROR_OBJ_NOT_INITIALIZED= -6;
PLAYER_ERROR_CODEC_NOT_SUPPORTED= -7;
PLAYER_ERROR_VIDEO_RENDER_FAILED= -8;
PLAYER_ERROR_INVALID_STATE= -9;
PLAYER_ERROR_URL_NOT_FOUND= -10;
PLAYER_ERROR_INVALID_CONNECTION_STATE= -11;
PLAYER_ERROR_SRC_BUFFER_UNDERFLOW= -12;
PLAYER_ERROR_INTERRUPTED= -13;
PLAYER_ERROR_NOT_SUPPORTED= -14;
PLAYER_ERROR_TOKEN_EXPIRED= -15;
PLAYER_ERROR_IP_EXPIRED= -16;
PLAYER_ERROR_UNKNOWN= -17;
} agora_media_base__MEDIA_PLAYER_ERROR__C;


typedef enum agora_media_base__MEDIA_STREAM_TYPE__C
{
  STREAM_TYPE_UNKNOWN= 0;
STREAM_TYPE_VIDEO= 1;
STREAM_TYPE_AUDIO= 2;
STREAM_TYPE_SUBTITLE= 3;
} agora_media_base__MEDIA_STREAM_TYPE__C;


typedef enum agora_media_base__MEDIA_PLAYER_EVENT__C
{
  PLAYER_EVENT_SEEK_BEGIN= 0;
PLAYER_EVENT_SEEK_COMPLETE= 1;
PLAYER_EVENT_SEEK_ERROR= 2;
PLAYER_EVENT_AUDIO_TRACK_CHANGED= 5;
PLAYER_EVENT_BUFFER_LOW= 6;
PLAYER_EVENT_BUFFER_RECOVER= 7;
PLAYER_EVENT_FREEZE_START= 8;
PLAYER_EVENT_FREEZE_STOP= 9;
PLAYER_EVENT_SWITCH_BEGIN= 10;
PLAYER_EVENT_SWITCH_COMPLETE= 11;
PLAYER_EVENT_SWITCH_ERROR= 12;
PLAYER_EVENT_FIRST_DISPLAYED= 13;
PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT= 14;
PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE= 15;
PLAYER_EVENT_TRY_OPEN_START= 16;
PLAYER_EVENT_TRY_OPEN_SUCCEED= 17;
PLAYER_EVENT_TRY_OPEN_FAILED= 18;
} agora_media_base__MEDIA_PLAYER_EVENT__C;


typedef enum agora_media_base__PLAYER_PRELOAD_EVENT__C
{
  PLAYER_PRELOAD_EVENT_BEGIN= 0;
PLAYER_PRELOAD_EVENT_COMPLETE= 1;
PLAYER_PRELOAD_EVENT_ERROR= 2;
} agora_media_base__PLAYER_PRELOAD_EVENT__C;


typedef enum agora_media_base__MEDIA_PLAYER_METADATA_TYPE__C
{
  PLAYER_METADATA_TYPE_UNKNOWN= 0;
PLAYER_METADATA_TYPE_SEI= 1;
} agora_media_base__MEDIA_PLAYER_METADATA_TYPE__C;


typedef enum agora_commons__LOG_LEVEL__C
{
  LOG_LEVEL_NONE= 0x0000;
LOG_LEVEL_INFO= 0x0001;
LOG_LEVEL_WARN= 0x0002;
LOG_LEVEL_ERROR= 0x0004;
LOG_LEVEL_FATAL= 0x0008;
LOG_LEVEL_API_CALL= 0x0010;
} agora_commons__LOG_LEVEL__C;


typedef enum agora_commons__LOG_FILTER_TYPE__C
{
  LOG_FILTER_OFF= 0;
LOG_FILTER_DEBUG= 0x080f;
LOG_FILTER_INFO= 0x000f;
LOG_FILTER_WARN= 0x000e;
LOG_FILTER_ERROR= 0x000c;
LOG_FILTER_CRITICAL= 0x0008;
LOG_FILTER_MASK= 0x80f;
} agora_commons__LOG_FILTER_TYPE__C;


typedef enum agora_media__AUDIO_MIXING_DUAL_MONO_MODE__C
{
  AUDIO_MIXING_DUAL_MONO_AUTO= 0;
AUDIO_MIXING_DUAL_MONO_L= 1;
AUDIO_MIXING_DUAL_MONO_R= 2;
AUDIO_MIXING_DUAL_MONO_MIX= 3;
} agora_media__AUDIO_MIXING_DUAL_MONO_MODE__C;


typedef enum agora_rtc__STREAMING_SRC_ERR__C
{
  STREAMING_SRC_ERR_NONE= 0;
STREAMING_SRC_ERR_UNKNOWN= 1;
STREAMING_SRC_ERR_INVALID_PARAM= 2;
STREAMING_SRC_ERR_BAD_STATE= 3;
STREAMING_SRC_ERR_NO_MEM= 4;
STREAMING_SRC_ERR_BUFFER_OVERFLOW= 5;
STREAMING_SRC_ERR_BUFFER_UNDERFLOW= 6;
STREAMING_SRC_ERR_NOT_FOUND= 7;
STREAMING_SRC_ERR_TIMEOUT= 8;
STREAMING_SRC_ERR_EXPIRED= 9;
STREAMING_SRC_ERR_UNSUPPORTED= 10;
STREAMING_SRC_ERR_NOT_EXIST= 11;
STREAMING_SRC_ERR_EXIST= 12;
STREAMING_SRC_ERR_OPEN= 13;
STREAMING_SRC_ERR_CLOSE= 14;
STREAMING_SRC_ERR_READ= 15;
STREAMING_SRC_ERR_WRITE= 16;
STREAMING_SRC_ERR_SEEK= 17;
STREAMING_SRC_ERR_EOF= 18;
STREAMING_SRC_ERR_CODECOPEN= 19;
STREAMING_SRC_ERR_CODECCLOSE= 20;
STREAMING_SRC_ERR_CODECPROC= 21;
} agora_rtc__STREAMING_SRC_ERR__C;


typedef enum agora_rtc__STREAMING_SRC_STATE__C
{
  STREAMING_SRC_STATE_CLOSED= 0;
STREAMING_SRC_STATE_OPENING= 1;
STREAMING_SRC_STATE_IDLE= 2;
STREAMING_SRC_STATE_PLAYING= 3;
STREAMING_SRC_STATE_SEEKING= 4;
STREAMING_SRC_STATE_EOF= 5;
STREAMING_SRC_STATE_ERROR= 6;
} agora_rtc__STREAMING_SRC_STATE__C;


typedef enum agora_rtc__PreloadStatusCode__C
{
  kPreloadStatusCompleted= 0;
kPreloadStatusFailed= 1;
kPreloadStatusPreloading= 2;
kPreloadStatusRemoved= 3;
} agora_rtc__PreloadStatusCode__C;


typedef enum agora_rtc__MusicContentCenterStatusCode__C
{
  kMusicContentCenterStatusOk= 0;
kMusicContentCenterStatusErr= 1;
kMusicContentCenterStatusErrGateway= 2;
kMusicContentCenterStatusErrPermissionAndResource= 3;
kMusicContentCenterStatusErrInternalDataParse= 4;
kMusicContentCenterStatusErrMusicLoading= 5;
kMusicContentCenterStatusErrMusicDecryption= 6;
kMusicContentCenterStatusErrHttpInternalError= 7;
} agora_rtc__MusicContentCenterStatusCode__C;


typedef enum agora_rtc__MUSIC_CACHE_STATUS_TYPE__C
{
  MUSIC_CACHE_STATUS_TYPE_CACHED= 0;
MUSIC_CACHE_STATUS_TYPE_CACHING= 1;
} agora_rtc__MUSIC_CACHE_STATUS_TYPE__C;


typedef enum agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C
{
  RHYTHM_PLAYER_STATE_IDLE= 810;
RHYTHM_PLAYER_STATE_OPENING;
RHYTHM_PLAYER_STATE_DECODING;
RHYTHM_PLAYER_STATE_PLAYING;
RHYTHM_PLAYER_STATE_FAILED;
} agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C;


typedef enum agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C
{
  RHYTHM_PLAYER_ERROR_OK= 0;
RHYTHM_PLAYER_ERROR_FAILED= 1;
RHYTHM_PLAYER_ERROR_CAN_NOT_OPEN= 801;
RHYTHM_PLAYER_ERROR_CAN_NOT_PLAY;
RHYTHM_PLAYER_ERROR_FILE_OVER_DURATION_LIMIT;
} agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C;


typedef enum agora_rtc__MEDIA_DEVICE_TYPE__C
{
  UNKNOWN_AUDIO_DEVICE= -1;
AUDIO_PLAYOUT_DEVICE= 0;
AUDIO_RECORDING_DEVICE= 1;
VIDEO_RENDER_DEVICE= 2;
VIDEO_CAPTURE_DEVICE= 3;
AUDIO_APPLICATION_PLAYOUT_DEVICE= 4;
AUDIO_VIRTUAL_PLAYOUT_DEVICE= 5;
AUDIO_VIRTUAL_RECORDING_DEVICE= 6;
} agora_rtc__MEDIA_DEVICE_TYPE__C;


typedef enum agora_rtc__AUDIO_MIXING_STATE_TYPE__C
{
  AUDIO_MIXING_STATE_PLAYING= 710;
AUDIO_MIXING_STATE_PAUSED= 711;
AUDIO_MIXING_STATE_STOPPED= 713;
AUDIO_MIXING_STATE_FAILED= 714;
} agora_rtc__AUDIO_MIXING_STATE_TYPE__C;


typedef enum agora_rtc__AUDIO_MIXING_REASON_TYPE__C
{
  AUDIO_MIXING_REASON_CAN_NOT_OPEN= 701;
AUDIO_MIXING_REASON_TOO_FREQUENT_CALL= 702;
AUDIO_MIXING_REASON_INTERRUPTED_EOF= 703;
AUDIO_MIXING_REASON_ONE_LOOP_COMPLETED= 721;
AUDIO_MIXING_REASON_ALL_LOOPS_COMPLETED= 723;
AUDIO_MIXING_REASON_STOPPED_BY_USER= 724;
AUDIO_MIXING_REASON_OK= 0;
} agora_rtc__AUDIO_MIXING_REASON_TYPE__C;


typedef enum agora_rtc__INJECT_STREAM_STATUS__C
{
  INJECT_STREAM_STATUS_START_SUCCESS= 0;
INJECT_STREAM_STATUS_START_ALREADY_EXISTS= 1;
INJECT_STREAM_STATUS_START_UNAUTHORIZED= 2;
INJECT_STREAM_STATUS_START_TIMEDOUT= 3;
INJECT_STREAM_STATUS_START_FAILED= 4;
INJECT_STREAM_STATUS_STOP_SUCCESS= 5;
INJECT_STREAM_STATUS_STOP_NOT_FOUND= 6;
INJECT_STREAM_STATUS_STOP_UNAUTHORIZED= 7;
INJECT_STREAM_STATUS_STOP_TIMEDOUT= 8;
INJECT_STREAM_STATUS_STOP_FAILED= 9;
INJECT_STREAM_STATUS_BROKEN= 10;
} agora_rtc__INJECT_STREAM_STATUS__C;


typedef enum agora_rtc__AUDIO_EQUALIZATION_BAND_FREQUENCY__C
{
  AUDIO_EQUALIZATION_BAND_31= 0;
AUDIO_EQUALIZATION_BAND_62= 1;
AUDIO_EQUALIZATION_BAND_125= 2;
AUDIO_EQUALIZATION_BAND_250= 3;
AUDIO_EQUALIZATION_BAND_500= 4;
AUDIO_EQUALIZATION_BAND_1K= 5;
AUDIO_EQUALIZATION_BAND_2K= 6;
AUDIO_EQUALIZATION_BAND_4K= 7;
AUDIO_EQUALIZATION_BAND_8K= 8;
AUDIO_EQUALIZATION_BAND_16K= 9;
} agora_rtc__AUDIO_EQUALIZATION_BAND_FREQUENCY__C;


typedef enum agora_rtc__AUDIO_REVERB_TYPE__C
{
  AUDIO_REVERB_DRY_LEVEL= 0;
AUDIO_REVERB_WET_LEVEL= 1;
AUDIO_REVERB_ROOM_SIZE= 2;
AUDIO_REVERB_WET_DELAY= 3;
AUDIO_REVERB_STRENGTH= 4;
} agora_rtc__AUDIO_REVERB_TYPE__C;


typedef enum agora_rtc__STREAM_FALLBACK_OPTIONS__C
{
  STREAM_FALLBACK_OPTION_DISABLED= 0;
STREAM_FALLBACK_OPTION_VIDEO_STREAM_LOW= 1;
STREAM_FALLBACK_OPTION_AUDIO_ONLY= 2;
} agora_rtc__STREAM_FALLBACK_OPTIONS__C;


typedef enum agora_rtc__PRIORITY_TYPE__C
{
  PRIORITY_HIGH= 50;
PRIORITY_NORMAL= 100;
} agora_rtc__PRIORITY_TYPE__C;


typedef enum agora_rtc__RTMP_STREAM_LIFE_CYCLE_TYPE__C
{
  RTMP_STREAM_LIFE_CYCLE_BIND2CHANNEL= 1;
RTMP_STREAM_LIFE_CYCLE_BIND2OWNER= 2;
} agora_rtc__RTMP_STREAM_LIFE_CYCLE_TYPE__C;


typedef enum agora_rtc__CAMERA_DIRECTION__C
{
  CAMERA_REAR= 0;
CAMERA_FRONT= 1;
} agora_rtc__CAMERA_DIRECTION__C;


typedef enum agora_rtc__CLOUD_PROXY_TYPE__C
{
  NONE_PROXY= 0;
UDP_PROXY= 1;
TCP_PROXY= 2;
} agora_rtc__CLOUD_PROXY_TYPE__C;


typedef enum agora_rtc__ScreenCaptureSourceType__C
{
  ScreenCaptureSourceType_Unknown= -1;
ScreenCaptureSourceType_Window= 0;
ScreenCaptureSourceType_Screen= 1;
ScreenCaptureSourceType_Custom= 2;
} agora_rtc__ScreenCaptureSourceType__C;


typedef enum agora_rtc__PROXY_TYPE__C
{
  NONE_PROXY_TYPE= 0;
UDP_PROXY_TYPE= 1;
TCP_PROXY_TYPE= 2;
LOCAL_PROXY_TYPE= 3;
TCP_PROXY_AUTO_FALLBACK_TYPE= 4;
HTTP_PROXY_TYPE= 5;
HTTPS_PROXY_TYPE= 6;
} agora_rtc__PROXY_TYPE__C;


typedef enum agora_rtc__FeatureType__C
{
  VIDEO_VIRTUAL_BACKGROUND= 1;
VIDEO_BEAUTY_EFFECT= 2;
} agora_rtc__FeatureType__C;


typedef enum agora_rtc__METADATA_TYPE__C
{
  UNKNOWN_METADATA= -1;
VIDEO_METADATA= 0;
} agora_rtc__METADATA_TYPE__C;


typedef enum agora_rtc__MAX_METADATA_SIZE_TYPE__C
{
  INVALID_METADATA_SIZE_IN_BYTE= -1;
DEFAULT_METADATA_SIZE_IN_BYTE= 512;
MAX_METADATA_SIZE_IN_BYTE= 1024;
} agora_rtc__MAX_METADATA_SIZE_TYPE__C;


typedef enum agora_rtc__DIRECT_CDN_STREAMING_ERROR__C
{
  DIRECT_CDN_STREAMING_ERROR_OK= 0;
DIRECT_CDN_STREAMING_ERROR_FAILED= 1;
DIRECT_CDN_STREAMING_ERROR_AUDIO_PUBLICATION= 2;
DIRECT_CDN_STREAMING_ERROR_VIDEO_PUBLICATION= 3;
DIRECT_CDN_STREAMING_ERROR_NET_CONNECT= 4;
DIRECT_CDN_STREAMING_ERROR_BAD_NAME= 5;
} agora_rtc__DIRECT_CDN_STREAMING_ERROR__C;


typedef enum agora_rtc__DIRECT_CDN_STREAMING_STATE__C
{
  DIRECT_CDN_STREAMING_STATE_IDLE= 0;
DIRECT_CDN_STREAMING_STATE_RUNNING= 1;
DIRECT_CDN_STREAMING_STATE_STOPPED= 2;
DIRECT_CDN_STREAMING_STATE_FAILED= 3;
DIRECT_CDN_STREAMING_STATE_RECOVERING= 4;
} agora_rtc__DIRECT_CDN_STREAMING_STATE__C;


typedef enum agora_rtc__QUALITY_REPORT_FORMAT_TYPE__C
{
  QUALITY_REPORT_JSON= 0;
QUALITY_REPORT_HTML= 1;
} agora_rtc__QUALITY_REPORT_FORMAT_TYPE__C;


typedef enum agora_rtc__MEDIA_DEVICE_STATE_TYPE__C
{
  MEDIA_DEVICE_STATE_IDLE= 0;
MEDIA_DEVICE_STATE_ACTIVE= 1;
MEDIA_DEVICE_STATE_DISABLED= 2;
MEDIA_DEVICE_STATE_NOT_PRESENT= 4;
MEDIA_DEVICE_STATE_UNPLUGGED= 8;
} agora_rtc__MEDIA_DEVICE_STATE_TYPE__C;


typedef enum agora_rtc__VIDEO_PROFILE_TYPE__C
{
  VIDEO_PROFILE_LANDSCAPE_120P= 0;
VIDEO_PROFILE_LANDSCAPE_120P_3= 2;
VIDEO_PROFILE_LANDSCAPE_180P= 10;
VIDEO_PROFILE_LANDSCAPE_180P_3= 12;
VIDEO_PROFILE_LANDSCAPE_180P_4= 13;
VIDEO_PROFILE_LANDSCAPE_240P= 20;
VIDEO_PROFILE_LANDSCAPE_240P_3= 22;
VIDEO_PROFILE_LANDSCAPE_240P_4= 23;
VIDEO_PROFILE_LANDSCAPE_360P= 30;
VIDEO_PROFILE_LANDSCAPE_360P_3= 32;
VIDEO_PROFILE_LANDSCAPE_360P_4= 33;
VIDEO_PROFILE_LANDSCAPE_360P_6= 35;
VIDEO_PROFILE_LANDSCAPE_360P_7= 36;
VIDEO_PROFILE_LANDSCAPE_360P_8= 37;
VIDEO_PROFILE_LANDSCAPE_360P_9= 38;
VIDEO_PROFILE_LANDSCAPE_360P_10= 39;
VIDEO_PROFILE_LANDSCAPE_360P_11= 100;
VIDEO_PROFILE_LANDSCAPE_480P= 40;
VIDEO_PROFILE_LANDSCAPE_480P_3= 42;
VIDEO_PROFILE_LANDSCAPE_480P_4= 43;
VIDEO_PROFILE_LANDSCAPE_480P_6= 45;
VIDEO_PROFILE_LANDSCAPE_480P_8= 47;
VIDEO_PROFILE_LANDSCAPE_480P_9= 48;
VIDEO_PROFILE_LANDSCAPE_480P_10= 49;
VIDEO_PROFILE_LANDSCAPE_720P= 50;
VIDEO_PROFILE_LANDSCAPE_720P_3= 52;
VIDEO_PROFILE_LANDSCAPE_720P_5= 54;
VIDEO_PROFILE_LANDSCAPE_720P_6= 55;
VIDEO_PROFILE_LANDSCAPE_1080P= 60;
VIDEO_PROFILE_LANDSCAPE_1080P_3= 62;
VIDEO_PROFILE_LANDSCAPE_1080P_5= 64;
VIDEO_PROFILE_LANDSCAPE_1440P= 66;
VIDEO_PROFILE_LANDSCAPE_1440P_2= 67;
VIDEO_PROFILE_LANDSCAPE_4K= 70;
VIDEO_PROFILE_LANDSCAPE_4K_3= 72;
VIDEO_PROFILE_PORTRAIT_120P= 1000;
VIDEO_PROFILE_PORTRAIT_120P_3= 1002;
VIDEO_PROFILE_PORTRAIT_180P= 1010;
VIDEO_PROFILE_PORTRAIT_180P_3= 1012;
VIDEO_PROFILE_PORTRAIT_180P_4= 1013;
VIDEO_PROFILE_PORTRAIT_240P= 1020;
VIDEO_PROFILE_PORTRAIT_240P_3= 1022;
VIDEO_PROFILE_PORTRAIT_240P_4= 1023;
VIDEO_PROFILE_PORTRAIT_360P= 1030;
VIDEO_PROFILE_PORTRAIT_360P_3= 1032;
VIDEO_PROFILE_PORTRAIT_360P_4= 1033;
VIDEO_PROFILE_PORTRAIT_360P_6= 1035;
VIDEO_PROFILE_PORTRAIT_360P_7= 1036;
VIDEO_PROFILE_PORTRAIT_360P_8= 1037;
VIDEO_PROFILE_PORTRAIT_360P_9= 1038;
VIDEO_PROFILE_PORTRAIT_360P_10= 1039;
VIDEO_PROFILE_PORTRAIT_360P_11= 1100;
VIDEO_PROFILE_PORTRAIT_480P= 1040;
VIDEO_PROFILE_PORTRAIT_480P_3= 1042;
VIDEO_PROFILE_PORTRAIT_480P_4= 1043;
VIDEO_PROFILE_PORTRAIT_480P_6= 1045;
VIDEO_PROFILE_PORTRAIT_480P_8= 1047;
VIDEO_PROFILE_PORTRAIT_480P_9= 1048;
VIDEO_PROFILE_PORTRAIT_480P_10= 1049;
VIDEO_PROFILE_PORTRAIT_720P= 1050;
VIDEO_PROFILE_PORTRAIT_720P_3= 1052;
VIDEO_PROFILE_PORTRAIT_720P_5= 1054;
VIDEO_PROFILE_PORTRAIT_720P_6= 1055;
VIDEO_PROFILE_PORTRAIT_1080P= 1060;
VIDEO_PROFILE_PORTRAIT_1080P_3= 1062;
VIDEO_PROFILE_PORTRAIT_1080P_5= 1064;
VIDEO_PROFILE_PORTRAIT_1440P= 1066;
VIDEO_PROFILE_PORTRAIT_1440P_2= 1067;
VIDEO_PROFILE_PORTRAIT_4K= 1070;
VIDEO_PROFILE_PORTRAIT_4K_3= 1072;
VIDEO_PROFILE_DEFAULT= VIDEO_PROFILE_LANDSCAPE_360P;
} agora_rtc__VIDEO_PROFILE_TYPE__C;


typedef enum agora_rtc__MAX_DEVICE_ID_LENGTH_TYPE__C
{
  MAX_DEVICE_ID_LENGTH= 512;
} agora_rtc__MAX_DEVICE_ID_LENGTH_TYPE__C;
