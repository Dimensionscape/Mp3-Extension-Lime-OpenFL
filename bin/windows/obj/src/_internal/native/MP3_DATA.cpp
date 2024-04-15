#include <hxcpp.h>

#ifndef INCLUDED__internal_native_MP3_DATA
#include <_internal/native/MP3_DATA.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7afbd7b515d8cf58_18_new,"_internal.native.MP3_DATA","new",0x8c802c70,"_internal.native.MP3_DATA.new","_internal/native/MP3Extern.hx",18,0xdff72453)
namespace _internal{
namespace native{

void MP3_DATA_obj::__construct( ::haxe::io::Bytes bytes,int size,::Array< short > pcm, ::Dynamic sampleRate, ::Dynamic bitRate, ::Dynamic channels){
            	HX_STACKFRAME(&_hx_pos_7afbd7b515d8cf58_18_new)
HXLINE(  24)		this->channels = 0;
HXLINE(  23)		this->bitRate = 0;
HXLINE(  22)		this->sampleRate = 0;
HXLINE(  21)		this->pcm = ::Array_obj< short >::__new(0);
HXLINE(  18)		this->bytes = bytes;
HXDLIN(  18)		this->size = size;
HXDLIN(  18)		if (::hx::IsNotNull( pcm )) {
HXDLIN(  18)			this->pcm = pcm;
            		}
HXDLIN(  18)		if (::hx::IsNotNull( sampleRate )) {
HXDLIN(  18)			this->sampleRate = ( (int)(sampleRate) );
            		}
HXDLIN(  18)		if (::hx::IsNotNull( bitRate )) {
HXDLIN(  18)			this->bitRate = ( (int)(bitRate) );
            		}
HXDLIN(  18)		if (::hx::IsNotNull( channels )) {
HXDLIN(  18)			this->channels = ( (int)(channels) );
            		}
            	}

Dynamic MP3_DATA_obj::__CreateEmpty() { return new MP3_DATA_obj; }

void *MP3_DATA_obj::_hx_vtable = 0;

Dynamic MP3_DATA_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< MP3_DATA_obj > _hx_result = new MP3_DATA_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool MP3_DATA_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d8f8668;
}


::hx::ObjectPtr< MP3_DATA_obj > MP3_DATA_obj::__new( ::haxe::io::Bytes bytes,int size,::Array< short > pcm, ::Dynamic sampleRate, ::Dynamic bitRate, ::Dynamic channels) {
	::hx::ObjectPtr< MP3_DATA_obj > __this = new MP3_DATA_obj();
	__this->__construct(bytes,size,pcm,sampleRate,bitRate,channels);
	return __this;
}

::hx::ObjectPtr< MP3_DATA_obj > MP3_DATA_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes,int size,::Array< short > pcm, ::Dynamic sampleRate, ::Dynamic bitRate, ::Dynamic channels) {
	MP3_DATA_obj *__this = (MP3_DATA_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(MP3_DATA_obj), true, "_internal.native.MP3_DATA"));
	*(void **)__this = MP3_DATA_obj::_hx_vtable;
	__this->__construct(bytes,size,pcm,sampleRate,bitRate,channels);
	return __this;
}

MP3_DATA_obj::MP3_DATA_obj()
{
}

void MP3_DATA_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MP3_DATA);
	HX_MARK_MEMBER_NAME(bytes,"bytes");
	HX_MARK_MEMBER_NAME(size,"size");
	HX_MARK_MEMBER_NAME(pcm,"pcm");
	HX_MARK_MEMBER_NAME(sampleRate,"sampleRate");
	HX_MARK_MEMBER_NAME(bitRate,"bitRate");
	HX_MARK_MEMBER_NAME(channels,"channels");
	HX_MARK_END_CLASS();
}

void MP3_DATA_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytes,"bytes");
	HX_VISIT_MEMBER_NAME(size,"size");
	HX_VISIT_MEMBER_NAME(pcm,"pcm");
	HX_VISIT_MEMBER_NAME(sampleRate,"sampleRate");
	HX_VISIT_MEMBER_NAME(bitRate,"bitRate");
	HX_VISIT_MEMBER_NAME(channels,"channels");
}

::hx::Val MP3_DATA_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pcm") ) { return ::hx::Val( pcm ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { return ::hx::Val( size ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { return ::hx::Val( bytes ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bitRate") ) { return ::hx::Val( bitRate ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { return ::hx::Val( channels ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { return ::hx::Val( sampleRate ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val MP3_DATA_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pcm") ) { pcm=inValue.Cast< ::Array< short > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"size") ) { size=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"bytes") ) { bytes=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bitRate") ) { bitRate=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"channels") ) { channels=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sampleRate") ) { sampleRate=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MP3_DATA_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("bytes",6b,08,98,bd));
	outFields->push(HX_("size",c1,a0,53,4c));
	outFields->push(HX_("pcm",1a,53,55,00));
	outFields->push(HX_("sampleRate",2a,3c,4c,67));
	outFields->push(HX_("bitRate",4d,22,a9,e7));
	outFields->push(HX_("channels",50,aa,ee,6a));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo MP3_DATA_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(MP3_DATA_obj,bytes),HX_("bytes",6b,08,98,bd)},
	{::hx::fsInt,(int)offsetof(MP3_DATA_obj,size),HX_("size",c1,a0,53,4c)},
	{::hx::fsObject /* ::Array< short > */ ,(int)offsetof(MP3_DATA_obj,pcm),HX_("pcm",1a,53,55,00)},
	{::hx::fsInt,(int)offsetof(MP3_DATA_obj,sampleRate),HX_("sampleRate",2a,3c,4c,67)},
	{::hx::fsInt,(int)offsetof(MP3_DATA_obj,bitRate),HX_("bitRate",4d,22,a9,e7)},
	{::hx::fsInt,(int)offsetof(MP3_DATA_obj,channels),HX_("channels",50,aa,ee,6a)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *MP3_DATA_obj_sStaticStorageInfo = 0;
#endif

static ::String MP3_DATA_obj_sMemberFields[] = {
	HX_("bytes",6b,08,98,bd),
	HX_("size",c1,a0,53,4c),
	HX_("pcm",1a,53,55,00),
	HX_("sampleRate",2a,3c,4c,67),
	HX_("bitRate",4d,22,a9,e7),
	HX_("channels",50,aa,ee,6a),
	::String(null()) };

::hx::Class MP3_DATA_obj::__mClass;

void MP3_DATA_obj::__register()
{
	MP3_DATA_obj _hx_dummy;
	MP3_DATA_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("_internal.native.MP3_DATA",7e,74,7d,63);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(MP3_DATA_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< MP3_DATA_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MP3_DATA_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MP3_DATA_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace _internal
} // end namespace native
