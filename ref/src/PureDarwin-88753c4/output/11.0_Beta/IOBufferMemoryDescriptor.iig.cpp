/* iig(DriverKit-48) generated from IOBufferMemoryDescriptor.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOBufferMemoryDescriptor.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOBufferMemoryDescriptor.h>


struct IOBufferMemoryDescriptor_Create_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  options;
    uint64_t  capacity;
    uint64_t  alignment;
};
#pragma pack(4)
struct IOBufferMemoryDescriptor_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOBufferMemoryDescriptor_Create_Msg_Content content;
};
#pragma pack()
#define IOBufferMemoryDescriptor_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOBufferMemoryDescriptor_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOBufferMemoryDescriptor_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IOBufferMemoryDescriptor_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOBufferMemoryDescriptor_Create_Rpl_Content content;
};
#pragma pack()
#define IOBufferMemoryDescriptor_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOBufferMemoryDescriptor_Create_Rpl_Content, memory) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOBufferMemoryDescriptor_Create_Msg * message;
        struct IOBufferMemoryDescriptor_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOBufferMemoryDescriptor_Create_Invocation;

struct IOBufferMemoryDescriptor_SetLength_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  length;
};
#pragma pack(4)
struct IOBufferMemoryDescriptor_SetLength_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOBufferMemoryDescriptor_SetLength_Msg_Content content;
};
#pragma pack()
#define IOBufferMemoryDescriptor_SetLength_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOBufferMemoryDescriptor_SetLength_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOBufferMemoryDescriptor_SetLength_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOBufferMemoryDescriptor_SetLength_Rpl
{
    IORPCMessageMach           mach;
    IOBufferMemoryDescriptor_SetLength_Rpl_Content content;
};
#pragma pack()
#define IOBufferMemoryDescriptor_SetLength_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOBufferMemoryDescriptor_SetLength_Msg * message;
        struct IOBufferMemoryDescriptor_SetLength_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOBufferMemoryDescriptor_SetLength_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gIODispatchQueueMetaClass;
extern OSMetaClass * gIOServiceMetaClass;
extern OSMetaClass * gIOMemoryMapMetaClass;
#endif /* !KERNEL */

#if !KERNEL

#define IOBufferMemoryDescriptor_QueueNames  ""

#define IOBufferMemoryDescriptor_MethodNames  ""

#define IOBufferMemoryDescriptorMetaClass_MethodNames  ""

struct OSClassDescription_IOBufferMemoryDescriptor_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOBufferMemoryDescriptor_QueueNames)];
    char               methodNames[sizeof(IOBufferMemoryDescriptor_MethodNames)];
    char               metaMethodNames[sizeof(IOBufferMemoryDescriptorMetaClass_MethodNames)];
};

const struct OSClassDescription_IOBufferMemoryDescriptor_t
OSClassDescription_IOBufferMemoryDescriptor =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOBufferMemoryDescriptor_t),
        .name                    = "IOBufferMemoryDescriptor",
        .superName               = "IOMemoryDescriptor",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOBufferMemoryDescriptor_QueueNames),
        .methodNamesSize         = sizeof(IOBufferMemoryDescriptor_MethodNames),
        .metaMethodNamesSize     = sizeof(IOBufferMemoryDescriptorMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOBufferMemoryDescriptor_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOBufferMemoryDescriptor_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOBufferMemoryDescriptor_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOBufferMemoryDescriptor_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOBufferMemoryDescriptor_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOBufferMemoryDescriptor_QueueNames,
    .methodNames     = IOBufferMemoryDescriptor_MethodNames,
    .metaMethodNames = IOBufferMemoryDescriptorMetaClass_MethodNames,
};

static kern_return_t
IOBufferMemoryDescriptor_New(OSMetaClass * instance);

OSClassLoadInformation
IOBufferMemoryDescriptor_Class = 
{
    .description       = &OSClassDescription_IOBufferMemoryDescriptor.base,
    .instanceSize      = sizeof(IOBufferMemoryDescriptor),

    .New               = &IOBufferMemoryDescriptor_New,
};

const void *
gIOBufferMemoryDescriptor_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOBufferMemoryDescriptor_Class;

OSMetaClass * gIOBufferMemoryDescriptorMetaClass;

static kern_return_t
IOBufferMemoryDescriptor_New(OSMetaClass * instance)
{
    if (!new(instance) IOBufferMemoryDescriptorMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOBufferMemoryDescriptorMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOBufferMemoryDescriptor) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOBufferMemoryDescriptor::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOBufferMemoryDescriptor::_Dispatch(IOBufferMemoryDescriptor * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOBufferMemoryDescriptor_SetLength_ID:
            ret = self->SetLength_Invoke(rpc, &IOBufferMemoryDescriptor::SetLength_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = IOMemoryDescriptor::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IOBufferMemoryDescriptor::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOBufferMemoryDescriptorMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOBufferMemoryDescriptor_Create_ID:
            ret = IOBufferMemoryDescriptor::Create_Invoke(rpc, &IOBufferMemoryDescriptor::Create_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOBufferMemoryDescriptor::Create(
        uint64_t options,
        uint64_t capacity,
        uint64_t alignment,
        IOBufferMemoryDescriptor ** memory)
{
    kern_return_t ret;
    union
    {
        IOBufferMemoryDescriptor_Create_Msg msg;
        struct
        {
            IOBufferMemoryDescriptor_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOBufferMemoryDescriptor_Create_Msg * msg = &buf.msg;
    struct IOBufferMemoryDescriptor_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOBufferMemoryDescriptor_Create_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IOBufferMemoryDescriptor);
    msg->content.hdr.objectRefs = IOBufferMemoryDescriptor_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.options = options;
    msg->content.capacity = capacity;
    msg->content.alignment = alignment;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOBufferMemoryDescriptor)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOBufferMemoryDescriptor_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOBufferMemoryDescriptor_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *memory = OSDynamicCast(IOBufferMemoryDescriptor, (OSObject *) rpl->content.memory);
        if (rpl->content.memory && !*memory) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOBufferMemoryDescriptor::SetLength(
        uint64_t length,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOBufferMemoryDescriptor_SetLength_Msg msg;
        struct
        {
            IOBufferMemoryDescriptor_SetLength_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOBufferMemoryDescriptor_SetLength_Msg * msg = &buf.msg;
    struct IOBufferMemoryDescriptor_SetLength_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOBufferMemoryDescriptor_SetLength_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOBufferMemoryDescriptor_SetLength_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.length = length;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOBufferMemoryDescriptor_SetLength_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOBufferMemoryDescriptor_SetLength_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOBufferMemoryDescriptor::Create_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IOBufferMemoryDescriptor_Create_Args))
{
    IOBufferMemoryDescriptor_Create_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOBufferMemoryDescriptor_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(        
        rpc.message->content.options,
        rpc.message->content.capacity,
        rpc.message->content.alignment,
        (IOBufferMemoryDescriptor **)&rpc.reply->content.memory);

    {
        rpc.reply->content.hdr.msgid   = IOBufferMemoryDescriptor_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOBufferMemoryDescriptor_Create_Rpl_ObjRefs;
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
IOBufferMemoryDescriptor::SetLength_Invoke(const IORPC _rpc,
        kern_return_t (IOBufferMemoryDescriptor::*func)(IOBufferMemoryDescriptor_SetLength_Args))
{
    IOBufferMemoryDescriptor_SetLength_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOBufferMemoryDescriptor_SetLength_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.length);

    {
        rpc.reply->content.hdr.msgid   = IOBufferMemoryDescriptor_SetLength_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOBufferMemoryDescriptor_SetLength_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}



