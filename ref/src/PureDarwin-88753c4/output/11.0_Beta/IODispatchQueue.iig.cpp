/* iig(DriverKit-48) generated from IODispatchQueue.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IODispatchQueue.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IODispatchQueue.h>


struct IODispatchQueue_SetPort_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IODispatchQueue_SetPort_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IODispatchQueue_SetPort_Msg_Content content;
};
#pragma pack()
#define IODispatchQueue_SetPort_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODispatchQueue_SetPort_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODispatchQueue_SetPort_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODispatchQueue_SetPort_Rpl
{
    IORPCMessageMach           mach;
    IODispatchQueue_SetPort_Rpl_Content content;
};
#pragma pack()
#define IODispatchQueue_SetPort_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchQueue_SetPort_Msg * message;
        struct IODispatchQueue_SetPort_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODispatchQueue_SetPort_Invocation;

struct IODispatchQueue_Create_Msg_Content
{
    IORPCMessage hdr;
    const char *  name;
    char __name[256];
    uint64_t  options;
    uint64_t  priority;
};
#pragma pack(4)
struct IODispatchQueue_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODispatchQueue_Create_Msg_Content content;
};
#pragma pack()
#define IODispatchQueue_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODispatchQueue_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODispatchQueue_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  queue;
};
#pragma pack(4)
struct IODispatchQueue_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODispatchQueue_Create_Rpl_Content content;
};
#pragma pack()
#define IODispatchQueue_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IODispatchQueue_Create_Rpl_Content, queue) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchQueue_Create_Msg * message;
        struct IODispatchQueue_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODispatchQueue_Create_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gOSStringMetaClass;
#endif /* !KERNEL */

#if KERNEL
OSDefineMetaClassAndStructors(IODispatchQueue, OSObject);
#endif /* KERNEL */

#if !KERNEL

#define IODispatchQueue_QueueNames  ""

#define IODispatchQueue_MethodNames  ""

#define IODispatchQueueMetaClass_MethodNames  ""

struct OSClassDescription_IODispatchQueue_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IODispatchQueue_QueueNames)];
    char               methodNames[sizeof(IODispatchQueue_MethodNames)];
    char               metaMethodNames[sizeof(IODispatchQueueMetaClass_MethodNames)];
};

const struct OSClassDescription_IODispatchQueue_t
OSClassDescription_IODispatchQueue =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IODispatchQueue_t),
        .name                    = "IODispatchQueue",
        .superName               = "OSObject",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IODispatchQueue_QueueNames),
        .methodNamesSize         = sizeof(IODispatchQueue_MethodNames),
        .metaMethodNamesSize     = sizeof(IODispatchQueueMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IODispatchQueue_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IODispatchQueue_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IODispatchQueue_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IODispatchQueue_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IODispatchQueue_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IODispatchQueue_QueueNames,
    .methodNames     = IODispatchQueue_MethodNames,
    .metaMethodNames = IODispatchQueueMetaClass_MethodNames,
};

static kern_return_t
IODispatchQueue_New(OSMetaClass * instance);

OSClassLoadInformation
IODispatchQueue_Class = 
{
    .description       = &OSClassDescription_IODispatchQueue.base,
    .instanceSize      = sizeof(IODispatchQueue),

    .New               = &IODispatchQueue_New,
};

const void *
gIODispatchQueue_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IODispatchQueue_Class;

OSMetaClass * gIODispatchQueueMetaClass;

static kern_return_t
IODispatchQueue_New(OSMetaClass * instance)
{
    if (!new(instance) IODispatchQueueMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IODispatchQueueMetaClass::New(OSObject * instance)
{
    if (!new(instance) IODispatchQueue) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IODispatchQueue::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IODispatchQueue::_Dispatch(IODispatchQueue * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IODispatchQueue_SetPort_ID:
            ret = self->SetPort_Invoke(rpc, &IODispatchQueue::SetPort_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSObject::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IODispatchQueue::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IODispatchQueueMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IODispatchQueue_Create_ID:
            ret = IODispatchQueue::Create_Invoke(rpc, &IODispatchQueue::Create_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IODispatchQueue::SetPort(
        mach_port_t port,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODispatchQueue_SetPort_Msg msg;
        struct
        {
            IODispatchQueue_SetPort_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODispatchQueue_SetPort_Msg * msg = &buf.msg;
    struct IODispatchQueue_SetPort_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODispatchQueue_SetPort_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODispatchQueue_SetPort_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->mach.objects[1].type = MACH_MSG_PORT_DESCRIPTOR;
    msg->mach.objects[1].disposition = MACH_MSG_TYPE_MAKE_SEND;
    msg->mach.objects[1].name = port;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODispatchQueue_SetPort_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IODispatchQueue_SetPort_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IODispatchQueue::Create_Call(
        const char * name,
        uint64_t options,
        uint64_t priority,
        IODispatchQueue ** queue)
{
    kern_return_t ret;
    union
    {
        IODispatchQueue_Create_Msg msg;
        struct
        {
            IODispatchQueue_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODispatchQueue_Create_Msg * msg = &buf.msg;
    struct IODispatchQueue_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODispatchQueue_Create_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IODispatchQueue);
    msg->content.hdr.objectRefs = IODispatchQueue_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.name = name;
    strlcpy(&msg->content.__name[0], name, sizeof(msg->content.__name));
    msg->content.options = options;
    msg->content.priority = priority;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IODispatchQueue)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODispatchQueue_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IODispatchQueue_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IODispatchQueue::SetPort_Invoke(const IORPC _rpc,
        kern_return_t (IODispatchQueue::*func)(IODispatchQueue_SetPort_Args))
{
    IODispatchQueue_SetPort_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODispatchQueue_SetPort_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->objects[1].name);

    {
        rpc.reply->content.hdr.msgid   = IODispatchQueue_SetPort_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODispatchQueue_SetPort_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODispatchQueue::Create_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IODispatchQueue_Create_Args))
{
    IODispatchQueue_Create_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODispatchQueue_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(        
        &rpc.message->content.__name[0],
        rpc.message->content.options,
        rpc.message->content.priority,
        (IODispatchQueue **)&rpc.reply->content.queue);

    {
        rpc.reply->content.hdr.msgid   = IODispatchQueue_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODispatchQueue_Create_Rpl_ObjRefs;
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



