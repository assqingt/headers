typedef struct _SYSTEM_POWER_STATE_CONTEXT
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned long Reserved1 : 8; /* bit position: 0 */
      /* 0x0000 */ unsigned long TargetSystemState : 4; /* bit position: 8 */
      /* 0x0000 */ unsigned long EffectiveSystemState : 4; /* bit position: 12 */
      /* 0x0000 */ unsigned long CurrentSystemState : 4; /* bit position: 16 */
      /* 0x0000 */ unsigned long IgnoreHibernationPath : 1; /* bit position: 20 */
      /* 0x0000 */ unsigned long PseudoTransition : 1; /* bit position: 21 */
      /* 0x0000 */ unsigned long KernelSoftReboot : 1; /* bit position: 22 */
      /* 0x0000 */ unsigned long DirectedDripsTransition : 1; /* bit position: 23 */
      /* 0x0000 */ unsigned long Reserved2 : 8; /* bit position: 24 */
    }; /* bitfield */
    /* 0x0000 */ unsigned long ContextAsUlong;
  }; /* size: 0x0004 */
} SYSTEM_POWER_STATE_CONTEXT, *PSYSTEM_POWER_STATE_CONTEXT; /* size: 0x0004 */

typedef enum
{
  PowerActionNone = 0,
  PowerActionReserved = 1,
  PowerActionSleep = 2,
  PowerActionHibernate = 3,
  PowerActionShutdown = 4,
  PowerActionShutdownReset = 5,
  PowerActionShutdownOff = 6,
  PowerActionWarmEject = 7,
  PowerActionDisplayOff = 8,
} TAG_UNNAMED_116, *PTAG_UNNAMED_116;

typedef struct _POP_CURRENT_BROADCAST
{
  /* 0x0000 */ unsigned char InProgress;
  /* 0x0004 */ struct _SYSTEM_POWER_STATE_CONTEXT SystemContext;
  /* 0x0008 */ enum _TAG_UNNAMED_116 PowerAction;
  /* 0x0010 */ struct _POP_DEVICE_SYS_STATE* DeviceState;
} POP_CURRENT_BROADCAST, *PPOP_CURRENT_BROADCAST; /* size: 0x0018 */

