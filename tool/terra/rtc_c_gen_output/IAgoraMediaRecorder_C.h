
    #ifndef IAGORAMEDIARECORDER_C_H_
    #define IAGORAMEDIARECORDER_C_H_
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    #include "AgoraBase_C.h"
#include "AgoraMediaBase_C.h"
#include "IAgoraRtcEngineEx_C.h"
typedef void* agora_rtc__IMediaRecorder__Handle;

int agora_rtc__IMediaRecorder__setMediaRecorderObserver(agora_rtc__IMediaRecorder__Handle handle,agora_media__IMediaRecorderObserver__Handle* callback);
int agora_rtc__IMediaRecorder__startRecording(agora_rtc__IMediaRecorder__Handle handle,const agora_media__MediaRecorderConfiguration__C& config);
int agora_rtc__IMediaRecorder__stopRecording(agora_rtc__IMediaRecorder__Handle handle);
    
    #endif// IAGORAMEDIARECORDER_C_H_
    