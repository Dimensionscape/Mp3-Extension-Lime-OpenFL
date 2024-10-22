#include <hxcpp.h>

#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_lime_utils_Assets
#include <lime/utils/Assets.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_6b0b98c45b3017d4_36_init,"ManifestResources","init",0xc8e10c68,"ManifestResources.init","ManifestResources.hx",36,0xf77aa668)

void ManifestResources_obj::__construct() { }

Dynamic ManifestResources_obj::__CreateEmpty() { return new ManifestResources_obj; }

void *ManifestResources_obj::_hx_vtable = 0;

Dynamic ManifestResources_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ManifestResources_obj > _hx_result = new ManifestResources_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ManifestResources_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7f5bd976;
}

::Array< ::Dynamic> ManifestResources_obj::preloadLibraries;

::Array< ::String > ManifestResources_obj::preloadLibraryNames;

::String ManifestResources_obj::rootPath;

void ManifestResources_obj::init( ::Dynamic config){
            	HX_STACKFRAME(&_hx_pos_6b0b98c45b3017d4_36_init)
HXLINE(  38)		::ManifestResources_obj::preloadLibraries = ::Array_obj< ::Dynamic>::__new();
HXLINE(  39)		::ManifestResources_obj::preloadLibraryNames = ::Array_obj< ::String >::__new();
HXLINE(  41)		::ManifestResources_obj::rootPath = null();
HXLINE(  43)		bool _hx_tmp;
HXDLIN(  43)		if (::hx::IsNotNull( config )) {
HXLINE(  43)			_hx_tmp = ::Reflect_obj::hasField(config,HX_("rootPath",e7,b8,88,e1));
            		}
            		else {
HXLINE(  43)			_hx_tmp = false;
            		}
HXDLIN(  43)		if (_hx_tmp) {
HXLINE(  45)			::ManifestResources_obj::rootPath = ( (::String)(::Reflect_obj::field(config,HX_("rootPath",e7,b8,88,e1))) );
HXLINE(  47)			if (!(::StringTools_obj::endsWith(::ManifestResources_obj::rootPath,HX_("/",2f,00,00,00)))) {
HXLINE(  49)				 ::Dynamic _hx_tmp = ::hx::ClassOf< ::ManifestResources >();
HXDLIN(  49)				::ManifestResources_obj::rootPath = (::ManifestResources_obj::rootPath + HX_("/",2f,00,00,00));
            			}
            		}
HXLINE(  55)		if (::hx::IsNull( ::ManifestResources_obj::rootPath )) {
HXLINE(  64)			::ManifestResources_obj::rootPath = HX_("./",41,28,00,00);
            		}
HXLINE(  73)		 ::Dynamic data;
HXDLIN(  73)		 ::Dynamic manifest;
HXDLIN(  73)		 ::Dynamic bundle;
HXLINE(  86)		{
HXLINE(  86)			::String v = (::ManifestResources_obj::rootPath + HX_("manifest/default.json",95,ea,cc,42));
HXDLIN(  86)			::lime::utils::Assets_obj::libraryPaths->set(HX_("default",c1,d8,c3,9b),v);
            		}
HXLINE(  73)		 ::lime::utils::AssetLibrary library = ::lime::utils::Assets_obj::getLibrary(HX_("default",c1,d8,c3,9b));
HXLINE(  90)		if (::hx::IsNotNull( library )) {
HXLINE(  90)			::ManifestResources_obj::preloadLibraries->push(library);
            		}
            		else {
HXLINE(  91)			::ManifestResources_obj::preloadLibraryNames->push(HX_("default",c1,d8,c3,9b));
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ManifestResources_obj,init,(void))


ManifestResources_obj::ManifestResources_obj()
{
}

bool ManifestResources_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { outValue = init_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { outValue = ( rootPath ); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { outValue = ( preloadLibraries ); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { outValue = ( preloadLibraryNames ); return true; }
	}
	return false;
}

bool ManifestResources_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"rootPath") ) { rootPath=ioValue.Cast< ::String >(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"preloadLibraries") ) { preloadLibraries=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"preloadLibraryNames") ) { preloadLibraryNames=ioValue.Cast< ::Array< ::String > >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *ManifestResources_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo ManifestResources_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /* ::Array< ::Dynamic> */ ,(void *) &ManifestResources_obj::preloadLibraries,HX_("preloadLibraries",10,27,df,e6)},
	{::hx::fsObject /* ::Array< ::String > */ ,(void *) &ManifestResources_obj::preloadLibraryNames,HX_("preloadLibraryNames",36,48,52,5c)},
	{::hx::fsString,(void *) &ManifestResources_obj::rootPath,HX_("rootPath",e7,b8,88,e1)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void ManifestResources_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_MARK_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ManifestResources_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraries,"preloadLibraries");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::preloadLibraryNames,"preloadLibraryNames");
	HX_VISIT_MEMBER_NAME(ManifestResources_obj::rootPath,"rootPath");
};

#endif

::hx::Class ManifestResources_obj::__mClass;

static ::String ManifestResources_obj_sStaticFields[] = {
	HX_("preloadLibraries",10,27,df,e6),
	HX_("preloadLibraryNames",36,48,52,5c),
	HX_("rootPath",e7,b8,88,e1),
	HX_("init",10,3b,bb,45),
	::String(null())
};

void ManifestResources_obj::__register()
{
	ManifestResources_obj _hx_dummy;
	ManifestResources_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ManifestResources",16,0e,30,56);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ManifestResources_obj::__GetStatic;
	__mClass->mSetStaticField = &ManifestResources_obj::__SetStatic;
	__mClass->mMarkFunc = ManifestResources_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(ManifestResources_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< ManifestResources_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ManifestResources_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ManifestResources_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ManifestResources_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

