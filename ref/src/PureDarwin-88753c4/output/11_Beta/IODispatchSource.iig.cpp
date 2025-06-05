/* iig(DriverKit-48) generated from IODispatchSource.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IODispatchSource.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IODispatchSource.h>


struct IODispatchSource_Cancel_Msg_Content
{
    IORPCMessage hdr;
    IODispatchSourceCancelHandler  handler;
};
#pragma pack(4)
struct IODispatchSource_Cancel_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODispatchSource_Cancel_Msg_Content content;
};
#pragma pack()
#define IODispatchSource_Cancel_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODispatchSource_Cancel_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODispatchSource_Cancel_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODispatchSource_Cancel_Rpl
{
    IORPCMessageMach           mach;
    IODispatchSource_Cancel_Rpl_Content content;
};
#pragma pack()
#define IODispatchSource_Cancel_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchSource_Cancel_Msg * message;
        struct IODispatchSource_Cancel_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODispatchSource_Cancel_Invocation;

struct IODispatchSource_SetEnableWithCompletion_Msg_Content
{
    IORPCMessage hdr;
    bool  enable;
    IODispatchSourceCancelHandler  handler;
};
#pragma pack(4)
struct IODispatchSource_SetEnableWithCompletion_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODispatchSource_SetEnableWithCompletion_Msg_Content content;
};
#pragma pack()
#define IODispatchSource_SetEnableWithCompletion_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODispatchSource_SetEnableWithCompletion_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODispatchSource_SetEnableWithCompletion_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODispatchSource_SetEnableWithCompletion_Rpl
{
    IORPCMessageMach           mach;
    IODispatchSource_SetEnableWithCompletion_Rpl_Content content;
};
#pragma pack()
#define IODispatchSource_SetEnableWithCompletion_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchSource_SetEnableWithCompletion_Msg * message;
        struct IODispatchSource_SetEnableWithCompletion_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODispatchSource_SetEnableWithCompletion_Invocation;

struct IODispatchSource_CheckForWork_Msg_Content
{
    IORPCMessage hdr;
    bool  synchronous;
};
#pragma pack(4)
struct IODispatchSource_CheckForWork_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODispatchSource_CheckForWork_Msg_Content content;
};
#pragma pack()
#define IODispatchSource_CheckForWork_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODispatchSource_CheckForWork_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODispatchSource_CheckForWork_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    uint64_t __replyBuffer[8];
};
#pragma pack(4)
struct IODispatchSource_CheckForWork_Rpl
{
    IORPCMessageMach           mach;
    IODispatchSource_CheckForWork_Rpl_Content content;
};
#pragma pack()
#define IODispatchSource_CheckForWork_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchSource_CheckForWork_Msg * message;
        struct IODispatchSource_CheckForWork_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODispatchSource_CheckForWork_Invocation;

struct IODispatchSource_SetEnable_Msg_Content
{
    IORPCMessage hdr;
    bool  enable;
};
#pragma pack(4)
struct IODispatchSource_SetEnable_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IODispatchSource_SetEnable_Msg_Content content;
};
#pragma pack()
#define IODispatchSource_SetEnable_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IODispatchSource_SetEnable_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IODispatchSource_SetEnable_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IODispatchSource_SetEnable_Rpl
{
    IORPCMessageMach           mach;
    IODispatchSource_SetEnable_Rpl_Content content;
};
#pragma pack()
#define IODispatchSource_SetEnable_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IODispatchSource_SetEnable_Msg * message;
        struct IODispatchSource_SetEnable_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IODispatchSource_SetEnable_Invocation;

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

#if KERNEL
OSDefineMetaClassAndStructors(IODispatchSource, OSObject);
#endif /* KERNEL */

#if !KERNEL

#define IODispatchSource_QueueNames  ""

#define IODispatchSource_MethodNames  ""

#define IODispatchSourceMetaClass_MethodNames  ""

struct OSClassDescription_IODispatchSource_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IODispatchSource_QueueNames)];
    char               methodNames[sizeof(IODispatchSource_MethodNames)];
    char               metaMethodNames[sizeof(IODispatchSourceMetaClass_MethodNames)];
};

const struct OSClassDescription_IODispatchSource_t
OSClassDescription_IODispatchSource =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IODispatchSource_t),
        .name                    = "IODispatchSource",
        .superName               = "OSObject",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IODispatchSource_QueueNames),
        .methodNamesSize         = sizeof(IODispatchSource_MethodNames),
        .metaMethodNamesSize     = sizeof(IODispatchSourceMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IODispatchSource_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IODispatchSource_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IODispatchSource_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IODispatchSource_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IODispatchSource_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IODispatchSource_QueueNames,
    .methodNames     = IODispatchSource_MethodNames,
    .metaMethodNames = IODispatchSourceMetaClass_MethodNames,
};

static kern_return_t
IODispatchSource_New(OSMetaClass * instance);

OSClassLoadInformation
IODispatchSource_Class = 
{
    .description       = &OSClassDescription_IODispatchSource.base,
    .instanceSize      = sizeof(IODispatchSource),

    .New               = &IODispatchSource_New,
};

const void *
gIODispatchSource_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IODispatchSource_Class;

OSMetaClass * gIODispatchSourceMetaClass;

static kern_return_t
IODispatchSource_New(OSMetaClass * instance)
{
    if (!new(instance) IODispatchSourceMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IODispatchSourceMetaClass::New(OSObject * instance)
{
    if (!new(instance) IODispatchSource) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IODispatchSource::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IODispatchSource::_Dispatch(IODispatchSource * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
        case IODispatchSource_SetEnable_ID:
            ret = self->SetEnable_Invoke(rpc, &IODispatchSource::SetEnable_Impl);
            break;

        default:
            ret = OSObject::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IODispatchSource::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IODispatchSourceMetaClass::Dispatch(const IORPC rpc)
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
IODispatchSource::Cancel(
        IODispatchSourceCancelHandler handler,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODispatchSource_Cancel_Msg msg;
        struct
        {
            IODispatchSource_Cancel_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODispatchSource_Cancel_Msg * msg = &buf.msg;
    struct IODispatchSource_Cancel_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODispatchSource_Cancel_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODispatchSource_Cancel_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.handler = handler;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODispatchSource_Cancel_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IODispatchSource_Cancel_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IODispatchSource::SetEnableWithCompletion(
        bool enable,
        IODispatchSourceCancelHandler handler,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODispatchSource_SetEnableWithCompletion_Msg msg;
        struct
        {
            IODispatchSource_SetEnableWithCompletion_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODispatchSource_SetEnableWithCompletion_Msg * msg = &buf.msg;
    struct IODispatchSource_SetEnableWithCompletion_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODispatchSource_SetEnableWithCompletion_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODispatchSource_SetEnableWithCompletion_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.enable = enable;
    msg->content.handler = handler;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODispatchSource_SetEnableWithCompletion_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IODispatchSource_SetEnableWithCompletion_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IODispatchSource::CheckForWork(
        bool synchronous,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODispatchSource_CheckForWork_Msg msg;
        struct
        {
            IODispatchSource_CheckForWork_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODispatchSource_CheckForWork_Msg * msg = &buf.msg;
    struct IODispatchSource_CheckForWork_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODispatchSource_CheckForWork_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODispatchSource_CheckForWork_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.synchronous = synchronous;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        if (rpl->mach.msgh.msgh_size < (sizeof(IORPCMessageMach) + sizeof(IORPCMessage))) { ret = kIOReturnIPCError; { ret = kIOReturnIPCError; break; }; };
        if (rpl->mach.msgh_body.msgh_descriptor_count >= 1)
        {
            if (rpl->mach.msgh.msgh_size < (sizeof(IORPCMessageMach) + sizeof(mach_msg_port_descriptor_t) + sizeof(IORPCMessage))) { ret = kIOReturnIPCError; break; };
        }
        else
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODispatchSource_CheckForWork_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IODispatchSource_CheckForWork_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        if (ret == kIOReturnSuccess) {
            IORPCMessage * message;
            OSObject     * object;

            message = IORPCMessage(rpc.reply);
            object  = (typeof(object)) message->object;
            if (!object || !(kIORPCMessageOneway & message->flags)) ret = kIOReturnIPCError;
            else
            {
                rpc.sendSize  = rpc.replySize;
                rpc.replySize = 0;
                rpc.reply     = NULL;

                ret = object->Invoke(rpc);
            }
        }
    }


    return (ret);
}

kern_return_t
IODispatchSource::SetEnable(
        bool enable,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IODispatchSource_SetEnable_Msg msg;
        struct
        {
            IODispatchSource_SetEnable_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IODispatchSource_SetEnable_Msg * msg = &buf.msg;
    struct IODispatchSource_SetEnable_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IODispatchSource_SetEnable_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IODispatchSource_SetEnable_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.enable = enable;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IODispatchSource_SetEnable_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IODispatchSource_SetEnable_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IODispatchSource::Cancel_Invoke(const IORPC _rpc,
        kern_return_t (IODispatchSource::*func)(IODispatchSource_Cancel_Args))
{
    IODispatchSource_Cancel_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODispatchSource_Cancel_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.handler);

    {
        rpc.reply->content.hdr.msgid   = IODispatchSource_Cancel_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODispatchSource_Cancel_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODispatchSource::SetEnableWithCompletion_Invoke(const IORPC _rpc,
        kern_return_t (IODispatchSource::*func)(IODispatchSource_SetEnableWithCompletion_Args))
{
    IODispatchSource_SetEnableWithCompletion_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODispatchSource_SetEnableWithCompletion_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.enable,
        rpc.message->content.handler);

    {
        rpc.reply->content.hdr.msgid   = IODispatchSource_SetEnableWithCompletion_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODispatchSource_SetEnableWithCompletion_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODispatchSource::CheckForWork_Invoke(const IORPC _rpc,
        kern_return_t (IODispatchSource::*func)(IODispatchSource_CheckForWork_Args))
{
    IODispatchSource_CheckForWork_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODispatchSource_CheckForWork_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        rpc.rpc,
        rpc.message->content.synchronous);

    if (kIOReturnSuccess == ret)
    {
        IORPCMessage * message;

        message = IORPCMessage(rpc.rpc.reply);
        if (!message->object || !(kIORPCMessageOneway & message->flags)) ret = kIOReturnIPCError;
    }
    else
    {
        rpc.reply->content.hdr.msgid   = IODispatchSource_CheckForWork_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODispatchSource_CheckForWork_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IODispatchSource::SetEnable_Invoke(const IORPC _rpc,
        kern_return_t (IODispatchSource::*func)(IODispatchSource_SetEnable_Args))
{
    IODispatchSource_SetEnable_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IODispatchSource_SetEnable_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        rpc.message->content.enable);

    {
        rpc.reply->content.hdr.msgid   = IODispatchSource_SetEnable_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IODispatchSource_SetEnable_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}



