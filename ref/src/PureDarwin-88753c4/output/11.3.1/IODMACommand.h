/* iig(DriverKit-73.40.3) generated from IODMACommand.iig */

/* IODMACommand.iig:1-89 */
/*
 * Copyright (c) 2020 Apple Inc. All rights reserved.
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
#include <IOKit/IODMACommand.h>
#endif
#endif

#ifndef _IOKIT_UIODMACOMMMAND_H
#define _IOKIT_UIODMACOMMMAND_H

#include <DriverKit/IOMemoryDescriptor.h>  /* .iig include */
#include <DriverKit/IOService.h>  /* .iig include */

// IODMACommand Create options
enum {
	kIODMACommandCreateNoOptions = 0,
};

// IODMACommand PrepareForDMA options
enum {
	kIODMACommandPrepareForDMANoOptions = 0,
};

// IODMACommand CompleteDMA options
enum {
	kIODMACommandCompleteDMANoOptions = 0,
};

// IODMACommand PerformOperation options
enum {
	kIODMACommandPerformOperationOptionRead  = 0x00000001,
	kIODMACommandPerformOperationOptionWrite = 0x00000002,
	kIODMACommandPerformOperationOptionZero  = 0x00000004,
};

// IODMACommandSpecification options
enum {
	kIODMACommandSpecificationNoOptions = 0,
};

struct IODMACommandSpecification {
	uint64_t options;
	uint64_t maxAddressBits;
	uint64_t _resv[16];
};

/*!
 * @class IODMACommand
 *
 * @abstract
 * IODMACommand allows a mapping for DMA to be created from an IOMemoryDescriptor. 
 *
 * @discussion
 * IODMACommand allows a mapping for DMA to be created from an IOMemoryDescriptor. 
 * The IODMACommand instance represents the mapping and should be kept prepared for the
 * duration of the I/O, and completed when the I/O is finished.
 * IODMACommand does not perform bounce buffering but allows access to the mapping with
 * the PerformOperation method so that data can moved into and out of the mapping, eg.
 * to/from a driver allocated bounce buffer.
 *
*/

/* class IODMACommand IODMACommand.iig:90-188 */

#define IODMACommand_Create_ID            0xf296a92bb435af2eULL
#define IODMACommand_PrepareForDMA_ID            0xf88a8c08b75b1110ULL
#define IODMACommand_CompleteDMA_ID            0xae15e446c7041259ULL
#define IODMACommand_GetPreparation_ID            0xcb1908ddf3b73cdeULL
#define IODMACommand_PerformOperation_ID            0xc41cd97d9b3042eeULL

#define IODMACommand_Create_Args \
        IOService * device, \
        uint64_t options, \
        const IODMACommandSpecification * specification, \
        IODMACommand ** command

#define IODMACommand_PrepareForDMA_Args \
        uint64_t options, \
        IOMemoryDescriptor * memory, \
        uint64_t offset, \
        uint64_t length, \
        uint64_t * flags, \
        uint32_t * segmentsCount, \
        IOAddressSegment * segments

#define IODMACommand_CompleteDMA_Args \
        uint64_t options

#define IODMACommand_GetPreparation_Args \
        uint64_t * offset, \
        uint64_t * length, \
        IOMemoryDescriptor ** memory

#define IODMACommand_PerformOperation_Args \
        uint64_t options, \
        uint64_t dmaOffset, \
        uint64_t length, \
        uint64_t dataOffset, \
        IOMemoryDescriptor * data

#define IODMACommand_Methods \
\
public:\
\
    virtual kern_return_t\
    Dispatch(const IORPC rpc) APPLE_KEXT_OVERRIDE;\
\
    static kern_return_t\
    _Dispatch(IODMACommand * self, const IORPC rpc);\
\
    static kern_return_t\
    Create(\
        IOService * device,\
        uint64_t options,\
        const IODMACommandSpecification * specification,\
        IODMACommand ** command);\
\
    kern_return_t\
    PrepareForDMA(\
        uint64_t options,\
        IOMemoryDescriptor * memory,\
        uint64_t offset,\
        uint64_t length,\
        uint64_t * flags,\
        uint32_t * segmentsCount,\
        IOAddressSegment * segments,\
        OSDispatchMethod supermethod = NULL);\
\
    kern_return_t\
    CompleteDMA(\
        uint64_t options,\
        OSDispatchMethod supermethod = NULL);\
\
    kern_return_t\
    GetPreparation(\
        uint64_t * offset,\
        uint64_t * length,\
        IOMemoryDescriptor ** memory,\
        OSDispatchMethod supermethod = NULL);\
\
    kern_return_t\
    PerformOperation(\
        uint64_t options,\
        uint64_t dmaOffset,\
        uint64_t length,\
        uint64_t dataOffset,\
        IOMemoryDescriptor * data,\
        OSDispatchMethod supermethod = NULL);\
\
\
protected:\
    /* _Impl methods */\
\
\
public:\
    /* _Invoke methods */\
\
    typedef kern_return_t (*Create_Handler)(IODMACommand_Create_Args);\
    static kern_return_t\
    Create_Invoke(const IORPC rpc,\
        Create_Handler func);\
\
    typedef kern_return_t (*PrepareForDMA_Handler)(OSMetaClassBase * target, IODMACommand_PrepareForDMA_Args);\
    static kern_return_t\
    PrepareForDMA_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        PrepareForDMA_Handler func);\
\
    typedef kern_return_t (*CompleteDMA_Handler)(OSMetaClassBase * target, IODMACommand_CompleteDMA_Args);\
    static kern_return_t\
    CompleteDMA_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        CompleteDMA_Handler func);\
\
    typedef kern_return_t (*GetPreparation_Handler)(OSMetaClassBase * target, IODMACommand_GetPreparation_Args);\
    static kern_return_t\
    GetPreparation_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        GetPreparation_Handler func);\
\
    typedef kern_return_t (*PerformOperation_Handler)(OSMetaClassBase * target, IODMACommand_PerformOperation_Args);\
    static kern_return_t\
    PerformOperation_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        PerformOperation_Handler func);\
\


#define IODMACommand_KernelMethods \
\
protected:\
    /* _Impl methods */\
\
    static kern_return_t\
    Create_Impl(IODMACommand_Create_Args);\
\
    kern_return_t\
    PrepareForDMA_Impl(IODMACommand_PrepareForDMA_Args);\
\
    kern_return_t\
    CompleteDMA_Impl(IODMACommand_CompleteDMA_Args);\
\
    kern_return_t\
    GetPreparation_Impl(IODMACommand_GetPreparation_Args);\
\
    kern_return_t\
    PerformOperation_Impl(IODMACommand_PerformOperation_Args);\
\


#define IODMACommand_VirtualMethods \
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

extern OSMetaClass          * gIODMACommandMetaClass;
extern const OSClassLoadInformation IODMACommand_Class;

class IODMACommandMetaClass : public OSMetaClass
{
public:
    virtual kern_return_t
    New(OSObject * instance) override;
    virtual kern_return_t
    Dispatch(const IORPC rpc) override;
};

#endif /* !KERNEL */

#if !KERNEL

class IODMACommandInterface : public OSInterface
{
public:
};

struct IODMACommand_IVars;
struct IODMACommand_LocalIVars;

class IODMACommand : public OSObject, public IODMACommandInterface
{
#if !KERNEL
    friend class IODMACommandMetaClass;
#endif /* !KERNEL */

#if !KERNEL
public:
    union
    {
        IODMACommand_IVars * ivars;
        IODMACommand_LocalIVars * lvars;
    };
#endif /* !KERNEL */

    using super = OSObject;

#if !KERNEL
    IODMACommand_Methods
    IODMACommand_VirtualMethods
#endif /* !KERNEL */

};
#endif /* !KERNEL */

/* IODMACommand.iig:190- */

#endif /* ! _IOKIT_UIODMACOMMMAND_H */
