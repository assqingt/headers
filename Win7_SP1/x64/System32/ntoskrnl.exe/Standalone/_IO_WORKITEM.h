typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0008 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0010 */

typedef struct _WORK_QUEUE_ITEM
{
  /* 0x0000 */ struct _LIST_ENTRY List;
  /* 0x0010 */ void* WorkerRoutine /* function */;
  /* 0x0018 */ void* Parameter;
} WORK_QUEUE_ITEM, *PWORK_QUEUE_ITEM; /* size: 0x0020 */

typedef struct _IO_WORKITEM
{
  /* 0x0000 */ struct _WORK_QUEUE_ITEM WorkItem;
  /* 0x0020 */ void* Routine /* function */;
  /* 0x0028 */ void* IoObject;
  /* 0x0030 */ void* Context;
  /* 0x0038 */ unsigned long Type;
  /* 0x003c */ long __PADDING__[1];
} IO_WORKITEM, *PIO_WORKITEM; /* size: 0x0040 */

