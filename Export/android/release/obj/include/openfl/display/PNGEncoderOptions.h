// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl_display_PNGEncoderOptions
#define INCLUDED_openfl_display_PNGEncoderOptions

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_3a64445735a88117_18_new)
HX_DECLARE_CLASS2(openfl,display,PNGEncoderOptions)

namespace openfl{
namespace display{


class HXCPP_CLASS_ATTRIBUTES PNGEncoderOptions_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef PNGEncoderOptions_obj OBJ_;
		PNGEncoderOptions_obj();

	public:
		enum { _hx_ClassId = 0x06198ce1 };

		void __construct(hx::Null< bool >  __o_fastCompression);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display.PNGEncoderOptions")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.display.PNGEncoderOptions"); }

		hx::ObjectPtr< PNGEncoderOptions_obj > __new(hx::Null< bool >  __o_fastCompression) {
			hx::ObjectPtr< PNGEncoderOptions_obj > __this = new PNGEncoderOptions_obj();
			__this->__construct(__o_fastCompression);
			return __this;
		}

		static hx::ObjectPtr< PNGEncoderOptions_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< bool >  __o_fastCompression) {
			PNGEncoderOptions_obj *__this = (PNGEncoderOptions_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(PNGEncoderOptions_obj), false, "openfl.display.PNGEncoderOptions"));
			*(void **)__this = PNGEncoderOptions_obj::_hx_vtable;
{
bool fastCompression = __o_fastCompression.Default(false);
            	HX_STACKFRAME(&_hx_pos_3a64445735a88117_18_new)
HXDLIN(  18)		( ( ::openfl::display::PNGEncoderOptions)(__this) )->fastCompression = fastCompression;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PNGEncoderOptions_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PNGEncoderOptions","\x8b","\x2f","\xa8","\x29"); }

		bool fastCompression;
};

} // end namespace openfl
} // end namespace display

#endif /* INCLUDED_openfl_display_PNGEncoderOptions */ 
