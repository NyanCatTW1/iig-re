/* iig(DriverKit-48) generated from IOService.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOService.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOService.h>

/* @iig implementation */
#include <DriverKit/IOUserClient.h>
/* @iig end */


struct IOService_Start_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  provider;
};
#pragma pack(4)
struct IOService_Start_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOService_Start_Msg_Content content;
};
#pragma pack()
#define IOService_Start_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_Start_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOService_Start_Msg_Content, provider) / sizeof(OSObjectRef))))

struct IOService_Start_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_Start_Rpl
{
    IORPCMessageMach           mach;
    IOService_Start_Rpl_Content content;
};
#pragma pack()
#define IOService_Start_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_Start_Msg * message;
        struct IOService_Start_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_Start_Invocation;

struct IOService_Stop_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  provider;
};
#pragma pack(4)
struct IOService_Stop_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOService_Stop_Msg_Content content;
};
#pragma pack()
#define IOService_Stop_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_Stop_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOService_Stop_Msg_Content, provider) / sizeof(OSObjectRef))))

struct IOService_Stop_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_Stop_Rpl
{
    IORPCMessageMach           mach;
    IOService_Stop_Rpl_Content content;
};
#pragma pack()
#define IOService_Stop_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_Stop_Msg * message;
        struct IOService_Stop_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_Stop_Invocation;

struct IOService_ClientCrashed_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  client;
    uint64_t  options;
};
#pragma pack(4)
struct IOService_ClientCrashed_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOService_ClientCrashed_Msg_Content content;
};
#pragma pack()
#define IOService_ClientCrashed_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_ClientCrashed_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOService_ClientCrashed_Msg_Content, client) / sizeof(OSObjectRef))))

struct IOService_ClientCrashed_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_ClientCrashed_Rpl
{
    IORPCMessageMach           mach;
    IOService_ClientCrashed_Rpl_Content content;
};
#pragma pack()
#define IOService_ClientCrashed_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_ClientCrashed_Msg * message;
        struct IOService_ClientCrashed_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_ClientCrashed_Invocation;

struct IOService_GetRegistryEntryID_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IOService_GetRegistryEntryID_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_GetRegistryEntryID_Msg_Content content;
};
#pragma pack()
#define IOService_GetRegistryEntryID_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_GetRegistryEntryID_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_GetRegistryEntryID_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    uint64_t  registryEntryID;
};
#pragma pack(4)
struct IOService_GetRegistryEntryID_Rpl
{
    IORPCMessageMach           mach;
    IOService_GetRegistryEntryID_Rpl_Content content;
};
#pragma pack()
#define IOService_GetRegistryEntryID_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_GetRegistryEntryID_Msg * message;
        struct IOService_GetRegistryEntryID_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_GetRegistryEntryID_Invocation;

struct IOService_SetName_Msg_Content
{
    IORPCMessage hdr;
    const char *  name;
    char __name[128];
};
#pragma pack(4)
struct IOService_SetName_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_SetName_Msg_Content content;
};
#pragma pack()
#define IOService_SetName_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_SetName_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_SetName_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_SetName_Rpl
{
    IORPCMessageMach           mach;
    IOService_SetName_Rpl_Content content;
};
#pragma pack()
#define IOService_SetName_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_SetName_Msg * message;
        struct IOService_SetName_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_SetName_Invocation;

struct IOService_RegisterService_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IOService_RegisterService_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_RegisterService_Msg_Content content;
};
#pragma pack()
#define IOService_RegisterService_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_RegisterService_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_RegisterService_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_RegisterService_Rpl
{
    IORPCMessageMach           mach;
    IOService_RegisterService_Rpl_Content content;
};
#pragma pack()
#define IOService_RegisterService_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_RegisterService_Msg * message;
        struct IOService_RegisterService_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_RegisterService_Invocation;


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct OSObject_SetDispatchQueue_Msg * message;
        struct OSObject_SetDispatchQueue_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_SetDispatchQueue_Invocation;


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct OSObject_CopyDispatchQueue_Msg * message;
        struct OSObject_CopyDispatchQueue_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_CopyDispatchQueue_Invocation;

struct IOService_CopyProperties_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IOService_CopyProperties_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_CopyProperties_Msg_Content content;
};
#pragma pack()
#define IOService_CopyProperties_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_CopyProperties_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_CopyProperties_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  properties;
};
#pragma pack(4)
struct IOService_CopyProperties_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_CopyProperties_Rpl_Content content;
};
#pragma pack()
#define IOService_CopyProperties_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOService_CopyProperties_Rpl_Content, properties) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_CopyProperties_Msg * message;
        struct IOService_CopyProperties_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_CopyProperties_Invocation;

struct IOService_SearchProperty_Msg_Content
{
    IORPCMessage hdr;
    const char *  name;
    char __name[128];
    const char *  plane;
    char __plane[128];
    uint64_t  options;
};
#pragma pack(4)
struct IOService_SearchProperty_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_SearchProperty_Msg_Content content;
};
#pragma pack()
#define IOService_SearchProperty_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_SearchProperty_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_SearchProperty_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  property;
};
#pragma pack(4)
struct IOService_SearchProperty_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_SearchProperty_Rpl_Content content;
};
#pragma pack()
#define IOService_SearchProperty_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOService_SearchProperty_Rpl_Content, property) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_SearchProperty_Msg * message;
        struct IOService_SearchProperty_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_SearchProperty_Invocation;

struct IOService_SetProperties_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  properties;
};
#pragma pack(4)
struct IOService_SetProperties_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOService_SetProperties_Msg_Content content;
};
#pragma pack()
#define IOService_SetProperties_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_SetProperties_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOService_SetProperties_Msg_Content, properties) / sizeof(OSObjectRef))))

struct IOService_SetProperties_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_SetProperties_Rpl
{
    IORPCMessageMach           mach;
    IOService_SetProperties_Rpl_Content content;
};
#pragma pack()
#define IOService_SetProperties_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_SetProperties_Msg * message;
        struct IOService_SetProperties_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_SetProperties_Invocation;

struct IOService_SetPowerState_Msg_Content
{
    IORPCMessage hdr;
    uint32_t  powerFlags;
};
#pragma pack(4)
struct IOService_SetPowerState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_SetPowerState_Msg_Content content;
};
#pragma pack()
#define IOService_SetPowerState_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_SetPowerState_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_SetPowerState_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_SetPowerState_Rpl
{
    IORPCMessageMach           mach;
    IOService_SetPowerState_Rpl_Content content;
};
#pragma pack()
#define IOService_SetPowerState_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_SetPowerState_Msg * message;
        struct IOService_SetPowerState_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_SetPowerState_Invocation;

struct IOService_ChangePowerState_Msg_Content
{
    IORPCMessage hdr;
    uint32_t  powerFlags;
};
#pragma pack(4)
struct IOService_ChangePowerState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_ChangePowerState_Msg_Content content;
};
#pragma pack()
#define IOService_ChangePowerState_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_ChangePowerState_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_ChangePowerState_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_ChangePowerState_Rpl
{
    IORPCMessageMach           mach;
    IOService_ChangePowerState_Rpl_Content content;
};
#pragma pack()
#define IOService_ChangePowerState_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_ChangePowerState_Msg * message;
        struct IOService_ChangePowerState_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_ChangePowerState_Invocation;

struct IOService_NewUserClient_Msg_Content
{
    IORPCMessage hdr;
    uint32_t  type;
};
#pragma pack(4)
struct IOService_NewUserClient_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_NewUserClient_Msg_Content content;
};
#pragma pack()
#define IOService_NewUserClient_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_NewUserClient_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_NewUserClient_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  userClient;
};
#pragma pack(4)
struct IOService_NewUserClient_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_NewUserClient_Rpl_Content content;
};
#pragma pack()
#define IOService_NewUserClient_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOService_NewUserClient_Rpl_Content, userClient) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_NewUserClient_Msg * message;
        struct IOService_NewUserClient_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_NewUserClient_Invocation;

struct IOService_Create_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  provider;
    const char *  propertiesKey;
    char __propertiesKey[128];
};
#pragma pack(4)
struct IOService_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOService_Create_Msg_Content content;
};
#pragma pack()
#define IOService_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOService_Create_Msg_Content, provider) / sizeof(OSObjectRef))))

struct IOService_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  result;
};
#pragma pack(4)
struct IOService_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_Create_Rpl_Content content;
};
#pragma pack()
#define IOService_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOService_Create_Rpl_Content, result) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_Create_Msg * message;
        struct IOService_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_Create_Invocation;

struct IOService_Terminate_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  options;
};
#pragma pack(4)
struct IOService_Terminate_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_Terminate_Msg_Content content;
};
#pragma pack()
#define IOService_Terminate_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_Terminate_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_Terminate_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_Terminate_Rpl
{
    IORPCMessageMach           mach;
    IOService_Terminate_Rpl_Content content;
};
#pragma pack()
#define IOService_Terminate_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_Terminate_Msg * message;
        struct IOService_Terminate_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_Terminate_Invocation;

struct IOService_CopyProviderProperties_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  propertyKeys;
};
#pragma pack(4)
struct IOService_CopyProviderProperties_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOService_CopyProviderProperties_Msg_Content content;
};
#pragma pack()
#define IOService_CopyProviderProperties_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_CopyProviderProperties_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOService_CopyProviderProperties_Msg_Content, propertyKeys) / sizeof(OSObjectRef))))

struct IOService_CopyProviderProperties_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  properties;
};
#pragma pack(4)
struct IOService_CopyProviderProperties_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_CopyProviderProperties_Rpl_Content content;
};
#pragma pack()
#define IOService_CopyProviderProperties_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOService_CopyProviderProperties_Rpl_Content, properties) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_CopyProviderProperties_Msg * message;
        struct IOService_CopyProviderProperties_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_CopyProviderProperties_Invocation;

struct IOService_RequireMaxBusStall_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  maxBusStall;
};
#pragma pack(4)
struct IOService_RequireMaxBusStall_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOService_RequireMaxBusStall_Msg_Content content;
};
#pragma pack()
#define IOService_RequireMaxBusStall_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_RequireMaxBusStall_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOService_RequireMaxBusStall_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_RequireMaxBusStall_Rpl
{
    IORPCMessageMach           mach;
    IOService_RequireMaxBusStall_Rpl_Content content;
};
#pragma pack()
#define IOService_RequireMaxBusStall_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_RequireMaxBusStall_Msg * message;
        struct IOService_RequireMaxBusStall_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_RequireMaxBusStall_Invocation;

struct IOService_Stop_async_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  provider;
};
#pragma pack(4)
struct IOService_Stop_async_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOService_Stop_async_Msg_Content content;
};
#pragma pack()
#define IOService_Stop_async_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOService_Stop_async_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOService_Stop_async_Msg_Content, provider) / sizeof(OSObjectRef))))

struct IOService_Stop_async_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOService_Stop_async_Rpl
{
    IORPCMessageMach           mach;
    IOService_Stop_async_Rpl_Content content;
};
#pragma pack()
#define IOService_Stop_async_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOService_Stop_async_Msg * message;
        struct IOService_Stop_async_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOService_Stop_async_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gIODispatchQueueMetaClass;
extern OSMetaClass * gIOMemoryDescriptorMetaClass;
extern OSMetaClass * gIOBufferMemoryDescriptorMetaClass;
extern OSMetaClass * gIOUserClientMetaClass;
extern OSMetaClass * gOSActionMetaClass;
#endif /* !KERNEL */

#if !KERNEL

#define IOService_QueueNames  ""

#define IOService_MethodNames  ""

#define IOServiceMetaClass_MethodNames  ""

struct OSClassDescription_IOService_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOService_QueueNames)];
    char               methodNames[sizeof(IOService_MethodNames)];
    char               metaMethodNames[sizeof(IOServiceMetaClass_MethodNames)];
};

const struct OSClassDescription_IOService_t
OSClassDescription_IOService =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOService_t),
        .name                    = "IOService",
        .superName               = "OSObject",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOService_QueueNames),
        .methodNamesSize         = sizeof(IOService_MethodNames),
        .metaMethodNamesSize     = sizeof(IOServiceMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOService_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOService_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOService_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOService_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOService_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOService_QueueNames,
    .methodNames     = IOService_MethodNames,
    .metaMethodNames = IOServiceMetaClass_MethodNames,
};

static kern_return_t
IOService_New(OSMetaClass * instance);

OSClassLoadInformation
IOService_Class = 
{
    .description       = &OSClassDescription_IOService.base,
    .instanceSize      = sizeof(IOService),

    .New               = &IOService_New,
};

const void *
gIOService_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOService_Class;

OSMetaClass * gIOServiceMetaClass;

static kern_return_t
IOService_New(OSMetaClass * instance)
{
    if (!new(instance) IOServiceMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOServiceMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOService) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOService::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOService::_Dispatch(IOService * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
        case IOService_Start_ID:
            ret = self->Start_Invoke(rpc, &IOService::Start_Impl);
            break;
        case IOService_Stop_ID:
            ret = self->Stop_Invoke(rpc, &IOService::Stop_Impl);
            break;
#if KERNEL
        case IOService_ClientCrashed_ID:
            ret = self->ClientCrashed_Invoke(rpc, &IOService::ClientCrashed_Impl);
            break;
#endif /* !KERNEL */
        case IOService_GetRegistryEntryID_ID:
            ret = self->GetRegistryEntryID_Invoke(rpc, &IOService::GetRegistryEntryID_Impl);
            break;
#if KERNEL
        case IOService_SetName_ID:
            ret = self->SetName_Invoke(rpc, &IOService::SetName_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOService_RegisterService_ID:
            ret = self->RegisterService_Invoke(rpc, &IOService::RegisterService_Impl);
            break;
#endif /* !KERNEL */
        case OSObject_SetDispatchQueue_ID:
            ret = self->SetDispatchQueue_Invoke(rpc, (kern_return_t (OSObject::*)(OSObject_SetDispatchQueue_Args)) &IOService::SetDispatchQueue_Impl);
            break;
#if KERNEL
        case OSObject_CopyDispatchQueue_ID:
            ret = self->CopyDispatchQueue_Invoke(rpc, (kern_return_t (OSObject::*)(OSObject_CopyDispatchQueue_Args)) &IOService::CopyDispatchQueue_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOService_CopyProperties_ID:
            ret = self->CopyProperties_Invoke(rpc, &IOService::CopyProperties_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOService_SearchProperty_ID:
            ret = self->SearchProperty_Invoke(rpc, &IOService::SearchProperty_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOService_SetProperties_ID:
            ret = self->SetProperties_Invoke(rpc, &IOService::SetProperties_Impl);
            break;
#endif /* !KERNEL */
        case IOService_SetPowerState_ID:
            ret = self->SetPowerState_Invoke(rpc, &IOService::SetPowerState_Impl);
            break;
#if KERNEL
        case IOService_ChangePowerState_ID:
            ret = self->ChangePowerState_Invoke(rpc, &IOService::ChangePowerState_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOService_NewUserClient_ID:
            ret = self->NewUserClient_Invoke(rpc, &IOService::NewUserClient_Impl);
            break;
#endif /* !KERNEL */
        case IOService_Create_ID:
            ret = self->Create_Invoke(rpc, &IOService::Create_Impl);
            break;
#if KERNEL
        case IOService_Terminate_ID:
            ret = self->Terminate_Invoke(rpc, &IOService::Terminate_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOService_CopyProviderProperties_ID:
            ret = self->CopyProviderProperties_Invoke(rpc, &IOService::CopyProviderProperties_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOService_RequireMaxBusStall_ID:
            ret = self->RequireMaxBusStall_Invoke(rpc, &IOService::RequireMaxBusStall_Impl);
            break;
#endif /* !KERNEL */
        case IOService_Stop_async_ID:
            ret = self->Stop_async_Invoke(rpc, &IOService::Stop_async_Impl);
            break;

        default:
            ret = OSObject::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IOService::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOServiceMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOService::Start(
        IOService * provider,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_Start_Msg msg;
        struct
        {
            IOService_Start_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_Start_Msg * msg = &buf.msg;
    struct IOService_Start_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_Start_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_Start_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.provider = (OSObjectRef) provider;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_Start_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_Start_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::Stop(
        IOService * provider,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_Stop_Msg msg;
        struct
        {
            IOService_Stop_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_Stop_Msg * msg = &buf.msg;
    struct IOService_Stop_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_Stop_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_Stop_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.provider = (OSObjectRef) provider;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_Stop_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_Stop_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::ClientCrashed(
        IOService * client,
        uint64_t options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_ClientCrashed_Msg msg;
        struct
        {
            IOService_ClientCrashed_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_ClientCrashed_Msg * msg = &buf.msg;
    struct IOService_ClientCrashed_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_ClientCrashed_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_ClientCrashed_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.client = (OSObjectRef) client;
    msg->content.options = options;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_ClientCrashed_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_ClientCrashed_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::GetRegistryEntryID(
        uint64_t * registryEntryID,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_GetRegistryEntryID_Msg msg;
        struct
        {
            IOService_GetRegistryEntryID_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_GetRegistryEntryID_Msg * msg = &buf.msg;
    struct IOService_GetRegistryEntryID_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_GetRegistryEntryID_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_GetRegistryEntryID_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_GetRegistryEntryID_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_GetRegistryEntryID_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (registryEntryID) *registryEntryID = rpl->content.registryEntryID;
    }


    return (ret);
}

kern_return_t
IOService::SetName(
        const char * name,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_SetName_Msg msg;
        struct
        {
            IOService_SetName_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_SetName_Msg * msg = &buf.msg;
    struct IOService_SetName_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_SetName_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_SetName_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.name = name;
    strlcpy(&msg->content.__name[0], name, sizeof(msg->content.__name));
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_SetName_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_SetName_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::RegisterService(        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_RegisterService_Msg msg;
        struct
        {
            IOService_RegisterService_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_RegisterService_Msg * msg = &buf.msg;
    struct IOService_RegisterService_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_RegisterService_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_RegisterService_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_RegisterService_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_RegisterService_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::CopyProperties(
        OSDictionary ** properties,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_CopyProperties_Msg msg;
        struct
        {
            IOService_CopyProperties_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_CopyProperties_Msg * msg = &buf.msg;
    struct IOService_CopyProperties_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_CopyProperties_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_CopyProperties_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_CopyProperties_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOService_CopyProperties_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *properties = OSDynamicCast(OSDictionary, (OSObject *) rpl->content.properties);
        if (rpl->content.properties && !*properties) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOService::SearchProperty(
        const char * name,
        const char * plane,
        uint64_t options,
        OSContainer ** property,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_SearchProperty_Msg msg;
        struct
        {
            IOService_SearchProperty_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_SearchProperty_Msg * msg = &buf.msg;
    struct IOService_SearchProperty_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_SearchProperty_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_SearchProperty_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.name = name;
    strlcpy(&msg->content.__name[0], name, sizeof(msg->content.__name));
    msg->content.plane = plane;
    strlcpy(&msg->content.__plane[0], plane, sizeof(msg->content.__plane));
    msg->content.options = options;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_SearchProperty_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOService_SearchProperty_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *property = OSDynamicCast(OSContainer, (OSObject *) rpl->content.property);
        if (rpl->content.property && !*property) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOService::SetProperties(
        OSDictionary * properties,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_SetProperties_Msg msg;
        struct
        {
            IOService_SetProperties_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_SetProperties_Msg * msg = &buf.msg;
    struct IOService_SetProperties_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_SetProperties_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_SetProperties_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.properties = (OSObjectRef) properties;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_SetProperties_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_SetProperties_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::SetPowerState(
        uint32_t powerFlags,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_SetPowerState_Msg msg;
        struct
        {
            IOService_SetPowerState_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_SetPowerState_Msg * msg = &buf.msg;
    struct IOService_SetPowerState_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_SetPowerState_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_SetPowerState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.powerFlags = powerFlags;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_SetPowerState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_SetPowerState_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::ChangePowerState(
        uint32_t powerFlags,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_ChangePowerState_Msg msg;
        struct
        {
            IOService_ChangePowerState_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_ChangePowerState_Msg * msg = &buf.msg;
    struct IOService_ChangePowerState_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_ChangePowerState_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_ChangePowerState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.powerFlags = powerFlags;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_ChangePowerState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_ChangePowerState_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::NewUserClient(
        uint32_t type,
        IOUserClient ** userClient,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_NewUserClient_Msg msg;
        struct
        {
            IOService_NewUserClient_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_NewUserClient_Msg * msg = &buf.msg;
    struct IOService_NewUserClient_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_NewUserClient_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_NewUserClient_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.type = type;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_NewUserClient_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOService_NewUserClient_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *userClient = OSDynamicCast(IOUserClient, (OSObject *) rpl->content.userClient);
        if (rpl->content.userClient && !*userClient) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOService::Create(
        IOService * provider,
        const char * propertiesKey,
        IOService ** result,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_Create_Msg msg;
        struct
        {
            IOService_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_Create_Msg * msg = &buf.msg;
    struct IOService_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_Create_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.provider = (OSObjectRef) provider;
    msg->content.propertiesKey = propertiesKey;
    strlcpy(&msg->content.__propertiesKey[0], propertiesKey, sizeof(msg->content.__propertiesKey));
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOService_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *result = OSDynamicCast(IOService, (OSObject *) rpl->content.result);
        if (rpl->content.result && !*result) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOService::Terminate(
        uint64_t options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_Terminate_Msg msg;
        struct
        {
            IOService_Terminate_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_Terminate_Msg * msg = &buf.msg;
    struct IOService_Terminate_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_Terminate_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_Terminate_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.options = options;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_Terminate_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_Terminate_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOService::CopyProviderProperties(
        OSArray * propertyKeys,
        OSArray ** properties,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_CopyProviderProperties_Msg msg;
        struct
        {
            IOService_CopyProviderProperties_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_CopyProviderProperties_Msg * msg = &buf.msg;
    struct IOService_CopyProviderProperties_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_CopyProviderProperties_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_CopyProviderProperties_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.propertyKeys = (OSObjectRef) propertyKeys;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_CopyProviderProperties_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOService_CopyProviderProperties_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *properties = OSDynamicCast(OSArray, (OSObject *) rpl->content.properties);
        if (rpl->content.properties && !*properties) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOService::RequireMaxBusStall(
        uint64_t maxBusStall,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_RequireMaxBusStall_Msg msg;
        struct
        {
            IOService_RequireMaxBusStall_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOService_RequireMaxBusStall_Msg * msg = &buf.msg;
    struct IOService_RequireMaxBusStall_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_RequireMaxBusStall_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_RequireMaxBusStall_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.maxBusStall = maxBusStall;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOService_RequireMaxBusStall_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOService_RequireMaxBusStall_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

void
IOService::Stop_async(
        IOService * provider,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOService_Stop_async_Msg msg;
    } buf;
    struct IOService_Stop_async_Msg * msg = &buf.msg;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOService_Stop_async_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOService_Stop_async_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.provider = (OSObjectRef) provider;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(*msg), .reply = NULL, .replySize = 0 };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

}

kern_return_t
IOService::Start_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_Start_Args))
{
    IOService_Start_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * provider;

    if (IOService_Start_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    provider = OSDynamicCast(IOService, (OSObject *) rpc.message->content.provider);
    if (!provider && rpc.message->content.provider) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        provider);

    {
        rpc.reply->content.hdr.msgid   = IOService_Start_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_Start_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::Stop_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_Stop_Args))
{
    IOService_Stop_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * provider;

    if (IOService_Stop_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    provider = OSDynamicCast(IOService, (OSObject *) rpc.message->content.provider);
    if (!provider && rpc.message->content.provider) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        provider);

    {
        rpc.reply->content.hdr.msgid   = IOService_Stop_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_Stop_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::ClientCrashed_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_ClientCrashed_Args))
{
    IOService_ClientCrashed_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * client;

    if (IOService_ClientCrashed_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    client = OSDynamicCast(IOService, (OSObject *) rpc.message->content.client);
    if (!client && rpc.message->content.client) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        client,
        rpc.message->content.options);

    {
        rpc.reply->content.hdr.msgid   = IOService_ClientCrashed_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_ClientCrashed_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::GetRegistryEntryID_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_GetRegistryEntryID_Args))
{
    IOService_GetRegistryEntryID_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_GetRegistryEntryID_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.reply->content.registryEntryID);

    {
        rpc.reply->content.hdr.msgid   = IOService_GetRegistryEntryID_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_GetRegistryEntryID_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::SetName_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_SetName_Args))
{
    IOService_SetName_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_SetName_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.message->content.__name[0]);

    {
        rpc.reply->content.hdr.msgid   = IOService_SetName_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_SetName_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::RegisterService_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_RegisterService_Args))
{
    IOService_RegisterService_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_RegisterService_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        );

    {
        rpc.reply->content.hdr.msgid   = IOService_RegisterService_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_RegisterService_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::CopyProperties_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_CopyProperties_Args))
{
    IOService_CopyProperties_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_CopyProperties_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        (OSDictionary **)&rpc.reply->content.properties);

    {
        rpc.reply->content.hdr.msgid   = IOService_CopyProperties_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_CopyProperties_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
            for (uint32_t idx = 0; idx < 1; idx++)
            {
                rpc.reply->mach.objects[idx].type        = MACH_MSG_PORT_DESCRIPTOR;
                rpc.reply->mach.objects[idx].disposition = MACH_MSG_TYPE_PORT_NONE;
                rpc.reply->mach.objects[idx].name        = MACH_PORT_NULL;
            }
            rpc.reply->content.properties = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::SearchProperty_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_SearchProperty_Args))
{
    IOService_SearchProperty_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_SearchProperty_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.message->content.__name[0],
        &rpc.message->content.__plane[0],
        rpc.message->content.options,
        (OSContainer **)&rpc.reply->content.property);

    {
        rpc.reply->content.hdr.msgid   = IOService_SearchProperty_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_SearchProperty_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
            for (uint32_t idx = 0; idx < 1; idx++)
            {
                rpc.reply->mach.objects[idx].type        = MACH_MSG_PORT_DESCRIPTOR;
                rpc.reply->mach.objects[idx].disposition = MACH_MSG_TYPE_PORT_NONE;
                rpc.reply->mach.objects[idx].name        = MACH_PORT_NULL;
            }
            rpc.reply->content.property = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::SetProperties_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_SetProperties_Args))
{
    IOService_SetProperties_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSDictionary * properties;

    if (IOService_SetProperties_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    properties = OSDynamicCast(OSDictionary, (OSObject *) rpc.message->content.properties);
    if (!properties && rpc.message->content.properties) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        properties);

    {
        rpc.reply->content.hdr.msgid   = IOService_SetProperties_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_SetProperties_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::SetPowerState_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_SetPowerState_Args))
{
    IOService_SetPowerState_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_SetPowerState_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.powerFlags);

    {
        rpc.reply->content.hdr.msgid   = IOService_SetPowerState_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_SetPowerState_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::ChangePowerState_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_ChangePowerState_Args))
{
    IOService_ChangePowerState_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_ChangePowerState_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.powerFlags);

    {
        rpc.reply->content.hdr.msgid   = IOService_ChangePowerState_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_ChangePowerState_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::NewUserClient_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_NewUserClient_Args))
{
    IOService_NewUserClient_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_NewUserClient_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.type,
        (IOUserClient **)&rpc.reply->content.userClient);

    {
        rpc.reply->content.hdr.msgid   = IOService_NewUserClient_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_NewUserClient_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
            for (uint32_t idx = 0; idx < 1; idx++)
            {
                rpc.reply->mach.objects[idx].type        = MACH_MSG_PORT_DESCRIPTOR;
                rpc.reply->mach.objects[idx].disposition = MACH_MSG_TYPE_PORT_NONE;
                rpc.reply->mach.objects[idx].name        = MACH_PORT_NULL;
            }
            rpc.reply->content.userClient = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::Create_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_Create_Args))
{
    IOService_Create_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * provider;

    if (IOService_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    provider = OSDynamicCast(IOService, (OSObject *) rpc.message->content.provider);
    if (!provider && rpc.message->content.provider) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        provider,
        &rpc.message->content.__propertiesKey[0],
        (IOService **)&rpc.reply->content.result);

    {
        rpc.reply->content.hdr.msgid   = IOService_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_Create_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
            for (uint32_t idx = 0; idx < 1; idx++)
            {
                rpc.reply->mach.objects[idx].type        = MACH_MSG_PORT_DESCRIPTOR;
                rpc.reply->mach.objects[idx].disposition = MACH_MSG_TYPE_PORT_NONE;
                rpc.reply->mach.objects[idx].name        = MACH_PORT_NULL;
            }
            rpc.reply->content.result = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::Terminate_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_Terminate_Args))
{
    IOService_Terminate_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_Terminate_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.options);

    {
        rpc.reply->content.hdr.msgid   = IOService_Terminate_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_Terminate_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::CopyProviderProperties_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_CopyProviderProperties_Args))
{
    IOService_CopyProviderProperties_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSArray * propertyKeys;

    if (IOService_CopyProviderProperties_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    propertyKeys = OSDynamicCast(OSArray, (OSObject *) rpc.message->content.propertyKeys);
    if (!propertyKeys && rpc.message->content.propertyKeys) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        propertyKeys,
        (OSArray **)&rpc.reply->content.properties);

    {
        rpc.reply->content.hdr.msgid   = IOService_CopyProviderProperties_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_CopyProviderProperties_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
            for (uint32_t idx = 0; idx < 1; idx++)
            {
                rpc.reply->mach.objects[idx].type        = MACH_MSG_PORT_DESCRIPTOR;
                rpc.reply->mach.objects[idx].disposition = MACH_MSG_TYPE_PORT_NONE;
                rpc.reply->mach.objects[idx].name        = MACH_PORT_NULL;
            }
            rpc.reply->content.properties = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::RequireMaxBusStall_Invoke(const IORPC _rpc,
        kern_return_t (IOService::*func)(IOService_RequireMaxBusStall_Args))
{
    IOService_RequireMaxBusStall_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOService_RequireMaxBusStall_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.maxBusStall);

    {
        rpc.reply->content.hdr.msgid   = IOService_RequireMaxBusStall_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOService_RequireMaxBusStall_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOService::Stop_async_Invoke(const IORPC _rpc,
        void (IOService::*func)(IOService_Stop_async_Args))
{
    IOService_Stop_async_Invocation rpc = { _rpc };
    IOService * provider;

    if (IOService_Stop_async_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    provider = OSDynamicCast(IOService, (OSObject *) rpc.message->content.provider);
    if (!provider && rpc.message->content.provider) return (kIOReturnBadArgument);

    (this->*func)(        
        provider);

    return (kIOReturnSuccess);
}



