/* iig(DriverKit-48) generated from IOMemoryMap.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOMemoryMap.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOMemoryMap.h>


struct IOMemoryMap__CopyState_Msg_Content
{
    IORPCMessage hdr;
};
#pragma pack(4)
struct IOMemoryMap__CopyState_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOMemoryMap__CopyState_Msg_Content content;
};
#pragma pack()
#define IOMemoryMap__CopyState_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOMemoryMap__CopyState_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOMemoryMap__CopyState_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    _IOMemoryMapPrivateState  state;
};
#pragma pack(4)
struct IOMemoryMap__CopyState_Rpl
{
    IORPCMessageMach           mach;
    IOMemoryMap__CopyState_Rpl_Content content;
};
#pragma pack()
#define IOMemoryMap__CopyState_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOMemoryMap__CopyState_Msg * message;
        struct IOMemoryMap__CopyState_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOMemoryMap__CopyState_Invocation;

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

#define IOMemoryMap_QueueNames  ""

#define IOMemoryMap_MethodNames  ""

#define IOMemoryMapMetaClass_MethodNames  ""

struct OSClassDescription_IOMemoryMap_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOMemoryMap_QueueNames)];
    char               methodNames[sizeof(IOMemoryMap_MethodNames)];
    char               metaMethodNames[sizeof(IOMemoryMapMetaClass_MethodNames)];
};

const struct OSClassDescription_IOMemoryMap_t
OSClassDescription_IOMemoryMap =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOMemoryMap_t),
        .name                    = "IOMemoryMap",
        .superName               = "OSObject",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOMemoryMap_QueueNames),
        .methodNamesSize         = sizeof(IOMemoryMap_MethodNames),
        .metaMethodNamesSize     = sizeof(IOMemoryMapMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOMemoryMap_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOMemoryMap_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOMemoryMap_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOMemoryMap_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOMemoryMap_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOMemoryMap_QueueNames,
    .methodNames     = IOMemoryMap_MethodNames,
    .metaMethodNames = IOMemoryMapMetaClass_MethodNames,
};

static kern_return_t
IOMemoryMap_New(OSMetaClass * instance);

OSClassLoadInformation
IOMemoryMap_Class = 
{
    .description       = &OSClassDescription_IOMemoryMap.base,
    .instanceSize      = sizeof(IOMemoryMap),

    .New               = &IOMemoryMap_New,
};

const void *
gIOMemoryMap_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOMemoryMap_Class;

OSMetaClass * gIOMemoryMapMetaClass;

static kern_return_t
IOMemoryMap_New(OSMetaClass * instance)
{
    if (!new(instance) IOMemoryMapMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOMemoryMapMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOMemoryMap) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOMemoryMap::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOMemoryMap::_Dispatch(IOMemoryMap * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOMemoryMap__CopyState_ID:
            ret = self->_CopyState_Invoke(rpc, &IOMemoryMap::_CopyState_Impl);
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
IOMemoryMap::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOMemoryMapMetaClass::Dispatch(const IORPC rpc)
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
IOMemoryMap::_CopyState(
        _IOMemoryMapPrivateState * state,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOMemoryMap__CopyState_Msg msg;
        struct
        {
            IOMemoryMap__CopyState_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOMemoryMap__CopyState_Msg * msg = &buf.msg;
    struct IOMemoryMap__CopyState_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOMemoryMap__CopyState_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOMemoryMap__CopyState_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOMemoryMap__CopyState_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOMemoryMap__CopyState_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOMemoryMap::_CopyState_Invoke(const IORPC _rpc,
        kern_return_t (IOMemoryMap::*func)(IOMemoryMap__CopyState_Args))
{
    IOMemoryMap__CopyState_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOMemoryMap__CopyState_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.reply->content.state);

    {
        rpc.reply->content.hdr.msgid   = IOMemoryMap__CopyState_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOMemoryMap__CopyState_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}



