// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBitmap
#define INCLUDED_openfl__internal_renderer_opengl_GLBitmap

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(openfl,_internal,renderer,RenderSession)
HX_DECLARE_CLASS4(openfl,_internal,renderer,opengl,GLBitmap)
HX_DECLARE_CLASS2(openfl,display,Bitmap)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{


class HXCPP_CLASS_ATTRIBUTES GLBitmap_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef GLBitmap_obj OBJ_;
		GLBitmap_obj();

	public:
		enum { _hx_ClassId = 0x4ef700ce };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl._internal.renderer.opengl.GLBitmap")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl._internal.renderer.opengl.GLBitmap"); }

		hx::ObjectPtr< GLBitmap_obj > __new() {
			hx::ObjectPtr< GLBitmap_obj > __this = new GLBitmap_obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< GLBitmap_obj > __alloc(hx::Ctx *_hx_ctx) {
			GLBitmap_obj *__this = (GLBitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLBitmap_obj), false, "openfl._internal.renderer.opengl.GLBitmap"));
			*(void **)__this = GLBitmap_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~GLBitmap_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("GLBitmap","\xf4","\x6b","\xfd","\x5a"); }

		static void render( ::openfl::display::Bitmap bitmap, ::openfl::_internal::renderer::RenderSession renderSession);
		static ::Dynamic render_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl

#endif /* INCLUDED_openfl__internal_renderer_opengl_GLBitmap */ 
