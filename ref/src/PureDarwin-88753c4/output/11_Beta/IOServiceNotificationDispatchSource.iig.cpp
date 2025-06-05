/* iig(DriverKit-48) generated from IOServiceNotificationDispatchSource.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOServiceNotificationDispatchSource.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOServiceNotificationDispatchSource.h>


struct IOServiceNotificationDispatchSource_Create_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  matching;
    uint64_t  options;
    OSObjectRef  queue;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[3];
    IOServiceNotificationDispatchSource_Create_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_Create_Msg_Content, matching) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_Create_Msg_Content, queue) / sizeof(OSObjectRef))))

struct IOServiceNotificationDispatchSource_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  notification;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOServiceNotificationDispatchSource_Create_Rpl_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_Create_Rpl_Content, notification) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceNotificationDispatchSource_Create_Msg * message;
        struct IOServiceNotificationDispatchSource_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceNotificationDispatchSource_Create_Invocation;


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
IOServiceNotificationDispatchSource_SetEnableWithCompletion_Invocation;


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
IOServiceNotificationDispatchSource_Cancel_Invocation;

struct IOServiceNotificationDispatchSource_SetHandler_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_SetHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOServiceNotificationDispatchSource_SetHandler_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_SetHandler_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_SetHandler_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_SetHandler_Msg_Content, action) / sizeof(OSObjectRef))))

struct IOServiceNotificationDispatchSource_SetHandler_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_SetHandler_Rpl
{
    IORPCMessageMach           mach;
    IOServiceNotificationDispatchSource_SetHandler_Rpl_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_SetHandler_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceNotificationDispatchSource_SetHandler_Msg * message;
        struct IOServiceNotificationDispatchSource_SetHandler_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceNotificationDispatchSource_SetHandler_Invocation;


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
IOServiceNotificationDispatchSource_CheckForWork_Invocation;

struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_Content, action) / sizeof(OSObjectRef))))

struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Rpl
{
    IORPCMessageMach           mach;
    IOServiceNotificationDispatchSource_ServiceNotificationReady_Rpl_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_ServiceNotificationReady_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg * message;
        struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceNotificationDispatchSource_ServiceNotificationReady_Invocation;

struct IOServiceNotificationDispatchSource_CopyNextNotification_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_CopyNextNotification_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOServiceNotificationDispatchSource_CopyNextNotification_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_CopyNextNotification_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_CopyNextNotification_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    uint64_t  type;
    OSObjectRef  service;
    uint64_t  options;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_CopyNextNotification_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_Content, service) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceNotificationDispatchSource_CopyNextNotification_Msg * message;
        struct IOServiceNotificationDispatchSource_CopyNextNotification_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceNotificationDispatchSource_CopyNextNotification_Invocation;

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
OSDefineMetaClassAndStructors(IOServiceNotificationDispatchSource, IODispatchSource);
#endif /* KERNEL */

#if !KERNEL

#define IOServiceNotificationDispatchSource_QueueNames  ""

#define IOServiceNotificationDispatchSource_MethodNames  ""

#define IOServiceNotificationDispatchSourceMetaClass_MethodNames  ""

struct OSClassDescription_IOServiceNotificationDispatchSource_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOServiceNotificationDispatchSource_QueueNames)];
    char               methodNames[sizeof(IOServiceNotificationDispatchSource_MethodNames)];
    char               metaMethodNames[sizeof(IOServiceNotificationDispatchSourceMetaClass_MethodNames)];
};

const struct OSClassDescription_IOServiceNotificationDispatchSource_t
OSClassDescription_IOServiceNotificationDispatchSource =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOServiceNotificationDispatchSource_t),
        .name                    = "IOServiceNotificationDispatchSource",
        .superName               = "IODispatchSource",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOServiceNotificationDispatchSource_QueueNames),
        .methodNamesSize         = sizeof(IOServiceNotificationDispatchSource_MethodNames),
        .metaMethodNamesSize     = sizeof(IOServiceNotificationDispatchSourceMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOServiceNotificationDispatchSource_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOServiceNotificationDispatchSource_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOServiceNotificationDispatchSource_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOServiceNotificationDispatchSource_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOServiceNotificationDispatchSource_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOServiceNotificationDispatchSource_QueueNames,
    .methodNames     = IOServiceNotificationDispatchSource_MethodNames,
    .metaMethodNames = IOServiceNotificationDispatchSourceMetaClass_MethodNames,
};

static kern_return_t
IOServiceNotificationDispatchSource_New(OSMetaClass * instance);

OSClassLoadInformation
IOServiceNotificationDispatchSource_Class = 
{
    .description       = &OSClassDescription_IOServiceNotificationDispatchSource.base,
    .instanceSize      = sizeof(IOServiceNotificationDispatchSource),

    .New               = &IOServiceNotificationDispatchSource_New,
};

const void *
gIOServiceNotificationDispatchSource_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOServiceNotificationDispatchSource_Class;

OSMetaClass * gIOServiceNotificationDispatchSourceMetaClass;

static kern_return_t
IOServiceNotificationDispatchSource_New(OSMetaClass * instance)
{
    if (!new(instance) IOServiceNotificationDispatchSourceMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOServiceNotificationDispatchSourceMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOServiceNotificationDispatchSource) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOServiceNotificationDispatchSource::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOServiceNotificationDispatchSource::_Dispatch(IOServiceNotificationDispatchSource * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
        case IODispatchSource_SetEnableWithCompletion_ID:
            ret = self->SetEnableWithCompletion_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_SetEnableWithCompletion_Args)) &IOServiceNotificationDispatchSource::SetEnableWithCompletion_Impl);
            break;
        case IODispatchSource_Cancel_ID:
            ret = self->Cancel_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_Cancel_Args)) &IOServiceNotificationDispatchSource::Cancel_Impl);
            break;
#if KERNEL
        case IOServiceNotificationDispatchSource_SetHandler_ID:
            ret = self->SetHandler_Invoke(rpc, &IOServiceNotificationDispatchSource::SetHandler_Impl);
            break;
#endif /* !KERNEL */
        case IODispatchSource_CheckForWork_ID:
            ret = self->CheckForWork_Invoke(rpc, (kern_return_t (IODispatchSource::*)(IODispatchSource_CheckForWork_Args)) &IOServiceNotificationDispatchSource::CheckForWork_Impl);
            break;
#if KERNEL
        case IOServiceNotificationDispatchSource_CopyNextNotification_ID:
            ret = self->CopyNextNotification_Invoke(rpc, &IOServiceNotificationDispatchSource::CopyNextNotification_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = IODispatchSource::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IOServiceNotificationDispatchSource::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOServiceNotificationDispatchSourceMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOServiceNotificationDispatchSource_Create_ID:
            ret = IOServiceNotificationDispatchSource::Create_Invoke(rpc, &IOServiceNotificationDispatchSource::Create_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOServiceNotificationDispatchSource::Create_Call(
        OSDictionary * matching,
        uint64_t options,
        IODispatchQueue * queue,
        IOServiceNotificationDispatchSource ** notification)
{
    kern_return_t ret;
    union
    {
        IOServiceNotificationDispatchSource_Create_Msg msg;
        struct
        {
            IOServiceNotificationDispatchSource_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOServiceNotificationDispatchSource_Create_Msg * msg = &buf.msg;
    struct IOServiceNotificationDispatchSource_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOServiceNotificationDispatchSource_Create_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IOServiceNotificationDispatchSource);
    msg->content.hdr.objectRefs = IOServiceNotificationDispatchSource_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 3;

    msg->content.matching = (OSObjectRef) matching;
    msg->content.options = options;
    msg->content.queue = (OSObjectRef) queue;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOServiceNotificationDispatchSource)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOServiceNotificationDispatchSource_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOServiceNotificationDispatchSource_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *notification = OSDynamicCast(IOServiceNotificationDispatchSource, (OSObject *) rpl->content.notification);
        if (rpl->content.notification && !*notification) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOServiceNotificationDispatchSource::SetHandler(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOServiceNotificationDispatchSource_SetHandler_Msg msg;
        struct
        {
            IOServiceNotificationDispatchSource_SetHandler_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOServiceNotificationDispatchSource_SetHandler_Msg * msg = &buf.msg;
    struct IOServiceNotificationDispatchSource_SetHandler_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOServiceNotificationDispatchSource_SetHandler_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOServiceNotificationDispatchSource_SetHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOServiceNotificationDispatchSource_SetHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOServiceNotificationDispatchSource_SetHandler_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOServiceNotificationDispatchSource::ServiceNotificationReady(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg msg;
    } buf;
    struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg * msg = &buf.msg;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOServiceNotificationDispatchSource_ServiceNotificationReady_ID;
    msg->content.hdr.object = (OSObjectRef) action;
    msg->content.hdr.objectRefs = IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(*msg), .reply = NULL, .replySize = 0 };
    ret = action->Invoke(rpc);

}

kern_return_t
IOServiceNotificationDispatchSource::CopyNextNotification(
        uint64_t * type,
        IOService ** service,
        uint64_t * options,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOServiceNotificationDispatchSource_CopyNextNotification_Msg msg;
        struct
        {
            IOServiceNotificationDispatchSource_CopyNextNotification_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOServiceNotificationDispatchSource_CopyNextNotification_Msg * msg = &buf.msg;
    struct IOServiceNotificationDispatchSource_CopyNextNotification_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOServiceNotificationDispatchSource_CopyNextNotification_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOServiceNotificationDispatchSource_CopyNextNotification_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOServiceNotificationDispatchSource_CopyNextNotification_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (type) *type = rpl->content.type;
        *service = OSDynamicCast(IOService, (OSObject *) rpl->content.service);
        if (rpl->content.service && !*service) ret = kIOReturnBadArgument;
        if (options) *options = rpl->content.options;
    }


    return (ret);
}

kern_return_t
IOServiceNotificationDispatchSource::Create_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IOServiceNotificationDispatchSource_Create_Args))
{
    IOServiceNotificationDispatchSource_Create_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSDictionary * matching;
    IODispatchQueue * queue;

    if (IOServiceNotificationDispatchSource_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    matching = OSDynamicCast(OSDictionary, (OSObject *) rpc.message->content.matching);
    if (!matching && rpc.message->content.matching) return (kIOReturnBadArgument);
    queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpc.message->content.queue);
    if (!queue && rpc.message->content.queue) return (kIOReturnBadArgument);

    ret = (*func)(        
        matching,
        rpc.message->content.options,
        queue,
        (IOServiceNotificationDispatchSource **)&rpc.reply->content.notification);

    {
        rpc.reply->content.hdr.msgid   = IOServiceNotificationDispatchSource_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOServiceNotificationDispatchSource_Create_Rpl_ObjRefs;
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
            rpc.reply->content.notification = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOServiceNotificationDispatchSource::SetHandler_Invoke(const IORPC _rpc,
        kern_return_t (IOServiceNotificationDispatchSource::*func)(IOServiceNotificationDispatchSource_SetHandler_Args))
{
    IOServiceNotificationDispatchSource_SetHandler_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSAction * action;

    if (IOServiceNotificationDispatchSource_SetHandler_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        action);

    {
        rpc.reply->content.hdr.msgid   = IOServiceNotificationDispatchSource_SetHandler_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOServiceNotificationDispatchSource_SetHandler_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOServiceNotificationDispatchSource::ServiceNotificationReady_Invoke(const IORPC _rpc,
        void (IOServiceNotificationDispatchSource::*func)(IOServiceNotificationDispatchSource_ServiceNotificationReady_Args))
{
    IOServiceNotificationDispatchSource_ServiceNotificationReady_Invocation rpc = { _rpc };
    OSAction * action;

    if (IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (this->*func)(        
        action);

    return (kIOReturnSuccess);
}

kern_return_t
IOServiceNotificationDispatchSource::CopyNextNotification_Invoke(const IORPC _rpc,
        kern_return_t (IOServiceNotificationDispatchSource::*func)(IOServiceNotificationDispatchSource_CopyNextNotification_Args))
{
    IOServiceNotificationDispatchSource_CopyNextNotification_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOServiceNotificationDispatchSource_CopyNextNotification_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.reply->content.type,
        (IOService **)&rpc.reply->content.service,
        &rpc.reply->content.options);

    {
        rpc.reply->content.hdr.msgid   = IOServiceNotificationDispatchSource_CopyNextNotification_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_ObjRefs;
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
            rpc.reply->content.service = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}



