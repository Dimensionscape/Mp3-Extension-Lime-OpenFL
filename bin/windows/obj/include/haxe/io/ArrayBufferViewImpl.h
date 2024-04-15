#ifndef INCLUDED_haxe_io_ArrayBufferViewImpl
#define INCLUDED_haxe_io_ArrayBufferViewImpl

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,ArrayBufferViewImpl)

namespace haxe{
namespace io{


class HXCPP_CLASS_ATTRIBUTES ArrayBufferViewImpl_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef ArrayBufferViewImpl_obj OBJ_;
		ArrayBufferViewImpl_obj();

	public:
		enum { _hx_ClassId = 0x7fa4dcf6 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="haxe.io.ArrayBufferViewImpl")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"haxe.io.ArrayBufferViewImpl"); }

		inline static ::hx::ObjectPtr< ArrayBufferViewImpl_obj > __new() {
			::hx::ObjectPtr< ArrayBufferViewImpl_obj > __this = new ArrayBufferViewImpl_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< ArrayBufferViewImpl_obj > __alloc(::hx::Ctx *_hx_ctx) {
			ArrayBufferViewImpl_obj *__this = (ArrayBufferViewImpl_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ArrayBufferViewImpl_obj), false, "haxe.io.ArrayBufferViewImpl"));
			*(void **)__this = ArrayBufferViewImpl_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ArrayBufferViewImpl_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ArrayBufferViewImpl",5e,a0,91,73); }

};

} // end namespace haxe
} // end namespace io

#endif /* INCLUDED_haxe_io_ArrayBufferViewImpl */ 
