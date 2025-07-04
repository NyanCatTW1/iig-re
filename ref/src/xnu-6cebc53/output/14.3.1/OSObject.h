/* iig(DriverKit-256.100.5) generated from OSObject.iig */

/* OSObject.iig:1-258 */
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
#include <libkern/c++/OSObject.h>
#endif
#endif

#ifndef _IOKIT_UOSOBJECT_H
#define _IOKIT_UOSOBJECT_H

#if !KERNEL
#include <stddef.h>
#include <stdint.h>
#include <DriverKit/IOReturn.h>
#if DRIVERKIT_PRIVATE
#include <mach/port.h>
#endif /* DRIVERKIT_PRIVATE */
#if !__IIG
#include <string.h>
#include <DriverKit/OSMetaClass.h>
#endif	/* !__IIG */
class OSObject;
typedef OSObject * OSObjectPtr;
#endif /* !KERNEL */

#if !__IIG_ATTRIBUTES_DEFINED__

#define __IIG_ATTRIBUTES_DEFINED__	1

#if __IIG || __DOCUMENTATION__

#define IIG_KERNEL				__attribute__((annotate("kernel")))
#define IIG_NATIVE       		__attribute__((annotate("native")))
#define IIG_LOCAL        		__attribute__((annotate("local")))
#define IIG_LOCALONLY    		__attribute__((annotate("localonly")))
#define IIG_REMOTE       		__attribute__((annotate("remote")))
#define IIG_LOCALHOST    		__attribute__((annotate("localhost")))
#define IIG_INVOKEREPLY  		__attribute__((annotate("invokereply")))
#define IIG_REPLY        		__attribute__((annotate("reply")))
#define IIG_PORTMAKESEND 		__attribute__((annotate("MACH_MSG_TYPE_MAKE_SEND")))
#define IIG_PORTCOPYSEND 		__attribute__((annotate("MACH_MSG_TYPE_COPY_SEND")))
#define IIG_TARGET       		__attribute__((annotate("target")))
#define IIG_TYPE(p)      		__attribute__((annotate("type=" # p)))
//#define IIG_ARRAY(maxcount)	__attribute__((annotate(# maxcount), annotate("array")))
#define IIG_EXTENDS(cls) 		__attribute__((annotate("extends=" # cls)))
//#define IIG_INTERFACE  		__attribute__((annotate("interface")))
//#define IIG_IMPLEMENTS(i)		void __implements(i *);
#define IIG_QUEUENAME(name)		__attribute__((annotate("queuename=" # name)))
#define IIG_SERIALIZABLE		__attribute__((annotate("serializable")))
#define IIG_CONCRETE			__attribute__((annotate("concrete")))

#if __IIG
#define KERNEL					IIG_KERNEL
#endif /* __IIG */
#define NATIVE					IIG_NATIVE
#define LOCAL					IIG_LOCAL
#define LOCALONLY				IIG_LOCALONLY
#define REMOTE					IIG_REMOTE
#define LOCALHOST				IIG_LOCALHOST
#define INVOKEREPLY				IIG_INVOKEREPLY
#define REPLY					IIG_REPLY
#define PORTMAKESEND			IIG_PORTMAKESEND
#define PORTCOPYSEND			IIG_PORTCOPYSEND
#define TARGET					IIG_TARGET
#define TYPE(p)					IIG_TYPE(p)
//#define ARRAY(maxcount)		IIG_ARRAY(maxcount)
#define EXTENDS(cls)			IIG_EXTENDS(cls)
//#define INTERFACE				IIG_INTERFACE
//#define IMPLEMENTS(i)			IIG_IMPLEMENTS(i)
#define QUEUENAME(name)			IIG_QUEUENAME(name)

#else /* __IIG || __DOCUMENTATION__ */

#define IIG_KERNEL
#define IIG_NATIVE
#define IIG_LOCAL
#define IIG_LOCALONLY
#define IIG_REMOTE
#define IIG_LOCALHOST
#define IIG_INVOKEREPLY
#define IIG_REPLY
#define IIG_PORTMAKESEND
#define IIG_PORTCOPYSEND
#define IIG_TARGET
#define IIG_TYPE(p)
//#define IIG_ARRAY(maxcount)
#define IIG_EXTENDS(cls)
//#define IIG_INTERFACE
//#define IIG_IMPLEMENTS(i)
#define IIG_QUEUENAME(name)
#define IIG_SERIALIZABLE

#endif /* __IIG || __DOCUMENTATION__ */

#endif /* __IIG_ATTRIBUTES_DEFINED__ */


#if !__IIG
#if KERNEL
typedef OSObject OSContainer;
#else /* KERNEL */
class IIG_SERIALIZABLE OSContainer;
#endif /* KERNEL */
#else /* !__IIG */
class IIG_SERIALIZABLE OSContainer;
#endif  /* !__IIG */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
 * DRIVERKIT_ macros below can be used to describe the ownership semantics
 * of functions handling subclasses of OSObject.
 * The attributes propagate with inheritance, but can be overriden.
 * New versions of the Clang Static Analyzer can use this knowledge to
 * check the code for leaks or uses-after-free.
 */

#ifndef KERNEL
/*
 * By default, methods returning OSObjects are assumed to have the following
 * owneship semantics:
 *   - Functions and methods that have "Get" in their name are assumed to be
 *  getters. They return at "+0" and the caller is not responsible for releasing
 *  the returned object.
 *
 *  - All other methods are assumed to return at "+1", and the caller is
 *  responsible for releasing the returned object.
 *
 *  The semantics implied by the naming convention described above can be
 *  overriden using either DRIVERKIT_RETURNS_RETAINED or
 *  DRIVERKIT_RETURNS_NOT_RETAINED attribute applied to a function.
 *  In the former case, it stipulates that the function is returning at "+1",
 *  and in the latter case "+0".
 *  DRIVERKIT_RETURNS_RETAINED and DRIVERKIT_RETURNS_NOT_RETAINED attributes
 *  can be also applied to out parameters, in which case they specify
 *  that an out parameter is written into at +1 or +0 respectively.
 *  Behavior of out parameters of non-void functions can be additionally
 *  customized via annotations that explain how a function returns a retained
 *  or a non-retained value through its out-parameter depending on its
 *  return value: DRIVERKIT_RETURNS_RETAINED_ON_ZERO and
 *  DRIVERKIT_RETURNS_RETAINED_ON_NONZERO.
 */
#if __has_attribute(os_returns_retained)
#define DRIVERKIT_RETURNS_RETAINED __attribute__((os_returns_retained))
#else
#define DRIVERKIT_RETURNS_RETAINED
#endif
#if __has_attribute(os_returns_not_retained)
#define DRIVERKIT_RETURNS_NOT_RETAINED __attribute__((os_returns_not_retained))
#else
#define DRIVERKIT_RETURNS_NOT_RETAINED
#endif

/*
 * DRIVERKIT_CONSUMED attribute can be applied to parameters.
 * It specifies that this function call would consume the reference to the
 * annotated parameter.
 */
#if __has_attribute(os_consumed)
#define DRIVERKIT_CONSUMED __attribute__((os_consumed))
#else
#define DRIVERKIT_CONSUMED
#endif

/*
 * DRIVERKIT_CONSUMES_THIS attribute can be applied to C++ methods.
 * It specifies that this method call consumes a reference to "this" (e.g.
 * by storing a reference to "this" in a passed parameter).
 */
#if __has_attribute(os_consumes_this)
#define DRIVERKIT_CONSUMES_THIS __attribute__((os_consumes_this))
#else
#define DRIVERKIT_CONSUMES_THIS
#endif

/*
 * DRIVERKIT_RETURNS_RETAINED_ON_ZERO is an attribute applicable to out
 * parameters.
 * It specifies that an out parameter at +1 is written into an argument iff
 * the function returns a zero return value.
 */
#if __has_attribute(os_returns_retained_on_zero)
#define DRIVERKIT_RETURNS_RETAINED_ON_ZERO __attribute__((os_returns_retained_on_zero))
#else
#define DRIVERKIT_RETURNS_RETAINED_ON_ZERO
#endif

/*
 * DRIVERKIT_RETURNS_RETAINED_ON_NON_ZERO is an attribute applicable to out
 * parameters.
 * It specifies that an out parameter at +1 is written into an argument iff
 * the function returns a non-zero return value.
 */
#if __has_attribute(os_returns_retained_on_non_zero)
#define DRIVERKIT_RETURNS_RETAINED_ON_NONZERO __attribute__((os_returns_retained_on_non_zero))
#else
#define DRIVERKIT_RETURNS_RETAINED_ON_NONZERO
#endif


/*
 * Macros below are equivalent to their DRIVERKIT_ counterparts.
 * They are provided for source-compatibility with IOKit code so they can
 * be used in code that gets compiled for both platforms.
 */
#define LIBKERN_RETURNS_RETAINED DRIVERKIT_RETURNS_RETAINED
#define LIBKERN_RETURNS_NOT_RETAINED DRIVERKIT_RETURNS_NOT_RETAINED
#define LIBKERN_CONSUMED DRIVERKIT_CONSUMED
#define LIBKERN_CONSUMES_THIS DRIVERKIT_CONSUMES_THIS
#define LIBKERN_RETURNS_RETAINED_ON_ZERO DRIVERKIT_RETURNS_RETAINED_ON_ZERO
#define LIBKERN_RETURNS_RETAINED_ON_NONZERO DRIVERKIT_RETURNS_RETAINED_ON_NONZERO

#endif  /* !defined(KERNEL) */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */


class IIG_SERIALIZABLE OSData;
class IIG_SERIALIZABLE OSNumber;
class IIG_SERIALIZABLE OSString;
class IIG_SERIALIZABLE OSBoolean;
class IIG_SERIALIZABLE OSDictionary;
class IIG_SERIALIZABLE OSArray;
class IIG_SERIALIZABLE OSSet;
class IIG_SERIALIZABLE OSOrderedSet;

class OSMetaClass;
class IODispatchQueue;
typedef char IODispatchQueueName[256];

#if __IIG
/* OSObject.iig:273-275 */
#endif /* __IIG */


/* source class OSObject OSObject.iig:276-306 */

#if __DOCUMENTATION__
#define KERNEL IIG_KERNEL

/*!
*/

class OSObject : public OSMetaClassBase
{
public:

	virtual bool
	init() LOCALONLY;

	virtual void
	free() LOCALONLY;

    virtual void
    retain() const override;

    virtual void
    release() const override;

	virtual kern_return_t
	SetDispatchQueue(
		const IODispatchQueueName name,
		IODispatchQueue         * queue) KERNEL = 0;

	virtual kern_return_t
	CopyDispatchQueue(
		const IODispatchQueueName name,
		IODispatchQueue        ** queue) KERNEL = 0;
};

#undef KERNEL
#else /* __DOCUMENTATION__ */

/* generated class OSObject OSObject.iig:276-306 */

#define OSObject_SetDispatchQueue_ID            0xe608ae8273dae1bcULL
#define OSObject_CopyDispatchQueue_ID            0x95115b48fd29f7c9ULL

#define OSObject_SetDispatchQueue_Args \
        const char * name, \
        IODispatchQueue * queue

#define OSObject_CopyDispatchQueue_Args \
        const char * name, \
        IODispatchQueue ** queue

#define OSObject_Methods \
\
public:\
\
    virtual kern_return_t\
    Dispatch(const IORPC rpc) APPLE_KEXT_OVERRIDE;\
\
    static kern_return_t\
    _Dispatch(OSObject * self, const IORPC rpc);\
\
    kern_return_t\
    SetDispatchQueue(\
        const IODispatchQueueName name,\
        IODispatchQueue * queue,\
        OSDispatchMethod supermethod = NULL);\
\
    kern_return_t\
    CopyDispatchQueue(\
        const IODispatchQueueName name,\
        IODispatchQueue ** queue,\
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
    typedef kern_return_t (*SetDispatchQueue_Handler)(OSMetaClassBase * target, OSObject_SetDispatchQueue_Args);\
    static kern_return_t\
    SetDispatchQueue_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        SetDispatchQueue_Handler func);\
\
    typedef kern_return_t (*CopyDispatchQueue_Handler)(OSMetaClassBase * target, OSObject_CopyDispatchQueue_Args);\
    static kern_return_t\
    CopyDispatchQueue_Invoke(const IORPC rpc,\
        OSMetaClassBase * target,\
        CopyDispatchQueue_Handler func);\
\


#define OSObject_KernelMethods \
\
protected:\
    /* _Impl methods */\
\


#define OSObject_VirtualMethods \
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
    virtual void\
    retain(\
) const APPLE_KEXT_OVERRIDE;\
\
    virtual void\
    release(\
) const APPLE_KEXT_OVERRIDE;\
\


#if !KERNEL

extern OSMetaClass          * gOSObjectMetaClass;
extern const OSClassLoadInformation OSObject_Class;

class OSObjectMetaClass : public OSMetaClass
{
public:
    virtual kern_return_t
    New(OSObject * instance) override;
    virtual kern_return_t
    Dispatch(const IORPC rpc) override;
};

#endif /* !KERNEL */

#if !KERNEL

class OSObjectInterface : public OSInterface
{
public:
    virtual bool
    init() = 0;

    virtual void
    free() = 0;

    bool
    init_Call()  { return init(); };\

    void
    free_Call()  { return free(); };\

};

struct OSObject_IVars;
struct OSObject_LocalIVars;

class OSObject : public OSMetaClassBase, public OSObjectInterface
{
#if !KERNEL
    friend class OSObjectMetaClass;
#endif /* !KERNEL */

#if !KERNEL
public:
#ifdef OSObject_DECLARE_IVARS
OSObject_DECLARE_IVARS
#else /* OSObject_DECLARE_IVARS */
    union
    {
        OSObject_IVars * ivars;
        OSObject_LocalIVars * lvars;
    };
#endif /* OSObject_DECLARE_IVARS */
#endif /* !KERNEL */

#if !KERNEL
    static OSMetaClass *
    sGetMetaClass() { return gOSObjectMetaClass; };
#endif /* KERNEL */

    using super = OSMetaClassBase;

#if !KERNEL
    OSObject_Methods
    OSObject_VirtualMethods
#endif /* !KERNEL */

};
#endif /* !KERNEL */


#endif /* !__DOCUMENTATION__ */

/* OSObject.iig:308- */

#define DEFN(classname, name)                                       \
name ## _Impl(classname ## _ ## name ## _Args)

/*
 * Use of the IMPL macro is discouraged and should be replaced by a normal c++
 * method implementation (with the all method arguments) and the name of the method
 * given a suffix '_Impl'
 */

#define IMPL(classname, name)                                       \
classname :: DEFN(classname, name)

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#endif /* ! _IOKIT_UOSOBJECT_H */
