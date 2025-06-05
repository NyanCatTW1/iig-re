/* iig(DriverKit-73.40.3) generated from IOServiceNotificationDispatchSource.iig */

/* IOServiceNotificationDispatchSource.iig:1-45 */
/*
 * Copyright (c) 2019-2019 Apple Inc. All rights reserved.
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

#ifndef _IOKIT_UIOSERVICEDISPATCHSOURCE_H
#define _IOKIT_UIOSERVICEDISPATCHSOURCE_H

#include <DriverKit/IODispatchQueue.h>  /* .iig include */
#include <DriverKit/OSAction.h>  /* .iig include */
#include <DriverKit/IOService.h>  /* .iig include */


typedef void (^IOServiceNotificationBlock)(uint64_t type, IOService * service, uint64_t options);

enum {
	kIOServiceNotificationTypeTerminated = 0x00000000,
	kIOServiceNotificationTypeMatched    = 0x00000001,
	kIOServiceNotificationTypeLast       = kIOServiceNotificationTypeMatched,
	kIOServiceNotificationTypeNone       = 0xFFFFFFFF,
};

/* class IOServiceNotificationDispatchSource IOServiceNotificationDispatchSource.iig:46-128 */

#define IOServiceNotificationDispatchSource_Create_ID            0xb40d274e974e946aULL
#define IOServiceNotificationDispatchSource_SetHandler_ID            0xca55c48f95fc6f8eULL
#define IOServiceNotificationDispatchSource_ServiceNotificationReady_ID            0xfbaa85f2cdb990b4ULL
#define IOServiceNotificationDispatchSource_CopyNextNotification_ID            0xca420abbda782780ULL

#define IOServiceNotificationDispatchSource_Create_Args \
        OSDictionary * matching, \
        uint64_t options, \
        IODispatchQueue * queue, \
        IOServiceNotificationDispatchSource ** notification

#define IOServiceNotificationDispatchSource_SetEnableWithCompletion_Args \
        bool enable, \
        IODispatchSourceCancelHandler handler

#define IOServiceNotificationDispatchSource_Cancel_Args \
        IODispatchSourceCancelHandler handler

#define IOServiceNotificationDispatchSource_SetHandler_Args \
        OSAction * action

#define IOServiceNotificationDispatchSource_CheckForWork_Args \
        const IORPC rpc, \
        bool synchronous

#define IOServiceNotificationDispatchSource_ServiceNotificationReady_Args \
        OSAction * action

#define IOServiceNotificationDispatchSource_CopyNextNotification_Args \
        uint64_t * type, \
        IOService ** service, \
        uint64_t * options

#define IOServiceNotificationDispatchSource_Methods \
\
public:\
\
    virtual kern_return_t\
    Dispatch(const IORPC rpc) APPLE_KEXT_OVERRIDE;\
\
    static kern_return_t\
    _Dispatch(IOServiceNotificationDispatchSource * self, const IORPC rpc);\
\
    static kern_return_t\
    Create(\
        OSDictionary * matching,\
        uint64_t options,\
        IODispatchQueue * queue,\
        IOServiceNotificationDispatchSource ** notification);\
\
    kern_return_t\
    SetHandler(\
        OSAction * action,\
        OSDispatchMethod supermethod = NULL);\
\
    kern_return_t\
    DeliverNotifications(\
        IOServiceNotificationBlock block);\
\
    void\
    ServiceNotificationReady(\
        OSAction * action,\
        OSDispatchMethod supermethod = NULL);\
\
    kern_return_t\
    CopyNextNotification(\
        uint64_t * type,\
        IOService ** service,\
        uint64_t * options,\
        OSDispatchMethod supermethod = NULL);\
\
\
protected:\
    /* _Impl methods */\
\
    static kern_return_t\
    Create_Call(IOServiceNotificationDispatchSource_Create_Args);\
\
    kern_return_t\
    SetEnableWithCompletion_Impl(IODispatchSource_SetEnableWithCompletion_Args);\
\
    kern_return_t\
    Cancel_Impl(IODispatchSource_Cancel_Args);\
\
    kern_return_t\
    CheckForWork_Impl(IODispatchSource_CheckForWork_Args);\
\
\
public:\
    /* _Invoke methods */\
\
    typedef kern_return_t (*Create_Handler)(IOServiceNotificationDispatchSource_Create_Args);\
    static kern_return_t\
    Create_Invoke(const IORPC rpc,\
        Create_Handler func);\
\
    typedef kern_return_t (*SetHandler_Handler)(OSMetaClassBase * target, IOServiceNotificationDispatchSource_SetHandler_Args);\
    static kern_return_t\
    SetHandler_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        SetHandler_Handler func);\
\
    typedef void (*ServiceNotificationReady_Handler)(OSMetaClassBase * target, IOServiceNotificationDispatchSource_ServiceNotificationReady_Args);\
    static kern_return_t\
    ServiceNotificationReady_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        ServiceNotificationReady_Handler func);\
\
    typedef kern_return_t (*CopyNextNotification_Handler)(OSMetaClassBase * target, IOServiceNotificationDispatchSource_CopyNextNotification_Args);\
    static kern_return_t\
    CopyNextNotification_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        CopyNextNotification_Handler func);\
\


#define IOServiceNotificationDispatchSource_KernelMethods \
\
protected:\
    /* _Impl methods */\
\
    static kern_return_t\
    Create_Impl(IOServiceNotificationDispatchSource_Create_Args);\
\
    kern_return_t\
    SetHandler_Impl(IOServiceNotificationDispatchSource_SetHandler_Args);\
\
    kern_return_t\
    CopyNextNotification_Impl(IOServiceNotificationDispatchSource_CopyNextNotification_Args);\
\


#define IOServiceNotificationDispatchSource_VirtualMethods \
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

extern OSMetaClass          * gIOServiceNotificationDispatchSourceMetaClass;
extern const OSClassLoadInformation IOServiceNotificationDispatchSource_Class;

class IOServiceNotificationDispatchSourceMetaClass : public OSMetaClass
{
public:
    virtual kern_return_t
    New(OSObject * instance) override;
    virtual kern_return_t
    Dispatch(const IORPC rpc) override;
};

#endif /* !KERNEL */

class IOServiceNotificationDispatchSourceInterface : public OSInterface
{
public:
};

struct IOServiceNotificationDispatchSource_IVars;
struct IOServiceNotificationDispatchSource_LocalIVars;

class IOServiceNotificationDispatchSource : public IODispatchSource, public IOServiceNotificationDispatchSourceInterface
{
#if KERNEL
    OSDeclareDefaultStructorsWithDispatch(IOServiceNotificationDispatchSource);
#endif /* KERNEL */

#if !KERNEL
    friend class IOServiceNotificationDispatchSourceMetaClass;
#endif /* !KERNEL */

public:
    union
    {
        IOServiceNotificationDispatchSource_IVars * ivars;
        IOServiceNotificationDispatchSource_LocalIVars * lvars;
    };
#if !KERNEL
    virtual const OSMetaClass *
    getMetaClass() const APPLE_KEXT_OVERRIDE { return OSTypeID(IOServiceNotificationDispatchSource); };
#endif /* KERNEL */

    using super = IODispatchSource;

#if !KERNEL
    IOServiceNotificationDispatchSource_Methods
#endif /* !KERNEL */

    IOServiceNotificationDispatchSource_VirtualMethods
};
/* IOServiceNotificationDispatchSource.iig:130- */

#endif /* ! _IOKIT_UIOSERVICEDISPATCHSOURCE_H */
