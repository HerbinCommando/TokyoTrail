// Generated by Haxe 3.4.2
#ifndef INCLUDED_lime__backend_native_NativeRenderer
#define INCLUDED_lime__backend_native_NativeRenderer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeRenderer)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS3(lime,graphics,cairo,Cairo)
HX_DECLARE_CLASS2(lime,math,Rectangle)

namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeRenderer_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeRenderer_obj OBJ_;
		NativeRenderer_obj();

	public:
		enum { _hx_ClassId = 0x063914db };

		void __construct( ::lime::graphics::Renderer parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeRenderer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._backend.native.NativeRenderer"); }
		static hx::ObjectPtr< NativeRenderer_obj > __new( ::lime::graphics::Renderer parent);
		static hx::ObjectPtr< NativeRenderer_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::graphics::Renderer parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeRenderer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NativeRenderer","\x1a","\xce","\xd5","\xcc"); }

		 ::Dynamic handle;
		 ::lime::graphics::Renderer parent;
		bool useHardware;
		 ::Dynamic cacheLock;
		 ::lime::graphics::cairo::Cairo cairo;
		 ::Dynamic primarySurface;
		void create();
		::Dynamic create_dyn();

		void dispatch();
		::Dynamic dispatch_dyn();

		void flip();
		::Dynamic flip_dyn();

		 ::lime::graphics::Image readPixels( ::lime::math::Rectangle rect);
		::Dynamic readPixels_dyn();

		void render();
		::Dynamic render_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeRenderer */ 
