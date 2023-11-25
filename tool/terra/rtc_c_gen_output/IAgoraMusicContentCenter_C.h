
    #ifndef IAGORAMUSICCONTENTCENTER_C_H_
    #define IAGORAMUSICCONTENTCENTER_C_H_
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    
#include "IAgoraMediaPlayer_C.h"

typedef enum agora_rtc__PreloadStatusCode__C
{
  kPreloadStatusCompleted= 0,
kPreloadStatusFailed= 1,
kPreloadStatusPreloading= 2,
kPreloadStatusRemoved= 3,
} agora_rtc__PreloadStatusCode__C;


typedef enum agora_rtc__MusicContentCenterStatusCode__C
{
  kMusicContentCenterStatusOk= 0,
kMusicContentCenterStatusErr= 1,
kMusicContentCenterStatusErrGateway= 2,
kMusicContentCenterStatusErrPermissionAndResource= 3,
kMusicContentCenterStatusErrInternalDataParse= 4,
kMusicContentCenterStatusErrMusicLoading= 5,
kMusicContentCenterStatusErrMusicDecryption= 6,
kMusicContentCenterStatusErrHttpInternalError= 7,
} agora_rtc__MusicContentCenterStatusCode__C;


typedef struct agora_rtc__MusicChartInfo__C
{
  const char* chartName;
int32_t id;
} agora_rtc__MusicChartInfo__C;


typedef enum agora_rtc__MUSIC_CACHE_STATUS_TYPE__C
{
  MUSIC_CACHE_STATUS_TYPE_CACHED= 0,
MUSIC_CACHE_STATUS_TYPE_CACHING= 1,
} agora_rtc__MUSIC_CACHE_STATUS_TYPE__C;


typedef struct agora_rtc__MusicCacheInfo__C
{
  int64_t songCode;
agora_rtc__MUSIC_CACHE_STATUS_TYPE__C status;
} agora_rtc__MusicCacheInfo__C;

typedef void* agora_rtc__MusicChartCollection__Handle;

int agora_rtc__MusicChartCollection__getCount(agora_rtc__MusicChartCollection__Handle handle);
agora_rtc__MusicChartInfo__C* agora_rtc__MusicChartCollection__get(agora_rtc__MusicChartCollection__Handle handle,int index);

typedef struct agora_rtc__MvProperty__C
{
  const char* resolution;
const char* bandwidth;
} agora_rtc__MvProperty__C;


typedef struct agora_rtc__ClimaxSegment__C
{
  int32_t startTimeMs;
int32_t endTimeMs;
} agora_rtc__ClimaxSegment__C;


typedef struct agora_rtc__Music__C
{
  int64_t songCode;
const char* name;
const char* singer;
const char* poster;
const char* releaseTime;
int32_t durationS;
int32_t type;
int32_t pitchType;
int32_t lyricCount;
int32_t* lyricList;
int32_t climaxSegmentCount;
agora_rtc__ClimaxSegment__C* climaxSegmentList;
int32_t mvPropertyCount;
agora_rtc__MvProperty__C* mvPropertyList;
} agora_rtc__Music__C;

typedef void* agora_rtc__MusicCollection__Handle;

int agora_rtc__MusicCollection__getCount(agora_rtc__MusicCollection__Handle handle);
int agora_rtc__MusicCollection__getTotal(agora_rtc__MusicCollection__Handle handle);
int agora_rtc__MusicCollection__getPage(agora_rtc__MusicCollection__Handle handle);
int agora_rtc__MusicCollection__getPageSize(agora_rtc__MusicCollection__Handle handle);
agora_rtc__Music__C* agora_rtc__MusicCollection__getMusic(agora_rtc__MusicCollection__Handle handle,int32_t index);
typedef void* agora_rtc__IMusicContentCenterEventHandler__Handle;

void agora_rtc__IMusicContentCenterEventHandler__onMusicChartsResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,agora_rtc__MusicChartCollection__Handle result,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onMusicCollectionResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,agora_rtc__MusicCollection__Handle result,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onLyricResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,int64_t songCode,const char* lyricUrl,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onSongSimpleInfoResult(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,int64_t songCode,const char* simpleInfo,agora_rtc__MusicContentCenterStatusCode__C errorCode);
void agora_rtc__IMusicContentCenterEventHandler__onPreLoadEvent(agora_rtc__IMusicContentCenterEventHandler__Handle handle,const char* requestId,int64_t songCode,int percent,const char* lyricUrl,agora_rtc__PreloadStatusCode__C status,agora_rtc__MusicContentCenterStatusCode__C errorCode);

typedef struct agora_rtc__MusicContentCenterConfiguration__C
{
  const char* appId;
const char* token;
int64_t mccUid;
int32_t maxCacheSize;
const char* mccDomain;
agora_rtc__IMusicContentCenterEventHandler__Handle* eventHandler;
} agora_rtc__MusicContentCenterConfiguration__C;

typedef void* agora_rtc__IMusicPlayer__Handle;

int agora_rtc__IMusicPlayer__open(agora_rtc__IMusicPlayer__Handle handle,int64_t songCode,int64_t startPos);
typedef void* agora_rtc__IMusicContentCenter__Handle;

int agora_rtc__IMusicContentCenter__initialize(agora_rtc__IMusicContentCenter__Handle handle,const agora_rtc__MusicContentCenterConfiguration__C& configuration);
int agora_rtc__IMusicContentCenter__renewToken(agora_rtc__IMusicContentCenter__Handle handle,const char* token);
void agora_rtc__IMusicContentCenter__release(agora_rtc__IMusicContentCenter__Handle handle);
int agora_rtc__IMusicContentCenter__registerEventHandler(agora_rtc__IMusicContentCenter__Handle handle,agora_rtc__IMusicContentCenterEventHandler__Handle* eventHandler);
int agora_rtc__IMusicContentCenter__unregisterEventHandler(agora_rtc__IMusicContentCenter__Handle handle);
agora_rtc__IMusicPlayer__Handle agora_rtc__IMusicContentCenter__createMusicPlayer(agora_rtc__IMusicContentCenter__Handle handle);
int agora_rtc__IMusicContentCenter__getMusicCharts(agora_rtc__IMusicContentCenter__Handle handle,char * requestId);
int agora_rtc__IMusicContentCenter__getMusicCollectionByMusicChartId(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int32_t musicChartId,int32_t page,int32_t pageSize,const char* jsonOption);
int agora_rtc__IMusicContentCenter__searchMusic(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,const char* keyWord,int32_t page,int32_t pageSize,const char* jsonOption);
int agora_rtc__IMusicContentCenter__preload(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode,const char* jsonOption);
int agora_rtc__IMusicContentCenter__preload(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int64_t songCode);
int agora_rtc__IMusicContentCenter__removeCache(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode);
int agora_rtc__IMusicContentCenter__getCaches(agora_rtc__IMusicContentCenter__Handle handle,agora_rtc__MusicCacheInfo__C* cacheInfo,int32_t* cacheInfoSize);
int agora_rtc__IMusicContentCenter__isPreloaded(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode);
int agora_rtc__IMusicContentCenter__getLyric(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int64_t songCode,int32_t LyricType);
int agora_rtc__IMusicContentCenter__getSongSimpleInfo(agora_rtc__IMusicContentCenter__Handle handle,char * requestId,int64_t songCode);
int agora_rtc__IMusicContentCenter__getInternalSongCode(agora_rtc__IMusicContentCenter__Handle handle,int64_t songCode,const char* jsonOption,int64_t& internalSongCode);
    
    #endif// IAGORAMUSICCONTENTCENTER_C_H_
    