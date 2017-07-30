// Generated by Haxe 3.4.2
#ifndef INCLUDED_lime_text_unifill_InvalidCodePoint
#define INCLUDED_lime_text_unifill_InvalidCodePoint

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_text_unifill_Exception
#include <lime/text/unifill/Exception.h>
#endif
HX_DECLARE_STACK_FRAME(_hx_pos_fba5c367fe37cebd_13_new)
HX_DECLARE_CLASS3(lime,text,unifill,Exception)
HX_DECLARE_CLASS3(lime,text,unifill,InvalidCodePoint)

namespace lime{
namespace text{
namespace unifill{


class HXCPP_CLASS_ATTRIBUTES InvalidCodePoint_obj : public  ::lime::text::unifill::Exception_obj
{
	public:
		typedef  ::lime::text::unifill::Exception_obj super;
		typedef InvalidCodePoint_obj OBJ_;
		InvalidCodePoint_obj();

	public:
		enum { _hx_ClassId = 0x5bd2f43d };

		void __construct(int code);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.text.unifill.InvalidCodePoint")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.text.unifill.InvalidCodePoint"); }

		hx::ObjectPtr< InvalidCodePoint_obj > __new(int code) {
			hx::ObjectPtr< InvalidCodePoint_obj > __this = new InvalidCodePoint_obj();
			__this->__construct(code);
			return __this;
		}

		static hx::ObjectPtr< InvalidCodePoint_obj > __alloc(hx::Ctx *_hx_ctx,int code) {
			InvalidCodePoint_obj *__this = (InvalidCodePoint_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(InvalidCodePoint_obj), false, "lime.text.unifill.InvalidCodePoint"));
			*(void **)__this = InvalidCodePoint_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_fba5c367fe37cebd_13_new)
HXLINE(  14)		__this->super::__construct();
HXLINE(  15)		( ( ::lime::text::unifill::InvalidCodePoint)(__this) )->code = code;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~InvalidCodePoint_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("InvalidCodePoint","\x0c","\x5a","\xfa","\xab"); }

		int code;
		virtual ::String toString();

};

} // end namespace lime
} // end namespace text
} // end namespace unifill

#endif /* INCLUDED_lime_text_unifill_InvalidCodePoint */ 
