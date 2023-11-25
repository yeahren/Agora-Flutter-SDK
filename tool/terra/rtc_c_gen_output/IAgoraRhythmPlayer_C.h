
    #ifndef IAGORARHYTHMPLAYER_C_H_
    #define IAGORARHYTHMPLAYER_C_H_
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    #include "AgoraBase_C.h"


typedef enum agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C
{
  RHYTHM_PLAYER_STATE_IDLE= 810,
RHYTHM_PLAYER_STATE_OPENING,
RHYTHM_PLAYER_STATE_DECODING,
RHYTHM_PLAYER_STATE_PLAYING,
RHYTHM_PLAYER_STATE_FAILED,
} agora_rtc__RHYTHM_PLAYER_STATE_TYPE__C;


typedef enum agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C
{
  RHYTHM_PLAYER_ERROR_OK= 0,
RHYTHM_PLAYER_ERROR_FAILED= 1,
RHYTHM_PLAYER_ERROR_CAN_NOT_OPEN= 801,
RHYTHM_PLAYER_ERROR_CAN_NOT_PLAY,
RHYTHM_PLAYER_ERROR_FILE_OVER_DURATION_LIMIT,
} agora_rtc__RHYTHM_PLAYER_ERROR_TYPE__C;


typedef struct agora_rtc__AgoraRhythmPlayerConfig__C
{
  int beatsPerMeasure;
int beatsPerMinute;
} agora_rtc__AgoraRhythmPlayerConfig__C;

    
    #endif// IAGORARHYTHMPLAYER_C_H_
    