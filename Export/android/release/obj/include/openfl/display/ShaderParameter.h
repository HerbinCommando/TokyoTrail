// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl_display_ShaderParameter
#define INCLUDED_openfl_display_ShaderParameter

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_7714f6598ef03af2_23_new)
HX_DECLARE_CLASS2(openfl,display,ShaderParameter)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES ShaderParameter_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef ShaderParameter_obj OBJ_;
		ShaderParameter_obj();

	public:
		enum { _hx_ClassId = 0x4a93ecb2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.display.ShaderParameter")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl.display.ShaderParameter"); }

		hx::ObjectPtr< ShaderParameter_obj > __new() {
			hx::ObjectPtr< ShaderParameter_obj > __this = new ShaderParameter_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< ShaderParameter_obj > __alloc(hx::Ctx *_hx_ctx) {
			ShaderParameter_obj *__this = (ShaderParameter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ShaderParameter_obj), true, "openfl.display.ShaderParameter"));
			*(void **)__this = ShaderParameter_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_7714f6598ef03af2_23_new)
HXDLIN(  23)		( ( ::openfl::display::ShaderParameter)(__this) )->index = (int)0;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~ShaderParameter_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("ShaderParameter","\xa4","\xd1","\x21","\xe4"); }

		 ::Dynamic index;
		::String name;
		 ::Dynamic type;
		::cpp::VirtualArray value;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_ShaderParameter */ 
