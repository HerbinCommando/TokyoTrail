// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_CurveToView_Impl_
#define INCLUDED_openfl__internal_renderer__DrawCommandReader_CurveToView_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,DrawCommandReader)
HX_DECLARE_CLASS4(openfl,_internal,renderer,_DrawCommandReader,CurveToView_Impl_)

namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{


class HXCPP_CLASS_ATTRIBUTES CurveToView_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CurveToView_Impl__obj OBJ_;
		CurveToView_Impl__obj();

	public:
		enum { _hx_ClassId = 0x66add11d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_"); }

		hx::ObjectPtr< CurveToView_Impl__obj > __new() {
			hx::ObjectPtr< CurveToView_Impl__obj > __this = new CurveToView_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CurveToView_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			CurveToView_Impl__obj *__this = (CurveToView_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CurveToView_Impl__obj), false, "openfl._internal.renderer._DrawCommandReader.CurveToView_Impl_"));
			*(void **)__this = CurveToView_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CurveToView_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CurveToView_Impl_","\x4f","\x1d","\xe9","\xaa"); }

		static  ::openfl::_internal::renderer::DrawCommandReader _new( ::openfl::_internal::renderer::DrawCommandReader d);
		static ::Dynamic _new_dyn();

		static Float get_controlX( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_controlX_dyn();

		static Float get_controlY( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_controlY_dyn();

		static Float get_anchorX( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_anchorX_dyn();

		static Float get_anchorY( ::openfl::_internal::renderer::DrawCommandReader this1);
		static ::Dynamic get_anchorY_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader

#endif /* INCLUDED_openfl__internal_renderer__DrawCommandReader_CurveToView_Impl_ */ 
