/* iig(DriverKit-48) generated from OSObject.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	OSObject.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/OSObject.h>

/* @iig implementation */
#include <DriverKit/IODispatchQueue.h>
/* @iig end */


struct OSObject_SetDispatchQueue_Msg_Content
{
    IORPCMessage hdr;
    const char *  name;
    char __name[256];
    OSObjectRef  queue;
};
#pragma pack(4)
struct OSObject_SetDispatchQueue_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    OSObject_SetDispatchQueue_Msg_Content content;
};
#pragma pack()
#define OSObject_SetDispatchQueue_Msg_ObjRefs ((1ULL << (__builtin_offsetof(OSObject_SetDispatchQueue_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(OSObject_SetDispatchQueue_Msg_Content, queue) / sizeof(OSObjectRef))))

struct OSObject_SetDispatchQueue_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
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
    IORPCMessage hdr;
    const char *  name;
    char __name[256];
};
#pragma pack(4)
struct OSObject_CopyDispatchQueue_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    OSObject_CopyDispatchQueue_Msg_Content content;
};
#pragma pack()
#define OSObject_CopyDispatchQueue_Msg_ObjRefs ((1ULL << (__builtin_offsetof(OSObject_CopyDispatchQueue_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct OSObject_CopyDispatchQueue_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  queue;
};
#pragma pack(4)
struct OSObject_CopyDispatchQueue_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    OSObject_CopyDispatchQueue_Rpl_Content content;
};
#pragma pack()
#define OSObject_CopyDispatchQueue_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(OSObject_CopyDispatchQueue_Rpl_Content, queue) / sizeof(OSObjectRef))))


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

static kern_return_t
OSObject_New(OSMetaClass * instance);

OSClassLoadInformation
OSObject_Class = 
{
    .description       = &OSClassDescription_OSObject.base,
    .instanceSize      = sizeof(OSObject),

    .New               = &OSObject_New,
};

const void *
gOSObject_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &OSObject_Class;

OSMetaClass * gOSObjectMetaClass;

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
    IORPCMessage * msg = IORPCMessage(rpc.message);

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

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = OSObject_SetDispatchQueue_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = OSObject_SetDispatchQueue_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.name = name;
    strlcpy(&msg->content.__name[0], name, sizeof(msg->content.__name));
    msg->content.queue = (OSObjectRef) queue;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != OSObject_SetDispatchQueue_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (OSObject_SetDispatchQueue_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = OSObject_CopyDispatchQueue_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = OSObject_CopyDispatchQueue_Msg_ObjRefs;
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
            if (rpl->content.hdr.msgid                    != OSObject_CopyDispatchQueue_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (OSObject_CopyDispatchQueue_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
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
        kern_return_t (OSObject::*func)(OSObject_SetDispatchQueue_Args))
{
    OSObject_SetDispatchQueue_Invocation rpc = { _rpc };
    kern_return_t ret;
    IODispatchQueue * queue;

    if (OSObject_SetDispatchQueue_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    queue = OSDynamicCast(IODispatchQueue, (OSObject *) rpc.message->content.queue);
    if (!queue && rpc.message->content.queue) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        &rpc.message->content.__name[0],
        queue);

    {
        rpc.reply->content.hdr.msgid   = OSObject_SetDispatchQueue_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = OSObject_SetDispatchQueue_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
OSObject::CopyDispatchQueue_Invoke(const IORPC _rpc,
        kern_return_t (OSObject::*func)(OSObject_CopyDispatchQueue_Args))
{
    OSObject_CopyDispatchQueue_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (OSObject_CopyDispatchQueue_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.message->content.__name[0],
        (IODispatchQueue **)&rpc.reply->content.queue);

    {
        rpc.reply->content.hdr.msgid   = OSObject_CopyDispatchQueue_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = OSObject_CopyDispatchQueue_Rpl_ObjRefs;
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
            rpc.reply->content.queue = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}



