/* iig(DriverKit-73.0.1) generated from IOServiceNotificationDispatchSource.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOServiceNotificationDispatchSource.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOServiceNotificationDispatchSource.h>


struct IOServiceNotificationDispatchSource_Create_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSDictionary *  matching;
    OSObjectRef  queue;
    uint64_t  options;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_ool_descriptor_t  matching__descriptor;
    mach_msg_port_descriptor_t queue__descriptor;
    IOServiceNotificationDispatchSource_Create_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_Create_Msg_ObjRefs (3)

struct IOServiceNotificationDispatchSource_Create_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  notification;
    kern_return_t __result;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t notification__descriptor;
    IOServiceNotificationDispatchSource_Create_Rpl_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_Create_Rpl_ObjRefs (1)


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
struct IOServiceNotificationDispatchSource_SetHandler_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  action;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_SetHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t action__descriptor;
    IOServiceNotificationDispatchSource_SetHandler_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_SetHandler_Msg_ObjRefs (2)

struct IOServiceNotificationDispatchSource_SetHandler_Rpl_Content
{
    IORPCMessage __hdr;
    kern_return_t __result;
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
struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  action;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t action__descriptor;
    IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_ObjRefs (2)

struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Rpl_Content
{
    IORPCMessage __hdr;
    kern_return_t __result;
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
    IORPCMessage __hdr;
    OSObjectRef  __object;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_CopyNextNotification_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOServiceNotificationDispatchSource_CopyNextNotification_Msg_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_CopyNextNotification_Msg_ObjRefs (1)

struct IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  service;
    kern_return_t __result;
    unsigned long long  type;
    unsigned long long  options;
};
#pragma pack(4)
struct IOServiceNotificationDispatchSource_CopyNextNotification_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t service__descriptor;
    IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_Content content;
};
#pragma pack()
#define IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_ObjRefs (1)


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

OSMetaClass * gIOServiceNotificationDispatchSourceMetaClass;

static kern_return_t
IOServiceNotificationDispatchSource_New(OSMetaClass * instance);

const OSClassLoadInformation
IOServiceNotificationDispatchSource_Class = 
{
    .version           = 1,
    .description       = &OSClassDescription_IOServiceNotificationDispatchSource.base,
    .instanceSize      = sizeof(IOServiceNotificationDispatchSource),

    .metaPointer       = &gIOServiceNotificationDispatchSourceMetaClass,
    .New               = &IOServiceNotificationDispatchSource_New,
};

extern const void * const
gIOServiceNotificationDispatchSource_Declaration;
const void * const
gIOServiceNotificationDispatchSource_Declaration
__attribute__((visibility("hidden"),section("__DATA_CONST,__osclassinfo,regular,no_dead_strip")))
    = &IOServiceNotificationDispatchSource_Class;

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
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

    switch (msg->msgid)
    {
        case IODispatchSource_SetEnableWithCompletion_ID:
        {
            union {
                kern_return_t (IOServiceNotificationDispatchSource::*fIn)(IODispatchSource_SetEnableWithCompletion_Args);
                IODispatchSource::SetEnableWithCompletion_Handler handler;
            } map;
            map.fIn = &IOServiceNotificationDispatchSource::SetEnableWithCompletion_Impl;
            ret = IODispatchSource::SetEnableWithCompletion_Invoke(rpc, self, map.handler);
            break;
        }
        case IODispatchSource_Cancel_ID:
        {
            union {
                kern_return_t (IOServiceNotificationDispatchSource::*fIn)(IODispatchSource_Cancel_Args);
                IODispatchSource::Cancel_Handler handler;
            } map;
            map.fIn = &IOServiceNotificationDispatchSource::Cancel_Impl;
            ret = IODispatchSource::Cancel_Invoke(rpc, self, map.handler);
            break;
        }
#if KERNEL
        case IOServiceNotificationDispatchSource_SetHandler_ID:
        {
            union {
                kern_return_t (IOServiceNotificationDispatchSource::*fIn)(IOServiceNotificationDispatchSource_SetHandler_Args);
                IOServiceNotificationDispatchSource::SetHandler_Handler handler;
            } map;
            map.fIn = &IOServiceNotificationDispatchSource::SetHandler_Impl;
            ret = IOServiceNotificationDispatchSource::SetHandler_Invoke(rpc, self, map.handler);
            break;
        }
#endif /* !KERNEL */
        case IODispatchSource_CheckForWork_ID:
        {
            union {
                kern_return_t (IOServiceNotificationDispatchSource::*fIn)(IODispatchSource_CheckForWork_Args);
                IODispatchSource::CheckForWork_Handler handler;
            } map;
            map.fIn = &IOServiceNotificationDispatchSource::CheckForWork_Impl;
            ret = IODispatchSource::CheckForWork_Invoke(rpc, self, map.handler);
            break;
        }
#if KERNEL
        case IOServiceNotificationDispatchSource_CopyNextNotification_ID:
        {
            union {
                kern_return_t (IOServiceNotificationDispatchSource::*fIn)(IOServiceNotificationDispatchSource_CopyNextNotification_Args);
                IOServiceNotificationDispatchSource::CopyNextNotification_Handler handler;
            } map;
            map.fIn = &IOServiceNotificationDispatchSource::CopyNextNotification_Impl;
            ret = IOServiceNotificationDispatchSource::CopyNextNotification_Invoke(rpc, self, map.handler);
            break;
        }
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
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

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

    memset(msg, 0, sizeof(struct IOServiceNotificationDispatchSource_Create_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceNotificationDispatchSource_Create_ID;
    msg->content.__object = (OSObjectRef) OSTypeID(IOServiceNotificationDispatchSource);
    msg->content.__hdr.objectRefs = IOServiceNotificationDispatchSource_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 3;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->matching__descriptor.type = MACH_MSG_OOL_DESCRIPTOR;
    msg->matching__descriptor.copy = MACH_MSG_VIRTUAL_COPY;
    msg->matching__descriptor.address = (void *) __builtin_offsetof(IOServiceNotificationDispatchSource_Create_Msg_Content, matching);
    msg->content.matching = matching;

    msg->content.options = options;

    msg->queue__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.queue = (OSObjectRef) queue;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOServiceNotificationDispatchSource)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOServiceNotificationDispatchSource_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOServiceNotificationDispatchSource_Create_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content.__result;
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

    memset(msg, 0, sizeof(struct IOServiceNotificationDispatchSource_SetHandler_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceNotificationDispatchSource_SetHandler_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOServiceNotificationDispatchSource_SetHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->action__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.action = (OSObjectRef) action;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOServiceNotificationDispatchSource_SetHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOServiceNotificationDispatchSource_SetHandler_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content.__result;
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

    memset(msg, 0, sizeof(struct IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 1*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceNotificationDispatchSource_ServiceNotificationReady_ID;
    msg->content.__object = (OSObjectRef) action;
    msg->content.__hdr.objectRefs = IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->action__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
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

    memset(msg, 0, sizeof(struct IOServiceNotificationDispatchSource_CopyNextNotification_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceNotificationDispatchSource_CopyNextNotification_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOServiceNotificationDispatchSource_CopyNextNotification_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOServiceNotificationDispatchSource_CopyNextNotification_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content.__result;
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
        Create_Handler func)
{
    IOServiceNotificationDispatchSource_Create_Invocation rpc = { _rpc };
    kern_return_t ret;
    IODispatchQueue * queue;

    if (IOServiceNotificationDispatchSource_Create_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpc.message->content.queue);
    if (!queue && rpc.message->content.queue) return (kIOReturnBadArgument);

    ret = (*func)(        
        rpc.message->content.matching,
        rpc.message->content.options,
        queue,
        (IOServiceNotificationDispatchSource **)&rpc.reply->content.notification);

    {
        rpc.reply->content.__hdr.msgid = IOServiceNotificationDispatchSource_Create_ID;
        rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content.__result    = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.__hdr.objectRefs = IOServiceNotificationDispatchSource_Create_Rpl_ObjRefs;
            rpc.reply->notification__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
        }
        else
        {
            rpc.reply->content.__hdr.objectRefs = 0;
            rpc.reply->notification__descriptor.type        = MACH_MSG_PORT_DESCRIPTOR;
            rpc.reply->notification__descriptor.disposition = MACH_MSG_TYPE_PORT_NONE;
            rpc.reply->notification__descriptor.name        = MACH_PORT_NULL;
            rpc.reply->content.notification = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOServiceNotificationDispatchSource::SetHandler_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        SetHandler_Handler func)
{
    IOServiceNotificationDispatchSource_SetHandler_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSAction * action;

    if (IOServiceNotificationDispatchSource_SetHandler_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    ret = (*func)(target,        
        action);

    {
        rpc.reply->content.__hdr.msgid = IOServiceNotificationDispatchSource_SetHandler_ID;
        rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content.__result    = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.__hdr.objectRefs = IOServiceNotificationDispatchSource_SetHandler_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.__hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOServiceNotificationDispatchSource::ServiceNotificationReady_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        ServiceNotificationReady_Handler func)
{
    IOServiceNotificationDispatchSource_ServiceNotificationReady_Invocation rpc = { _rpc };
    OSAction * action;

    if (IOServiceNotificationDispatchSource_ServiceNotificationReady_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (*func)(target,        
        action);

    return (kIOReturnSuccess);
}

kern_return_t
IOServiceNotificationDispatchSource::CopyNextNotification_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        CopyNextNotification_Handler func)
{
    IOServiceNotificationDispatchSource_CopyNextNotification_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOServiceNotificationDispatchSource_CopyNextNotification_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target,        
        &rpc.reply->content.type,
        (IOService **)&rpc.reply->content.service,
        &rpc.reply->content.options);

    {
        rpc.reply->content.__hdr.msgid = IOServiceNotificationDispatchSource_CopyNextNotification_ID;
        rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content.__result    = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.__hdr.objectRefs = IOServiceNotificationDispatchSource_CopyNextNotification_Rpl_ObjRefs;
            rpc.reply->service__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
        }
        else
        {
            rpc.reply->content.__hdr.objectRefs = 0;
            rpc.reply->service__descriptor.type        = MACH_MSG_PORT_DESCRIPTOR;
            rpc.reply->service__descriptor.disposition = MACH_MSG_TYPE_PORT_NONE;
            rpc.reply->service__descriptor.name        = MACH_PORT_NULL;
            rpc.reply->content.service = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}



