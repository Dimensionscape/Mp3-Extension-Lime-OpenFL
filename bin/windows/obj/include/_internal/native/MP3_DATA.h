#ifndef INCLUDED__internal_native_MP3_DATA
#define INCLUDED__internal_native_MP3_DATA

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_internal,native,MP3_DATA)
HX_DECLARE_CLASS2(haxe,io,Bytes)

namespace _internal{
namespace native{


class HXCPP_CLASS_ATTRIBUTES MP3_DATA_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef MP3_DATA_obj OBJ_;
		MP3_DATA_obj();

	public:
		enum { _hx_ClassId = 0x1d8f8668 };

		void __construct( ::haxe::io::Bytes bytes,int size,::Array< short > pcm, ::Dynamic sampleRate, ::Dynamic bitRate, ::Dynamic channels);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="_internal.native.MP3_DATA")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"_internal.native.MP3_DATA"); }
		static ::hx::ObjectPtr< MP3_DATA_obj > __new( ::haxe::io::Bytes bytes,int size,::Array< short > pcm, ::Dynamic sampleRate, ::Dynamic bitRate, ::Dynamic channels);
		static ::hx::ObjectPtr< MP3_DATA_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes bytes,int size,::Array< short > pcm, ::Dynamic sampleRate, ::Dynamic bitRate, ::Dynamic channels);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~MP3_DATA_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("MP3_DATA",99,10,4a,77); }

		 ::haxe::io::Bytes bytes;
		int size;
		::Array< short > pcm;
		int sampleRate;
		int bitRate;
		int channels;
};

} // end namespace _internal
} // end namespace native

#endif /* INCLUDED__internal_native_MP3_DATA */ 
