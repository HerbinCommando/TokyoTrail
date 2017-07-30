// Generated by Haxe 3.4.2
#ifndef INCLUDED_lime_app_Module
#define INCLUDED_lime_app_Module

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
HX_DECLARE_CLASS2(lime,app,Application)
HX_DECLARE_CLASS2(lime,app,IModule)
HX_DECLARE_CLASS2(lime,app,Module)
HX_DECLARE_CLASS2(lime,app,Preloader)
HX_DECLARE_CLASS2(lime,app,_Event_Int_Void)
HX_DECLARE_CLASS2(lime,graphics,RenderContext)
HX_DECLARE_CLASS2(lime,graphics,Renderer)
HX_DECLARE_CLASS2(lime,ui,Gamepad)
HX_DECLARE_CLASS2(lime,ui,Joystick)
HX_DECLARE_CLASS2(lime,ui,Touch)
HX_DECLARE_CLASS2(lime,ui,Window)

namespace lime{
namespace app{


class HXCPP_CLASS_ATTRIBUTES Module_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Module_obj OBJ_;
		Module_obj();

	public:
		enum { _hx_ClassId = 0x77491638 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime.app.Module")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime.app.Module"); }
		static hx::ObjectPtr< Module_obj > __new();
		static hx::ObjectPtr< Module_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Module_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Module","\xcc","\xa8","\x67","\xf5"); }

		 ::lime::app::_Event_Int_Void onExit;
		 ::lime::app::Application _hx___application;
		 ::lime::app::Preloader _hx___preloader;
		::Array< ::Dynamic> _hx___renderers;
		::Array< ::Dynamic> _hx___windows;
		virtual void addRenderer( ::lime::graphics::Renderer renderer);
		::Dynamic addRenderer_dyn();

		void addWindow( ::lime::ui::Window window);
		::Dynamic addWindow_dyn();

		void registerModule( ::lime::app::Application application);
		::Dynamic registerModule_dyn();

		void removeRenderer( ::lime::graphics::Renderer renderer);
		::Dynamic removeRenderer_dyn();

		virtual void removeWindow( ::lime::ui::Window window);
		::Dynamic removeWindow_dyn();

		virtual void setPreloader( ::lime::app::Preloader preloader);
		::Dynamic setPreloader_dyn();

		void unregisterModule( ::lime::app::Application application);
		::Dynamic unregisterModule_dyn();

		void onGamepadAxisMove( ::lime::ui::Gamepad gamepad,int axis,Float value);
		::Dynamic onGamepadAxisMove_dyn();

		void onGamepadButtonDown( ::lime::ui::Gamepad gamepad,int button);
		::Dynamic onGamepadButtonDown_dyn();

		void onGamepadButtonUp( ::lime::ui::Gamepad gamepad,int button);
		::Dynamic onGamepadButtonUp_dyn();

		void onGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic onGamepadConnect_dyn();

		void onGamepadDisconnect( ::lime::ui::Gamepad gamepad);
		::Dynamic onGamepadDisconnect_dyn();

		void onJoystickAxisMove( ::lime::ui::Joystick joystick,int axis,Float value);
		::Dynamic onJoystickAxisMove_dyn();

		void onJoystickButtonDown( ::lime::ui::Joystick joystick,int button);
		::Dynamic onJoystickButtonDown_dyn();

		void onJoystickButtonUp( ::lime::ui::Joystick joystick,int button);
		::Dynamic onJoystickButtonUp_dyn();

		void onJoystickConnect( ::lime::ui::Joystick joystick);
		::Dynamic onJoystickConnect_dyn();

		void onJoystickDisconnect( ::lime::ui::Joystick joystick);
		::Dynamic onJoystickDisconnect_dyn();

		void onJoystickHatMove( ::lime::ui::Joystick joystick,int hat,int position);
		::Dynamic onJoystickHatMove_dyn();

		void onJoystickTrackballMove( ::lime::ui::Joystick joystick,int trackball,Float x,Float y);
		::Dynamic onJoystickTrackballMove_dyn();

		void onKeyDown( ::lime::ui::Window window,int keyCode,int modifier);
		::Dynamic onKeyDown_dyn();

		void onKeyUp( ::lime::ui::Window window,int keyCode,int modifier);
		::Dynamic onKeyUp_dyn();

		virtual void onModuleExit(int code);
		::Dynamic onModuleExit_dyn();

		void onMouseDown( ::lime::ui::Window window,Float x,Float y,int button);
		::Dynamic onMouseDown_dyn();

		void onMouseMove( ::lime::ui::Window window,Float x,Float y);
		::Dynamic onMouseMove_dyn();

		void onMouseMoveRelative( ::lime::ui::Window window,Float x,Float y);
		::Dynamic onMouseMoveRelative_dyn();

		void onMouseUp( ::lime::ui::Window window,Float x,Float y,int button);
		::Dynamic onMouseUp_dyn();

		void onMouseWheel( ::lime::ui::Window window,Float deltaX,Float deltaY);
		::Dynamic onMouseWheel_dyn();

		void onPreloadComplete();
		::Dynamic onPreloadComplete_dyn();

		void onPreloadProgress(int loaded,int total);
		::Dynamic onPreloadProgress_dyn();

		void onRenderContextLost( ::lime::graphics::Renderer renderer);
		::Dynamic onRenderContextLost_dyn();

		void onRenderContextRestored( ::lime::graphics::Renderer renderer, ::lime::graphics::RenderContext context);
		::Dynamic onRenderContextRestored_dyn();

		void onTextEdit( ::lime::ui::Window window,::String text,int start,int length);
		::Dynamic onTextEdit_dyn();

		void onTextInput( ::lime::ui::Window window,::String text);
		::Dynamic onTextInput_dyn();

		void onTouchEnd( ::lime::ui::Touch touch);
		::Dynamic onTouchEnd_dyn();

		void onTouchMove( ::lime::ui::Touch touch);
		::Dynamic onTouchMove_dyn();

		void onTouchStart( ::lime::ui::Touch touch);
		::Dynamic onTouchStart_dyn();

		void onWindowActivate( ::lime::ui::Window window);
		::Dynamic onWindowActivate_dyn();

		virtual void onWindowClose( ::lime::ui::Window window);
		::Dynamic onWindowClose_dyn();

		void onWindowCreate( ::lime::ui::Window window);
		::Dynamic onWindowCreate_dyn();

		void onWindowDeactivate( ::lime::ui::Window window);
		::Dynamic onWindowDeactivate_dyn();

		void onWindowDropFile( ::lime::ui::Window window,::String file);
		::Dynamic onWindowDropFile_dyn();

		void onWindowEnter( ::lime::ui::Window window);
		::Dynamic onWindowEnter_dyn();

		void onWindowFocusIn( ::lime::ui::Window window);
		::Dynamic onWindowFocusIn_dyn();

		void onWindowFocusOut( ::lime::ui::Window window);
		::Dynamic onWindowFocusOut_dyn();

		void onWindowFullscreen( ::lime::ui::Window window);
		::Dynamic onWindowFullscreen_dyn();

		void onWindowLeave( ::lime::ui::Window window);
		::Dynamic onWindowLeave_dyn();

		void onWindowMove( ::lime::ui::Window window,Float x,Float y);
		::Dynamic onWindowMove_dyn();

		void onWindowMinimize( ::lime::ui::Window window);
		::Dynamic onWindowMinimize_dyn();

		void onWindowResize( ::lime::ui::Window window,int width,int height);
		::Dynamic onWindowResize_dyn();

		void onWindowRestore( ::lime::ui::Window window);
		::Dynamic onWindowRestore_dyn();

		void render( ::lime::graphics::Renderer renderer);
		::Dynamic render_dyn();

		void update(int deltaTime);
		::Dynamic update_dyn();

		void _hx___onGamepadConnect( ::lime::ui::Gamepad gamepad);
		::Dynamic _hx___onGamepadConnect_dyn();

		void _hx___onJoystickConnect( ::lime::ui::Joystick joystick);
		::Dynamic _hx___onJoystickConnect_dyn();

		void _hx___onWindowClose( ::lime::ui::Window window);
		::Dynamic _hx___onWindowClose_dyn();

};

} // end namespace lime
} // end namespace app

#endif /* INCLUDED_lime_app_Module */ 
