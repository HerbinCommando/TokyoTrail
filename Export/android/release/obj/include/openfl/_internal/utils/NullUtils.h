// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__internal_utils_NullUtils
#define INCLUDED_openfl__internal_utils_NullUtils

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,utils,NullUtils)

namespace openfl{
namespace _internal{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES NullUtils_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NullUtils_obj OBJ_;
		NullUtils_obj();

	public:
		enum { _hx_ClassId = 0x06ee88c5 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.utils.NullUtils")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.utils.NullUtils"); }

		hx::ObjectPtr< NullUtils_obj > __new() {
			hx::ObjectPtr< NullUtils_obj > __this = new NullUtils_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< NullUtils_obj > __alloc(hx::Ctx *_hx_ctx) {
			NullUtils_obj *__this = (NullUtils_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NullUtils_obj), false, "openfl._internal.utils.NullUtils"));
			*(void **)__this = NullUtils_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NullUtils_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NullUtils","\x0a","\x52","\x41","\x61"); }

};

} // end namespace openfl
} // end namespace _internal
} // end namespace utils

#endif /* INCLUDED_openfl__internal_utils_NullUtils */ 