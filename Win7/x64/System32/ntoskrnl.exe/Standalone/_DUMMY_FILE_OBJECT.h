typedef struct _EX_PUSH_LOCK
{
  union
  {
    struct /* bitfield */
    {
      /* 0x0000 */ unsigned __int64 Locked : 1; /* bit position: 0 */
      /* 0x0000 */ unsigned __int64 Waiting : 1; /* bit position: 1 */
      /* 0x0000 */ unsigned __int64 Waking : 1; /* bit position: 2 */
      /* 0x0000 */ unsigned __int64 MultipleShared : 1; /* bit position: 3 */
      /* 0x0000 */ unsigned __int64 Shared : 60; /* bit position: 4 */
    }; /* bitfield */
    /* 0x0000 */ unsigned __int64 Value;
    /* 0x0000 */ void* Ptr;
  }; /* size: 0x0008 */
} EX_PUSH_LOCK, *PEX_PUSH_LOCK; /* size: 0x0008 */

typedef struct _QUAD
{
  union
  {
    /* 0x0000 */ __int64 UseThisFieldToCopy;
    /* 0x0000 */ double DoNotUseThisField;
  }; /* size: 0x0008 */
} QUAD, *PQUAD; /* size: 0x0008 */

typedef struct _OBJECT_HEADER
{
  /* 0x0000 */ __int64 PointerCount;
  union
  {
    /* 0x0008 */ __int64 HandleCount;
    /* 0x0008 */ void* NextToFree;
  }; /* size: 0x0008 */
  /* 0x0010 */ struct _EX_PUSH_LOCK Lock;
  /* 0x0018 */ unsigned char TypeIndex;
  /* 0x0019 */ unsigned char TraceFlags;
  /* 0x001a */ unsigned char InfoMask;
  /* 0x001b */ unsigned char Flags;
  union
  {
    /* 0x0020 */ struct _OBJECT_CREATE_INFORMATION* ObjectCreateInfo;
    /* 0x0020 */ void* QuotaBlockCharged;
  }; /* size: 0x0008 */
  /* 0x0028 */ void* SecurityDescriptor;
  /* 0x0030 */ struct _QUAD Body;
} OBJECT_HEADER, *POBJECT_HEADER; /* size: 0x0038 */

typedef struct _DUMMY_FILE_OBJECT
{
  /* 0x0000 */ struct _OBJECT_HEADER ObjectHeader;
  /* 0x0038 */ char FileObjectBody[216];
} DUMMY_FILE_OBJECT, *PDUMMY_FILE_OBJECT; /* size: 0x0110 */

