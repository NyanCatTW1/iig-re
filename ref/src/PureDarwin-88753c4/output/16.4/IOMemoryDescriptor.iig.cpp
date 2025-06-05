/* iig(DriverKit-427.100.5 Apr 30 2025 01:57:02) generated from IOMemoryDescriptor.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOMemoryDescriptor.iig

#if KERNEL
#include <libkern/c++/OSString.h>
#else
#include <DriverKit/DriverKit.h>
#endif /* KERNEL */
#include <DriverKit/IOReturn.h>
#include <DriverKit/IOMemoryDescriptor.h>

/* @iig implementation */
#include <DriverKit/IOService.h>
/* @iig end */


#if __has_builtin(__builtin_load_member_function_pointer)
#define SimpleMemberFunctionCast(cfnty, self, func) (cfnty)__builtin_load_member_function_pointer(self, func)
#else
#define SimpleMemberFunctionCast(cfnty, self, func) ({ union { typeof(func) memfun; cfnty cfun; } pair; pair.memfun = func; pair.cfun; })
#endif


struct IOMemoryDescriptor__CopyState_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
};
#pragma pack(4)
struct IOMemoryDescriptor__CopyState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
};
struct IOMemoryDescriptor__CopyState_Msg_With_Content
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOMemoryDescriptor__CopyState_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor__CopyState_Msg_ObjRefs (1)

struct IOMemoryDescriptor__CopyState_Rpl_Content
{
    IORPCMessage __hdr;
    _IOMDPrivateState  state;
};
#pragma pack(4)
struct IOMemoryDescriptor__CopyState_Rpl
{
    IORPCMessageMach           mach;
};
struct IOMemoryDescriptor__CopyState_Rpl_With_Content
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
#ifdef KERNEL
        const struct IOMemoryDescriptor__CopyState_Msg * message;
#else /* KERNEL */
        const struct IOMemoryDescriptor__CopyState_Msg_With_Content * message;
#endif /* KERNEL */
        struct IOMemoryDescriptor__CopyState_Rpl_With_Content       * reply;
        uint32_t sendSize;
        uint32_t replySize;
#ifdef KERNEL
        const struct IOMemoryDescriptor__CopyState_Msg_Content * kernelContent;
#endif /* KERNEL */
    };
} IOMemoryDescriptor__CopyState_Invocation;
struct IOMemoryDescriptor_CreateMapping_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
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
    mach_msg_port_descriptor_t __object__descriptor;
};
struct IOMemoryDescriptor_CreateMapping_Msg_With_Content
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    IOMemoryDescriptor_CreateMapping_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateMapping_Msg_ObjRefs (1)

struct IOMemoryDescriptor_CreateMapping_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  map;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateMapping_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t map__descriptor;
};
struct IOMemoryDescriptor_CreateMapping_Rpl_With_Content
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t map__descriptor;
    IOMemoryDescriptor_CreateMapping_Rpl_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateMapping_Rpl_ObjRefs (1)


typedef union
{
    const IORPC rpc;
    struct
    {
#ifdef KERNEL
        const struct IOMemoryDescriptor_CreateMapping_Msg * message;
#else /* KERNEL */
        const struct IOMemoryDescriptor_CreateMapping_Msg_With_Content * message;
#endif /* KERNEL */
        struct IOMemoryDescriptor_CreateMapping_Rpl_With_Content       * reply;
        uint32_t sendSize;
        uint32_t replySize;
#ifdef KERNEL
        const struct IOMemoryDescriptor_CreateMapping_Msg_Content * kernelContent;
#endif /* KERNEL */
    };
} IOMemoryDescriptor_CreateMapping_Invocation;
struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef  ofDescriptor;
    uint64_t  memoryDescriptorCreateOptions;
    uint64_t  offset;
    uint64_t  length;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t ofDescriptor__descriptor;
};
struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_With_Content
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t ofDescriptor__descriptor;
    IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_ObjRefs (2)

struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t memory__descriptor;
};
struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_With_Content
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t memory__descriptor;
    IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_ObjRefs (1)


typedef union
{
    const IORPC rpc;
    struct
    {
#ifdef KERNEL
        const struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg * message;
#else /* KERNEL */
        const struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_With_Content * message;
#endif /* KERNEL */
        struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_With_Content       * reply;
        uint32_t sendSize;
        uint32_t replySize;
#ifdef KERNEL
        const struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content * kernelContent;
#endif /* KERNEL */
    };
} IOMemoryDescriptor_CreateSubMemoryDescriptor_Invocation;
struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_Content
{
    IORPCMessage __hdr;
    OSObjectRef  __object;
    OSObjectRef __withDescriptors[32];
    uint64_t  memoryDescriptorCreateOptions;
    uint32_t  withDescriptorsCount;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t withDescriptors__descriptor[32];
};
struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_With_Content
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t __object__descriptor;
    mach_msg_port_descriptor_t withDescriptors__descriptor[32];
    IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_ObjRefs (33)

struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_Content
{
    IORPCMessage __hdr;
    OSObjectRef  memory;
};
#pragma pack(4)
struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t memory__descriptor;
};
struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_With_Content
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t memory__descriptor;
    IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_Content content;
};
#pragma pack()
#define IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_ObjRefs (1)


typedef union
{
    const IORPC rpc;
    struct
    {
#ifdef KERNEL
        const struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg * message;
#else /* KERNEL */
        const struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_With_Content * message;
#endif /* KERNEL */
        struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_With_Content       * reply;
        uint32_t sendSize;
        uint32_t replySize;
#ifdef KERNEL
        const struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_Content * kernelContent;
#endif /* KERNEL */
    };
} IOMemoryDescriptor_CreateWithMemoryDescriptors_Invocation;
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
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, methodOptions),
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, metaMethodOptions),
        .queueNamesSize       = sizeof(IOMemoryDescriptor_QueueNames),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, queueNames),
        .methodNamesSize         = sizeof(IOMemoryDescriptor_MethodNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, methodNames),
        .metaMethodNamesSize     = sizeof(IOMemoryDescriptorMetaClass_MethodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOMemoryDescriptor_t, metaMethodNames),
        .flags                   = 1*kOSClassCanRemote,
        .resv1                   = {0},
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

OSMetaClass * gIOMemoryDescriptorMetaClass;

static kern_return_t
IOMemoryDescriptor_New(OSMetaClass * instance);

const OSClassLoadInformation
IOMemoryDescriptor_Class = 
{
    .description       = &OSClassDescription_IOMemoryDescriptor.base,
    .metaPointer       = &gIOMemoryDescriptorMetaClass,
    .version           = 1,
    .instanceSize      = sizeof(IOMemoryDescriptor),

    .resv2             = {0},

    .New               = &IOMemoryDescriptor_New,
    .resv3             = {0},

};

extern const void * const
gIOMemoryDescriptor_Declaration;
const void * const
gIOMemoryDescriptor_Declaration
__attribute__((used,visibility("hidden"),section("__DATA_CONST,__osclassinfo,regular,no_dead_strip"),no_sanitize("address")))
    = &IOMemoryDescriptor_Class;

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

#ifdef KERNEL
#define MESSAGE_CONTENT(__field) (messageContent->__field)
#else /* KERNEL */
#define MESSAGE_CONTENT(__field) (message->content.__field)
#endif /* KERNEL */

kern_return_t
IOMemoryDescriptor::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOMemoryDescriptor::_Dispatch(IOMemoryDescriptor * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
#ifdef KERNEL
    IORPCMessage * msg = rpc.kernelContent;
#else /* KERNEL */
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);
#endif /* KERNEL */

    switch (msg->msgid)
    {
#if KERNEL
        case IOMemoryDescriptor__CopyState_ID:
        {
            ret = IOMemoryDescriptor::_CopyState_Invoke(rpc, self, SimpleMemberFunctionCast(IOMemoryDescriptor::_CopyState_Handler, *self, &IOMemoryDescriptor::_CopyState_Impl));
            break;
        }
#endif /* !KERNEL */
#if KERNEL
        case IOMemoryDescriptor_CreateMapping_ID:
        {
            ret = IOMemoryDescriptor::CreateMapping_Invoke(rpc, self, SimpleMemberFunctionCast(IOMemoryDescriptor::CreateMapping_Handler, *self, &IOMemoryDescriptor::CreateMapping_Impl));
            break;
        }
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
#ifdef KERNEL
    IORPCMessage * msg = rpc.kernelContent;
#else /* KERNEL */
    IORPCMessage * msg = IORPCMessageFromMach(rpc.message, false);
#endif /* KERNEL */

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
        IOMemoryDescriptor__CopyState_Msg_With_Content msg;
        struct
        {
            IOMemoryDescriptor__CopyState_Rpl_With_Content rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor__CopyState_Msg_With_Content * msg = &buf.msg;
    struct IOMemoryDescriptor__CopyState_Rpl_With_Content * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(*msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 1*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOMemoryDescriptor__CopyState_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOMemoryDescriptor__CopyState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

#ifdef KERNEL
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl), .kernelContent = &buf.msg.content.__hdr };
#else /* KERNEL */
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
#endif /* KERNEL */
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOMemoryDescriptor__CopyState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor__CopyState_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
        IOMemoryDescriptor_CreateMapping_Msg_With_Content msg;
        struct
        {
            IOMemoryDescriptor_CreateMapping_Rpl_With_Content rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor_CreateMapping_Msg_With_Content * msg = &buf.msg;
    struct IOMemoryDescriptor_CreateMapping_Rpl_With_Content * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(*msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOMemoryDescriptor_CreateMapping_ID;
    msg->content.__object = (OSObjectRef) this;
    msg->content.__hdr.objectRefs = IOMemoryDescriptor_CreateMapping_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.options = options;

    msg->content.address = address;

    msg->content.offset = offset;

    msg->content.length = length;

    msg->content.alignment = alignment;

#ifdef KERNEL
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl), .kernelContent = &buf.msg.content.__hdr };
#else /* KERNEL */
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
#endif /* KERNEL */
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOMemoryDescriptor_CreateMapping_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor_CreateMapping_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
        IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_With_Content msg;
        struct
        {
            IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_With_Content rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_With_Content * msg = &buf.msg;
    struct IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_With_Content * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(*msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOMemoryDescriptor_CreateSubMemoryDescriptor_ID;
    msg->content.__object = (OSObjectRef) OSTypeID(IOMemoryDescriptor);
    msg->content.__hdr.objectRefs = IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 2;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.memoryDescriptorCreateOptions = memoryDescriptorCreateOptions;

    msg->content.offset = offset;

    msg->content.length = length;

    msg->ofDescriptor__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;
    msg->content.ofDescriptor = (OSObjectRef) ofDescriptor;

#ifdef KERNEL
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl), .kernelContent = &buf.msg.content.__hdr };
#else /* KERNEL */
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
#endif /* KERNEL */
    ret = OSMTypeID(IOMemoryDescriptor)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOMemoryDescriptor_CreateSubMemoryDescriptor_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
        IOMemoryDescriptor ** const withDescriptors,
        IOMemoryDescriptor ** memory)
{
    kern_return_t ret;
    union
    {
        IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_With_Content msg;
        struct
        {
            IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_With_Content rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_With_Content * msg = &buf.msg;
    struct IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_With_Content * rpl = &buf.rpl.rpl;

    memset(msg, 0, sizeof(*msg));
    msg->mach.msgh.msgh_id   = kIORPCVersion190615;
    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.__hdr.flags = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageSimpleReply
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.__hdr.msgid = IOMemoryDescriptor_CreateWithMemoryDescriptors_ID;
    msg->content.__object = (OSObjectRef) OSTypeID(IOMemoryDescriptor);
    msg->content.__hdr.objectRefs = IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 33;

    msg->__object__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    msg->content.memoryDescriptorCreateOptions = memoryDescriptorCreateOptions;

    msg->content.withDescriptorsCount = withDescriptorsCount;

    for (unsigned int idx = 0; idx < 32; idx++) msg->withDescriptors__descriptor[idx].type = MACH_MSG_PORT_DESCRIPTOR;
    if (withDescriptorsCount > (sizeof(msg->content.__withDescriptors) / sizeof(msg->content.__withDescriptors[0]))) return kIOReturnOverrun;
    bcopy(withDescriptors, &msg->content.__withDescriptors[0], withDescriptorsCount * sizeof(msg->content.__withDescriptors[0]));

#ifdef KERNEL
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl), .kernelContent = &buf.msg.content.__hdr };
#else /* KERNEL */
    IORPC rpc = { .message = &buf.msg.mach, .reply = &buf.rpl.rpl.mach, .sendSize = sizeof(buf.msg), .replySize = sizeof(buf.rpl) };
#endif /* KERNEL */
    ret = OSMTypeID(IOMemoryDescriptor)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.__hdr.msgid                  != IOMemoryDescriptor_CreateWithMemoryDescriptors_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_ObjRefs   != rpl->content.__hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
        OSMetaClassBase * target,
        _CopyState_Handler func)
{
    IOMemoryDescriptor__CopyState_Invocation rpc = { _rpc };
    IOMemoryDescriptor__CopyState_Rpl_With_Content * reply = rpc.reply;
#ifdef KERNEL
    const IOMemoryDescriptor__CopyState_Msg *         message = rpc.message;
    const IOMemoryDescriptor__CopyState_Msg_Content * messageContent = rpc.kernelContent;
#else /* KERNEL */
    const IOMemoryDescriptor__CopyState_Msg_With_Content * message = rpc.message;
#endif /* KERNEL */
#if __has_builtin(__builtin_assume)
    __builtin_assume(reply != NULL);
#endif /* __has_builtin(__builtin_assume) */
    kern_return_t ret;

    if (1 != message->mach.msgh_body.msgh_descriptor_count) return (kIOReturnIPCError);
    if (IOMemoryDescriptor__CopyState_Msg_ObjRefs != MESSAGE_CONTENT(__hdr.objectRefs)) return (kIOReturnIPCError);
    if (rpc.sendSize < sizeof(IOMemoryDescriptor__CopyState_Msg_With_Content)) return (kIOReturnIPCError);
    if (reply != NULL && rpc.replySize < sizeof(*reply)) return (kIOReturnIPCError);

    ret = (*func)(target,
        &reply->content.state);

    if (kIOReturnSuccess != ret) return (ret);

    reply->content.__hdr.msgid = IOMemoryDescriptor__CopyState_ID;
    reply->content.__hdr.flags = kIORPCMessageOneway;
    reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    reply->mach.msgh.msgh_size = sizeof(*reply);
    reply->mach.msgh_body.msgh_descriptor_count = 0;
    reply->content.__hdr.objectRefs = IOMemoryDescriptor__CopyState_Rpl_ObjRefs;

    return (ret);
}

kern_return_t
IOMemoryDescriptor::CreateMapping_Invoke(const IORPC _rpc,
        OSMetaClassBase * target,
        CreateMapping_Handler func)
{
    IOMemoryDescriptor_CreateMapping_Invocation rpc = { _rpc };
    IOMemoryDescriptor_CreateMapping_Rpl_With_Content * reply = rpc.reply;
#ifdef KERNEL
    const IOMemoryDescriptor_CreateMapping_Msg *         message = rpc.message;
    const IOMemoryDescriptor_CreateMapping_Msg_Content * messageContent = rpc.kernelContent;
#else /* KERNEL */
    const IOMemoryDescriptor_CreateMapping_Msg_With_Content * message = rpc.message;
#endif /* KERNEL */
#if __has_builtin(__builtin_assume)
    __builtin_assume(reply != NULL);
#endif /* __has_builtin(__builtin_assume) */
    kern_return_t ret;

    if (1 != message->mach.msgh_body.msgh_descriptor_count) return (kIOReturnIPCError);
    if (IOMemoryDescriptor_CreateMapping_Msg_ObjRefs != MESSAGE_CONTENT(__hdr.objectRefs)) return (kIOReturnIPCError);
    if (rpc.sendSize < sizeof(IOMemoryDescriptor_CreateMapping_Msg_With_Content)) return (kIOReturnIPCError);
    if (reply != NULL && rpc.replySize < sizeof(*reply)) return (kIOReturnIPCError);

    ret = (*func)(target,
        MESSAGE_CONTENT(options),
        MESSAGE_CONTENT(address),
        MESSAGE_CONTENT(offset),
        MESSAGE_CONTENT(length),
        MESSAGE_CONTENT(alignment),
        (IOMemoryMap **)&reply->content.map);

    if (kIOReturnSuccess != ret) return (ret);

    reply->content.__hdr.msgid = IOMemoryDescriptor_CreateMapping_ID;
    reply->content.__hdr.flags = kIORPCMessageOneway;
    reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    reply->mach.msgh.msgh_size = sizeof(*reply);
    reply->mach.msgh_body.msgh_descriptor_count = 1;
    reply->content.__hdr.objectRefs = IOMemoryDescriptor_CreateMapping_Rpl_ObjRefs;
    reply->map__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    return (ret);
}

kern_return_t
IOMemoryDescriptor::CreateSubMemoryDescriptor_Invoke(const IORPC _rpc,
        CreateSubMemoryDescriptor_Handler func)
{
    IOMemoryDescriptor_CreateSubMemoryDescriptor_Invocation rpc = { _rpc };
    IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_With_Content * reply = rpc.reply;
#ifdef KERNEL
    const IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg *         message = rpc.message;
    const IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_Content * messageContent = rpc.kernelContent;
#else /* KERNEL */
    const IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_With_Content * message = rpc.message;
#endif /* KERNEL */
#if __has_builtin(__builtin_assume)
    __builtin_assume(reply != NULL);
#endif /* __has_builtin(__builtin_assume) */
    kern_return_t ret;
    IOMemoryDescriptor * ofDescriptor;

    if (2 != message->mach.msgh_body.msgh_descriptor_count) return (kIOReturnIPCError);
    if (IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_ObjRefs != MESSAGE_CONTENT(__hdr.objectRefs)) return (kIOReturnIPCError);
    if (rpc.sendSize < sizeof(IOMemoryDescriptor_CreateSubMemoryDescriptor_Msg_With_Content)) return (kIOReturnIPCError);
    if (reply != NULL && rpc.replySize < sizeof(*reply)) return (kIOReturnIPCError);
    ofDescriptor = OSDynamicCast(IOMemoryDescriptor, (OSObject *) MESSAGE_CONTENT(ofDescriptor));
    if (!ofDescriptor && MESSAGE_CONTENT(ofDescriptor)) return (kIOReturnBadArgument);

    ret = (*func)(        MESSAGE_CONTENT(memoryDescriptorCreateOptions),
        MESSAGE_CONTENT(offset),
        MESSAGE_CONTENT(length),
        ofDescriptor,
        (IOMemoryDescriptor **)&reply->content.memory);

    if (kIOReturnSuccess != ret) return (ret);

    reply->content.__hdr.msgid = IOMemoryDescriptor_CreateSubMemoryDescriptor_ID;
    reply->content.__hdr.flags = kIORPCMessageOneway;
    reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    reply->mach.msgh.msgh_size = sizeof(*reply);
    reply->mach.msgh_body.msgh_descriptor_count = 1;
    reply->content.__hdr.objectRefs = IOMemoryDescriptor_CreateSubMemoryDescriptor_Rpl_ObjRefs;
    reply->memory__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    return (ret);
}

kern_return_t
IOMemoryDescriptor::CreateWithMemoryDescriptors_Invoke(const IORPC _rpc,
        CreateWithMemoryDescriptors_Handler func)
{
    IOMemoryDescriptor_CreateWithMemoryDescriptors_Invocation rpc = { _rpc };
    IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_With_Content * reply = rpc.reply;
#ifdef KERNEL
    const IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg *         message = rpc.message;
    const IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_Content * messageContent = rpc.kernelContent;
#else /* KERNEL */
    const IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_With_Content * message = rpc.message;
#endif /* KERNEL */
#if __has_builtin(__builtin_assume)
    __builtin_assume(reply != NULL);
#endif /* __has_builtin(__builtin_assume) */
    kern_return_t ret;
    uint32_t withDescriptorsCount = (sizeof(MESSAGE_CONTENT(__withDescriptors)) / sizeof(MESSAGE_CONTENT(__withDescriptors[0])));
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wtautological-unsigned-zero-compare"
    if (MESSAGE_CONTENT(withDescriptorsCount) >= 0 && withDescriptorsCount > MESSAGE_CONTENT(withDescriptorsCount)) withDescriptorsCount = MESSAGE_CONTENT(withDescriptorsCount);
#pragma clang diagnostic pop
#if !__LP64__
    IOMemoryDescriptor * withDescriptors[32] = {};
#else /* !__LP64__ */
    IOMemoryDescriptor ** withDescriptors;
#endif /* __LP64__ */

    if (33 != message->mach.msgh_body.msgh_descriptor_count) return (kIOReturnIPCError);
    if (IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_ObjRefs != MESSAGE_CONTENT(__hdr.objectRefs)) return (kIOReturnIPCError);
    if (rpc.sendSize < sizeof(IOMemoryDescriptor_CreateWithMemoryDescriptors_Msg_With_Content)) return (kIOReturnIPCError);
    if (reply != NULL && rpc.replySize < sizeof(*reply)) return (kIOReturnIPCError);
#if !__LP64__
    for (unsigned int idx = 0; idx < withDescriptorsCount; idx++)
    {
        withDescriptors[idx] = (IOMemoryDescriptor *)(uintptr_t)MESSAGE_CONTENT(__withDescriptors[idx]);
    }
#else /* !__LP64__ */
    withDescriptors = (IOMemoryDescriptor **)(uintptr_t) &MESSAGE_CONTENT(__withDescriptors[0]);
#endif /* __LP64__ */
    for (unsigned int idx = 0; idx < withDescriptorsCount; idx++)
    {
        if (withDescriptors[idx] && !OSDynamicCast(IOMemoryDescriptor, withDescriptors[idx])) return (kIOReturnBadArgument);
    }

    ret = (*func)(        MESSAGE_CONTENT(memoryDescriptorCreateOptions),
        withDescriptorsCount,
        withDescriptors,
        (IOMemoryDescriptor **)&reply->content.memory);

    if (kIOReturnSuccess != ret) return (ret);

    reply->content.__hdr.msgid = IOMemoryDescriptor_CreateWithMemoryDescriptors_ID;
    reply->content.__hdr.flags = kIORPCMessageOneway;
    reply->mach.msgh.msgh_id   = kIORPCVersion190615Reply;
    reply->mach.msgh.msgh_size = sizeof(*reply);
    reply->mach.msgh_body.msgh_descriptor_count = 1;
    reply->content.__hdr.objectRefs = IOMemoryDescriptor_CreateWithMemoryDescriptors_Rpl_ObjRefs;
    reply->memory__descriptor.type = MACH_MSG_PORT_DESCRIPTOR;

    return (ret);
}



