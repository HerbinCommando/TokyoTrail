// Generated by Haxe 3.4.2
#ifndef INCLUDED_lime_text_unifill_Exception
#define INCLUDED_lime_text_unifill_Exception

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_f81ce3e30a95fc23_4_new)
HX_DECLARE_CLASS3(lime,text,unifill,Exception)

namespace lime{
namespace text{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES Exception_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Exception_obj OBJ_;
		Exception_obj();

	public:
		enum { _hx_ClassId = 0x4ee379de };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.unifill.Exception")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.text.unifill.Exception"); }

		hx::ObjectPtr< Exception_obj > __new() {
			hx::ObjectPtr< Exception_obj > __this = new Exception_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< Exception_obj > __alloc(hx::Ctx *_hx_ctx) {
			Exception_obj *__this = (Exception_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Exception_obj), false, "lime.text.unifill.Exception"));
			*(void **)__this = Exception_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_f81ce3e30a95fc23_4_new)
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Exception_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Exception","\x2f","\xf0","\x6c","\xeb"); }

		virtual ::String toString();
		::Dynamic toString_dyn();

};

} // end namespace lime
} // end namespace text
} // end namespace unifill

#endif /* INCLUDED_lime_text_unifill_Exception */ 
