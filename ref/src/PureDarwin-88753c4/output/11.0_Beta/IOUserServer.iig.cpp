/* iig(DriverKit-48) generated from IOUserServer.iig */

#undef	IIG_IMPLEMENTATION
#define	IIG_IMPLEMENTATION 	IOUserServer.iig

#include <DriverKit/IOReturn.h>
#include <DriverKit/IOUserServer.h>

/* @iig implementation */
#include <IOKit/IOUserServer.h>
/* @iig end */


struct IOUserServer_Create_Msg_Content
{
    IORPCMessage hdr;
    const char *  name;
    char __name[64];
    uint64_t  tag;
    uint64_t  options;
};
#pragma pack(4)
struct IOUserServer_Create_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserServer_Create_Msg_Content content;
};
#pragma pack()
#define IOUserServer_Create_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserServer_Create_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOUserServer_Create_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
    OSObjectRef  server;
};
#pragma pack(4)
struct IOUserServer_Create_Rpl
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserServer_Create_Rpl_Content content;
};
#pragma pack()
#define IOUserServer_Create_Rpl_ObjRefs ((1ULL << (__builtin_offsetof(IOUserServer_Create_Rpl_Content, server) / sizeof(OSObjectRef))))


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserServer_Create_Msg * message;
        struct IOUserServer_Create_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserServer_Create_Invocation;

struct IOUserServer_Exit_Msg_Content
{
    IORPCMessage hdr;
    const char *  reason;
    char __reason[1024];
};
#pragma pack(4)
struct IOUserServer_Exit_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserServer_Exit_Msg_Content content;
};
#pragma pack()
#define IOUserServer_Exit_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserServer_Exit_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOUserServer_Exit_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOUserServer_Exit_Rpl
{
    IORPCMessageMach           mach;
    IOUserServer_Exit_Rpl_Content content;
};
#pragma pack()
#define IOUserServer_Exit_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserServer_Exit_Msg * message;
        struct IOUserServer_Exit_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserServer_Exit_Invocation;

struct IOUserServer_LoadModule_Msg_Content
{
    IORPCMessage hdr;
    const char *  path;
    char __path[1024];
};
#pragma pack(4)
struct IOUserServer_LoadModule_Msg
{
    IORPCMessageMach           mach;
    mach_msg_port_descriptor_t objects[1];
    IOUserServer_LoadModule_Msg_Content content;
};
#pragma pack()
#define IOUserServer_LoadModule_Msg_ObjRefs ((1ULL << (__builtin_offsetof(IOUserServer_LoadModule_Msg_Content, hdr.object) / sizeof(OSObjectRef))))

struct IOUserServer_LoadModule_Rpl_Content
{
    IORPCMessage hdr;
    kern_return_t _result;
};
#pragma pack(4)
struct IOUserServer_LoadModule_Rpl
{
    IORPCMessageMach           mach;
    IOUserServer_LoadModule_Rpl_Content content;
};
#pragma pack()
#define IOUserServer_LoadModule_Rpl_ObjRefs (0)


typedef union
{
    const IORPC rpc;
    struct
    {
        const struct IOUserServer_LoadModule_Msg * message;
        struct IOUserServer_LoadModule_Rpl       * reply;
        uint32_t sendSize;
        uint32_t replySize;
    };
}
IOUserServer_LoadModule_Invocation;

#if !KERNEL
extern OSMetaClass * gOSContainerMetaClass;
extern OSMetaClass * gOSDataMetaClass;
extern OSMetaClass * gOSNumberMetaClass;
extern OSMetaClass * gOSBooleanMetaClass;
extern OSMetaClass * gOSDictionaryMetaClass;
extern OSMetaClass * gOSArrayMetaClass;
extern OSMetaClass * gIODispatchQueueMetaClass;
extern OSMetaClass * gOSStringMetaClass;
extern OSMetaClass * gIOMemoryDescriptorMetaClass;
extern OSMetaClass * gIOBufferMemoryDescriptorMetaClass;
extern OSMetaClass * gIOUserClientMetaClass;
#endif /* !KERNEL */

#if !KERNEL

#define IOUserServer_QueueNames  ""

#define IOUserServer_MethodNames  ""

#define IOUserServerMetaClass_MethodNames  ""

struct OSClassDescription_IOUserServer_t
{
    OSClassDescription base;
    uint64_t           methodOptions[2 * 0];
    uint64_t           metaMethodOptions[2 * 0];
    char               queueNames[sizeof(IOUserServer_QueueNames)];
    char               methodNames[sizeof(IOUserServer_MethodNames)];
    char               metaMethodNames[sizeof(IOUserServerMetaClass_MethodNames)];
};

const struct OSClassDescription_IOUserServer_t
OSClassDescription_IOUserServer =
{
    .base =
    {
        .descriptionSize         = sizeof(OSClassDescription_IOUserServer_t),
        .name                    = "IOUserServer",
        .superName               = "IOService",
        .flags                   = 1*kOSClassCanRemote,
        .methodOptionsSize       = 2 * sizeof(uint64_t) * 0,
        .metaMethodOptionsSize   = 2 * sizeof(uint64_t) * 0,
        .queueNamesSize       = sizeof(IOUserServer_QueueNames),
        .methodNamesSize         = sizeof(IOUserServer_MethodNames),
        .metaMethodNamesSize     = sizeof(IOUserServerMetaClass_MethodNames),
        .methodOptionsOffset     = __builtin_offsetof(struct OSClassDescription_IOUserServer_t, methodOptions),
        .metaMethodOptionsOffset = __builtin_offsetof(struct OSClassDescription_IOUserServer_t, metaMethodOptions),
        .queueNamesOffset     = __builtin_offsetof(struct OSClassDescription_IOUserServer_t, queueNames),
        .methodNamesOffset       = __builtin_offsetof(struct OSClassDescription_IOUserServer_t, methodNames),
        .metaMethodNamesOffset   = __builtin_offsetof(struct OSClassDescription_IOUserServer_t, metaMethodNames),
    },
    .methodOptions =
    {
    },
    .metaMethodOptions =
    {
    },
    .queueNames      = IOUserServer_QueueNames,
    .methodNames     = IOUserServer_MethodNames,
    .metaMethodNames = IOUserServerMetaClass_MethodNames,
};

static kern_return_t
IOUserServer_New(OSMetaClass * instance);

OSClassLoadInformation
IOUserServer_Class = 
{
    .description       = &OSClassDescription_IOUserServer.base,
    .instanceSize      = sizeof(IOUserServer),

    .New               = &IOUserServer_New,
};

const void *
gIOUserServer_Declaration
__attribute__((visibility("hidden"),section("__DATA,__osclassinfo,regular,no_dead_strip")))
    = &IOUserServer_Class;

OSMetaClass * gIOUserServerMetaClass;

static kern_return_t
IOUserServer_New(OSMetaClass * instance)
{
    if (!new(instance) IOUserServerMetaClass) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

kern_return_t
IOUserServerMetaClass::New(OSObject * instance)
{
    if (!new(instance) IOUserServer) return (kIOReturnNoMemory);
    return (kIOReturnSuccess);
}

#endif /* !KERNEL */

kern_return_t
IOUserServer::Dispatch(const IORPC rpc)
{
    return _Dispatch(this, rpc);
}

kern_return_t
IOUserServer::_Dispatch(IOUserServer * self, const IORPC rpc)
{
    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
        case IOUserServer_Exit_ID:
            ret = self->Exit_Invoke(rpc, &IOUserServer::Exit_Impl);
            break;
        case IOUserServer_LoadModule_ID:
            ret = self->LoadModule_Invoke(rpc, &IOUserServer::LoadModule_Impl);
            break;

        default:
            ret = IOService::_Dispatch(self, rpc);
            break;
    }

    return (ret);
}

#if KERNEL
kern_return_t
IOUserServer::MetaClass::Dispatch(const IORPC rpc)
{
#else /* KERNEL */
kern_return_t
IOUserServerMetaClass::Dispatch(const IORPC rpc)
{
#endif /* !KERNEL */

    kern_return_t ret = kIOReturnUnsupported;
    IORPCMessage * msg = IORPCMessage(rpc.message);

    switch (msg->msgid)
    {
#if KERNEL
        case IOUserServer_Create_ID:
            ret = IOUserServer::Create_Invoke(rpc, &IOUserServer::Create_Impl);
            break;
#endif /* !KERNEL */

        default:
            ret = OSMetaClassBase::Dispatch(rpc);
            break;
    }

    return (ret);
}

kern_return_t
IOUserServer::Create(
        const char * name,
        uint64_t tag,
        uint64_t options,
        IOUserServer ** server)
{
    kern_return_t ret;
    union
    {
        IOUserServer_Create_Msg msg;
        struct
        {
            IOUserServer_Create_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOUserServer_Create_Msg * msg = &buf.msg;
    struct IOUserServer_Create_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserServer_Create_ID;
    msg->content.hdr.object  = (OSObjectRef) OSTypeID(IOUserServer);
    msg->content.hdr.objectRefs = IOUserServer_Create_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.name = name;
    strlcpy(&msg->content.__name[0], name, sizeof(msg->content.__name));
    msg->content.tag = tag;
    msg->content.options = options;
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    ret = OSMTypeID(IOUserServer)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOUserServer_Create_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 1) { ret = kIOReturnIPCError; break; };
            if (IOUserServer_Create_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
            ret = rpl->content._result;
        }
    }
    while (false);
    if (kIOReturnSuccess == ret)
    {
        *server = OSDynamicCast(IOUserServer, (OSObject *) rpl->content.server);
        if (rpl->content.server && !*server) ret = kIOReturnBadArgument;
    }


    return (ret);
}

kern_return_t
IOUserServer::Exit(
        const char * reason,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOUserServer_Exit_Msg msg;
        struct
        {
            IOUserServer_Exit_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOUserServer_Exit_Msg * msg = &buf.msg;
    struct IOUserServer_Exit_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserServer_Exit_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOUserServer_Exit_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.reason = reason;
    strlcpy(&msg->content.__reason[0], reason, sizeof(msg->content.__reason));
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOUserServer_Exit_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOUserServer_Exit_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOUserServer::LoadModule(
        const char * path,
        OSDispatchMethod supermethod)
{
    kern_return_t ret;
    union
    {
        IOUserServer_LoadModule_Msg msg;
        struct
        {
            IOUserServer_LoadModule_Rpl rpl;
            mach_msg_max_trailer_t trailer;
        } rpl;
    } buf;
    struct IOUserServer_LoadModule_Msg * msg = &buf.msg;
    struct IOUserServer_LoadModule_Rpl * rpl = &buf.rpl.rpl;

    msg->mach.msgh.msgh_size = sizeof(*msg);
    msg->content.hdr.flags   = 0*kIORPCMessageOneway
                             | 0*kIORPCMessageLocalHost
                             | 0*kIORPCMessageOnqueue;
    msg->content.hdr.msgid   = IOUserServer_LoadModule_ID;
    msg->content.hdr.object = (OSObjectRef) this;
    msg->content.hdr.objectRefs = IOUserServer_LoadModule_Msg_ObjRefs;
    msg->mach.msgh_body.msgh_descriptor_count = 1;

    msg->content.path = path;
    strlcpy(&msg->content.__path[0], path, sizeof(msg->content.__path));
    IORPC rpc = { .message = &buf.msg.mach, .sendSize = sizeof(buf.msg), .reply = &buf.rpl.rpl.mach, .replySize = sizeof(buf.rpl) };
    if (supermethod) ret = supermethod((OSObject *)this, rpc);
    else             ret = ((OSObject *)this)->Invoke(rpc);

    if (kIOReturnSuccess == ret)
    do {
        {
            if (rpl->mach.msgh.msgh_size                  != sizeof(*rpl)) { ret = kIOReturnIPCError; break; };
            if (rpl->content.hdr.msgid                    != IOUserServer_LoadModule_ID) { ret = kIOReturnIPCError; break; };
            if (rpl->mach.msgh_body.msgh_descriptor_count != 0) { ret = kIOReturnIPCError; break; };
            if (IOUserServer_LoadModule_Rpl_ObjRefs   != rpl->content.hdr.objectRefs) { ret = kIOReturnIPCError; break; };
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
IOUserServer::Create_Invoke(const IORPC _rpc,
        kern_return_t (*func)(IOUserServer_Create_Args))
{
    IOUserServer_Create_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOUserServer_Create_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (*func)(        
        &rpc.message->content.__name[0],
        rpc.message->content.tag,
        rpc.message->content.options,
        (IOUserServer **)&rpc.reply->content.server);

    {
        rpc.reply->content.hdr.msgid   = IOUserServer_Create_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 1;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOUserServer_Create_Rpl_ObjRefs;
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
            rpc.reply->content.server = (OSObjectRef) 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOUserServer::Exit_Invoke(const IORPC _rpc,
        kern_return_t (IOUserServer::*func)(IOUserServer_Exit_Args))
{
    IOUserServer_Exit_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOUserServer_Exit_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.message->content.__reason[0]);

    {
        rpc.reply->content.hdr.msgid   = IOUserServer_Exit_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOUserServer_Exit_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}

kern_return_t
IOUserServer::LoadModule_Invoke(const IORPC _rpc,
        kern_return_t (IOUserServer::*func)(IOUserServer_LoadModule_Args))
{
    IOUserServer_LoadModule_Invocation rpc = { _rpc };
    kern_return_t ret;

    if (IOUserServer_LoadModule_Msg_ObjRefs != rpc.message->content.hdr.objectRefs) return (kIOReturnIPCError);

    ret = (this->*func)(        
        &rpc.message->content.__path[0]);

    {
        rpc.reply->content.hdr.msgid   = IOUserServer_LoadModule_ID;
        rpc.reply->content.hdr.object  = 0;
        rpc.reply->content.hdr.flags   = kIORPCMessageOneway;
        rpc.reply->mach.msgh.msgh_size = sizeof(*rpc.reply);
        rpc.reply->mach.msgh_body.msgh_descriptor_count = 0;
        rpc.reply->content._result     = ret;
        if (kIOReturnSuccess == ret)
        {
            rpc.reply->content.hdr.objectRefs = IOUserServer_LoadModule_Rpl_ObjRefs;
        }
        else
        {
            rpc.reply->content.hdr.objectRefs = 0;
        }
    }
    return (kIOReturnSuccess);
}



