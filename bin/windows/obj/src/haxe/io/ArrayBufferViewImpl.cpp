#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#include <haxe/io/ArrayBufferViewImpl.h>
#endif

namespace haxe{
namespace io{

void ArrayBufferViewImpl_obj::__construct() { }

Dynamic ArrayBufferViewImpl_obj::__CreateEmpty() { return new ArrayBufferViewImpl_obj; }

void *ArrayBufferViewImpl_obj::_hx_vtable = 0;

Dynamic ArrayBufferViewImpl_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayBufferViewImpl_obj > _hx_result = new ArrayBufferViewImpl_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ArrayBufferViewImpl_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7fa4dcf6;
}


ArrayBufferViewImpl_obj::ArrayBufferViewImpl_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ArrayBufferViewImpl_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ArrayBufferViewImpl_obj_sStaticStorageInfo = 0;
#endif

::hx::Class ArrayBufferViewImpl_obj::__mClass;

void ArrayBufferViewImpl_obj::__register()
{
	ArrayBufferViewImpl_obj _hx_dummy;
	ArrayBufferViewImpl_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.io.ArrayBufferViewImpl",1e,cb,bc,ba);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ArrayBufferViewImpl_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayBufferViewImpl_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayBufferViewImpl_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace io
