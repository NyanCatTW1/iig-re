/* iig(DriverKit-427.100.5) generated from IOEventLink.iig */

/* IOEventLink.iig:1-50 */
/*
 * Copyright (c) 2021 Apple Inc. All rights reserved.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_START@
 *
 * This file contains Original Code and/or Modifications of Original Code
 * as defined in and that are subject to the Apple Public Source License
 * Version 2.0 (the 'License'). You may not use this file except in
 * compliance with the License. The rights granted to you under the License
 * may not be used to create, or enable the creation or redistribution of,
 * unlawful or unlicensed copies of an Apple operating system, or to
 * circumvent, violate, or enable the circumvention or violation of, any
 * terms of an Apple operating system software license agreement.
 *
 * Please obtain a copy of the License at
 * http://www.opensource.apple.com/apsl/ and read it before using this file.
 *
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE, QUIET ENJOYMENT OR NON-INFRINGEMENT.
 * Please see the License for the specific language governing rights and
 * limitations under the License.
 *
 * @APPLE_OSREFERENCE_LICENSE_HEADER_END@
 */

#ifndef _IOKIT_UIOEVENTLINK_H
#define _IOKIT_UIOEVENTLINK_H

#include <DriverKit/IODispatchQueue.h>  /* .iig include */
#include <DriverKit/IODispatchSource.h>  /* .iig include */
#include <DriverKit/IOUserClient.h>  /* .iig include */

enum {
	kIOEventLinkMaxNameLength = 64,
};

// IOEventLink::Associate() options
enum {
	kIOEventLinkAssociateCurrentThread   = 0x00000000,
    kIOEventLinkAssociateOnWait          = 0x00000001,
};

// Clock options
enum {
    kIOEventLinkClockMachAbsoluteTime = 0x0,
};

/* source class IOEventLink IOEventLink.iig:51-209 */

#if __DOCUMENTATION__
#define KERNEL IIG_KERNEL

/*!
 * @class IOEventLink
 *
 * @abstract
 * IOEventLink allows for fast IPC, suitable for
 * realtime applications.
 *
 * @discussion
 *
 * Applications that open user clients to a DriverKit driver can set up an eventlink
 * for fast signaling.
 *
 * To configure an eventlink, the application will have to first create an eventlink object
 * with os_eventlink_create() (see <os/eventlink_private.h>). The application then has to extract
 * the remote eventlink port with os_eventlink_extract_remote_port(). To send the remote eventlink port
 * to the driver, use:
 *
 * const char * name = "Event Link Name"; // This must match the name the driver used in IOEventLink::Create().
 * kern_return_t ret = IOConnectTrap3(connect, // user client connection (io_connect_t)
 *                                    0, // specifies event link configuration trap
 *                                    (uintptr_t)name,
 *                                    (uintptr_t)strlen(name),
 *                                    (uintptr_t)remotePort // port from os_eventlink_extract_remote_port
 *                                    );
 *
 * Once the remote eventlink port has been sent to the driver, the driver should be notified with a user-defined external method
 * or other existing signaling mechanism. The driver should handle this by activating the IOEventLink with Activate().
 */
class NATIVE KERNEL IOEventLink : public OSObject
{
public:

    virtual bool
    init() override;

    virtual void
    free() override;

    /*!
     * @brief       Create an IOEventLink.
     * @param       name       User-specified name. If an IOEventLink with the same name already exists in the specified
     *                         user client, the old IOEventLink will be replaced.
     * @param       userClient  Userclient to create the eventlink in. The DriverKit runtime will retain the userclient, and will
     *                          release it in Invalidate() or when the IOEventLink is freed.
     * @param       eventLink  Created IOEventLink with +1 retain count to be released by the caller.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    static kern_return_t
    Create(OSString * name, IOUserClient * userClient, IOEventLink ** eventLink) LOCAL;

#if DRIVERKIT_PRIVATE

    /*!
     * @brief       Set the port for this eventlink.
     * @discussion  This is not meant to be used directly.
     * @param       port Eventlink port
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    virtual kern_return_t
    SetEventlinkPort(mach_port_t port PORTCOPYSEND) LOCAL;

#endif /* DRIVERKIT_PRIVATE */

    /*
     * @brief       Signal the eventlink. If a thread is waiting on the eventlink, this will wake up that thread.
     * @discussion  This API call is real time safe.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    Signal() LOCALONLY;

    /*
     * @brief       Wait on the eventlink.
     * @discussion  This API call is real time safe.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    Wait(uint64_t * signalsConsumed) LOCALONLY;

    /*
     * @brief       Signal the eventlink and wait. If a thread is waiting on the eventlink, this will wake up that thread.
     * @discussion  This API call is real time safe.
     * @param       signalsConsumed   When the calling thread wakes up, the amount of signals consumed by the wait will be written here.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    SignalAndWait(uint64_t * signalsConsumed) LOCALONLY;

    /*
     * @brief       Signal the eventlink and wait with a timeout. If a thread is waiting on the eventlink, this will wake up that thread.
     * @discussion  This API call is real time safe.
     * @param       signalsConsumed   When the calling thread wakes up, the amount of signals consumed by the wait will be written here.
     * @param       clockOptions      Options for which clock to use. The only currently supported option is kIOEventLinkClockMachAbsoluteTime.
     * @param       timeout           Timeout
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    SignalAndWaitUntil(uint64_t clockOptions, uint64_t timeout, uint64_t * signalsConsumed) LOCALONLY;

    /*
     * @brief       Wait with a timeout. If a thread is waiting on the eventlink, this will wake up that thread.
     * @discussion  This API call is real time safe.
     * @param       signalsConsumed   When the calling thread wakes up, the amount of signals consumed by the wait will be written here.
     * @param       clockOptions      Options for which clock to use. The only currently supported option is kIOEventLinkClockMachAbsoluteTime.
     * @param       timeout           Timeout
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    WaitUntil(uint64_t clockOptions, uint64_t timeout, uint64_t * signalsConsumed) LOCALONLY;

    /*!
     * @brief       Cancel the event link.
     * @discussion  If a thread is waiting on the eventlink, cancellation will wake up that thread.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    Cancel() LOCALONLY;

    /*!
     * @brief       Activate the event link.
     * @discussion  The event link must be activated before it can be signaled or waited on. This is not real-time safe.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    Activate() LOCALONLY;

    /*!
     * @brief       Associate a thread with the eventlink. 
     * @discussion  The eventlink should be activated before this call. This is not real-time safe.
     * @param       options  Options for Associate(). Use kIOEventLinkAssociateCurrentThread or kIOEventLinkAssociateOnWait.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    Associate(uint64_t options) LOCALONLY;

    /*!
     * @brief       Disassociate the current thread from the eventlink. This is not real-time safe.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    Disassociate() LOCALONLY;

    /*!
     * @brief       Invalidate the IOEventLink.
     * @discussion  This releases the kernel reference to the IOEventLink, allowing the name to be used for a different
     *              IOEventLink. This method should be called after the client has configured the eventlink with the IOConnectTrap
     *              call. After invalidation, the IOEventLink can no longer be configured through the IOConnectTrap call. No other
     *              functionality is affected.
     * @return      kIOReturnSuccess on success. See IOReturn.h for error codes.
     */
    kern_return_t
    Invalidate() LOCALONLY;

#if DRIVERKIT_PRIVATE

    virtual kern_return_t
    InvalidateKernel(IOUserClient * client);

#endif /* DRIVERKIT_PRIVATE */
};

#undef KERNEL
#else /* __DOCUMENTATION__ */

/* generated class IOEventLink IOEventLink.iig:51-209 */

#define IOEventLink_Create_ID            0xaac47fec2232263fULL
#define IOEventLink_SetEventlinkPort_ID            0xab7c21cf2602e225ULL
#define IOEventLink_InvalidateKernel_ID            0xe4e11bd235016fd8ULL

#define IOEventLink_Create_Args \
        OSString * name, \
        IOUserClient * userClient, \
        IOEventLink ** eventLink

#define IOEventLink_SetEventlinkPort_Args \
        mach_port_t port

#define IOEventLink_InvalidateKernel_Args \
        IOUserClient * client

#define IOEventLink_Methods \
\
public:\
\
    virtual kern_return_t\
    Dispatch(const IORPC rpc) APPLE_KEXT_OVERRIDE;\
\
    static kern_return_t\
    _Dispatch(IOEventLink * self, const IORPC rpc);\
\
    static kern_return_t\
    Create(\
        OSString * name,\
        IOUserClient * userClient,\
        IOEventLink ** eventLink);\
\
    kern_return_t\
    SetEventlinkPort(\
        mach_port_t port,\
        OSDispatchMethod supermethod = NULL);\
\
    kern_return_t\
    Signal(\
);\
\
    kern_return_t\
    Wait(\
        uint64_t * signalsConsumed);\
\
    kern_return_t\
    SignalAndWait(\
        uint64_t * signalsConsumed);\
\
    kern_return_t\
    SignalAndWaitUntil(\
        uint64_t clockOptions,\
        uint64_t timeout,\
        uint64_t * signalsConsumed);\
\
    kern_return_t\
    WaitUntil(\
        uint64_t clockOptions,\
        uint64_t timeout,\
        uint64_t * signalsConsumed);\
\
    kern_return_t\
    Cancel(\
);\
\
    kern_return_t\
    Activate(\
);\
\
    kern_return_t\
    Associate(\
        uint64_t options);\
\
    kern_return_t\
    Disassociate(\
);\
\
    kern_return_t\
    Invalidate(\
);\
\
    kern_return_t\
    InvalidateKernel(\
        IOUserClient * client,\
        OSDispatchMethod supermethod = NULL);\
\
\
protected:\
    /* _Impl methods */\
\
    static kern_return_t\
    Create_Call(IOEventLink_Create_Args);\
\
    kern_return_t\
    SetEventlinkPort_Impl(IOEventLink_SetEventlinkPort_Args);\
\
\
public:\
    /* _Invoke methods */\
\
    typedef kern_return_t (*Create_Handler)(IOEventLink_Create_Args);\
    static kern_return_t\
    Create_Invoke(const IORPC rpc,\
        Create_Handler func);\
\
    typedef kern_return_t (*SetEventlinkPort_Handler)(OSMetaClassBase * target, IOEventLink_SetEventlinkPort_Args);\
    static kern_return_t\
    SetEventlinkPort_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        SetEventlinkPort_Handler func);\
\
    typedef kern_return_t (*InvalidateKernel_Handler)(OSMetaClassBase * target, IOEventLink_InvalidateKernel_Args);\
    static kern_return_t\
    InvalidateKernel_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        InvalidateKernel_Handler func);\
\


#define IOEventLink_KernelMethods \
\
protected:\
    /* _Impl methods */\
\
    static kern_return_t\
    Create_Impl(IOEventLink_Create_Args);\
\
    kern_return_t\
    InvalidateKernel_Impl(IOEventLink_InvalidateKernel_Args);\
\


#define IOEventLink_VirtualMethods \
\
public:\
\
    virtual bool\
    init(\
) APPLE_KEXT_OVERRIDE;\
\
    virtual void\
    free(\
) APPLE_KEXT_OVERRIDE;\
\


#if !KERNEL

extern OSMetaClass          * gIOEventLinkMetaClass;
extern const OSClassLoadInformation IOEventLink_Class;

class IOEventLinkMetaClass : public OSMetaClass
{
public:
    virtual kern_return_t
    New(OSObject * instance) override;
    virtual kern_return_t
    Dispatch(const IORPC rpc) override;
};

#endif /* !KERNEL */

class  IOEventLinkInterface : public OSInterface
{
public:
};

struct IOEventLink_IVars;
struct IOEventLink_LocalIVars;

class IOEventLink : public OSObject, public IOEventLinkInterface
{
#if KERNEL
    OSDeclareDefaultStructorsWithDispatch(IOEventLink);
#endif /* KERNEL */

#if !KERNEL
    friend class IOEventLinkMetaClass;
#endif /* !KERNEL */

public:
#ifdef IOEventLink_DECLARE_IVARS
IOEventLink_DECLARE_IVARS
#else /* IOEventLink_DECLARE_IVARS */
    union
    {
        IOEventLink_IVars * ivars;
        IOEventLink_LocalIVars * lvars;
    };
#endif /* IOEventLink_DECLARE_IVARS */
#if !KERNEL
    static OSMetaClass *
    sGetMetaClass() { return gIOEventLinkMetaClass; };
    virtual const OSMetaClass *
    getMetaClass() const APPLE_KEXT_OVERRIDE { return gIOEventLinkMetaClass; };
#endif /* KERNEL */

    using super = OSObject;

#if !KERNEL
    IOEventLink_Methods
#endif /* !KERNEL */

    IOEventLink_VirtualMethods
};

#endif /* !__DOCUMENTATION__ */

/* IOEventLink.iig:211- */

#endif /* ! _IOKIT_UIOEVENTLINK_H */
