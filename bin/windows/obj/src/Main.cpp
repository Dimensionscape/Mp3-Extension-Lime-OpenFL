#include <hxcpp.h>

#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED__internal_native_MP3_DATA
#include <_internal/native/MP3_DATA.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_AudioSource
#include <lime/media/AudioSource.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
#ifndef INCLUDED_mp3_Mp3
#include <mp3/Mp3.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_IntVector
#include <openfl/_Vector/IntVector.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_Assets
#include <openfl/utils/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl_utils__ByteArray_ByteArray_Impl_
#include <openfl/utils/_ByteArray/ByteArray_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e47a9afac0942eb9_23_new,"Main","new",0x6616a5cb,"Main.new","Main.hx",23,0x087e5c05)

void Main_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_e47a9afac0942eb9_23_new)
HXLINE(  24)		super::__construct();
HXLINE(  26)		 ::haxe::io::Bytes b = ::openfl::utils::_ByteArray::ByteArray_Impl__obj::toBytes(::openfl::utils::Assets_obj::getBytes(HX_("sfx/track1.mp3",d2,b6,d5,a8)));
HXLINE(  27)		 ::_internal::native::MP3_DATA data =  ::_internal::native::MP3_DATA_obj::__alloc( HX_CTX ,b,b->length,null(),null(),null(),null());
HXLINE(  32)		::mp3::Mp3_obj::decode(data);
HXLINE(  34)		 ::haxe::io::BytesBuffer buffer =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  35)		{
HXLINE(  35)			int _g = 0;
HXDLIN(  35)			::Array< short > _g1 = data->pcm;
HXDLIN(  35)			while((_g < _g1->length)){
HXLINE(  35)				short value = _g1->__get(_g);
HXDLIN(  35)				_g = (_g + 1);
HXLINE(  37)				buffer->addInt32(( (int)(value) ));
            			}
            		}
HXLINE(  40)		 ::lime::media::AudioBuffer audioBuf =  ::lime::media::AudioBuffer_obj::__alloc( HX_CTX );
HXLINE(  41)		audioBuf->bitsPerSample = 16;
HXLINE(  42)		audioBuf->channels = data->channels;
HXLINE(  43)		 ::Dynamic elements = null();
HXDLIN(  43)		 ::haxe::io::Bytes buffer1 = buffer->getBytes();
HXDLIN(  43)		::cpp::VirtualArray array = null();
HXDLIN(  43)		 ::openfl::_Vector::IntVector vector = null();
HXDLIN(  43)		 ::lime::utils::ArrayBufferView view = null();
HXDLIN(  43)		 ::Dynamic len = null();
HXDLIN(  43)		 ::lime::utils::ArrayBufferView this1;
HXDLIN(  43)		if (::hx::IsNotNull( elements )) {
HXLINE(  43)			this1 =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,elements,4);
            		}
            		else {
HXLINE(  43)			if (::hx::IsNotNull( array )) {
HXLINE(  43)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  43)				_this->byteOffset = 0;
HXDLIN(  43)				_this->length = array->get_length();
HXDLIN(  43)				_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  43)				 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  43)				_this->buffer = this2;
HXDLIN(  43)				_this->copyFromArray(array,null());
HXDLIN(  43)				this1 = _this;
            			}
            			else {
HXLINE(  43)				if (::hx::IsNotNull( vector )) {
HXLINE(  43)					 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  43)					::cpp::VirtualArray array = ( (::cpp::VirtualArray)(vector->__Field(HX_("__array",79,c6,ed,8f),::hx::paccDynamic)) );
HXDLIN(  43)					_this->byteOffset = 0;
HXDLIN(  43)					_this->length = array->get_length();
HXDLIN(  43)					_this->byteLength = (_this->length * _this->bytesPerElement);
HXDLIN(  43)					 ::haxe::io::Bytes this2 = ::haxe::io::Bytes_obj::alloc(_this->byteLength);
HXDLIN(  43)					_this->buffer = this2;
HXDLIN(  43)					_this->copyFromArray(array,null());
HXDLIN(  43)					this1 = _this;
            				}
            				else {
HXLINE(  43)					if (::hx::IsNotNull( view )) {
HXLINE(  43)						 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  43)						 ::haxe::io::Bytes srcData = view->buffer;
HXDLIN(  43)						int srcLength = view->length;
HXDLIN(  43)						int srcByteOffset = view->byteOffset;
HXDLIN(  43)						int srcElementSize = view->bytesPerElement;
HXDLIN(  43)						int elementSize = _this->bytesPerElement;
HXDLIN(  43)						if ((view->type == _this->type)) {
HXLINE(  43)							int srcLength = srcData->length;
HXDLIN(  43)							int cloneLength = (srcLength - srcByteOffset);
HXDLIN(  43)							 ::haxe::io::Bytes this1 = ::haxe::io::Bytes_obj::alloc(cloneLength);
HXDLIN(  43)							_this->buffer = this1;
HXDLIN(  43)							_this->buffer->blit(0,srcData,srcByteOffset,cloneLength);
            						}
            						else {
HXLINE(  43)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("unimplemented",09,2f,74,b4)));
            						}
HXDLIN(  43)						_this->byteLength = (_this->bytesPerElement * srcLength);
HXDLIN(  43)						_this->byteOffset = 0;
HXDLIN(  43)						_this->length = srcLength;
HXDLIN(  43)						this1 = _this;
            					}
            					else {
HXLINE(  43)						if (::hx::IsNotNull( buffer1 )) {
HXLINE(  43)							 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,0,4);
HXDLIN(  43)							int in_byteOffset = 0;
HXDLIN(  43)							if ((in_byteOffset < 0)) {
HXLINE(  43)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  43)							if ((::hx::Mod(in_byteOffset,_this->bytesPerElement) != 0)) {
HXLINE(  43)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            							}
HXDLIN(  43)							int bufferByteLength = buffer1->length;
HXDLIN(  43)							int elementSize = _this->bytesPerElement;
HXDLIN(  43)							int newByteLength = bufferByteLength;
HXDLIN(  43)							if (::hx::IsNull( len )) {
HXLINE(  43)								newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN(  43)								if ((::hx::Mod(bufferByteLength,_this->bytesPerElement) != 0)) {
HXLINE(  43)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
HXDLIN(  43)								if ((newByteLength < 0)) {
HXLINE(  43)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
            							else {
HXLINE(  43)								newByteLength = (( (int)(len) ) * _this->bytesPerElement);
HXDLIN(  43)								int newRange = (in_byteOffset + newByteLength);
HXDLIN(  43)								if ((newRange > bufferByteLength)) {
HXLINE(  43)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::lime::utils::TAError_obj::RangeError_dyn()));
            								}
            							}
HXDLIN(  43)							_this->buffer = buffer1;
HXDLIN(  43)							_this->byteOffset = in_byteOffset;
HXDLIN(  43)							_this->byteLength = newByteLength;
HXDLIN(  43)							_this->length = ::Std_obj::_hx_int((( (Float)(newByteLength) ) / ( (Float)(_this->bytesPerElement) )));
HXDLIN(  43)							this1 = _this;
            						}
            						else {
HXLINE(  43)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85)));
            						}
            					}
            				}
            			}
            		}
HXDLIN(  43)		audioBuf->data = this1;
HXLINE(  44)		audioBuf->sampleRate = data->sampleRate;
HXLINE(  46)		 ::lime::media::AudioSource source =  ::lime::media::AudioSource_obj::__alloc( HX_CTX ,audioBuf,null(),null(),null());
HXLINE(  47)		source->play();
            	}

Dynamic Main_obj::__CreateEmpty() { return new Main_obj; }

void *Main_obj::_hx_vtable = 0;

Dynamic Main_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Main_obj > _hx_result = new Main_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Main_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0c89e854) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< Main_obj > Main_obj::__new() {
	::hx::ObjectPtr< Main_obj > __this = new Main_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Main_obj > Main_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Main_obj *__this = (Main_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Main_obj), true, "Main"));
	*(void **)__this = Main_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Main_obj::Main_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Main_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Main_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Main_obj::__mClass;

void Main_obj::__register()
{
	Main_obj _hx_dummy;
	Main_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("Main",59,64,2f,33);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Main_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Main_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Main_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

