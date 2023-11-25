
    #ifndef IAGORALOG_C_H_
    #define IAGORALOG_C_H_
    
    #include <stdint.h>
    #include <stddef.h>
    
    
    
    


typedef enum agora_commons__LOG_LEVEL__C
{
  LOG_LEVEL_NONE= 0x0000,
LOG_LEVEL_INFO= 0x0001,
LOG_LEVEL_WARN= 0x0002,
LOG_LEVEL_ERROR= 0x0004,
LOG_LEVEL_FATAL= 0x0008,
LOG_LEVEL_API_CALL= 0x0010,
} agora_commons__LOG_LEVEL__C;

typedef void* agora_commons__ILogWriter__Handle;

int32_t agora_commons__ILogWriter__writeLog(agora_commons__ILogWriter__Handle handle,agora_commons__LOG_LEVEL__C level,const char* message,uint16_t length);

typedef enum agora_commons__LOG_FILTER_TYPE__C
{
  LOG_FILTER_OFF= 0,
LOG_FILTER_DEBUG= 0x080f,
LOG_FILTER_INFO= 0x000f,
LOG_FILTER_WARN= 0x000e,
LOG_FILTER_ERROR= 0x000c,
LOG_FILTER_CRITICAL= 0x0008,
LOG_FILTER_MASK= 0x80f,
} agora_commons__LOG_FILTER_TYPE__C;





typedef struct agora_commons__LogConfig__C
{
  const char* filePath;
uint32_t fileSizeInKB;
agora_commons__LOG_LEVEL__C level;
} agora_commons__LogConfig__C;

    
    #endif// IAGORALOG_C_H_
    