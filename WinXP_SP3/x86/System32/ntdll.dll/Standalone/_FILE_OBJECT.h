typedef struct _UNICODE_STRING
{
  /* 0x0000 */ unsigned short Length;
  /* 0x0002 */ unsigned short MaximumLength;
  /* 0x0004 */ unsigned short* Buffer;
} UNICODE_STRING, *PUNICODE_STRING; /* size: 0x0008 */

typedef union _LARGE_INTEGER
{
  union
  {
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    }; /* size: 0x0008 */
    struct
    {
      /* 0x0000 */ unsigned long LowPart;
      /* 0x0004 */ long HighPart;
    } /* size: 0x0008 */ u;
    /* 0x0000 */ __int64 QuadPart;
  }; /* size: 0x0008 */
} LARGE_INTEGER, *PLARGE_INTEGER; /* size: 0x0008 */

typedef struct _LIST_ENTRY
{
  /* 0x0000 */ struct _LIST_ENTRY* Flink;
  /* 0x0004 */ struct _LIST_ENTRY* Blink;
} LIST_ENTRY, *PLIST_ENTRY; /* size: 0x0008 */

typedef struct _DISPATCHER_HEADER
{
  /* 0x0000 */ unsigned char Type;
  /* 0x0001 */ unsigned char Absolute;
  /* 0x0002 */ unsigned char Size;
  /* 0x0003 */ unsigned char Inserted;
  /* 0x0004 */ long SignalState;
  /* 0x0008 */ struct _LIST_ENTRY WaitListHead;
} DISPATCHER_HEADER, *PDISPATCHER_HEADER; /* size: 0x0010 */

typedef struct _KEVENT
{
  /* 0x0000 */ struct _DISPATCHER_HEADER Header;
} KEVENT, *PKEVENT; /* size: 0x0010 */

typedef struct _FILE_OBJECT
{
  /* 0x0000 */ short Type;
  /* 0x0002 */ short Size;
  /* 0x0004 */ struct _DEVICE_OBJECT* DeviceObject;
  /* 0x0008 */ struct _VPB* Vpb;
  /* 0x000c */ void* FsContext;
  /* 0x0010 */ void* FsContext2;
  /* 0x0014 */ struct _SECTION_OBJECT_POINTERS* SectionObjectPointer;
  /* 0x0018 */ void* PrivateCacheMap;
  /* 0x001c */ long FinalStatus;
  /* 0x0020 */ struct _FILE_OBJECT* RelatedFileObject;
  /* 0x0024 */ unsigned char LockOperation;
  /* 0x0025 */ unsigned char DeletePending;
  /* 0x0026 */ unsigned char ReadAccess;
  /* 0x0027 */ unsigned char WriteAccess;
  /* 0x0028 */ unsigned char DeleteAccess;
  /* 0x0029 */ unsigned char SharedRead;
  /* 0x002a */ unsigned char SharedWrite;
  /* 0x002b */ unsigned char SharedDelete;
  /* 0x002c */ unsigned long Flags;
  /* 0x0030 */ struct _UNICODE_STRING FileName;
  /* 0x0038 */ union _LARGE_INTEGER CurrentByteOffset;
  /* 0x0040 */ unsigned long Waiters;
  /* 0x0044 */ unsigned long Busy;
  /* 0x0048 */ void* LastLock;
  /* 0x004c */ struct _KEVENT Lock;
  /* 0x005c */ struct _KEVENT Event;
  /* 0x006c */ struct _IO_COMPLETION_CONTEXT* CompletionContext;
} FILE_OBJECT, *PFILE_OBJECT; /* size: 0x0070 */

