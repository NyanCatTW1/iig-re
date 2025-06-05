/* iig(DriverKit-48) generated from IOUserClient.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOUserClient.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOUserClient.h>

/* @iig implementation */
#include <DriverKit/IOBufferMemoryDescriptor.h>
/* @iig end */


struct IOUserClient_AsyncCompletion_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
    IOReturn  status;
    const unsigned long long *  asyncData;
    unsigned long long __asyncData[16];
    uint32_t  asyncDataCount;
};
#pragma pack(4)
struct IOUserClient_AsyncCompletion_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOUserClient_AsyncCompletion_Msg_Content content;
};
#pragma pack()
#define IOUserClient_AsyncCompletion_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient_AsyncCompletion_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOUserClient_AsyncCompletion_Msg_Content, action) / sizeof(OSObjectRef))))

struct IOUserClient_AsyncCompletion_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOUserClient_AsyncCompletion_Rpl
{
    IORPCMessageMach           mach;
    IOUserClient_AsyncCompletion_Rpl_Content content;
};
#pragma pack()
#define IOUserClient_AsyncCompletion_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserClient_AsyncCompletion_Msg * message;
        struct IOUserClient_AsyncCompletion_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserClient_AsyncCompletion_Invocation;

struct IOUserClient_CopyClientMemoryForType_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  type;
};
#pragma pack(4)
struct IOUserClient_CopyClientMemoryForType_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserClient_CopyClientMemoryForType_Msg_Content content;
};
#pragma pack()
#define IOUserClient_CopyClientMemoryForType_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient_CopyClientMemoryForType_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOUserClient_CopyClientMemoryForType_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    uint64_t  options;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IOUserClient_CopyClientMemoryForType_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserClient_CopyClientMemoryForType_Rpl_Content content;
};
#pragma pack()
#define IOUserClient_CopyClientMemoryForType_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient_CopyClientMemoryForType_Rpl_Content, memory) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserClient_CopyClientMemoryForType_Msg * message;
        struct IOUserClient_CopyClientMemoryForType_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserClient_CopyClientMemoryForType_Invocation;

struct IOUserClient_CreateMemoryDescriptorFromClient_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  memoryDescriptorCreateOptions;
    uint32_t  segmentsCount;
    const IOAddressSegment *  segments;
    IOAddressSegment __segments[32];
};
#pragma pack(4)
struct IOUserClient_CreateMemoryDescriptorFromClient_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserClient_CreateMemoryDescriptorFromClient_Msg_Content content;
};
#pragma pack()
#define IOUserClient_CreateMemoryDescriptorFromClient_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient_CreateMemoryDescriptorFromClient_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOUserClient_CreateMemoryDescriptorFromClient_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IOUserClient_CreateMemoryDescriptorFromClient_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserClient_CreateMemoryDescriptorFromClient_Rpl_Content content;
};
#pragma pack()
#define IOUserClient_CreateMemoryDescriptorFromClient_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient_CreateMemoryDescriptorFromClient_Rpl_Content, memory) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserClient_CreateMemoryDescriptorFromClient_Msg * message;
        struct IOUserClient_CreateMemoryDescriptorFromClient_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserClient_CreateMemoryDescriptorFromClient_Invocation;

struct IOUserClient__ExternalMethod_Msg_Content
{
    IORPCMessage hdr;
    uint64_t  selector;
    const unsigned long long *  scalarInput;
    unsigned long long __scalarInput[16];
    uint32_t  scalarInputCount;
    OSObjectRef  structureInput;
    OSObjectRef  structureInputDescriptor;
    uint64_t  structureOutputMaximumSize;
    OSObjectRef  structureOutputDescriptor;
    OSObjectRef  completion;
};
#pragma pack(4)
struct IOUserClient__ExternalMethod_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[5];
    IOUserClient__ExternalMethod_Msg_Content content;
};
#pragma pack()
#define IOUserClient__ExternalMethod_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient__ExternalMethod_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOUserClient__ExternalMethod_Msg_Content, structureInput) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOUserClient__ExternalMethod_Msg_Content, structureInputDescriptor) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOUserClient__ExternalMethod_Msg_Content, structureOutputDescriptor) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOUserClient__ExternalMethod_Msg_Content, completion) / sizeof(OSObjectRef))))

struct IOUserClient__ExternalMethod_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    unsigned long long *  scalarOutput;
    unsigned long long __scalarOutput[16];
    uint32_t  scalarOutputCount;
    OSObjectRef  structureOutput;
};
#pragma pack(4)
struct IOUserClient__ExternalMethod_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserClient__ExternalMethod_Rpl_Content content;
};
#pragma pack()
#define IOUserClient__ExternalMethod_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient__ExternalMethod_Rpl_Content, structureOutput) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserClient__ExternalMethod_Msg * message;
        struct IOUserClient__ExternalMethod_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserClient__ExternalMethod_Invocation;

struct IOUserClient_KernelCompletion_Msg_Content
{
    IORPCMessage hdr;
    OSObjectRef  action;
    IOReturn  status;
    const unsigned long long *  asyncData;
    unsigned long long __asyncData[16];
    uint32_t  asyncDataCount;
};
#pragma pack(4)
struct IOUserClient_KernelCompletion_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[2];
    IOUserClient_KernelCompletion_Msg_Content content;
};
#pragma pack()
#define IOUserClient_KernelCompletion_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserClient_KernelCompletion_Msg_Content, hdr.object) / sizeof(OSObjectRef))) | (1ULL << (__builtin_offsetof(IOUserClient_KernelCompletion_Msg_Content, action) / sizeof(OSObjectRef))))

struct IOUserClient_KernelCompletion_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOUserClient_KernelCompletion_Rpl
{
    IORPCMessageMach           mach;
    IOUserClient_KernelCompletion_Rpl_Content content;
};
#pragma pack()
#define IOUserClient_KernelCompletion_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserClient_KernelCompletion_Msg * message;
        struct IOUserClient_KernelCompletion_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserClient_KernelCompletion_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gIODispatchQueueMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gIOMemoryMapMetaClass;
#endif /* !KERNEL */

#if !KERNEL

#define IOUserClient_QueueNames  ""

#define IOUserClient_MethodNames  ""

#define IOUserClientMetaClass_MethodNames  ""

struct OSClassDescription_IOUserClient_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOUserClient_QueueNames)];
    char               methodNames[sizeof(IOUserClient_MethodNames)];
    char               metaMethodNames[sizeof(IOUserClientMetaClass_MethodNames)];
};

const struct OSClassDescription_IOUserClient_t
OSClassDescription_IOUserClient =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOUserClient_t),
        .name                    = "IOUserClient",
        .superName               = "IOService",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOUserClient_QueueNames),
        .methodNamesSize         = sizeof(IOUserClient_MethodNames),
        .metaMethodNamesSize     = sizeof(IOUserClientMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOUserClient_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOUserClient_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOUserClient_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOUserClient_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOUserClient_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOUserClient_QueueNames,
    .methodNames     = IOUserClient_MethodNames,
    .metaMethodNames = IOUserClientMetaClass_MethodNames,
};

static kern_return_t
IOUserClient_New(OSMetaClass * instance);

OSClassLoadInformation
IOUserClient_Class = 
{
    .description       = &OSClassDescription_IOUserClient.base,
    .instanceSize      = sizeof(IOUserClient),

    .New               = &IOUserClient_New,
};

const void *
gIOUserClient_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOUserClient_Class;

OSMetaClass * gIOUserClientMetaClass;

static kern_return_t
IOUserClient_New(OSMetaClass * instance)
{
    if (!new(instance) IOUserClientMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOUserClientMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOUserClient) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOUserClient::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOUserClient::_Dispatch(IOUserClient * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOUserClient_CreateMemoryDescriptorFromClient_ID:
            ret = self->CreateMemoryDescriptorFromClient_Invoke(rpc, &IOUserClient::CreateMemoryDescriptorFromClient_Impl);
            break;
#endif /* !KERNEL */
        case IOUserClient__ExternalMethod_ID:
            ret = self->_ExternalMethod_Invoke(rpc, &IOUserClient::_ExternalMethod_Impl);
            break;
#if KERNEL
        case IOUserClient_KernelCompletion_ID:
            ret = self->KernelCompletion_Invoke(rpc, &IOUserClient::KernelCompletion_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = IOService::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IOUserClient::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOUserClientMetaClass::Dispatch(const IORPC rpc)
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

void
IOUserClient::AsyncCompletion(
        OSAction * action,
        IOReturn status,
        const unsigned long long * asyncData,
        uint32_t asyncDataCount,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOUserClient_AsyncCompletion_Msg msg;
    } buf;
    struct IOUserClient_AsyncCompletion_Msg * msg = &buf.msg;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserClient_AsyncCompletion_ID;
    msg->content.hdr.object = (OSObjectRef) action;
    msg->content.hdr.objectRefs = IOUserClient_AsyncCompletion_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    msg->content.status = status;
    msg->content.asyncData = asyncData;
    bcopy(asyncData, &msg->content.__asyncData[0], asyncDataCount * sizeof(msg->content.__asyncData[0]));
    msg->content.asyncDataCount = asyncDataCount;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(*msg), .reply = NULL, .replySize = 0 };
    ret = action->Invoke(rpc);

}

kern_return_t
IOUserClient::CopyClientMemoryForType(
        uint64_t type,
        uint64_t * options,
        IOMemoryDescriptor ** memory,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOUserClient_CopyClientMemoryForType_Msg msg;
        struct
        {
            IOUserClient_CopyClientMemoryForType_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOUserClient_CopyClientMemoryForType_Msg * msg = &buf.msg;
    struct IOUserClient_CopyClientMemoryForType_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserClient_CopyClientMemoryForType_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOUserClient_CopyClientMemoryForType_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.type = type;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOUserClient_CopyClientMemoryForType_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOUserClient_CopyClientMemoryForType_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (options) *options = rpl->content.options;
        *memory = OSDynamicCast(IOMemoryDescriptor, (OSObject *) rpl->content.memory);
        if (rpl->content.memory && !*memory) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOUserClient::CreateMemoryDescriptorFromClient(
        uint64_t memoryDescriptorCreateOptions,
        uint32_t segmentsCount,
        const IOAddressSegment * segments,
        IOMemoryDescriptor ** memory,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOUserClient_CreateMemoryDescriptorFromClient_Msg msg;
        struct
        {
            IOUserClient_CreateMemoryDescriptorFromClient_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOUserClient_CreateMemoryDescriptorFromClient_Msg * msg = &buf.msg;
    struct IOUserClient_CreateMemoryDescriptorFromClient_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserClient_CreateMemoryDescriptorFromClient_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOUserClient_CreateMemoryDescriptorFromClient_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.memoryDescriptorCreateOptions = memoryDescriptorCreateOptions;
    msg->content.segmentsCount = segmentsCount;
    msg->content.segments = segments;
    bcopy(segments, &msg->content.__segments[0], segmentsCount * sizeof(msg->content.__segments[0]));
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOUserClient_CreateMemoryDescriptorFromClient_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOUserClient_CreateMemoryDescriptorFromClient_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOUserClient::_ExternalMethod(
        uint64_t selector,
        const unsigned long long * scalarInput,
        uint32_t scalarInputCount,
        OSData * structureInput,
        IOMemoryDescriptor * structureInputDescriptor,
        unsigned long long * scalarOutput,
        uint32_t * scalarOutputCount,
        uint64_t structureOutputMaximumSize,
        OSData ** structureOutput,
        IOMemoryDescriptor * structureOutputDescriptor,
        OSAction * completion,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOUserClient__ExternalMethod_Msg msg;
        struct
        {
            IOUserClient__ExternalMethod_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOUserClient__ExternalMethod_Msg * msg = &buf.msg;
    struct IOUserClient__ExternalMethod_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserClient__ExternalMethod_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOUserClient__ExternalMethod_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 5;

    msg->content.selector = selector;
    msg->content.scalarInput = scalarInput;
    bcopy(scalarInput, &msg->content.__scalarInput[0], scalarInputCount * sizeof(msg->content.__scalarInput[0]));
    msg->content.scalarInputCount = scalarInputCount;
    msg->content.structureInput = (OSObjectRef) structureInput;
    msg->content.structureInputDescriptor = (OSObjectRef) structureInputDescriptor;
    msg->content.structureOutputMaximumSize = structureOutputMaximumSize;
    msg->content.structureOutputDescriptor = (OSObjectRef) structureOutputDescriptor;
    msg->content.completion = (OSObjectRef) completion;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOUserClient__ExternalMethod_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOUserClient__ExternalMethod_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        bcopy(&rpl->content.__scalarOutput[0], scalarOutput, rpl->content.scalarOutputCount * sizeof(rpl->content.__scalarOutput[0]));
        if (scalarOutputCount) *scalarOutputCount = rpl->content.scalarOutputCount;
        *structureOutput = OSDynamicCast(OSData, (OSObject *) rpl->content.structureOutput);
        if (rpl->content.structureOutput && !*structureOutput) ret = kIOReturnBadArgument;
    }


    return (ret);
}

void
IOUserClient::KernelCompletion(
        OSAction * action,
        IOReturn status,
        const unsigned long long * asyncData,
        uint32_t asyncDataCount,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOUserClient_KernelCompletion_Msg msg;
    } buf;
    struct IOUserClient_KernelCompletion_Msg * msg = &buf.msg;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 1*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserClient_KernelCompletion_ID;
    msg->content.hdr.object = (OSObjectRef) action;
    msg->content.hdr.objectRefs = IOUserClient_KernelCompletion_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->content.action = (OSObjectRef) action;
    msg->content.status = status;
    msg->content.asyncData = asyncData;
    bcopy(asyncData, &msg->content.__asyncData[0], asyncDataCount * sizeof(msg->content.__asyncData[0]));
    msg->content.asyncDataCount = asyncDataCount;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(*msg), .reply = NULL, .replySize = 0 };
    ret = action->Invoke(rpc);

}

kern_return_t
IOUserClient::AsyncCompletion_Invoke(const IORPC _rpc,
        void (IOUserClient::*func)(IOUserClient_AsyncCompletion_Args))
{
    IOUserClient_AsyncCompletion_Invocation rpc = { _rpc };
    OSAction * action;

    if (IOUserClient_AsyncCompletion_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (this->*func)(        
        action,
        rpc.message->content.status,
        &rpc.message->content.__asyncData[0],
        rpc.message->content.asyncDataCount);

    return (kIOReturnSuccess);
}

kern_return_t
IOUserClient::CopyClientMemoryForType_Invoke(const IORPC _rpc,
        kern_return_t (IOUserClient::*func)(IOUserClient_CopyClientMemoryForType_Args))
{
    IOUserClient_CopyClientMemoryForType_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOUserClient_CopyClientMemoryForType_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.type,
        &rpc.reply->content.options,
        (IOMemoryDescriptor **)&rpc.reply->content.memory);

    {
        rpc.reply->content.hdr.msgid   = IOUserClient_CopyClientMemoryForType_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOUserClient_CopyClientMemoryForType_Rpl_ObjRefs;
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
IOUserClient::CreateMemoryDescriptorFromClient_Invoke(const IORPC _rpc,
        kern_return_t (IOUserClient::*func)(IOUserClient_CreateMemoryDescriptorFromClient_Args))
{
    IOUserClient_CreateMemoryDescriptorFromClient_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOUserClient_CreateMemoryDescriptorFromClient_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.memoryDescriptorCreateOptions,
        rpc.message->content.segmentsCount,
        &rpc.message->content.__segments[0],
        (IOMemoryDescriptor **)&rpc.reply->content.memory);

    {
        rpc.reply->content.hdr.msgid   = IOUserClient_CreateMemoryDescriptorFromClient_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOUserClient_CreateMemoryDescriptorFromClient_Rpl_ObjRefs;
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
IOUserClient::_ExternalMethod_Invoke(const IORPC _rpc,
        kern_return_t (IOUserClient::*func)(IOUserClient__ExternalMethod_Args))
{
    IOUserClient__ExternalMethod_Invocation rpc = { _rpc };
    kern_return_t ret;
    OSData * structureInput;
    IOMemoryDescriptor * structureInputDescriptor;
    uint32_t scalarOutputCount = (sizeof(rpc.reply->content.__scalarOutput) / sizeof(rpc.reply->content.__scalarOutput[0]));
    IOMemoryDescriptor * structureOutputDescriptor;
    OSAction * completion;

    if (IOUserClient__ExternalMethod_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    structureInput = OSDynamicCast(OSData, (OSObject *) rpc.message->content.structureInput);
    if (!structureInput && rpc.message->content.structureInput) return (kIOReturnBadArgument);
    structureInputDescriptor = OSDynamicCast(IOMemoryDescriptor, (OSObject *) rpc.message->content.structureInputDescriptor);
    if (!structureInputDescriptor && rpc.message->content.structureInputDescriptor) return (kIOReturnBadArgument);
    structureOutputDescriptor = OSDynamicCast(IOMemoryDescriptor, (OSObject *) rpc.message->content.structureOutputDescriptor);
    if (!structureOutputDescriptor && rpc.message->content.structureOutputDescriptor) return (kIOReturnBadArgument);
    completion = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.completion);
    if (!completion && rpc.message->content.completion) return (kIOReturnBadArgument);

    ret = (this->*func)(        
        rpc.message->content.selector,
        &rpc.message->content.__scalarInput[0],
        rpc.message->content.scalarInputCount,
        structureInput,
        structureInputDescriptor,
        &rpc.reply->content.__scalarOutput[0],
        &scalarOutputCount,
        rpc.message->content.structureOutputMaximumSize,
        (OSData **)&rpc.reply->content.structureOutput,
        structureOutputDescriptor,
        completion);

    {
        rpc.reply->content.hdr.msgid   = IOUserClient__ExternalMethod_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOUserClient__ExternalMethod_Rpl_ObjRefs;
            rpc.reply->content.scalarOutputCount = scalarOutputCount;
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
            rpc.reply->content.structureOutput = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOUserClient::KernelCompletion_Invoke(const IORPC _rpc,
        void (IOUserClient::*func)(IOUserClient_KernelCompletion_Args))
{
    IOUserClient_KernelCompletion_Invocation rpc = { _rpc };
    OSAction * action;

    if (IOUserClient_KernelCompletion_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);
    action = OSDynamicCast(OSAction, (OSObject *) rpc.message->content.action);
    if (!action && rpc.message->content.action) return (kIOReturnBadArgument);

    (this->*func)(        
        action,
        rpc.message->content.status,
        &rpc.message->content.__asyncData[0],
        rpc.message->content.asyncDataCount);

    return (kIOReturnSuccess);
}



