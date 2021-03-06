typedef enum _WHEA_EVENT_LOG_ENTRY_TYPE
{
  WheaEventLogEntryTypeInformational = 0,
  WheaEventLogEntryTypeWarning = 1,
  WheaEventLogEntryTypeError = 2,
} WHEA_EVENT_LOG_ENTRY_TYPE, *PWHEA_EVENT_LOG_ENTRY_TYPE;

typedef enum _WHEA_EVENT_LOG_ENTRY_ID
{
  WheaEventLogEntryIdCmcPollingTimeout = -2147483647,
  WheaEventLogEntryIdWheaInit = -2147483646,
  WheaEventLogEntryIdCmcSwitchToPolling = -2147483645,
  WheaEventLogEntryIdDroppedCorrectedError = -2147483644,
  WheaEventLogEntryIdStartedReportHwError = -2147483643,
  WheaEventLogEntryIdPFAMemoryOfflined = -2147483642,
  WheaEventLogEntryIdPFAMemoryRemoveMonitor = -2147483641,
  WheaEventLogEntryIdPFAMemoryPolicy = -2147483640,
  WheaEventLogEntryIdPshedInjectError = -2147483639,
  WheaEventLogEntryIdOscCapabilities = -2147483638,
  WheaEventLogEntryIdPshedPluginRegister = -2147483637,
  WheaEventLogEntryIdAddRemoveErrorSource = -2147483636,
  WheaEventLogEntryIdWorkQueueItem = -2147483635,
  WheaEventLogEntryIdAttemptErrorRecovery = -2147483634,
  WheaEventLogEntryIdMcaFoundErrorInBank = -2147483633,
  WheaEventLogEntryIdMcaStuckErrorCheck = -2147483632,
  WheaEventLogEntryIdMcaErrorCleared = -2147483631,
  WheaEventLogEntryIdClearedPoison = -2147483630,
  WheaEventLogEntryIdProcessEINJ = -2147483629,
  WheaEventLogEntryIdProcessHEST = -2147483628,
  WheaEventLogEntryIdCreateGenericRecord = -2147483627,
  WheaEventLogEntryIdErrorRecord = -2147483626,
  WheaEventLogEntryIdErrorRecordLimit = -2147483625,
  WheaEventLogEntryIdSELEventFailed = -2147483624,
} WHEA_EVENT_LOG_ENTRY_ID, *PWHEA_EVENT_LOG_ENTRY_ID;

typedef union _WHEA_EVENT_LOG_ENTRY_FLAGS
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long LogTelemetry : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned long LogInternalEtw : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned long LogBlackbox : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned long LogSel : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned long Reserved : 28; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long AsULONG;
  }; /* size: 0x0004 */
} WHEA_EVENT_LOG_ENTRY_FLAGS, *PWHEA_EVENT_LOG_ENTRY_FLAGS; /* size: 0x0004 */

typedef struct _WHEA_EVENT_LOG_ENTRY_HEADER
{
  /* 0x0000 */ unsigned long Signature;
  /* 0x0004 */ unsigned long Version;
  /* 0x0008 */ unsigned long Length;
  /* 0x000c */ enum _WHEA_EVENT_LOG_ENTRY_TYPE Type;
  /* 0x0010 */ unsigned long OwnerTag;
  /* 0x0014 */ enum _WHEA_EVENT_LOG_ENTRY_ID Id;
  /* 0x0018 */ union _WHEA_EVENT_LOG_ENTRY_FLAGS Flags;
  /* 0x001c */ unsigned long PayloadLength;
} WHEA_EVENT_LOG_ENTRY_HEADER, *PWHEA_EVENT_LOG_ENTRY_HEADER; /* size: 0x0020 */

typedef struct _WHEA_EVENT_LOG_ENTRY
{
  /* 0x0000 */ struct _WHEA_EVENT_LOG_ENTRY_HEADER Header;
} WHEA_EVENT_LOG_ENTRY, *PWHEA_EVENT_LOG_ENTRY; /* size: 0x0020 */

