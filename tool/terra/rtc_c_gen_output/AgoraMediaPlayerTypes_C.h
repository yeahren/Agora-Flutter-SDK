
    #ifndef AGORAMEDIAPLAYERTYPES_C_H_
    #define AGORAMEDIAPLAYERTYPES_C_H_
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    




typedef enum agora_media_base__MEDIA_PLAYER_STATE__C
{
  PLAYER_STATE_IDLE= 0,
PLAYER_STATE_OPENING,
PLAYER_STATE_OPEN_COMPLETED,
PLAYER_STATE_PLAYING,
PLAYER_STATE_PAUSED,
PLAYER_STATE_PLAYBACK_COMPLETED,
PLAYER_STATE_PLAYBACK_ALL_LOOPS_COMPLETED,
PLAYER_STATE_STOPPED,
PLAYER_STATE_PAUSING_INTERNAL= 50,
PLAYER_STATE_STOPPING_INTERNAL,
PLAYER_STATE_SEEKING_INTERNAL,
PLAYER_STATE_GETTING_INTERNAL,
PLAYER_STATE_NONE_INTERNAL,
PLAYER_STATE_DO_NOTHING_INTERNAL,
PLAYER_STATE_SET_TRACK_INTERNAL,
PLAYER_STATE_FAILED= 100,
} agora_media_base__MEDIA_PLAYER_STATE__C;


typedef enum agora_media_base__MEDIA_PLAYER_ERROR__C
{
  PLAYER_ERROR_NONE= 0,
PLAYER_ERROR_INVALID_ARGUMENTS= -1,
PLAYER_ERROR_INTERNAL= -2,
PLAYER_ERROR_NO_RESOURCE= -3,
PLAYER_ERROR_INVALID_MEDIA_SOURCE= -4,
PLAYER_ERROR_UNKNOWN_STREAM_TYPE= -5,
PLAYER_ERROR_OBJ_NOT_INITIALIZED= -6,
PLAYER_ERROR_CODEC_NOT_SUPPORTED= -7,
PLAYER_ERROR_VIDEO_RENDER_FAILED= -8,
PLAYER_ERROR_INVALID_STATE= -9,
PLAYER_ERROR_URL_NOT_FOUND= -10,
PLAYER_ERROR_INVALID_CONNECTION_STATE= -11,
PLAYER_ERROR_SRC_BUFFER_UNDERFLOW= -12,
PLAYER_ERROR_INTERRUPTED= -13,
PLAYER_ERROR_NOT_SUPPORTED= -14,
PLAYER_ERROR_TOKEN_EXPIRED= -15,
PLAYER_ERROR_IP_EXPIRED= -16,
PLAYER_ERROR_UNKNOWN= -17,
} agora_media_base__MEDIA_PLAYER_ERROR__C;


typedef enum agora_media_base__MEDIA_STREAM_TYPE__C
{
  STREAM_TYPE_UNKNOWN= 0,
STREAM_TYPE_VIDEO= 1,
STREAM_TYPE_AUDIO= 2,
STREAM_TYPE_SUBTITLE= 3,
} agora_media_base__MEDIA_STREAM_TYPE__C;


typedef enum agora_media_base__MEDIA_PLAYER_EVENT__C
{
  PLAYER_EVENT_SEEK_BEGIN= 0,
PLAYER_EVENT_SEEK_COMPLETE= 1,
PLAYER_EVENT_SEEK_ERROR= 2,
PLAYER_EVENT_AUDIO_TRACK_CHANGED= 5,
PLAYER_EVENT_BUFFER_LOW= 6,
PLAYER_EVENT_BUFFER_RECOVER= 7,
PLAYER_EVENT_FREEZE_START= 8,
PLAYER_EVENT_FREEZE_STOP= 9,
PLAYER_EVENT_SWITCH_BEGIN= 10,
PLAYER_EVENT_SWITCH_COMPLETE= 11,
PLAYER_EVENT_SWITCH_ERROR= 12,
PLAYER_EVENT_FIRST_DISPLAYED= 13,
PLAYER_EVENT_REACH_CACHE_FILE_MAX_COUNT= 14,
PLAYER_EVENT_REACH_CACHE_FILE_MAX_SIZE= 15,
PLAYER_EVENT_TRY_OPEN_START= 16,
PLAYER_EVENT_TRY_OPEN_SUCCEED= 17,
PLAYER_EVENT_TRY_OPEN_FAILED= 18,
} agora_media_base__MEDIA_PLAYER_EVENT__C;


typedef enum agora_media_base__PLAYER_PRELOAD_EVENT__C
{
  PLAYER_PRELOAD_EVENT_BEGIN= 0,
PLAYER_PRELOAD_EVENT_COMPLETE= 1,
PLAYER_PRELOAD_EVENT_ERROR= 2,
} agora_media_base__PLAYER_PRELOAD_EVENT__C;


typedef struct agora_media_base__PlayerStreamInfo__C
{
  int streamIndex;
agora_media_base__MEDIA_STREAM_TYPE__C streamType;
char codecName[50];
char language[50];
int videoFrameRate;
int videoBitRate;
int videoWidth;
int videoHeight;
int videoRotation;
int audioSampleRate;
int audioChannels;
int audioBitsPerSample;
int64_t duration;
} agora_media_base__PlayerStreamInfo__C;


typedef struct agora_media_base__SrcInfo__C
{
  int bitrateInKbps;
const char* name;
} agora_media_base__SrcInfo__C;


typedef enum agora_media_base__MEDIA_PLAYER_METADATA_TYPE__C
{
  PLAYER_METADATA_TYPE_UNKNOWN= 0,
PLAYER_METADATA_TYPE_SEI= 1,
} agora_media_base__MEDIA_PLAYER_METADATA_TYPE__C;


typedef struct agora_media_base__CacheStatistics__C
{
  int64_t fileSize;
int64_t cacheSize;
int64_t downloadSize;
} agora_media_base__CacheStatistics__C;


typedef struct agora_media_base__PlayerUpdatedInfo__C
{
  const char * playerId;
const char * deviceId;
agora_media_base__CacheStatistics__C cacheStatistics;
} agora_media_base__PlayerUpdatedInfo__C;

typedef void* agora_media_base__IMediaPlayerCustomDataProvider__Handle;

int agora_media_base__IMediaPlayerCustomDataProvider__onReadData(agora_media_base__IMediaPlayerCustomDataProvider__Handle handle,unsigned char* buffer,int bufferSize);
int64_t agora_media_base__IMediaPlayerCustomDataProvider__onSeek(agora_media_base__IMediaPlayerCustomDataProvider__Handle handle,int64_t offset,int whence);

typedef struct agora_media_base__MediaSource__C
{
  const char* url;
const char* uri;
int64_t startPos;
bool autoPlay;
bool enableCache;
bool* isAgoraSource;
bool* isLiveSource;
agora_media_base__IMediaPlayerCustomDataProvider__Handle* provider;
} agora_media_base__MediaSource__C;

    
    #endif// AGORAMEDIAPLAYERTYPES_C_H_
    