#include <hxcpp.h>

#ifndef INCLUDED_openfl_net__URLLoaderDataFormat_URLLoaderDataFormat_Impl_
#include <openfl/net/_URLLoaderDataFormat/URLLoaderDataFormat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_bc4be490b63557ba_29_fromString,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","fromString",0xfc3261c1,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.fromString","openfl/net/URLLoaderDataFormat.hx",29,0x0297964c)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4be490b63557ba_40_toString,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","toString",0x62701f12,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.toString","openfl/net/URLLoaderDataFormat.hx",40,0x0297964c)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4be490b63557ba_15_boot,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","boot",0x85b02798,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.boot","openfl/net/URLLoaderDataFormat.hx",15,0x0297964c)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4be490b63557ba_20_boot,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","boot",0x85b02798,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.boot","openfl/net/URLLoaderDataFormat.hx",20,0x0297964c)
HX_LOCAL_STACK_FRAME(_hx_pos_bc4be490b63557ba_25_boot,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_","boot",0x85b02798,"openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_.boot","openfl/net/URLLoaderDataFormat.hx",25,0x0297964c)
namespace openfl{
namespace net{
namespace _URLLoaderDataFormat{

void URLLoaderDataFormat_Impl__obj::__construct() { }

Dynamic URLLoaderDataFormat_Impl__obj::__CreateEmpty() { return new URLLoaderDataFormat_Impl__obj; }

void *URLLoaderDataFormat_Impl__obj::_hx_vtable = 0;

Dynamic URLLoaderDataFormat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< URLLoaderDataFormat_Impl__obj > _hx_result = new URLLoaderDataFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool URLLoaderDataFormat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6b90aef2;
}

 ::Dynamic URLLoaderDataFormat_Impl__obj::BINARY;

 ::Dynamic URLLoaderDataFormat_Impl__obj::TEXT;

 ::Dynamic URLLoaderDataFormat_Impl__obj::VARIABLES;

 ::Dynamic URLLoaderDataFormat_Impl__obj::fromString(::String value){
            	HX_STACKFRAME(&_hx_pos_bc4be490b63557ba_29_fromString)
HXDLIN(  29)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("binary",01,bc,0b,ed)) ){
HXLINE(  31)			return 0;
HXDLIN(  31)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("text",ad,cc,f9,4c)) ){
HXLINE(  32)			return 1;
HXDLIN(  32)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("variables",b7,e2,62,82)) ){
HXLINE(  33)			return 2;
HXDLIN(  33)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  34)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  29)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoaderDataFormat_Impl__obj,fromString,return )

::String URLLoaderDataFormat_Impl__obj::toString( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_bc4be490b63557ba_40_toString)
HXDLIN(  40)		 ::Dynamic _hx_switch_0 = this1;
            		if (  (_hx_switch_0==0) ){
HXLINE(  42)			return HX_("binary",01,bc,0b,ed);
HXDLIN(  42)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==1) ){
HXLINE(  43)			return HX_("text",ad,cc,f9,4c);
HXDLIN(  43)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==2) ){
HXLINE(  44)			return HX_("variables",b7,e2,62,82);
HXDLIN(  44)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  45)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  40)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(URLLoaderDataFormat_Impl__obj,toString,return )


URLLoaderDataFormat_Impl__obj::URLLoaderDataFormat_Impl__obj()
{
}

bool URLLoaderDataFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { outValue = toString_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"fromString") ) { outValue = fromString_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *URLLoaderDataFormat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo URLLoaderDataFormat_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &URLLoaderDataFormat_Impl__obj::BINARY,HX_("BINARY",01,68,8e,9f)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &URLLoaderDataFormat_Impl__obj::TEXT,HX_("TEXT",ad,94,ba,37)},
	{::hx::fsObject /*  ::Dynamic */ ,(void *) &URLLoaderDataFormat_Impl__obj::VARIABLES,HX_("VARIABLES",97,52,bb,7d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void URLLoaderDataFormat_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::BINARY,"BINARY");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::TEXT,"TEXT");
	HX_MARK_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::VARIABLES,"VARIABLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void URLLoaderDataFormat_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::BINARY,"BINARY");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::TEXT,"TEXT");
	HX_VISIT_MEMBER_NAME(URLLoaderDataFormat_Impl__obj::VARIABLES,"VARIABLES");
};

#endif

::hx::Class URLLoaderDataFormat_Impl__obj::__mClass;

static ::String URLLoaderDataFormat_Impl__obj_sStaticFields[] = {
	HX_("BINARY",01,68,8e,9f),
	HX_("TEXT",ad,94,ba,37),
	HX_("VARIABLES",97,52,bb,7d),
	HX_("fromString",db,2d,74,54),
	HX_("toString",ac,d0,6e,38),
	::String(null())
};

void URLLoaderDataFormat_Impl__obj::__register()
{
	URLLoaderDataFormat_Impl__obj _hx_dummy;
	URLLoaderDataFormat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.net._URLLoaderDataFormat.URLLoaderDataFormat_Impl_",c8,76,0e,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &URLLoaderDataFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = URLLoaderDataFormat_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(URLLoaderDataFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< URLLoaderDataFormat_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = URLLoaderDataFormat_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = URLLoaderDataFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = URLLoaderDataFormat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void URLLoaderDataFormat_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_bc4be490b63557ba_15_boot)
HXDLIN(  15)		BINARY = 0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bc4be490b63557ba_20_boot)
HXDLIN(  20)		TEXT = 1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_bc4be490b63557ba_25_boot)
HXDLIN(  25)		VARIABLES = 2;
            	}
}

} // end namespace openfl
} // end namespace net
} // end namespace _URLLoaderDataFormat