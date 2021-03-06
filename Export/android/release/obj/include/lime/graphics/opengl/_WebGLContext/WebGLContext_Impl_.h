// Generated by Haxe 3.4.2
#ifndef INCLUDED_lime_graphics_opengl__WebGLContext_WebGLContext_Impl_
#define INCLUDED_lime_graphics_opengl__WebGLContext_WebGLContext_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeGLRenderContext)
HX_DECLARE_CLASS4(lime,graphics,opengl,_WebGLContext,WebGLContext_Impl_)
HX_DECLARE_CLASS2(lime,utils,ArrayBufferView)

namespace lime{
namespace graphics{
namespace opengl{
namespace _WebGLContext{


class HXCPP_CLASS_ATTRIBUTES WebGLContext_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef WebGLContext_Impl__obj OBJ_;
		WebGLContext_Impl__obj();

	public:
		enum { _hx_ClassId = 0x7a9cec7c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="lime.graphics.opengl._WebGLContext.WebGLContext_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"lime.graphics.opengl._WebGLContext.WebGLContext_Impl_"); }

		hx::ObjectPtr< WebGLContext_Impl__obj > __new() {
			hx::ObjectPtr< WebGLContext_Impl__obj > __this = new WebGLContext_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< WebGLContext_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			WebGLContext_Impl__obj *__this = (WebGLContext_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(WebGLContext_Impl__obj), false, "lime.graphics.opengl._WebGLContext.WebGLContext_Impl_"));
			*(void **)__this = WebGLContext_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~WebGLContext_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("WebGLContext_Impl_","\x76","\x94","\xae","\xb9"); }

		static void bufferData( ::lime::_backend::native::NativeGLRenderContext this1,int target, ::lime::utils::ArrayBufferView srcData,int usage);
		static ::Dynamic bufferData_dyn();

		static void bufferSubData( ::lime::_backend::native::NativeGLRenderContext this1,int target,int offset, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic bufferSubData_dyn();

		static void compressedTexImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic compressedTexImage2D_dyn();

		static void compressedTexSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic compressedTexSubImage2D_dyn();

		static void readPixels( ::lime::_backend::native::NativeGLRenderContext this1,int x,int y,int width,int height,int format,int type, ::lime::utils::ArrayBufferView pixels);
		static ::Dynamic readPixels_dyn();

		static void texImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int internalformat,int width,int height,int border,int format,int type, ::lime::utils::ArrayBufferView srcData);
		static ::Dynamic texImage2D_dyn();

		static void texSubImage2D( ::lime::_backend::native::NativeGLRenderContext this1,int target,int level,int xoffset,int yoffset,int width,int height,int format,int type, ::lime::utils::ArrayBufferView srcData,hx::Null< int >  srcOffset);
		static ::Dynamic texSubImage2D_dyn();

		static void uniformMatrix2fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v);
		static ::Dynamic uniformMatrix2fv_dyn();

		static void uniformMatrix3fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v);
		static ::Dynamic uniformMatrix3fv_dyn();

		static void uniformMatrix4fv( ::lime::_backend::native::NativeGLRenderContext this1,int location,bool transpose, ::lime::utils::ArrayBufferView v);
		static ::Dynamic uniformMatrix4fv_dyn();

		static  ::lime::_backend::native::NativeGLRenderContext fromGL(hx::Class gl);
		static ::Dynamic fromGL_dyn();

		static  ::lime::_backend::native::NativeGLRenderContext fromGLES2Context( ::lime::_backend::native::NativeGLRenderContext gl);
		static ::Dynamic fromGLES2Context_dyn();

		static  ::lime::_backend::native::NativeGLRenderContext fromGLES3Context( ::lime::_backend::native::NativeGLRenderContext gl);
		static ::Dynamic fromGLES3Context_dyn();

};

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _WebGLContext

#endif /* INCLUDED_lime_graphics_opengl__WebGLContext_WebGLContext_Impl_ */ 
