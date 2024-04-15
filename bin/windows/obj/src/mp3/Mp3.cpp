#include <hxcpp.h>

#ifndef INCLUDED_c91e21f2bbb75d40
#define INCLUDED_c91e21f2bbb75d40
#include "C:/Users/chris/OneDrive/Documents/Mp3 Support/src/_internal/native/MP3Ext.cpp"
#endif
#ifndef INCLUDED__internal_native_MP3_DATA
#include <_internal/native/MP3_DATA.h>
#endif
#ifndef INCLUDED_mp3_Mp3
#include <mp3/Mp3.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_cf254a17a74b50d2_14_decode,"mp3.Mp3","decode",0x0bf6f2ca,"mp3.Mp3.decode","mp3/Mp3.hx",14,0x9905696d)
namespace mp3{

void Mp3_obj::__construct() { }

Dynamic Mp3_obj::__CreateEmpty() { return new Mp3_obj; }

void *Mp3_obj::_hx_vtable = 0;

Dynamic Mp3_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Mp3_obj > _hx_result = new Mp3_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mp3_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x2e539f44;
}

void Mp3_obj::decode( ::_internal::native::MP3_DATA data){
            	HX_STACKFRAME(&_hx_pos_cf254a17a74b50d2_14_decode)
HXDLIN(  14)		mp3_decode(data);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mp3_obj,decode,(void))


Mp3_obj::Mp3_obj()
{
}

bool Mp3_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Mp3_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Mp3_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Mp3_obj::__mClass;

static ::String Mp3_obj_sStaticFields[] = {
	HX_("decode",2e,5d,ed,64),
	::String(null())
};

void Mp3_obj::__register()
{
	Mp3_obj _hx_dummy;
	Mp3_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("mp3.Mp3",52,2f,ae,f8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mp3_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Mp3_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Mp3_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mp3_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mp3_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace mp3
