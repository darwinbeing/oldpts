// **********************************************************************
//
// Copyright (c) 2003-2009 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

// Ice version 3.3.1
// Generated from file `FileParser.ice'

#ifndef __IceGrid_FileParser_h__
#define __IceGrid_FileParser_h__

#include <Ice/LocalObjectF.h>
#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <Ice/UserExceptionFactory.h>
#include <Ice/FactoryTable.h>
#include <Ice/StreamF.h>
#include <IceGrid/Admin.h>
#include <Ice/UndefSysMacros.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 303
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

#ifndef ICE_GRID_API
#   ifdef ICE_GRID_API_EXPORTS
#       define ICE_GRID_API ICE_DECLSPEC_EXPORT
#   else
#       define ICE_GRID_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IceProxy
{

namespace IceGrid
{

class FileParser;

}

}

namespace IceGrid
{

class FileParser;
ICE_GRID_API bool operator==(const FileParser&, const FileParser&);
ICE_GRID_API bool operator<(const FileParser&, const FileParser&);

}

namespace IceInternal
{

ICE_GRID_API ::Ice::Object* upCast(::IceGrid::FileParser*);
ICE_GRID_API ::IceProxy::Ice::Object* upCast(::IceProxy::IceGrid::FileParser*);

}

namespace IceGrid
{

typedef ::IceInternal::Handle< ::IceGrid::FileParser> FileParserPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::IceGrid::FileParser> FileParserPrx;

ICE_GRID_API void __read(::IceInternal::BasicStream*, FileParserPrx&);
ICE_GRID_API void __patch__FileParserPtr(void*, ::Ice::ObjectPtr&);

}

namespace IceGrid
{

class ICE_GRID_API ParseException : public ::Ice::UserException
{
public:

    ParseException() {}
    explicit ParseException(const ::std::string&);
    virtual ~ParseException() throw();

    virtual ::std::string ice_name() const;
    virtual ::Ice::Exception* ice_clone() const;
    virtual void ice_throw() const;

    static const ::IceInternal::UserExceptionFactoryPtr& ice_factory();

    ::std::string reason;

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

static ParseException __ParseException_init;

}

namespace IceAsync
{

}

namespace IceProxy
{

namespace IceGrid
{

class FileParser : virtual public ::IceProxy::Ice::Object
{
public:

    ::IceGrid::ApplicationDescriptor parse(const ::std::string& xmlFile, const ::IceGrid::AdminPrx& adminProxy)
    {
        return parse(xmlFile, adminProxy, 0);
    }
    ::IceGrid::ApplicationDescriptor parse(const ::std::string& xmlFile, const ::IceGrid::AdminPrx& adminProxy, const ::Ice::Context& __ctx)
    {
        return parse(xmlFile, adminProxy, &__ctx);
    }
    
private:

    ICE_GRID_API ::IceGrid::ApplicationDescriptor parse(const ::std::string&, const ::IceGrid::AdminPrx&, const ::Ice::Context*);
    
public:
    
    ::IceInternal::ProxyHandle<FileParser> ice_context(const ::Ice::Context& __context) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_context(__context).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_context(__context).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_adapterId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_adapterId(__id).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_endpoints(__endpoints).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_locatorCacheTimeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_locatorCacheTimeout(__timeout).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_connectionCached(bool __cached) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_connectionCached(__cached).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_endpointSelection(__est).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_secure(bool __secure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_secure(__secure).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_preferSecure(bool __preferSecure) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_preferSecure(__preferSecure).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_router(const ::Ice::RouterPrx& __router) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_router(__router).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_router(__router).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_locator(__locator).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_collocationOptimized(bool __co) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_collocationOptimized(__co).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_twoway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_twoway().get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_twoway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_oneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_oneway().get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_oneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_batchOneway() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_batchOneway().get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_datagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_datagram().get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_datagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_batchDatagram() const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_batchDatagram().get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_compress(bool __compress) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_compress(__compress).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_timeout(int __timeout) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_timeout(__timeout).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    #endif
    }
    
    ::IceInternal::ProxyHandle<FileParser> ice_connectionId(const std::string& __id) const
    {
    #if defined(_MSC_VER) && (_MSC_VER < 1300) // VC++ 6 compiler bug
        typedef ::IceProxy::Ice::Object _Base;
        return dynamic_cast<FileParser*>(_Base::ice_connectionId(__id).get());
    #else
        return dynamic_cast<FileParser*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    #endif
    }
    
    ICE_GRID_API static const ::std::string& ice_staticId();

private: 

    ICE_GRID_API virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    ICE_GRID_API virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    ICE_GRID_API virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace IceGrid
{

class ICE_GRID_API FileParser : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::IceGrid::ApplicationDescriptor parse(const ::std::string&, const ::IceGrid::AdminPrx&, const ::Ice::Context*) = 0;
};

}

}

namespace IceDelegateM
{

namespace IceGrid
{

class ICE_GRID_API FileParser : virtual public ::IceDelegate::IceGrid::FileParser,
                                virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::IceGrid::ApplicationDescriptor parse(const ::std::string&, const ::IceGrid::AdminPrx&, const ::Ice::Context*);
};

}

}

namespace IceDelegateD
{

namespace IceGrid
{

class ICE_GRID_API FileParser : virtual public ::IceDelegate::IceGrid::FileParser,
                                virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::IceGrid::ApplicationDescriptor parse(const ::std::string&, const ::IceGrid::AdminPrx&, const ::Ice::Context*);
};

}

}

namespace IceGrid
{

class ICE_GRID_API FileParser : virtual public ::Ice::Object
{
public:

    typedef FileParserPrx ProxyType;
    typedef FileParserPtr PointerType;
    
    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::IceGrid::ApplicationDescriptor parse(const ::std::string&, const ::IceGrid::AdminPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___parse(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void __write(::IceInternal::BasicStream*) const;
    virtual void __read(::IceInternal::BasicStream*, bool);
    virtual void __write(const ::Ice::OutputStreamPtr&) const;
    virtual void __read(const ::Ice::InputStreamPtr&, bool);
};

}

#endif