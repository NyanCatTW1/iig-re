/* iig(DriverKit-48) generated from IODataQueueDispatchSource.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IODataQueueDispatchSource.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IODataQueueDispatchSource.h>


struct IODataQueueDispatchSource_Create_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  queueByteCount;
    OSObjectRef  queue;
};
#pragma pack(4)
struct IODataQueueDispatchSource_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IODataQueueDispatchSource_Create_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IODataQueueDispatchSource_Create_Msg_Content, queue) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  source;
};
#pragma pack(4)
struct IODataQueueDispatchSource_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODataQueueDispatchSource_Create_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_Create_Rpl_Content, source) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_Create_Msg * message;
        struct IODataQueueDispatchSource_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_Create_Invocation;

struct IODataQueueDispatchSource_SetDataAvailableHandler_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
};
#pragma pack(4)
struct IODataQueueDispatchSource_SetDataAvailableHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IODataQueueDispatchSource_SetDataAvailableHandler_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_SetDataAvailableHandler_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_SetDataAvailableHandler_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IODataQueueDispatchSource_SetDataAvailableHandler_Msg_Content, action) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_SetDataAvailableHandler_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODataQueueDispatchSource_SetDataAvailableHandler_Rpl
{
    IORPCMessageMach           mach;
    IODataQueueDispatchSource_SetDataAvailableHandler_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_SetDataAvailableHandler_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_SetDataAvailableHandler_Msg * message;
        struct IODataQueueDispatchSource_SetDataAvailableHandler_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_SetDataAvailableHandler_Invocation;

struct IODataQueueDispatchSource_SetDataServicedHandler_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
};
#pragma pack(4)
struct IODataQueueDispatchSource_SetDataServicedHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IODataQueueDispatchSource_SetDataServicedHandler_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_SetDataServicedHandler_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_SetDataServicedHandler_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IODataQueueDispatchSource_SetDataServicedHandler_Msg_Content, action) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_SetDataServicedHandler_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODataQueueDispatchSource_SetDataServicedHandler_Rpl
{
    IORPCMessageMach           mach;
    IODataQueueDispatchSource_SetDataServicedHandler_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_SetDataServicedHandler_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_SetDataServicedHandler_Msg * message;
        struct IODataQueueDispatchSource_SetDataServicedHandler_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_SetDataServicedHandler_Invocation;


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchSource_SetEnableWithCompletion_Msg * message;
        struct IODispatchSource_SetEnableWithCompletion_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_SetEnableWithCompletion_Invocation;


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchSource_Cancel_Msg * message;
        struct IODispatchSource_Cancel_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_Cancel_Invocation;

struct IODataQueueDispatchSource_CopyMemory_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IODataQueueDispatchSource_CopyMemory_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODataQueueDispatchSource_CopyMemory_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_CopyMemory_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_CopyMemory_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_CopyMemory_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IODataQueueDispatchSource_CopyMemory_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODataQueueDispatchSource_CopyMemory_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_CopyMemory_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_CopyMemory_Rpl_Content, memory) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_CopyMemory_Msg * message;
        struct IODataQueueDispatchSource_CopyMemory_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_CopyMemory_Invocation;

struct IODataQueueDispatchSource_CopyDataAvailableHandler_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IODataQueueDispatchSource_CopyDataAvailableHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODataQueueDispatchSource_CopyDataAvailableHandler_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_CopyDataAvailableHandler_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_CopyDataAvailableHandler_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  action;
};
#pragma pack(4)
struct IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl_Content, action) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_CopyDataAvailableHandler_Msg * message;
        struct IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_CopyDataAvailableHandler_Invocation;

struct IODataQueueDispatchSource_CopyDataServicedHandler_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IODataQueueDispatchSource_CopyDataServicedHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODataQueueDispatchSource_CopyDataServicedHandler_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_CopyDataServicedHandler_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_CopyDataServicedHandler_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_CopyDataServicedHandler_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  action;
};
#pragma pack(4)
struct IODataQueueDispatchSource_CopyDataServicedHandler_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODataQueueDispatchSource_CopyDataServicedHandler_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_CopyDataServicedHandler_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_CopyDataServicedHandler_Rpl_Content, action) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_CopyDataServicedHandler_Msg * message;
        struct IODataQueueDispatchSource_CopyDataServicedHandler_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_CopyDataServicedHandler_Invocation;


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchSource_CheckForWork_Msg * message;
        struct IODispatchSource_CheckForWork_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_CheckForWork_Invocation;

struct IODataQueueDispatchSource_DataAvailable_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
};
#pragma pack(4)
struct IODataQueueDispatchSource_DataAvailable_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IODataQueueDispatchSource_DataAvailable_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_DataAvailable_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_DataAvailable_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IODataQueueDispatchSource_DataAvailable_Msg_Content, action) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_DataAvailable_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODataQueueDispatchSource_DataAvailable_Rpl
{
    IORPCMessageMach           mach;
    IODataQueueDispatchSource_DataAvailable_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_DataAvailable_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_DataAvailable_Msg * message;
        struct IODataQueueDispatchSource_DataAvailable_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_DataAvailable_Invocation;

struct IODataQueueDispatchSource_DataServiced_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
};
#pragma pack(4)
struct IODataQueueDispatchSource_DataServiced_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IODataQueueDispatchSource_DataServiced_Msg_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_DataServiced_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODataQueueDispatchSource_DataServiced_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IODataQueueDispatchSource_DataServiced_Msg_Content, action) / sizeof(OSObjectRef))))

struct IODataQueueDispatchSource_DataServiced_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODataQueueDispatchSource_DataServiced_Rpl
{
    IORPCMessageMach           mach;
    IODataQueueDispatchSource_DataServiced_Rpl_Content content;
};
#pragma pack()
#define IODataQueueDispatchSource_DataServiced_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODataQueueDispatchSource_DataServiced_Msg * message;
        struct IODataQueueDispatchSource_DataServiced_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODataQueueDispatchSource_DataServiced_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gIOServiceMetaClass;
extern OSMetaClass * gIOMemoryMapMetaClass;
#endif /* !KERNEL */

#if KERNEL
OSDefineMetaClassAndStructors(IODataQueueDispatchSource, IODispatchSource);
#endif /* KERNEL */

#if !KERNEL

#define IODataQueueDispatchSource_QueueNames  ""

#define IODataQueueDispatchSource_MethodNames  ""

#define IODataQueueDispatchSourceMetaClass_MethodNames  ""

struct OSClassDescription_IODataQueueDispatchSource_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IODataQueueDispatchSource_QueueNames)];
    char               methodNames[sizeof(IODataQueueDispatchSource_MethodNames)];
    char               metaMethodNames[sizeof(IODataQueueDispatchSourceMetaClass_MethodNames)];
};

const struct OSClassDescription_IODataQueueDispatchSource_t
OSClassDescription_IODataQueueDispatchSource =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IODataQueueDispatchSource_t),
        .name                    = "IODataQueueDispatchSource",
        .superName               = "IODispatchSource",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IODataQueueDispatchSource_QueueNames),
        .methodNamesSize         = sizeof(IODataQueueDispatchSource_MethodNames),
        .metaMethodNamesSize     = sizeof(IODataQueueDispatchSourceMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IODataQueueDispatchSource_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IODataQueueDispatchSource_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IODataQueueDispatchSource_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IODataQueueDispatchSource_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IODataQueueDispatchSource_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IODataQueueDispatchSource_QueueNames,
    .methodNames     = IODataQueueDispatchSource_MethodNames,
    .metaMethodNames = IODataQueueDispatchSourceMetaClass_MethodNames,
};

static kern_return_t
IODataQueueDispatchSource_New(OSMetaClass * instance);

OSClassLoadInformation
IODataQueueDispatchSource_Class = 
{
    .description       = &OSClassDescription_IODataQueueDispatchSource.base,
    .instanceSize      = sizeof(IODataQueueDispatchSource),

    .New               = &IODataQueueDispatchSource_New,
};

const void *
gIODataQueueDispatchSource_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IODataQueueDispatchSource_Class;

OSMetaClass * gIODataQueueDispatchSourceMetaClass;

static kern_return_t
IODataQueueDispatchSource_New(OSMetaClass * instance)
{
    if (!new(instance) IODataQueueDispatchSourceMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSourceMetaClass::New(OSObject * instance)
{
    if (!new(instance) IODataQueueDispatchSource) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IODataQueueDispatchSource::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IODataQueueDispatchSource::_Dispatch(IODataQueueDispatchSource * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IODataQueueDispatchSource_SetDataAvailableHandler_ID:
            ret = self->SetDataAvailableHandler_Invoke(rpc, &IODataQueueDispatchSource::SetDataAvailableHandler_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IODataQueueDispatchSource_SetDataServicedHandler_ID:
            ret = self->SetDataServicedHandler_Invoke(rpc, &IODataQueueDispatchSource::SetDataServicedHandler_Impl);
            break;
#endif /* !KERNEL */
        case IODispatchSource_SetEnableWithCompletion_ID:
            ret = self->SetEnableWithCompletion_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_SetEnableWithCompletion_Args)) &IODataQueueDispatchSource::SetEnableWithCompletion_Impl);
            break;
        case IODispatchSource_Cancel_ID:
            ret = self->Cancel_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_Cancel_Args)) &IODataQueueDispatchSource::Cancel_Impl);
            break;
#if KERNEL
        case IODataQueueDispatchSource_CopyMemory_ID:
            ret = self->CopyMemory_Invoke(rpc, &IODataQueueDispatchSource::CopyMemory_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IODataQueueDispatchSource_CopyDataAvailableHandler_ID:
            ret = self->CopyDataAvailableHandler_Invoke(rpc, &IODataQueueDispatchSource::CopyDataAvailableHandler_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IODataQueueDispatchSource_CopyDataServicedHandler_ID:
            ret = self->CopyDataServicedHandler_Invoke(rpc, &IODataQueueDispatchSource::CopyDataServicedHandler_Impl);
            break;
#endif /* !KERNEL */
        case IODispatchSource_CheckForWork_ID:
            ret = self->CheckForWork_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_CheckForWork_Args)) &IODataQueueDispatchSource::CheckForWork_Impl);
            break;

        default:
            ret = IODispatchSource::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IODataQueueDispatchSource::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IODataQueueDispatchSourceMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IODataQueueDispatchSource_Create_ID:
            ret = IODataQueueDispatchSource::Create_Invoke(rpc, &IODataQueueDispatchSource::Create_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IODataQueueDispatchSource::Create(
        uint64_t queueByteCount,
        IODispatchQueue * queue,
        IODataQueueDispatchSource ** source)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_Create_Msg msg;
        struct
        {
            IODataQueueDispatchSource_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODataQueueDispatchSource_Create_Msg * msg = &buf.msg;
    struct IODataQueueDispatchSource_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_Create_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IODataQueueDispatchSource);
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.queueByteCount = queueByteCount;
    msg->content.queue = (OSObjectRef) queue;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IODataQueueDispatchSource)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODataQueueDispatchSource_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IODataQueueDispatchSource_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *source = OSDynamicCast(IODataQueueDispatchSource, (OSObject *) rpl->content.source);
        if (rpl->content.source && !*source) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IODataQueueDispatchSource::SetDataAvailableHandler(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_SetDataAvailableHandler_Msg msg;
        struct
        {
            IODataQueueDispatchSource_SetDataAvailableHandler_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODataQueueDispatchSource_SetDataAvailableHandler_Msg * msg = &buf.msg;
    struct IODataQueueDispatchSource_SetDataAvailableHandler_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_SetDataAvailableHandler_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_SetDataAvailableHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODataQueueDispatchSource_SetDataAvailableHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IODataQueueDispatchSource_SetDataAvailableHandler_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IODataQueueDispatchSource::SetDataServicedHandler(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_SetDataServicedHandler_Msg msg;
        struct
        {
            IODataQueueDispatchSource_SetDataServicedHandler_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODataQueueDispatchSource_SetDataServicedHandler_Msg * msg = &buf.msg;
    struct IODataQueueDispatchSource_SetDataServicedHandler_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_SetDataServicedHandler_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_SetDataServicedHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODataQueueDispatchSource_SetDataServicedHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IODataQueueDispatchSource_SetDataServicedHandler_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IODataQueueDispatchSource::CopyMemory(
        IOMemoryDescriptor ** memory,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_CopyMemory_Msg msg;
        struct
        {
            IODataQueueDispatchSource_CopyMemory_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODataQueueDispatchSource_CopyMemory_Msg * msg = &buf.msg;
    struct IODataQueueDispatchSource_CopyMemory_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_CopyMemory_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_CopyMemory_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODataQueueDispatchSource_CopyMemory_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IODataQueueDispatchSource_CopyMemory_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *memory = OSDynamicCast(IOMemoryDescriptor, (OSObject *) rpl->content.memory);
        if (rpl->content.memory && !*memory) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IODataQueueDispatchSource::CopyDataAvailableHandler(
        OSAction ** action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_CopyDataAvailableHandler_Msg msg;
        struct
        {
            IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODataQueueDispatchSource_CopyDataAvailableHandler_Msg * msg = &buf.msg;
    struct IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_CopyDataAvailableHandler_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_CopyDataAvailableHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODataQueueDispatchSource_CopyDataAvailableHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *action = OSDynamicCast(OSAction, (OSObject *) rpl->content.action);
        if (rpl->content.action && !*action) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IODataQueueDispatchSource::CopyDataServicedHandler(
        OSAction ** action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_CopyDataServicedHandler_Msg msg;
        struct
        {
            IODataQueueDispatchSource_CopyDataServicedHandler_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODataQueueDispatchSource_CopyDataServicedHandler_Msg * msg = &buf.msg;
    struct IODataQueueDispatchSource_CopyDataServicedHandler_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_CopyDataServicedHandler_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_CopyDataServicedHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODataQueueDispatchSource_CopyDataServicedHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IODataQueueDispatchSource_CopyDataServicedHandler_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *action = OSDynamicCast(OSAction, (OSObject *) rpl->content.action);
        if (rpl->content.action && !*action) ret = kIOReturnBadArgument;
    }


    return (ret);
}

void
IODataQueueDispatchSource::DataAvailable(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_DataAvailable_Msg msg;
    } buf;
    struct IODataQueueDispatchSource_DataAvailable_Msg * msg = &buf.msg;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_DataAvailable_ID;
    msg->content.hdr.object = (OSObjectRef) action;
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_DataAvailable_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(*msg), .reply = NULL, .replySize = 0 };
    ret = action->Invoke(rpc);

}

void
IODataQueueDispatchSource::DataServiced(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODataQueueDispatchSource_DataServiced_Msg msg;
    } buf;
    struct IODataQueueDispatchSource_DataServiced_Msg * msg = &buf.msg;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODataQueueDispatchSource_DataServiced_ID;
    msg->content.hdr.object = (OSObjectRef) action;
    msg->content.hdr.objectRefs = IODataQueueDispatchSource_DataServiced_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(*msg), .reply = NULL, .replySize = 0 };
    ret = action->Invoke(rpc);

}

kern_return_t
IODataQueueDispatchSource::Create_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IODataQueueDispatchSource_Create_Args))
{
    IODataQueueDispatchSource_Create_Invocation rpc = { _rpc };
    kern_return_t ret;
    IODispatchQueue * queue;

    if (IODataQueueDispatchSource_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpc.message->content.queue);
    if (!queue && rpc.message->content.queue) return (kIOReturnBadArgument);

    ret = (*func)(        
        rpc.message->content.queueByteCount,
        queue,
        (IODataQueueDispatchSource **)&rpc.reply->content.source);

    {
        rpc.reply->content.hdr.msgid   = IODataQueueDispatchSource_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODataQueueDispatchSource_Create_Rpl_ObjRefs;
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
            rpc.reply->content.source = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSource::SetDataAvailableHandler_Invoke(const IORPC _rpc,
        kern_return_t (IODataQueueDispatchSource::*func)(IODataQueueDispatchSource_SetDataAvailableHandler_Args))
{
    IODataQueueDispatchSource_SetDataAvailableHandler_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSAction * action;

    if (IODataQueueDispatchSource_SetDataAvailableHandler_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        action);

    {
        rpc.reply->content.hdr.msgid   = IODataQueueDispatchSource_SetDataAvailableHandler_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODataQueueDispatchSource_SetDataAvailableHandler_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSource::SetDataServicedHandler_Invoke(const IORPC _rpc,
        kern_return_t (IODataQueueDispatchSource::*func)(IODataQueueDispatchSource_SetDataServicedHandler_Args))
{
    IODataQueueDispatchSource_SetDataServicedHandler_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSAction * action;

    if (IODataQueueDispatchSource_SetDataServicedHandler_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        action);

    {
        rpc.reply->content.hdr.msgid   = IODataQueueDispatchSource_SetDataServicedHandler_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODataQueueDispatchSource_SetDataServicedHandler_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSource::CopyMemory_Invoke(const IORPC _rpc,
        kern_return_t (IODataQueueDispatchSource::*func)(IODataQueueDispatchSource_CopyMemory_Args))
{
    IODataQueueDispatchSource_CopyMemory_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODataQueueDispatchSource_CopyMemory_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        (IOMemoryDescriptor **)&rpc.reply->content.memory);

    {
        rpc.reply->content.hdr.msgid   = IODataQueueDispatchSource_CopyMemory_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODataQueueDispatchSource_CopyMemory_Rpl_ObjRefs;
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
            rpc.reply->content.memory = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSource::CopyDataAvailableHandler_Invoke(const IORPC _rpc,
        kern_return_t (IODataQueueDispatchSource::*func)(IODataQueueDispatchSource_CopyDataAvailableHandler_Args))
{
    IODataQueueDispatchSource_CopyDataAvailableHandler_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODataQueueDispatchSource_CopyDataAvailableHandler_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        (OSAction **)&rpc.reply->content.action);

    {
        rpc.reply->content.hdr.msgid   = IODataQueueDispatchSource_CopyDataAvailableHandler_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODataQueueDispatchSource_CopyDataAvailableHandler_Rpl_ObjRefs;
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
            rpc.reply->content.action = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSource::CopyDataServicedHandler_Invoke(const IORPC _rpc,
        kern_return_t (IODataQueueDispatchSource::*func)(IODataQueueDispatchSource_CopyDataServicedHandler_Args))
{
    IODataQueueDispatchSource_CopyDataServicedHandler_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODataQueueDispatchSource_CopyDataServicedHandler_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        (OSAction **)&rpc.reply->content.action);

    {
        rpc.reply->content.hdr.msgid   = IODataQueueDispatchSource_CopyDataServicedHandler_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODataQueueDispatchSource_CopyDataServicedHandler_Rpl_ObjRefs;
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
            rpc.reply->content.action = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSource::DataAvailable_Invoke(const IORPC _rpc,
        void (IODataQueueDispatchSource::*func)(IODataQueueDispatchSource_DataAvailable_Args))
{
    IODataQueueDispatchSource_DataAvailable_Invocation rpc = { _rpc };
    OSAction * action;

    if (IODataQueueDispatchSource_DataAvailable_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (this->*func)(        
        action);

    return (kIOReturnSuccess);
}

kern_return_t
IODataQueueDispatchSource::DataServiced_Invoke(const IORPC _rpc,
        void (IODataQueueDispatchSource::*func)(IODataQueueDispatchSource_DataServiced_Args))
{
    IODataQueueDispatchSource_DataServiced_Invocation rpc = { _rpc };
    OSAction * action;

    if (IODataQueueDispatchSource_DataServiced_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (this->*func)(        
        action);

    return (kIOReturnSuccess);
}



