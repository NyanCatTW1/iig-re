/* iig(DriverKit-48) generated from IOMemoryDescriptor.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOMemoryDescriptor.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOMemoryDescriptor.h>

/* @iig implementation */
#include <DriverKit/IOService.h>
/* @iig end */


struct IOMemoryDescriptor__CopyState_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IOMemoryDescriptor__CopyState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOMemoryDescriptor__CopyState_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor__CopyState_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryDescriptor__CopyState_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOMemoryDescriptor__CopyState_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    _IOMDPrivateState  state;
};
#pragma pack(4)
struct IOMemoryDescriptor__CopyState_Rpl
{
    IORPCMessageMach           mach;
    IOMemoryDescriptor__CopyState_Rpl_Content content;
};
#pragma pack()
#define IOMemoryDescriptor__CopyState_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOMemoryDescriptor__CopyState_Msg * message;
        struct IOMemoryDescriptor__CopyState_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOMemoryDescriptor__CopyState_Invocation;

struct IOMemoryDescriptor_CreateMapping_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  options;
    uint64_t  address;
    uint64_t  offset;
    uint64_t  length;
    uint64_t  alignment;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateMapping_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOMemoryDescriptor_CreateMapping_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateMapping_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryDescriptor_CreateMapping_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOMemoryDescriptor_CreateMapping_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  map;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateMapping_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOMemoryDescriptor_CreateMapping_Rpl_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateMapping_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryDescriptor_CreateMapping_Rpl_Content, map) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOMemoryDescriptor_CreateMapping_Msg * message;
        struct IOMemoryDescriptor_CreateMapping_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOMemoryDescriptor_CreateMapping_Invocation;

struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  memoryDescriptorCreateOptions;
    uint64_t  offset;
    uint64_t  length;
    OSObjectRef  ofDescriptor;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content, ofDescriptor) / sizeof(OSObjectRef))))

struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_Content, memory) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg * message;
        struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOMemoryDescriptor_CreateSubMemoryDescriptor_Invocation;

struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  memoryDescriptorCreateOptions;
    uint32_t  withDescriptorsCount;
    const IOMemoryDescriptor * *  withDescriptors;
    IOMemoryDescriptor * __withDescriptors[32];
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_Content, memory) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg * message;
        struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOMemoryDescriptor_CreateWithMemoryDescriptors_Invocation;

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

#define IOMemoryDescriptor_QueueNames  ""

#define IOMemoryDescriptor_MethodNames  ""

#define IOMemoryDescriptorMetaClass_MethodNames  ""

struct OSClassDescription_IOMemoryDescriptor_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOMemoryDescriptor_QueueNames)];
    char               methodNames[sizeof(IOMemoryDescriptor_MethodNames)];
    char               metaMethodNames[sizeof(IOMemoryDescriptorMetaClass_MethodNames)];
};

const struct OSClassDescription_IOMemoryDescriptor_t
OSClassDescription_IOMemoryDescriptor =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOMemoryDescriptor_t),
        .name                    = "IOMemoryDescriptor",
        .superName               = "OSObject",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOMemoryDescriptor_QueueNames),
        .methodNamesSize         = sizeof(IOMemoryDescriptor_MethodNames),
        .metaMethodNamesSize     = sizeof(IOMemoryDescriptorMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOMemoryDescriptor_QueueNames,
    .methodNames     = IOMemoryDescriptor_MethodNames,
    .metaMethodNames = IOMemoryDescriptorMetaClass_MethodNames,
};

static kern_return_t
IOMemoryDescriptor_New(OSMetaClass * instance);

OSClassLoadInformation
IOMemoryDescriptor_Class = 
{
    .description       = &OSClassDescription_IOMemoryDescriptor.base,
    .instanceSize      = sizeof(IOMemoryDescriptor),

    .New               = &IOMemoryDescriptor_New,
};

const void *
gIOMemoryDescriptor_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOMemoryDescriptor_Class;

OSMetaClass * gIOMemoryDescriptorMetaClass;

static kern_return_t
IOMemoryDescriptor_New(OSMetaClass * instance)
{
    if (!new(instance) IOMemoryDescriptorMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOMemoryDescriptorMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOMemoryDescriptor) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOMemoryDescriptor::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOMemoryDescriptor::_Dispatch(IOMemoryDescriptor * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOMemoryDescriptor__CopyState_ID:
            ret = self->_CopyState_Invoke(rpc, &IOMemoryDescriptor::_CopyState_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOMemoryDescriptor_CreateMapping_ID:
            ret = self->CreateMapping_Invoke(rpc, &IOMemoryDescriptor::CreateMapping_Impl);
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
IOMemoryDescriptor::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOMemoryDescriptorMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOMemoryDescriptor_CreateSubMemoryDescriptor_ID:
            ret = IOMemoryDescriptor::CreateSubMemoryDescriptor_Invoke(rpc, &IOMemoryDescriptor::CreateSubMemoryDescriptor_Impl);
            break;
#endif /* !KERNEL */
#if KERNEL
        case IOMemoryDescriptor_CreateWithMemoryDescriptors_ID:
            ret = IOMemoryDescriptor::CreateWithMemoryDescriptors_Invoke(rpc, &IOMemoryDescriptor::CreateWithMemoryDescriptors_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOMemoryDescriptor::_CopyState(
        _IOMDPrivateState * state,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOMemoryDescriptor__CopyState_Msg msg;
        struct
        {
            IOMemoryDescriptor__CopyState_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor__CopyState_Msg * msg = &buf.msg;
    struct IOMemoryDescriptor__CopyState_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOMemoryDescriptor__CopyState_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOMemoryDescriptor__CopyState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOMemoryDescriptor__CopyState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor__CopyState_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (state) *state = rpl->content.state;
    }


    return (ret);
}

kern_return_t
IOMemoryDescriptor::CreateMapping(
        uint64_t options,
        uint64_t address,
        uint64_t offset,
        uint64_t length,
        uint64_t alignment,
        IOMemoryMap ** map,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOMemoryDescriptor_CreateMapping_Msg msg;
        struct
        {
            IOMemoryDescriptor_CreateMapping_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor_CreateMapping_Msg * msg = &buf.msg;
    struct IOMemoryDescriptor_CreateMapping_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOMemoryDescriptor_CreateMapping_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOMemoryDescriptor_CreateMapping_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.options = options;
    msg->content.address = address;
    msg->content.offset = offset;
    msg->content.length = length;
    msg->content.alignment = alignment;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOMemoryDescriptor_CreateMapping_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor_CreateMapping_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *map = OSDynamicCast(IOMemoryMap, (OSObject *) rpl->content.map);
        if (rpl->content.map && !*map) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOMemoryDescriptor::CreateSubMemoryDescriptor(
        uint64_t memoryDescriptorCreateOptions,
        uint64_t offset,
        uint64_t length,
        IOMemoryDescriptor * ofDescriptor,
        IOMemoryDescriptor ** memory)
{
    kern_return_t ret;
    union
    {
        IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg msg;
        struct
        {
            IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg * msg = &buf.msg;
    struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOMemoryDescriptor_CreateSubMemoryDescriptor_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IOMemoryDescriptor);
    msg->content.hdr.objectRefs = IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.memoryDescriptorCreateOptions = memoryDescriptorCreateOptions;
    msg->content.offset = offset;
    msg->content.length = length;
    msg->content.ofDescriptor = (OSObjectRef) ofDescriptor;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOMemoryDescriptor)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOMemoryDescriptor_CreateSubMemoryDescriptor_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOMemoryDescriptor::CreateWithMemoryDescriptors(
        uint64_t memoryDescriptorCreateOptions,
        uint32_t withDescriptorsCount,
        const IOMemoryDescriptor * * withDescriptors,
        IOMemoryDescriptor ** memory)
{
    kern_return_t ret;
    union
    {
        IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg msg;
        struct
        {
            IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg * msg = &buf.msg;
    struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOMemoryDescriptor_CreateWithMemoryDescriptors_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IOMemoryDescriptor);
    msg->content.hdr.objectRefs = IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.memoryDescriptorCreateOptions = memoryDescriptorCreateOptions;
    msg->content.withDescriptorsCount = withDescriptorsCount;
    msg->content.withDescriptors = withDescriptors;
    bcopy(withDescriptors, &msg->content.__withDescriptors[0], withDescriptorsCount * sizeof(msg->content.__withDescriptors[0]));
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOMemoryDescriptor)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOMemoryDescriptor_CreateWithMemoryDescriptors_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOMemoryDescriptor::_CopyState_Invoke(const IORPC _rpc,
        kern_return_t (IOMemoryDescriptor::*func)(IOMemoryDescriptor__CopyState_Args))
{
    IOMemoryDescriptor__CopyState_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOMemoryDescriptor__CopyState_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.reply->content.state);

    {
        rpc.reply->content.hdr.msgid   = IOMemoryDescriptor__CopyState_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOMemoryDescriptor__CopyState_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOMemoryDescriptor::CreateMapping_Invoke(const IORPC _rpc,
        kern_return_t (IOMemoryDescriptor::*func)(IOMemoryDescriptor_CreateMapping_Args))
{
    IOMemoryDescriptor_CreateMapping_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOMemoryDescriptor_CreateMapping_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.options,
        rpc.message->content.address,
        rpc.message->content.offset,
        rpc.message->content.length,
        rpc.message->content.alignment,
        (IOMemoryMap **)&rpc.reply->content.map);

    {
        rpc.reply->content.hdr.msgid   = IOMemoryDescriptor_CreateMapping_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOMemoryDescriptor_CreateMapping_Rpl_ObjRefs;
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
            rpc.reply->content.map = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOMemoryDescriptor::CreateSubMemoryDescriptor_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IOMemoryDescriptor_CreateSubMemoryDescriptor_Args))
{
    IOMemoryDescriptor_CreateSubMemoryDescriptor_Invocation rpc = { _rpc };
    kern_return_t ret;
    IOMemoryDescriptor * ofDescriptor;

    if (IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    ofDescriptor = OSDynamicCast(IOMemoryDescriptor, (OSObject *) rpc.message->content.ofDescriptor);
    if (!ofDescriptor && rpc.message->content.ofDescriptor) return (kIOReturnBadArgument);

    ret = (*func)(        
        rpc.message->content.memoryDescriptorCreateOptions,
        rpc.message->content.offset,
        rpc.message->content.length,
        ofDescriptor,
        (IOMemoryDescriptor **)&rpc.reply->content.memory);

    {
        rpc.reply->content.hdr.msgid   = IOMemoryDescriptor_CreateSubMemoryDescriptor_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_ObjRefs;
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
IOMemoryDescriptor::CreateWithMemoryDescriptors_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IOMemoryDescriptor_CreateWithMemoryDescriptors_Args))
{
    IOMemoryDescriptor_CreateWithMemoryDescriptors_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(        
        rpc.message->content.memoryDescriptorCreateOptions,
        rpc.message->content.withDescriptorsCount,
        &rpc.message->content.__withDescriptors[0],
        (IOMemoryDescriptor **)&rpc.reply->content.memory);

    {
        rpc.reply->content.hdr.msgid   = IOMemoryDescriptor_CreateWithMemoryDescriptors_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_ObjRefs;
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



