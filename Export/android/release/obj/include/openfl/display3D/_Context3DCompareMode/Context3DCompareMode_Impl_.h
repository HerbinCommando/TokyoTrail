// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_
#define INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,display3D,_Context3DCompareMode,Context3DCompareMode_Impl_)

namespace openfl{
namespace display3D{
namespace _Context3DCompareMode{


class HXCPP_CLASS_ATTRIBUTES Context3DCompareMode_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DCompareMode_Impl__obj OBJ_;
		Context3DCompareMode_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4ebd56b0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_"); }

		hx::ObjectPtr< Context3DCompareMode_Impl__obj > __new() {
			hx::ObjectPtr< Context3DCompareMode_Impl__obj > __this = new Context3DCompareMode_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Context3DCompareMode_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			Context3DCompareMode_Impl__obj *__this = (Context3DCompareMode_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Context3DCompareMode_Impl__obj), false, "openfl.display3D._Context3DCompareMode.Context3DCompareMode_Impl_"));
			*(void **)__this = Context3DCompareMode_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DCompareMode_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3DCompareMode_Impl_","\xe8","\x34","\x29","\x98"); }

		static void __boot();
		static  ::Dynamic ALWAYS;
		static  ::Dynamic EQUAL;
		static  ::Dynamic GREATER;
		static  ::Dynamic GREATER_EQUAL;
		static  ::Dynamic LESS;
		static  ::Dynamic LESS_EQUAL;
		static  ::Dynamic NEVER;
		static  ::Dynamic NOT_EQUAL;
		static  ::Dynamic fromString(::String value);
		static ::Dynamic fromString_dyn();

		static ::String toString(int value);
		static ::Dynamic toString_dyn();

};

} // end namespace openfl
} // end namespace display3D
} // end namespace _Context3DCompareMode

#endif /* INCLUDED_openfl_display3D__Context3DCompareMode_Context3DCompareMode_Impl_ */ 
