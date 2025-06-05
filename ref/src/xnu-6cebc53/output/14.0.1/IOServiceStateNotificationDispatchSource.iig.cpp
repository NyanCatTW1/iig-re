/* iig(DriverKit-254 Sep 13 2022 21:51:26) generated from IOServiceStateNotificationDispatchSource.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOServiceStateNotificationDispatchSource.iig

#if KERNEL
#include <libkern/c++/OSString.h>
#else
#include <DriverKit/DriverKit.h>
#endif /* KERNEL */
#include <DriverKit/IOReturn.h>
#include <DriverKit/IOServiceStateNotificationDispatchSource.h>


#if __has_builtin(__builtin_load_member_function_pointer)
#define SimpleMemberFunctionCast(cfnty, self, func) (cfnty)__builtin_load_member_function_pointer(self, func)
#else
#define SimpleMemberFunctionCast(cfnty, self, func) ({ union { typeof(func) memfun; cfnty cfun; } pair; pair.memfun = func; pair.cfun; })
#endif


struct IOServiceStateNotificationDispatchSource_Create_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  service;
    OSArray * items;
#if !defined(__LP64__)
    uint32_t __itemsPad;
#endif /* !defined(__LP64__) */
    OSObjectRef  queue;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t service__descriptor;
    mach_msg_ool_descriptor_t  items__descriptor;
    mach_msg_port_descriptor_t queue__descriptor;
    IOServiceStateNotificationDispatchSource_Create_Msg_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_Create_Msg_ObjRefs (4)

struct IOServiceStateNotificationDispatchSource_Create_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  source;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t source__descriptor;
    IOServiceStateNotificationDispatchSource_Create_Rpl_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_Create_Rpl_ObjRefs (1)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceStateNotificationDispatchSource_Create_Msg * message;
        struct IOServiceStateNotificationDispatchSource_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceStateNotificationDispatchSource_Create_Invocation;
struct IOServiceStateNotificationDispatchSource_SetHandler_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  action;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_SetHandler_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t action__descriptor;
    IOServiceStateNotificationDispatchSource_SetHandler_Msg_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_SetHandler_Msg_ObjRefs (2)

struct IOServiceStateNotificationDispatchSource_SetHandler_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_SetHandler_Rpl
{
    IORPCMessageMach           mach;
    IOServiceStateNotificationDispatchSource_SetHandler_Rpl_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_SetHandler_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceStateNotificationDispatchSource_SetHandler_Msg * message;
        struct IOServiceStateNotificationDispatchSource_SetHandler_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceStateNotificationDispatchSource_SetHandler_Invocation;
struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg_ObjRefs (1)

struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl
{
    IORPCMessageMach           mach;
    IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg * message;
        struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceStateNotificationDispatchSource_StateNotificationBegin_Invocation;
struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  action;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t action__descriptor;
    IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg_ObjRefs (2)

struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Rpl_Content
{
    IORPCMessage __hdr;
};
#pragma pack(4)
struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Rpl
{
    IORPCMessageMach           mach;
    IOServiceStateNotificationDispatchSource_StateNotificationReady_Rpl_Content content;
};
#pragma pack()
#define IOServiceStateNotificationDispatchSource_StateNotificationReady_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg * message;
        struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOServiceStateNotificationDispatchSource_StateNotificationReady_Invocation;
#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gOSSetMetaClass;
extern OSMetaClass * gOSOrderedSetMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gIOMemoryDescriptorMetaClass;
extern OSMetaClass * gIOBufferMemoryDescriptorMetaClass;
extern OSMetaClass * gIOUserClientMetaClass;
#endif /* !KERNEL */

#if KERNEL
OSDefineMetaClassAndStructors(IOServiceStateNotificationDispatchSource, IODispatchSource);
#endif /* KERNEL */

#if !KERNEL

#define IOServiceStateNotificationDispatchSource_QueueNames  ""

#define IOServiceStateNotificationDispatchSource_MethodNames  ""

#define IOServiceStateNotificationDispatchSourceMetaClass_MethodNames  ""

struct OSClassDescription_IOServiceStateNotificationDispatchSource_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOServiceStateNotificationDispatchSource_QueueNames)];
    char               methodNames[sizeof(IOServiceStateNotificationDispatchSource_MethodNames)];
    char               metaMethodNames[sizeof(IOServiceStateNotificationDispatchSourceMetaClass_MethodNames)];
};

const struct OSClassDescription_IOServiceStateNotificationDispatchSource_t
OSClassDescription_IOServiceStateNotificationDispatchSource =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOServiceStateNotificationDispatchSource_t),
        .name                    = "IOServiceStateNotificationDispatchSource",
        .superName               = "IODispatchSource",
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOServiceStateNotificationDispatchSource_t, methodOptions),
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOServiceStateNotificationDispatchSource_t, metaMethodOptions),
        .queueNamesSize       = sizeof(IOServiceStateNotificationDispatchSource_QueueNames),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOServiceStateNotificationDispatchSource_t, queueNames),
        .methodNamesSize         = sizeof(IOServiceStateNotificationDispatchSource_MethodNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOServiceStateNotificationDispatchSource_t, methodNames),
        .metaMethodNamesSize     = sizeof(IOServiceStateNotificationDispatchSourceMetaClass_MethodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOServiceStateNotificationDispatchSource_t, metaMethodNames),
        .flags                   = 1*kOSClassCanRemote,
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOServiceStateNotificationDispatchSource_QueueNames,
    .methodNames     = IOServiceStateNotificationDispatchSource_MethodNames,
    .metaMethodNames = IOServiceStateNotificationDispatchSourceMetaClass_MethodNames,
};

OSMetaClass * gIOServiceStateNotificationDispatchSourceMetaClass;

static kern_return_t
IOServiceStateNotificationDispatchSource_New(OSMetaClass * instance);

const OSClassLoadInformation
IOServiceStateNotificationDispatchSource_Class = 
{
    .description       = &OSClassDescription_IOServiceStateNotificationDispatchSource.base,
    .metaPointer       = &gIOServiceStateNotificationDispatchSourceMetaClass,
    .version           = 1,
    .instanceSize      = sizeof(IOServiceStateNotificationDispatchSource),

    .New               = &IOServiceStateNotificationDispatchSource_New,
};

extern const void * const
gIOServiceStateNotificationDispatchSource_Declaration;
const void * const
gIOServiceStateNotificationDispatchSource_Declaration
__attribute__((visibility("hidden"),section("__DATA_CONST,__osclassinfo,regular,no_dead_strip"),no_sanitize("address")))
    = &IOServiceStateNotificationDispatchSource_Class;

static kern_return_t
IOServiceStateNotificationDispatchSource_New(OSMetaClass * instance)
{
    if (!new(instance) IOServiceStateNotificationDispatchSourceMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOServiceStateNotificationDispatchSourceMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOServiceStateNotificationDispatchSource) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOServiceStateNotificationDispatchSource::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOServiceStateNotificationDispatchSource::_Dispatch(IOServiceStateNotificationDispatchSource * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

    switch (msg->msgid)
    {
        case IODispatchSource_SetEnableWithCompletion_ID:
        {
            ret = IODispatchSource::SetEnableWithCompletion_Invoke(rpc, self, SimpleMemberFunctionCast(IODispatchSource::SetEnableWithCompletion_Handler, *self, &IOServiceStateNotificationDispatchSource::SetEnableWithCompletion_Impl));
            break;
        }
        case IODispatchSource_Cancel_ID:
        {
            ret = IODispatchSource::Cancel_Invoke(rpc, self, SimpleMemberFunctionCast(IODispatchSource::Cancel_Handler, *self, &IOServiceStateNotificationDispatchSource::Cancel_Impl));
            break;
        }
#if KERNEL
        case IOServiceStateNotificationDispatchSource_SetHandler_ID:
        {
            ret = IOServiceStateNotificationDispatchSource::SetHandler_Invoke(rpc, self, SimpleMemberFunctionCast(IOServiceStateNotificationDispatchSource::SetHandler_Handler, *self, &IOServiceStateNotificationDispatchSource::SetHandler_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOServiceStateNotificationDispatchSource_StateNotificationBegin_ID:
        {
            ret = IOServiceStateNotificationDispatchSource::StateNotificationBegin_Invoke(rpc, self, SimpleMemberFunctionCast(IOServiceStateNotificationDispatchSource::StateNotificationBegin_Handler, *self, &IOServiceStateNotificationDispatchSource::StateNotificationBegin_Impl));
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
IOServiceStateNotificationDispatchSource::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOServiceStateNotificationDispatchSourceMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

    switch (msg->msgid)
    {
#if KERNEL
        case IOServiceStateNotificationDispatchSource_Create_ID:
            ret = IOServiceStateNotificationDispatchSource::Create_Invoke(rpc, &IOServiceStateNotificationDispatchSource::Create_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOServiceStateNotificationDispatchSource::Create_Call(
        IOService * service,
        OSArray * items,
        IODispatchQueue * queue,
        IOServiceStateNotificationDispatchSource ** source)
{
    kern_return_t ret;
    union
    {
        IOServiceStateNotificationDispatchSource_Create_Msg msg;
        struct
        {
            IOServiceStateNotificationDispatchSource_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOServiceStateNotificationDispatchSource_Create_Msg * msg = &buf.msg;
    struct IOServiceStateNotificationDispatchSource_Create_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOServiceStateNotificationDispatchSource_Create_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceStateNotificationDispatchSource_Create_ID;
    msg->content.__object = (OSObjectRef) OSTypeID(IOServiceStateNotificationDispatchSource);
    msg->content.__hdr.objectRefs = IOServiceStateNotificationDispatchSource_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 4;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->service__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.service = (OSObjectRef) service;

    msg->items__descriptor.type = MACH_MSG_OOL_DESCRIPTOR;
    msg->items__descriptor.copy = MACH_MSG_VIRTUAL_COPY;
    msg->items__descriptor.address = (void *) __builtin_offsetof(IOServiceStateNotificationDispatchSource_Create_Msg_Content, items);
    msg->content.items = items;

    msg->queue__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.queue = (OSObjectRef) queue;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOServiceStateNotificationDispatchSource)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOServiceStateNotificationDispatchSource_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOServiceStateNotificationDispatchSource_Create_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *source = OSDynamicCast(IOServiceStateNotificationDispatchSource, (OSObject *) rpl->content.source);
        if (rpl->content.source && !*source) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOServiceStateNotificationDispatchSource::SetHandler(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOServiceStateNotificationDispatchSource_SetHandler_Msg msg;
        struct
        {
            IOServiceStateNotificationDispatchSource_SetHandler_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOServiceStateNotificationDispatchSource_SetHandler_Msg * msg = &buf.msg;
    struct IOServiceStateNotificationDispatchSource_SetHandler_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOServiceStateNotificationDispatchSource_SetHandler_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceStateNotificationDispatchSource_SetHandler_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOServiceStateNotificationDispatchSource_SetHandler_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->action__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.action = (OSObjectRef) action;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOServiceStateNotificationDispatchSource_SetHandler_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOServiceStateNotificationDispatchSource_SetHandler_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
IOServiceStateNotificationDispatchSource::StateNotificationBegin(        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg msg;
        struct
        {
            IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg * msg = &buf.msg;
    struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceStateNotificationDispatchSource_StateNotificationBegin_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOServiceStateNotificationDispatchSource_StateNotificationBegin_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

void
IOServiceStateNotificationDispatchSource::StateNotificationReady(
        OSAction * action,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg msg;
    } buf;
    struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg * msg = &buf.msg;

    memset(msg, 0, sizeof(struct IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 1*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOServiceStateNotificationDispatchSource_StateNotificationReady_ID;
    msg->content.__object = (OSObjectRef) action;
    msg->content.__hdr.objectRefs = IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->action__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.action = (OSObjectRef) action;

    IORPC rpc = { .message = &buf.msg.mach, .reply = NULL, .sendSize = sizeof(*msg), .replySize = 0 };
    ret = action->Invoke(rpc);

}

kern_return_t
IOServiceStateNotificationDispatchSource::Create_Invoke(const IORPC _rpc,
        Create_Handler func)
{
    IOServiceStateNotificationDispatchSource_Create_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOService * service;
    IODispatchQueue * queue;

    if (IOServiceStateNotificationDispatchSource_Create_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    service = OSDynamicCast(IOService, (OSObject *) rpc.message->content.service);
    if (!service && rpc.message->content.service) return (kIOReturnBadArgument);
    queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpc.message->content.queue);
    if (!queue && rpc.message->content.queue) return (kIOReturnBadArgument);

    ret = (*func)(        service,
        rpc.message->content.items,
        queue,
        (IOServiceStateNotificationDispatchSource **)&rpc.reply->content.source);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOServiceStateNotificationDispatchSource_Create_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
    rpc.reply->content.__hdr.objectRefs = IOServiceStateNotificationDispatchSource_Create_Rpl_ObjRefs;
    rpc.reply->source__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    return (ret);
}

kern_return_t
IOServiceStateNotificationDispatchSource::SetHandler_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        SetHandler_Handler func)
{
    IOServiceStateNotificationDispatchSource_SetHandler_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSAction * action;

    if (IOServiceStateNotificationDispatchSource_SetHandler_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    ret = (*func)(target,
        action);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOServiceStateNotificationDispatchSource_SetHandler_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOServiceStateNotificationDispatchSource_SetHandler_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOServiceStateNotificationDispatchSource::StateNotificationBegin_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        StateNotificationBegin_Handler func)
{
    IOServiceStateNotificationDispatchSource_StateNotificationBegin_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOServiceStateNotificationDispatchSource_StateNotificationBegin_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(target);

    if (kIOReturnSuccess != ret) return (ret);

    rpc.reply->content.__hdr.msgid = IOServiceStateNotificationDispatchSource_StateNotificationBegin_ID;
    rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
    rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
    rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
    rpc.reply->content.__hdr.objectRefs = IOServiceStateNotificationDispatchSource_StateNotificationBegin_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOServiceStateNotificationDispatchSource::StateNotificationReady_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        StateNotificationReady_Handler func)
{
    return IOServiceStateNotificationDispatchSource::StateNotificationReady_Invoke(_rpc, target, func, NULL);
}

kern_return_t
IOServiceStateNotificationDispatchSource::StateNotificationReady_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        StateNotificationReady_Handler func,
        const OSMetaClass * targetActionClass)
{
    IOServiceStateNotificationDispatchSource_StateNotificationReady_Invocation rpc = { _rpc };
    OSAction * action;

    if (IOServiceStateNotificationDispatchSource_StateNotificationReady_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    if (targetActionClass) {
        action = (OSAction *) OSMetaClassBase::safeMetaCast((OSObject *) rpc.message->content.action, targetActionClass);
    } else {
        action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    }
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (*func)(target,
        action);


    return (kIOReturnSuccess);
}



