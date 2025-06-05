/* iig(DriverKit-48) generated from IOInterruptDispatchSource.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOInterruptDispatchSource.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOInterruptDispatchSource.h>


struct IOInterruptDispatchSource_Create_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  provider;
    uint32_t  index;
    OSObjectRef  queue;
};
#pragma pack(4)
struct IOInterruptDispatchSource_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[3];
    IOInterruptDispatchSource_Create_Msg_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOInterruptDispatchSource_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOInterruptDispatchSource_Create_Msg_Content, provider) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOInterruptDispatchSource_Create_Msg_Content, queue) / sizeof(OSObjectRef))))

struct IOInterruptDispatchSource_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  source;
};
#pragma pack(4)
struct IOInterruptDispatchSource_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOInterruptDispatchSource_Create_Rpl_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOInterruptDispatchSource_Create_Rpl_Content, source) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOInterruptDispatchSource_Create_Msg * message;
        struct IOInterruptDispatchSource_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOInterruptDispatchSource_Create_Invocation;

struct IOInterruptDispatchSource_GetInterruptType_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  provider;
    uint32_t  index;
};
#pragma pack(4)
struct IOInterruptDispatchSource_GetInterruptType_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOInterruptDispatchSource_GetInterruptType_Msg_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_GetInterruptType_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOInterruptDispatchSource_GetInterruptType_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOInterruptDispatchSource_GetInterruptType_Msg_Content, provider) / sizeof(OSObjectRef))))

struct IOInterruptDispatchSource_GetInterruptType_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    uint64_t  interruptType;
};
#pragma pack(4)
struct IOInterruptDispatchSource_GetInterruptType_Rpl
{
    IORPCMessageMach           mach;
    IOInterruptDispatchSource_GetInterruptType_Rpl_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_GetInterruptType_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOInterruptDispatchSource_GetInterruptType_Msg * message;
        struct IOInterruptDispatchSource_GetInterruptType_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOInterruptDispatchSource_GetInterruptType_Invocation;

struct IOInterruptDispatchSource_SetHandler_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
};
#pragma pack(4)
struct IOInterruptDispatchSource_SetHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOInterruptDispatchSource_SetHandler_Msg_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_SetHandler_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOInterruptDispatchSource_SetHandler_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOInterruptDispatchSource_SetHandler_Msg_Content, action) / sizeof(OSObjectRef))))

struct IOInterruptDispatchSource_SetHandler_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOInterruptDispatchSource_SetHandler_Rpl
{
    IORPCMessageMach           mach;
    IOInterruptDispatchSource_SetHandler_Rpl_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_SetHandler_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOInterruptDispatchSource_SetHandler_Msg * message;
        struct IOInterruptDispatchSource_SetHandler_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOInterruptDispatchSource_SetHandler_Invocation;


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
IOInterruptDispatchSource_SetEnableWithCompletion_Invocation;


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
IOInterruptDispatchSource_Cancel_Invocation;


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
IOInterruptDispatchSource_CheckForWork_Invocation;

struct IOInterruptDispatchSource_InterruptOccurred_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
    uint64_t  count;
    uint64_t  time;
};
#pragma pack(4)
struct IOInterruptDispatchSource_InterruptOccurred_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOInterruptDispatchSource_InterruptOccurred_Msg_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_InterruptOccurred_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOInterruptDispatchSource_InterruptOccurred_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOInterruptDispatchSource_InterruptOccurred_Msg_Content, action) / sizeof(OSObjectRef))))

struct IOInterruptDispatchSource_InterruptOccurred_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOInterruptDispatchSource_InterruptOccurred_Rpl
{
    IORPCMessageMach           mach;
    IOInterruptDispatchSource_InterruptOccurred_Rpl_Content content;
};
#pragma pack()
#define IOInterruptDispatchSource_InterruptOccurred_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOInterruptDispatchSource_InterruptOccurred_Msg * message;
        struct IOInterruptDispatchSource_InterruptOccurred_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOInterruptDispatchSource_InterruptOccurred_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gIOMemoryDescriptorMetaClass;
extern OSMetaClass * gIOBufferMemoryDescriptorMetaClass;
extern OSMetaClass * gIOUserClientMetaClass;
#endif /* !KERNEL */

#if KERNEL
OSDefineMetaClassAndStructors(IOInterruptDispatchSource, IODispatchSource);
#endif /* KERNEL */

#if !KERNEL

#define IOInterruptDispatchSource_QueueNames  ""

#define IOInterruptDispatchSource_MethodNames  ""

#define IOInterruptDispatchSourceMetaClass_MethodNames  ""

struct OSClassDescription_IOInterruptDispatchSource_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOInterruptDispatchSource_QueueNames)];
    char               methodNames[sizeof(IOInterruptDispatchSource_MethodNames)];
    char               metaMethodNames[sizeof(IOInterruptDispatchSourceMetaClass_MethodNames)];
};

const struct OSClassDescription_IOInterruptDispatchSource_t
OSClassDescription_IOInterruptDispatchSource =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOInterruptDispatchSource_t),
        .name                    = "IOInterruptDispatchSource",
        .superName               = "IODispatchSource",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOInterruptDispatchSource_QueueNames),
        .methodNamesSize         = sizeof(IOInterruptDispatchSource_MethodNames),
        .metaMethodNamesSize     = sizeof(IOInterruptDispatchSourceMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOInterruptDispatchSource_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOInterruptDispatchSource_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOInterruptDispatchSource_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOInterruptDispatchSource_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOInterruptDispatchSource_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOInterruptDispatchSource_QueueNames,
    .methodNames     = IOInterruptDispatchSource_MethodNames,
    .metaMethodNames = IOInterruptDispatchSourceMetaClass_MethodNames,
};

static kern_return_t
IOInterruptDispatchSource_New(OSMetaClass * instance);

OSClassLoadInformation
IOInterruptDispatchSource_Class = 
{
    .description       = &OSClassDescription_IOInterruptDispatchSource.base,
    .instanceSize      = sizeof(IOInterruptDispatchSource),

    .New               = &IOInterruptDispatchSource_New,
};

const void *
gIOInterruptDispatchSource_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOInterruptDispatchSource_Class;

OSMetaClass * gIOInterruptDispatchSourceMetaClass;

static kern_return_t
IOInterruptDispatchSource_New(OSMetaClass * instance)
{
    if (!new(instance) IOInterruptDispatchSourceMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOInterruptDispatchSourceMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOInterruptDispatchSource) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOInterruptDispatchSource::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOInterruptDispatchSource::_Dispatch(IOInterruptDispatchSource * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
        case IOInterruptDispatchSource_SetHandler_ID:
            ret = self->SetHandler_Invoke(rpc, &IOInterruptDispatchSource::SetHandler_Impl);
            break;
        case IODispatchSource_SetEnableWithCompletion_ID:
            ret = self->SetEnableWithCompletion_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_SetEnableWithCompletion_Args)) &IOInterruptDispatchSource::SetEnableWithCompletion_Impl);
            break;
        case IODispatchSource_Cancel_ID:
            ret = self->Cancel_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_Cancel_Args)) &IOInterruptDispatchSource::Cancel_Impl);
            break;
        case IODispatchSource_CheckForWork_ID:
            ret = self->CheckForWork_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_CheckForWork_Args)) &IOInterruptDispatchSource::CheckForWork_Impl);
            break;
        case IOInterruptDispatchSource_InterruptOccurred_ID:
            ret = self->InterruptOccurred_Invoke(rpc, &IOInterruptDispatchSource::InterruptOccurred_Impl);
            break;

        default:
            ret = IODispatchSource::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IOInterruptDispatchSource::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOInterruptDispatchSourceMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOInterruptDispatchSource_Create_ID:
            ret = IOInterruptDispatchSource::Create_Invoke(rpc, &IOInterruptDispatchSource::Create_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOInterruptDispatchSource_GetInterruptType_ID:
            ret = IOInterruptDispatchSource::GetInterruptType_Invoke(rpc, &IOInterruptDispatchSource::GetInterruptType_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOInterruptDispatchSource::Create_Call(
        IOService * provider,
        uint32_t index,
        IODispatchQueue * queue,
        IOInterruptDispatchSource ** source)
{
    kern_return_t ret;
    union
    {
        IOInterruptDispatchSource_Create_Msg msg;
        struct
        {
            IOInterruptDispatchSource_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOInterruptDispatchSource_Create_Msg * msg = &buf.msg;
    struct IOInterruptDispatchSource_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOInterruptDispatchSource_Create_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IOInterruptDispatchSource);
    msg->content.hdr.objectRefs = IOInterruptDispatchSource_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 3;

    msg->content.provider = (OSObjectRef) provider;
    msg->content.index = index;
    msg->content.queue = (OSObjectRef) queue;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOInterruptDispatchSource)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOInterruptDispatchSource_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOInterruptDispatchSource_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *source = OSDynamicCast(IOInterruptDispatchSource, (OSObject *) rpl->content.source);
        if (rpl->content.source && !*source) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOInterruptDispatchSource::GetInterruptType(
        IOService * provider,
        uint32_t index,
        uint64_t * interruptType)
{
    kern_return_t ret;
    union
    {
        IOInterruptDispatchSource_GetInterruptType_Msg msg;
        struct
        {
            IOInterruptDispatchSource_GetInterruptType_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOInterruptDispatchSource_GetInterruptType_Msg * msg = &buf.msg;
    struct IOInterruptDispatchSource_GetInterruptType_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOInterruptDispatchSource_GetInterruptType_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IOInterruptDispatchSource);
    msg->content.hdr.objectRefs = IOInterruptDispatchSource_GetInterruptType_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.provider = (OSObjectRef) provider;
    msg->content.index = index;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOInterruptDispatchSource)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOInterruptDispatchSource_GetInterruptType_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOInterruptDispatchSource_GetInterruptType_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (interruptType) *interruptType = rpl->content.interruptType;
    }


    return (ret);
}

kern_return_t
IOInterruptDispatchSource::SetHandler(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOInterruptDispatchSource_SetHandler_Msg msg;
        struct
        {
            IOInterruptDispatchSource_SetHandler_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOInterruptDispatchSource_SetHandler_Msg * msg = &buf.msg;
    struct IOInterruptDispatchSource_SetHandler_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOInterruptDispatchSource_SetHandler_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOInterruptDispatchSource_SetHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOInterruptDispatchSource_SetHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOInterruptDispatchSource_SetHandler_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOInterruptDispatchSource::InterruptOccurred(
        IORPC rpc,
        OSAction * action,
        uint64_t count,
        uint64_t time,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    struct IOInterruptDispatchSource_InterruptOccurred_Msg * msg = (typeof(msg)) rpc.reply;


    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 1*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOInterruptDispatchSource_InterruptOccurred_ID;
    msg->content.hdr.object = (OSObjectRef) action;
    msg->content.hdr.objectRefs = IOInterruptDispatchSource_InterruptOccurred_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    msg->content.count = count;
    msg->content.time = time;

    ret = kIOReturnSuccess;

    return (ret);
}

kern_return_t
IOInterruptDispatchSource::Create_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IOInterruptDispatchSource_Create_Args))
{
    IOInterruptDispatchSource_Create_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * provider;
    IODispatchQueue * queue;

    if (IOInterruptDispatchSource_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    provider = OSDynamicCast(IOService, (OSObject *) rpc.message->content.provider);
    if (!provider && rpc.message->content.provider) return (kIOReturnBadArgument);
    queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpc.message->content.queue);
    if (!queue && rpc.message->content.queue) return (kIOReturnBadArgument);

    ret = (*func)(        
        provider,
        rpc.message->content.index,
        queue,
        (IOInterruptDispatchSource **)&rpc.reply->content.source);

    {
        rpc.reply->content.hdr.msgid   = IOInterruptDispatchSource_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOInterruptDispatchSource_Create_Rpl_ObjRefs;
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
IOInterruptDispatchSource::GetInterruptType_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IOInterruptDispatchSource_GetInterruptType_Args))
{
    IOInterruptDispatchSource_GetInterruptType_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * provider;

    if (IOInterruptDispatchSource_GetInterruptType_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    provider = OSDynamicCast(IOService, (OSObject *) rpc.message->content.provider);
    if (!provider && rpc.message->content.provider) return (kIOReturnBadArgument);

    ret = (*func)(        
        provider,
        rpc.message->content.index,
        &rpc.reply->content.interruptType);

    {
        rpc.reply->content.hdr.msgid   = IOInterruptDispatchSource_GetInterruptType_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOInterruptDispatchSource_GetInterruptType_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOInterruptDispatchSource::SetHandler_Invoke(const IORPC _rpc,
        kern_return_t (IOInterruptDispatchSource::*func)(IOInterruptDispatchSource_SetHandler_Args))
{
    IOInterruptDispatchSource_SetHandler_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSAction * action;

    if (IOInterruptDispatchSource_SetHandler_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        action);

    {
        rpc.reply->content.hdr.msgid   = IOInterruptDispatchSource_SetHandler_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOInterruptDispatchSource_SetHandler_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOInterruptDispatchSource::InterruptOccurred_Invoke(const IORPC _rpc,
        void (IOInterruptDispatchSource::*func)(IOInterruptDispatchSource_InterruptOccurred_Args))
{
    IOInterruptDispatchSource_InterruptOccurred_Invocation rpc = { _rpc };
    OSAction * action;

    if (IOInterruptDispatchSource_InterruptOccurred_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (this->*func)(        
        action,
        rpc.message->content.count,
        rpc.message->content.time);

    return (kIOReturnSuccess);
}



