
    #ifndef IAGORASPATIALAUDIO_C_H_
    #define IAGORASPATIALAUDIO_C_H_
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    
#include "AgoraBase_C.h"
#include "AgoraMediaBase_C.h"

#include "IAgoraRtcEngineEx_C.h"

typedef struct agora_rtc__RemoteVoicePositionInfo__C
{
  float position[3];
float forward[3];
} agora_rtc__RemoteVoicePositionInfo__C;


typedef struct agora_rtc__SpatialAudioZone__C
{
  int zoneSetId;
float position[3];
float forward[3];
float right[3];
float up[3];
float forwardLength;
float rightLength;
float upLength;
float audioAttenuation;
} agora_rtc__SpatialAudioZone__C;


typedef struct agora_rtc__LocalSpatialAudioConfig__C
{
  agora_rtc__IRtcEngine__Handle* rtcEngine;
} agora_rtc__LocalSpatialAudioConfig__C;

typedef void* agora_rtc__IBaseSpatialAudioEngine__Handle;

void agora_rtc__IBaseSpatialAudioEngine__release(agora_rtc__IBaseSpatialAudioEngine__Handle handle);
int agora_rtc__IBaseSpatialAudioEngine__setMaxAudioRecvCount(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int maxCount);
int agora_rtc__IBaseSpatialAudioEngine__setAudioRecvRange(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float range);
int agora_rtc__IBaseSpatialAudioEngine__setDistanceUnit(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float unit);
int agora_rtc__IBaseSpatialAudioEngine__updateSelfPosition(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float position[3],float axisForward[3],float axisRight[3],float axisUp[3]);
int agora_rtc__IBaseSpatialAudioEngine__updateSelfPositionEx(agora_rtc__IBaseSpatialAudioEngine__Handle handle,float position[3],float axisForward[3],float axisRight[3],float axisUp[3],const agora_rtc__RtcConnection__C& connection);
int agora_rtc__IBaseSpatialAudioEngine__updatePlayerPositionInfo(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int playerId,const agora_rtc__RemoteVoicePositionInfo__C& positionInfo);
int agora_rtc__IBaseSpatialAudioEngine__setParameters(agora_rtc__IBaseSpatialAudioEngine__Handle handle,const char* params);
int agora_rtc__IBaseSpatialAudioEngine__muteLocalAudioStream(agora_rtc__IBaseSpatialAudioEngine__Handle handle,bool mute);
int agora_rtc__IBaseSpatialAudioEngine__muteAllRemoteAudioStreams(agora_rtc__IBaseSpatialAudioEngine__Handle handle,bool mute);
int agora_rtc__IBaseSpatialAudioEngine__setZones(agora_rtc__IBaseSpatialAudioEngine__Handle handle,const agora_rtc__SpatialAudioZone__C* zones,unsigned int zoneCount);
int agora_rtc__IBaseSpatialAudioEngine__setPlayerAttenuation(agora_rtc__IBaseSpatialAudioEngine__Handle handle,int playerId,double attenuation,bool forceSet);
int agora_rtc__IBaseSpatialAudioEngine__muteRemoteAudioStream(agora_rtc__IBaseSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,bool mute);
typedef void* agora_rtc__ILocalSpatialAudioEngine__Handle;

int agora_rtc__ILocalSpatialAudioEngine__initialize(agora_rtc__ILocalSpatialAudioEngine__Handle handle,const agora_rtc__LocalSpatialAudioConfig__C& config);
int agora_rtc__ILocalSpatialAudioEngine__updateRemotePosition(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RemoteVoicePositionInfo__C& posInfo);
int agora_rtc__ILocalSpatialAudioEngine__updateRemotePositionEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RemoteVoicePositionInfo__C& posInfo,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__ILocalSpatialAudioEngine__removeRemotePosition(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid);
int agora_rtc__ILocalSpatialAudioEngine__removeRemotePositionEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__ILocalSpatialAudioEngine__clearRemotePositions(agora_rtc__ILocalSpatialAudioEngine__Handle handle);
int agora_rtc__ILocalSpatialAudioEngine__clearRemotePositionsEx(agora_rtc__ILocalSpatialAudioEngine__Handle handle,const agora_rtc__RtcConnection__C& connection);
int agora_rtc__ILocalSpatialAudioEngine__setRemoteAudioAttenuation(agora_rtc__ILocalSpatialAudioEngine__Handle handle,agora_rtc__uid_t__C uid,double attenuation,bool forceSet);
    
    #endif// IAGORASPATIALAUDIO_C_H_
    