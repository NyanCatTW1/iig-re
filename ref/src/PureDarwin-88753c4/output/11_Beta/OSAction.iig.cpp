/* iig(DriverKit-48) generated from OSAction.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	OSAction.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/OSAction.h>


struct OSAction_Create_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  target;
    uint64_t  targetmsgid;
    uint64_t  msgid;
    size_t  referenceSize;
};
#pragma pack(4)
struct OSAction_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    OSAction_Create_Msg_Content content;
};
#pragma pack()
#define OSAction_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(OSAction_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(OSAction_Create_Msg_Content, target) / sizeof(OSObjectRef))))

struct OSAction_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  action;
};
#pragma pack(4)
struct OSAction_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    OSAction_Create_Rpl_Content content;
};
#pragma pack()
#define OSAction_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(OSAction_Create_Rpl_Content, action) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct OSAction_Create_Msg * message;
        struct OSAction_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
OSAction_Create_Invocation;

struct OSAction_CreateWithTypeName_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  target;
    uint64_t  targetmsgid;
    uint64_t  msgid;
    size_t  referenceSize;
    OSObjectRef  typeName;
};
#pragma pack(4)
struct OSAction_CreateWithTypeName_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[3];
    OSAction_CreateWithTypeName_Msg_Content content;
};
#pragma pack()
#define OSAction_CreateWithTypeName_Msg_ObjRefs ((1ULL << (__builtin_offsetof(OSAction_CreateWithTypeName_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(OSAction_CreateWithTypeName_Msg_Content, target) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(OSAction_CreateWithTypeName_Msg_Content, typeName) / sizeof(OSObjectRef))))

struct OSAction_CreateWithTypeName_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  action;
};
#pragma pack(4)
struct OSAction_CreateWithTypeName_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    OSAction_CreateWithTypeName_Rpl_Content content;
};
#pragma pack()
#define OSAction_CreateWithTypeName_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(OSAction_CreateWithTypeName_Rpl_Content, action) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct OSAction_CreateWithTypeName_Msg * message;
        struct OSAction_CreateWithTypeName_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
OSAction_CreateWithTypeName_Invocation;

struct OSAction_Aborted_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct OSAction_Aborted_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    OSAction_Aborted_Msg_Content content;
};
#pragma pack()
#define OSAction_Aborted_Msg_ObjRefs ((1ULL << (__builtin_offsetof(OSAction_Aborted_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct OSAction_Aborted_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct OSAction_Aborted_Rpl
{
    IORPCMessageMach           mach;
    OSAction_Aborted_Rpl_Content content;
};
#pragma pack()
#define OSAction_Aborted_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct OSAction_Aborted_Msg * message;
        struct OSAction_Aborted_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
OSAction_Aborted_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gIODispatchQueueMetaClass;
extern OSMetaClass * gOSStringMetaClass;
#endif /* !KERNEL */

#if KERNEL
OSDefineMetaClassAndStructors(OSAction, OSObject);
#endif /* KERNEL */

#if !KERNEL

#define OSAction_QueueNames  ""

#define OSAction_MethodNames  ""

#define OSActionMetaClass_MethodNames  ""

struct OSClassDescription_OSAction_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(OSAction_QueueNames)];
    char               methodNames[sizeof(OSAction_MethodNames)];
    char               metaMethodNames[sizeof(OSActionMetaClass_MethodNames)];
};

const struct OSClassDescription_OSAction_t
OSClassDescription_OSAction =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_OSAction_t),
        .name                    = "OSAction",
        .superName               = "OSObject",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(OSAction_QueueNames),
        .methodNamesSize         = sizeof(OSAction_MethodNames),
        .metaMethodNamesSize     = sizeof(OSActionMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_OSAction_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_OSAction_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_OSAction_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_OSAction_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_OSAction_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = OSAction_QueueNames,
    .methodNames     = OSAction_MethodNames,
    .metaMethodNames = OSActionMetaClass_MethodNames,
};

static kern_return_t
OSAction_New(OSMetaClass * instance);

OSClassLoadInformation
OSAction_Class = 
{
    .description       = &OSClassDescription_OSAction.base,
    .instanceSize      = sizeof(OSAction),

    .New               = &OSAction_New,
};

const void *
gOSAction_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &OSAction_Class;

OSMetaClass * gOSActionMetaClass;

static kern_return_t
OSAction_New(OSMetaClass * instance)
{
    if (!new(instance) OSActionMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
OSActionMetaClass::New(OSObject * instance)
{
    if (!new(instance) OSAction) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
OSAction::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
OSAction::_Dispatch(OSAction * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
        case OSAction_Aborted_ID:
            ret = self->Aborted_Invoke(rpc, &OSAction::Aborted_Impl);
            break;

        default:
            ret = OSObject::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
OSAction::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
OSActionMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case OSAction_Create_ID:
            ret = OSAction::Create_Invoke(rpc, &OSAction::Create_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case OSAction_CreateWithTypeName_ID:
            ret = OSAction::CreateWithTypeName_Invoke(rpc, &OSAction::CreateWithTypeName_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
OSAction::Create_Call(
        OSObject * target,
        uint64_t targetmsgid,
        uint64_t msgid,
        size_t referenceSize,
        OSAction ** action)
{
    kern_return_t ret;
    union
    {
        OSAction_Create_Msg msg;
        struct
        {
            OSAction_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct OSAction_Create_Msg * msg = &buf.msg;
    struct OSAction_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = OSAction_Create_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(OSAction);
    msg->content.hdr.objectRefs = OSAction_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.target = (OSObjectRef) target;
    msg->content.targetmsgid = targetmsgid;
    msg->content.msgid = msgid;
    msg->content.referenceSize = referenceSize;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(OSAction)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != OSAction_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (OSAction_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
OSAction::CreateWithTypeName_Call(
        OSObject * target,
        uint64_t targetmsgid,
        uint64_t msgid,
        size_t referenceSize,
        OSString * typeName,
        OSAction ** action)
{
    kern_return_t ret;
    union
    {
        OSAction_CreateWithTypeName_Msg msg;
        struct
        {
            OSAction_CreateWithTypeName_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct OSAction_CreateWithTypeName_Msg * msg = &buf.msg;
    struct OSAction_CreateWithTypeName_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = OSAction_CreateWithTypeName_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(OSAction);
    msg->content.hdr.objectRefs = OSAction_CreateWithTypeName_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 3;

    msg->content.target = (OSObjectRef) target;
    msg->content.targetmsgid = targetmsgid;
    msg->content.msgid = msgid;
    msg->content.referenceSize = referenceSize;
    msg->content.typeName = (OSObjectRef) typeName;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(OSAction)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != OSAction_CreateWithTypeName_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (OSAction_CreateWithTypeName_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
OSAction::Aborted(        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        OSAction_Aborted_Msg msg;
    } buf;
    struct OSAction_Aborted_Msg * msg = &buf.msg;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = OSAction_Aborted_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = OSAction_Aborted_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(*msg), .reply = NULL, .replySize = 0 };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

}

kern_return_t
OSAction::Create_Invoke(const IORPC _rpc,
        kern_return_t (*func)(OSAction_Create_Args))
{
    OSAction_Create_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSObject * target;

    if (OSAction_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    target = OSDynamicCast(OSObject, (OSObject *) rpc.message->content.target);
    if (!target && rpc.message->content.target) return (kIOReturnBadArgument);

    ret = (*func)(        
        target,
        rpc.message->content.targetmsgid,
        rpc.message->content.msgid,
        rpc.message->content.referenceSize,
        (OSAction **)&rpc.reply->content.action);

    {
        rpc.reply->content.hdr.msgid   = OSAction_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = OSAction_Create_Rpl_ObjRefs;
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
OSAction::CreateWithTypeName_Invoke(const IORPC _rpc,
        kern_return_t (*func)(OSAction_CreateWithTypeName_Args))
{
    OSAction_CreateWithTypeName_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSObject * target;
    OSString * typeName;

    if (OSAction_CreateWithTypeName_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    target = OSDynamicCast(OSObject, (OSObject *) rpc.message->content.target);
    if (!target && rpc.message->content.target) return (kIOReturnBadArgument);
    typeName = OSDynamicCast(OSString, (OSObject *) rpc.message->content.typeName);
    if (!typeName && rpc.message->content.typeName) return (kIOReturnBadArgument);

    ret = (*func)(        
        target,
        rpc.message->content.targetmsgid,
        rpc.message->content.msgid,
        rpc.message->content.referenceSize,
        typeName,
        (OSAction **)&rpc.reply->content.action);

    {
        rpc.reply->content.hdr.msgid   = OSAction_CreateWithTypeName_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = OSAction_CreateWithTypeName_Rpl_ObjRefs;
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
OSAction::Aborted_Invoke(const IORPC _rpc,
        void (OSAction::*func)(OSAction_Aborted_Args))
{
    OSAction_Aborted_Invocation rpc = { _rpc };

    if (OSAction_Aborted_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    (this->*func)(        );

    return (kIOReturnSuccess);
}



