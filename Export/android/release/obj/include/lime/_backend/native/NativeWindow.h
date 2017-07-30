// Generated by Haxe 3.4.2
#ifndef INCLUDED_lime__backend_native_NativeWindow
#define INCLUDED_lime__backend_native_NativeWindow

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(lime,_backend,native,NativeWindow)
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,_hx_system,Display)
HX_DECLARE_CLASS2(lime,_hx_system,DisplayMode)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeWindow_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeWindow_obj OBJ_;
		NativeWindow_obj();

	public:
		enum { _hx_ClassId = 0x34d64d88 };

		void __construct( ::lime::ui::Window parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeWindow")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._backend.native.NativeWindow"); }
		static hx::ObjectPtr< NativeWindow_obj > __new( ::lime::ui::Window parent);
		static hx::ObjectPtr< NativeWindow_obj > __alloc(hx::Ctx *_hx_ctx, ::lime::ui::Window parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeWindow_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NativeWindow","\x07","\xe9","\xb5","\xcf"); }

		 ::Dynamic handle;
		bool closing;
		 ::lime::_hx_system::DisplayMode displayMode;
		 ::lime::ui::Window parent;
		void alert(::String message,::String title);
		::Dynamic alert_dyn();

		void close();
		::Dynamic close_dyn();

		void create( ::lime::app::Application application);
		::Dynamic create_dyn();

		void focus();
		::Dynamic focus_dyn();

		 ::lime::_hx_system::Display getDisplay();
		::Dynamic getDisplay_dyn();

		 ::lime::_hx_system::DisplayMode getDisplayMode();
		::Dynamic getDisplayMode_dyn();

		 ::lime::_hx_system::DisplayMode setDisplayMode( ::lime::_hx_system::DisplayMode value);
		::Dynamic setDisplayMode_dyn();

		bool getEnableTextEvents();
		::Dynamic getEnableTextEvents_dyn();

		void move(int x,int y);
		::Dynamic move_dyn();

		void resize(int width,int height);
		::Dynamic resize_dyn();

		bool setBorderless(bool value);
		::Dynamic setBorderless_dyn();

		bool setEnableTextEvents(bool value);
		::Dynamic setEnableTextEvents_dyn();

		bool setFullscreen(bool value);
		::Dynamic setFullscreen_dyn();

		void setIcon( ::lime::graphics::Image image);
		::Dynamic setIcon_dyn();

		bool setMaximized(bool value);
		::Dynamic setMaximized_dyn();

		bool setMinimized(bool value);
		::Dynamic setMinimized_dyn();

		bool setResizable(bool value);
		::Dynamic setResizable_dyn();

		::String setTitle(::String value);
		::Dynamic setTitle_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeWindow */ 
