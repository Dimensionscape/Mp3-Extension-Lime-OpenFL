#ifndef INCLUDED_mp3_Mp3
#define INCLUDED_mp3_Mp3

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(_internal,native,MP3_DATA)
HX_DECLARE_CLASS1(mp3,Mp3)

namespace mp3{


class HXCPP_CLASS_ATTRIBUTES Mp3_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Mp3_obj OBJ_;
		Mp3_obj();

	public:
		enum { _hx_ClassId = 0x2e539f44 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="mp3.Mp3")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"mp3.Mp3"); }

		inline static ::hx::ObjectPtr< Mp3_obj > __new() {
			::hx::ObjectPtr< Mp3_obj > __this = new Mp3_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Mp3_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Mp3_obj *__this = (Mp3_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Mp3_obj), false, "mp3.Mp3"));
			*(void **)__this = Mp3_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Mp3_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Mp3",50,cf,3a,00); }

		static void decode( ::_internal::native::MP3_DATA data);
		static ::Dynamic decode_dyn();

};

} // end namespace mp3

#endif /* INCLUDED_mp3_Mp3 */ 
