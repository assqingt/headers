typedef struct _HAL_NODE_RANGE
{
  /* 0x0000 */ unsigned __int64 PageFrameIndex;
  /* 0x0008 */ unsigned long Node;
  /* 0x000c */ long __PADDING__[1];
} HAL_NODE_RANGE, *PHAL_NODE_RANGE; /* size: 0x0010 */

typedef enum _MI_PFN_CACHE_ATTRIBUTE
{
  MiNonCached = 0,
  MiCached = 1,
  MiWriteCombined = 2,
  MiNotMapped = 3,
} MI_PFN_CACHE_ATTRIBUTE, *PMI_PFN_CACHE_ATTRIBUTE;

typedef struct _MI_ZERO_COST_COUNTS
{
  /* 0x0000 */ unsigned __int64 NativeSum;
  /* 0x0008 */ unsigned __int64 CachedSum;
} MI_ZERO_COST_COUNTS, *PMI_ZERO_COST_COUNTS; /* size: 0x0010 */

typedef struct _RTL_AVL_TREE
{
  /* 0x0000 */ struct _RTL_BALANCED_NODE* Root;
} RTL_AVL_TREE, *PRTL_AVL_TREE; /* size: 0x0008 */

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

typedef struct _MI_HARDWARE_STATE
{
  /* 0x0000 */ unsigned long NodeMask;
  /* 0x0004 */ unsigned long NumaHintIndex;
  /* 0x0008 */ unsigned long NumaLastRangeIndexInclusive;
  /* 0x000c */ unsigned char NumaTableCaptured;
  /* 0x000d */ unsigned char NodeShift;
  /* 0x000e */ unsigned char ChannelShift;
  /* 0x0010 */ wchar_t* NodeGraph;
  /* 0x0018 */ struct _MI_SYSTEM_NODE_INFORMATION* SystemNodeInformation;
  /* 0x0020 */ struct _HAL_NODE_RANGE TemporaryNumaRanges[2];
  /* 0x0040 */ struct _HAL_NODE_RANGE* NumaMemoryRanges;
  /* 0x0048 */ struct _HAL_CHANNEL_MEMORY_RANGES* ChannelMemoryRanges;
  /* 0x0050 */ volatile long NumaNodeLock;
  /* 0x0054 */ unsigned long SecondLevelCacheSize;
  /* 0x0058 */ unsigned long FirstLevelCacheSize;
  /* 0x005c */ unsigned long PhysicalAddressBits;
  /* 0x0060 */ unsigned char ProcessorCachesFlushedOnPowerLoss;
  /* 0x0068 */ unsigned __int64 TotalPagesAllowed;
  /* 0x0070 */ unsigned long SecondaryColorMask;
  /* 0x0074 */ unsigned long SecondaryColors;
  /* 0x0078 */ unsigned long FlushTbForAttributeChange;
  /* 0x007c */ unsigned long FlushCacheForAttributeChange;
  /* 0x0080 */ unsigned long FlushCacheForPageAttributeChange;
  /* 0x0084 */ unsigned long CacheFlushPromoteThreshold;
  /* 0x00c0 */ unsigned __int64 InvalidPteMask;
  /* 0x0100 */ unsigned long LargePageColors[3];
  /* 0x0110 */ unsigned __int64 FlushTbThreshold;
  /* 0x0118 */ enum _MI_PFN_CACHE_ATTRIBUTE OptimalZeroingAttribute[4][4];
  /* 0x0158 */ unsigned char AttributeChangeRequiresReZero;
  /* 0x0160 */ struct _MI_ZERO_COST_COUNTS ZeroCostCounts[2];
  /* 0x0180 */ unsigned __int64 VsmKernelPageCount;
  /* 0x0188 */ struct _RTL_AVL_TREE EnclaveRegions;
  /* 0x0190 */ void* EnclaveMetadataPage;
  /* 0x0198 */ struct _RTL_BITMAP* EnclaveMetadataBitMap;
  /* 0x01a0 */ struct _EX_PUSH_LOCK EnclaveMetadataEntryLock;
  /* 0x01a8 */ volatile long EnclaveMetadataPageLock;
  /* 0x01ac */ long __PADDING__[5];
} MI_HARDWARE_STATE, *PMI_HARDWARE_STATE; /* size: 0x01c0 */

