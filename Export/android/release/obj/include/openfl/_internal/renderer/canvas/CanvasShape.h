// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__internal_renderer_canvas_CanvasShape
#define INCLUDED_openfl__internal_renderer_canvas_CanvasShape

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,canvas,CanvasShape)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace canvas{


class HXCPP_CLASS_ATTRIBUTES CanvasShape_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CanvasShape_obj OBJ_;
		CanvasShape_obj();

	public:
		enum { _hx_ClassId = 0x27bca002 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.canvas.CanvasShape")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.canvas.CanvasShape"); }

		hx::ObjectPtr< CanvasShape_obj > __new() {
			hx::ObjectPtr< CanvasShape_obj > __this = new CanvasShape_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CanvasShape_obj > __alloc(hx::Ctx *_hx_ctx) {
			CanvasShape_obj *__this = (CanvasShape_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CanvasShape_obj), false, "openfl._internal.renderer.canvas.CanvasShape"));
			*(void **)__this = CanvasShape_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CanvasShape_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CanvasShape","\x09","\x07","\x60","\x63"); }

		static void render( ::openfl::display::DisplayObject shape, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace canvas

#endif /* INCLUDED_openfl__internal_renderer_canvas_CanvasShape */ 
