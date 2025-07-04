/* iig(DriverKit-48) generated from IOBufferMemoryDescriptor.iig */

/* IOBufferMemoryDescriptor.iig:1-51 */
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

#if !__IIG
#if KERNEL
#include <IOKit/IOBufferMemoryDescriptor.h>
#endif
#endif


#ifndef _IOKIT_UIOBUFFERMEMORYDESCRIPTOR_H
#define _IOKIT_UIOBUFFERMEMORYDESCRIPTOR_H

#include <DriverKit/IOMemoryDescriptor.h>  /* .iig include */ 

/*!
 * @class IOBufferMemoryDescriptor
 *
 * @abstract
 * IOBufferMemoryDescriptor describes a memory buffer allocated in the callers address space.
 *
 * @discussion
 * To allocate memory for I/O or sharing, use IOBufferMemoryDescriptor::Create().
 * IOBufferMemoryDescriptor can be handed to any API that expects an IOMemoryDescriptor.
 */

/* class IOBufferMemoryDescriptor IOBufferMemoryDescriptor.iig:52-96 */

#define IOBufferMemoryDescriptor_Create_ID            0xb78de684e17d5a4bULL
#define IOBufferMemoryDescriptor_SetLength_ID            0xc115230c191a6a9aULL

#define IOBufferMemoryDescriptor_Create_Args \
        uint64_t options, \
        uint64_t capacity, \
        uint64_t alignment, \
        IOBufferMemoryDescriptor ** memory

#define IOBufferMemoryDescriptor_SetLength_Args \
        uint64_t length

#define IOBufferMemoryDescriptor_Methods \
\
public:\
\
    virtual kern_return_t\
    Dispatch(const IORPC rpc) APPLE_KEXT_OVERRIDE;\
\
    static kern_return_t\
    _Dispatch(IOBufferMemoryDescriptor * self, const IORPC rpc);\
\
    static kern_return_t\
    Create(\
        uint64_t options,\
        uint64_t capacity,\
        uint64_t alignment,\
        IOBufferMemoryDescriptor ** memory);\
\
    kern_return_t\
    GetAddressRange(\
        IOAddressSegment * range);\
\
    kern_return_t\
    SetLength(\
        uint64_t length,\
        OSDispatchMethod supermethod = NULL);\
\
\
protected:\
    /* _Impl methods */\
\
\
protected:\
    /* _Invoke methods */\
\
    static kern_return_t\
    Create_Invoke(const IORPC rpc,\
        kern_return_t (*func)(IOBufferMemoryDescriptor_Create_Args));\
\
    kern_return_t\
    SetLength_Invoke(const IORPC rpc,\
        kern_return_t (IOBufferMemoryDescriptor::*func)(IOBufferMemoryDescriptor_SetLength_Args));\
\


#define IOBufferMemoryDescriptor_KernelMethods \
\
protected:\
    /* _Impl methods */\
\
    static kern_return_t\
    Create_Impl(IOBufferMemoryDescriptor_Create_Args);\
\
    kern_return_t\
    SetLength_Impl(IOBufferMemoryDescriptor_SetLength_Args);\
\


#define IOBufferMemoryDescriptor_VirtualMethods \
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

extern OSMetaClass          * gIOBufferMemoryDescriptorMetaClass;
extern OSClassLoadInformation IOBufferMemoryDescriptor_Class;

class IOBufferMemoryDescriptorMetaClass : public OSMetaClass
{
public:
    virtual kern_return_t
    New(OSObject * instance) override;
    virtual kern_return_t
    Dispatch(const IORPC rpc) override;
};

#endif /* !KERNEL */

#if !KERNEL

class IOBufferMemoryDescriptorInterface : public OSInterface
{
public:
};

struct IOBufferMemoryDescriptor_IVars;
struct IOBufferMemoryDescriptor_LocalIVars;

class IOBufferMemoryDescriptor : public IOMemoryDescriptor, public IOBufferMemoryDescriptorInterface
{
#if !KERNEL
    friend class IOBufferMemoryDescriptorMetaClass;
#endif /* !KERNEL */

#if !KERNEL
public:
    union
    {
        IOBufferMemoryDescriptor_IVars * ivars;
        IOBufferMemoryDescriptor_LocalIVars * lvars;
    };
#endif /* !KERNEL */

    using super = IOMemoryDescriptor;

#if !KERNEL
    IOBufferMemoryDescriptor_Methods
    IOBufferMemoryDescriptor_VirtualMethods
#endif /* !KERNEL */

};
#endif /* !KERNEL */

/* IOBufferMemoryDescriptor.iig:98- */
#endif /* ! _IOKIT_UIOBUFFERMEMORYDESCRIPTOR_H */
