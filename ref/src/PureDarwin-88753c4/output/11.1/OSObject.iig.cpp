/* iig(DriverKit-73.0.1) generated from OSObject.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	OSObject.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/OSObject.h>

/* @iig implementation */
#include <DriverKit/IODispatchQueue.h>
/* @iig end */


struct OSObject_SetDispatchQueue_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  queue;
    const char *  name;
    char __name[256];
};
#pragma pack(4)
struct OSObject_SetDispatchQueue_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t queue__descriptor;
    OSObject_SetDispatchQueue_Msg_Content content;
};
#pragma pack()
#define OSObject_SetDispatchQueue_Msg_ObjRefs (2)

struct OSObject_SetDispatchQueue_Rpl_Content
{
    IORPCMessage __hdr;
    kern_return_t __result;
};
#pragma pack(4)
struct OSObject_SetDispatchQueue_Rpl
{
    IORPCMessageMach           mach;
    OSObject_SetDispatchQueue_Rpl_Content content;
};
#pragma pack()
#define OSObject_SetDispatchQueue_Rpl_ObjRefs (0)


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
OSObject_SetDispatchQueue_Invocation;
struct OSObject_CopyDispatchQueue_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    const char *  name;
    char __name[256];
};
#pragma pack(4)
struct OSObject_CopyDispatchQueue_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    OSObject_CopyDispatchQueue_Msg_Content content;
};
#pragma pack()
#define OSObject_CopyDispatchQueue_Msg_ObjRefs (1)

struct OSObject_CopyDispatchQueue_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  queue;
    kern_return_t __result;
};
#pragma pack(4)
struct OSObject_CopyDispatchQueue_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t queue__descriptor;
    OSObject_CopyDispatchQueue_Rpl_Content content;
};
#pragma pack()
#define OSObject_CopyDispatchQueue_Rpl_ObjRefs (1)


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
OSObject_CopyDispatchQueue_Invocation;
#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gIODispatchQueueMetaClass;
#endif /* !KERNEL */

#if !KERNEL

#define OSObject_QueueNames  ""

#define OSObject_MethodNames  ""

#define OSObjectMetaClass_MethodNames  ""

struct OSClassDescription_OSObject_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(OSObject_QueueNames)];
    char               methodNames[sizeof(OSObject_MethodNames)];
    char               metaMethodNames[sizeof(OSObjectMetaClass_MethodNames)];
};

const struct OSClassDescription_OSObject_t
OSClassDescription_OSObject =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_OSObject_t),
        .name                    = "OSObject",
        .superName               = "OSMetaClassBase",
        .flags                   = 0*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(OSObject_QueueNames),
        .methodNamesSize         = sizeof(OSObject_MethodNames),
        .metaMethodNamesSize     = sizeof(OSObjectMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_OSObject_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_OSObject_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_OSObject_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_OSObject_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_OSObject_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = OSObject_QueueNames,
    .methodNames     = OSObject_MethodNames,
    .metaMethodNames = OSObjectMetaClass_MethodNames,
};

OSMetaClass * gOSObjectMetaClass;

static kern_return_t
OSObject_New(OSMetaClass * instance);

const OSClassLoadInformation
OSObject_Class = 
{
    .version           = 1,
    .description       = &OSClassDescription_OSObject.base,
    .instanceSize      = sizeof(OSObject),

    .metaPointer       = &gOSObjectMetaClass,
    .New               = &OSObject_New,
};

extern const void * const
gOSObject_Declaration;
const void * const
gOSObject_Declaration
__attribute__((visibility("hidden"),section("__DATA_CONST,__osclassinfo,regular,no_dead_strip")))
    = &OSObject_Class;

static kern_return_t
OSObject_New(OSMetaClass * instance)
{
    if (!new(instance) OSObjectMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
OSObjectMetaClass::New(OSObject * instance)
{
    if (!new(instance) OSObject) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
OSObject::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
OSObject::_Dispatch(OSObject * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

    switch (msg->msgid)
    {

        default:
            ret = self->OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
OSObject::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
OSObjectMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);

    switch (msg->msgid)
    {

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
OSObject::SetDispatchQueue(
        const char * name,
        IODispatchQueue * queue,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        OSObject_SetDispatchQueue_Msg msg;
        struct
        {
            OSObject_SetDispatchQueue_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct OSObject_SetDispatchQueue_Msg * msg = &buf.msg;
    struct OSObject_SetDispatchQueue_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct OSObject_SetDispatchQueue_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = OSObject_SetDispatchQueue_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = OSObject_SetDispatchQueue_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.name = name;

    strlcpy(&msg->content.__name[0], name, sizeof(msg->content.__name));

    msg->queue__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.queue = (OSObjectRef) queue;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != OSObject_SetDispatchQueue_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (OSObject_SetDispatchQueue_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content.__result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
    }


    return (ret);
}

kern_return_t
OSObject::CopyDispatchQueue(
        const char * name,
        IODispatchQueue ** queue,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        OSObject_CopyDispatchQueue_Msg msg;
        struct
        {
            OSObject_CopyDispatchQueue_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct OSObject_CopyDispatchQueue_Msg * msg = &buf.msg;
    struct OSObject_CopyDispatchQueue_Rpl * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(struct OSObject_CopyDispatchQueue_Msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = OSObject_CopyDispatchQueue_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = OSObject_CopyDispatchQueue_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.name = name;

    strlcpy(&msg->content.__name[0], name, sizeof(msg->content.__name));

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != OSObject_CopyDispatchQueue_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (OSObject_CopyDispatchQueue_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content.__result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpl->content.queue);
        if (rpl->content.queue && !*queue) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
OSObject::SetDispatchQueue_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        SetDispatchQueue_Handler func)
{
    OSObject_SetDispatchQueue_Invocation rpc = { _rpc };
    kern_return_t ret;
    IODispatchQueue * queue;

    if (OSObject_SetDispatchQueue_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpc.message->content.queue);
    if (!queue && rpc.message->content.queue) return (kIOReturnBadArgument);
    if (strnlen(&rpc.message->content.__name[0], sizeof(rpc.message->content.__name)) >= sizeof(rpc.message->content.__name)) return kIOReturnBadArgument;

    ret = (*func)(target,        
        &rpc.message->content.__name[0],
        queue);

    {
        rpc.reply->content.__hdr.msgid = OSObject_SetDispatchQueue_ID;
        rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content.__result    = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.__hdr.objectRefs = OSObject_SetDispatchQueue_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.__hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
OSObject::CopyDispatchQueue_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        CopyDispatchQueue_Handler func)
{
    OSObject_CopyDispatchQueue_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (OSObject_CopyDispatchQueue_Msg_ObjRefs != rpc.message->content.__hdr.objectRefs) return (kIOReturnIPCError);
    if (strnlen(&rpc.message->content.__name[0], sizeof(rpc.message->content.__name)) >= sizeof(rpc.message->content.__name)) return kIOReturnBadArgument;

    ret = (*func)(target,        
        &rpc.message->content.__name[0],
        (IODispatchQueue **)&rpc.reply->content.queue);

    {
        rpc.reply->content.__hdr.msgid = OSObject_CopyDispatchQueue_ID;
        rpc.reply->content.__hdr.flags = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content.__result    = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.__hdr.objectRefs = OSObject_CopyDispatchQueue_Rpl_ObjRefs;
            rpc.reply->queue__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
        }
        else
        {
            rpc.reply->content.__hdr.objectRefs = 0;
            rpc.reply->queue__descriptor.type        = MACH_MSG_PORT_DESCRIPTOR;
            rpc.reply->queue__descriptor.disposition = MACH_MSG_TYPE_PORT_NONE;
            rpc.reply->queue__descriptor.name        = MACH_PORT_NULL;
            rpc.reply->content.queue = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}



