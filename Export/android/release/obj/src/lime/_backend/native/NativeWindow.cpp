// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeApplication
#include <lime/_backend/native/NativeApplication.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeWindow
#include <lime/_backend/native/NativeWindow.h>
#endif
#ifndef INCLUDED_lime_app_Application
#include <lime/app/Application.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_app_Module
#include <lime/app/Module.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_fe3f835f12a28e22_35_new,"lime._backend.native.NativeWindow","new",0x5ec523d0,"lime._backend.native.NativeWindow.new","lime/_backend/native/NativeWindow.hx",35,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_46_alert,"lime._backend.native.NativeWindow","alert",0xfd8f66cc,"lime._backend.native.NativeWindow.alert","lime/_backend/native/NativeWindow.hx",46,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_59_close,"lime._backend.native.NativeWindow","close",0x24642728,"lime._backend.native.NativeWindow.close","lime/_backend/native/NativeWindow.hx",59,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_88_create,"lime._backend.native.NativeWindow","create",0x20fbd98c,"lime._backend.native.NativeWindow.create","lime/_backend/native/NativeWindow.hx",88,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_153_focus,"lime._backend.native.NativeWindow","focus",0xe08a6f48,"lime._backend.native.NativeWindow.focus","lime/_backend/native/NativeWindow.hx",153,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_164_getDisplay,"lime._backend.native.NativeWindow","getDisplay",0x2d6caadc,"lime._backend.native.NativeWindow.getDisplay","lime/_backend/native/NativeWindow.hx",164,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_185_getDisplayMode,"lime._backend.native.NativeWindow","getDisplayMode",0x516b485f,"lime._backend.native.NativeWindow.getDisplayMode","lime/_backend/native/NativeWindow.hx",185,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_204_setDisplayMode,"lime._backend.native.NativeWindow","setDisplayMode",0x718b30d3,"lime._backend.native.NativeWindow.setDisplayMode","lime/_backend/native/NativeWindow.hx",204,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_223_getEnableTextEvents,"lime._backend.native.NativeWindow","getEnableTextEvents",0x8c63802f,"lime._backend.native.NativeWindow.getEnableTextEvents","lime/_backend/native/NativeWindow.hx",223,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_240_move,"lime._backend.native.NativeWindow","move",0x8d1891a1,"lime._backend.native.NativeWindow.move","lime/_backend/native/NativeWindow.hx",240,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_253_resize,"lime._backend.native.NativeWindow","resize",0xad67cc84,"lime._backend.native.NativeWindow.resize","lime/_backend/native/NativeWindow.hx",253,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_264_setBorderless,"lime._backend.native.NativeWindow","setBorderless",0x6caf83f7,"lime._backend.native.NativeWindow.setBorderless","lime/_backend/native/NativeWindow.hx",264,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_278_setEnableTextEvents,"lime._backend.native.NativeWindow","setEnableTextEvents",0xc900733b,"lime._backend.native.NativeWindow.setEnableTextEvents","lime/_backend/native/NativeWindow.hx",278,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_293_setFullscreen,"lime._backend.native.NativeWindow","setFullscreen",0x4ef277ed,"lime._backend.native.NativeWindow.setFullscreen","lime/_backend/native/NativeWindow.hx",293,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_321_setIcon,"lime._backend.native.NativeWindow","setIcon",0xb52ef3ab,"lime._backend.native.NativeWindow.setIcon","lime/_backend/native/NativeWindow.hx",321,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_332_setMaximized,"lime._backend.native.NativeWindow","setMaximized",0x34118ca6,"lime._backend.native.NativeWindow.setMaximized","lime/_backend/native/NativeWindow.hx",332,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_347_setMinimized,"lime._backend.native.NativeWindow","setMinimized",0x5dce7a14,"lime._backend.native.NativeWindow.setMinimized","lime/_backend/native/NativeWindow.hx",347,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_362_setResizable,"lime._backend.native.NativeWindow","setResizable",0xde80b5f9,"lime._backend.native.NativeWindow.setResizable","lime/_backend/native/NativeWindow.hx",362,0x34b7ce9f)
HX_LOCAL_STACK_FRAME(_hx_pos_fe3f835f12a28e22_381_setTitle,"lime._backend.native.NativeWindow","setTitle",0x2d49b526,"lime._backend.native.NativeWindow.setTitle","lime/_backend/native/NativeWindow.hx",381,0x34b7ce9f)
namespace lime{
namespace _backend{
namespace native{

void NativeWindow_obj::__construct( ::lime::ui::Window parent){
            	HX_GC_STACKFRAME(&_hx_pos_fe3f835f12a28e22_35_new)
HXLINE(  37)		this->parent = parent;
HXLINE(  39)		this->displayMode =  ::lime::_hx_system::DisplayMode_obj::__alloc( HX_CTX ,(int)0,(int)0,(int)0,(int)0);
            	}

Dynamic NativeWindow_obj::__CreateEmpty() { return new NativeWindow_obj; }

void *NativeWindow_obj::_hx_vtable = 0;

Dynamic NativeWindow_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< NativeWindow_obj > _hx_result = new NativeWindow_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool NativeWindow_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x34d64d88;
}

void NativeWindow_obj::alert(::String message,::String title){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_46_alert)
HXDLIN(  46)		if (hx::IsNotNull( this->handle )) {
HXLINE(  49)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_alert(hx::DynamicPtr(this->handle),message,title);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,alert,(void))

void NativeWindow_obj::close(){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_59_close)
HXDLIN(  59)		if (!(this->closing)) {
HXLINE(  61)			this->closing = true;
HXLINE(  62)			this->parent->onClose->dispatch();
HXLINE(  64)			if (!(this->parent->onClose->canceled)) {
HXLINE(  66)				if (hx::IsNotNull( this->handle )) {
HXLINE(  69)					::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_close(hx::DynamicPtr(this->handle));
HXLINE(  71)					this->handle = null();
            				}
            			}
            			else {
HXLINE(  77)				this->closing = false;
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,close,(void))

void NativeWindow_obj::create( ::lime::app::Application application){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_88_create)
HXLINE(  90)		::String title;
HXDLIN(  90)		bool title1;
HXDLIN(  90)		if (hx::IsNotNull( this->parent->_hx___title )) {
HXLINE(  90)			title1 = (this->parent->_hx___title != HX_("",00,00,00,00));
            		}
            		else {
HXLINE(  90)			title1 = false;
            		}
HXDLIN(  90)		if (title1) {
HXLINE(  90)			title = this->parent->_hx___title;
            		}
            		else {
HXLINE(  90)			title = HX_("Lime Application",c5,b5,9d,ec);
            		}
HXLINE(  91)		int flags = (int)0;
HXLINE(  93)		if (hx::IsNotNull( this->parent->config )) {
HXLINE(  95)			if (::Reflect_obj::hasField(this->parent->config,HX_("antialiasing",f4,16,b3,48))) {
HXLINE(  97)				if (hx::IsGreaterEq( this->parent->config->__Field(HX_("antialiasing",f4,16,b3,48),hx::paccDynamic),(int)4 )) {
HXLINE(  99)					flags = ((int)flags | (int)(int)96);
            				}
            				else {
HXLINE( 101)					if (hx::IsGreaterEq( this->parent->config->__Field(HX_("antialiasing",f4,16,b3,48),hx::paccDynamic),(int)2 )) {
HXLINE( 103)						flags = ((int)flags | (int)(int)32);
            					}
            				}
            			}
HXLINE( 109)			bool _hx_tmp;
HXDLIN( 109)			if (::Reflect_obj::hasField(this->parent->config,HX_("allowHighDPI",92,07,a2,b4))) {
HXLINE( 109)				_hx_tmp = ( (bool)(this->parent->config->__Field(HX_("allowHighDPI",92,07,a2,b4),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 109)				_hx_tmp = false;
            			}
HXDLIN( 109)			if (_hx_tmp) {
HXLINE( 109)				flags = ((int)flags | (int)(int)2048);
            			}
HXLINE( 110)			bool _hx_tmp1;
HXDLIN( 110)			if (::Reflect_obj::hasField(this->parent->config,HX_("alwaysOnTop",67,4d,53,16))) {
HXLINE( 110)				_hx_tmp1 = ( (bool)(this->parent->config->__Field(HX_("alwaysOnTop",67,4d,53,16),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 110)				_hx_tmp1 = false;
            			}
HXDLIN( 110)			if (_hx_tmp1) {
HXLINE( 110)				flags = ((int)flags | (int)(int)32768);
            			}
HXLINE( 112)			if (this->parent->_hx___borderless) {
HXLINE( 112)				flags = ((int)flags | (int)(int)2);
            			}
HXLINE( 113)			bool _hx_tmp2;
HXDLIN( 113)			if (::Reflect_obj::hasField(this->parent->config,HX_("depthBuffer",63,46,9e,52))) {
HXLINE( 113)				_hx_tmp2 = ( (bool)(this->parent->config->__Field(HX_("depthBuffer",63,46,9e,52),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 113)				_hx_tmp2 = false;
            			}
HXDLIN( 113)			if (_hx_tmp2) {
HXLINE( 113)				flags = ((int)flags | (int)(int)512);
            			}
HXLINE( 115)			if (this->parent->_hx___fullscreen) {
HXLINE( 115)				flags = ((int)flags | (int)(int)1);
            			}
HXLINE( 116)			bool _hx_tmp3;
HXDLIN( 116)			if (::Reflect_obj::hasField(this->parent->config,HX_("hardware",a8,e2,d3,75))) {
HXLINE( 116)				_hx_tmp3 = ( (bool)(this->parent->config->__Field(HX_("hardware",a8,e2,d3,75),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 116)				_hx_tmp3 = false;
            			}
HXDLIN( 116)			if (_hx_tmp3) {
HXLINE( 116)				flags = ((int)flags | (int)(int)8);
            			}
HXLINE( 117)			bool _hx_tmp4;
HXDLIN( 117)			if (::Reflect_obj::hasField(this->parent->config,HX_("hidden",6a,ff,95,4c))) {
HXLINE( 117)				_hx_tmp4 = ( (bool)(this->parent->config->__Field(HX_("hidden",6a,ff,95,4c),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 117)				_hx_tmp4 = false;
            			}
HXDLIN( 117)			if (_hx_tmp4) {
HXLINE( 117)				flags = ((int)flags | (int)(int)4096);
            			}
HXLINE( 118)			bool _hx_tmp5;
HXDLIN( 118)			if (::Reflect_obj::hasField(this->parent->config,HX_("maximized",18,0e,e1,fe))) {
HXLINE( 118)				_hx_tmp5 = ( (bool)(this->parent->config->__Field(HX_("maximized",18,0e,e1,fe),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 118)				_hx_tmp5 = false;
            			}
HXDLIN( 118)			if (_hx_tmp5) {
HXLINE( 118)				flags = ((int)flags | (int)(int)16384);
            			}
HXLINE( 119)			bool _hx_tmp6;
HXDLIN( 119)			if (::Reflect_obj::hasField(this->parent->config,HX_("minimized",86,fb,9d,28))) {
HXLINE( 119)				_hx_tmp6 = ( (bool)(this->parent->config->__Field(HX_("minimized",86,fb,9d,28),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 119)				_hx_tmp6 = false;
            			}
HXDLIN( 119)			if (_hx_tmp6) {
HXLINE( 119)				flags = ((int)flags | (int)(int)8192);
            			}
HXLINE( 121)			if (this->parent->_hx___resizable) {
HXLINE( 121)				flags = ((int)flags | (int)(int)4);
            			}
HXLINE( 122)			bool _hx_tmp7;
HXDLIN( 122)			if (::Reflect_obj::hasField(this->parent->config,HX_("stencilBuffer",1c,94,39,31))) {
HXLINE( 122)				_hx_tmp7 = ( (bool)(this->parent->config->__Field(HX_("stencilBuffer",1c,94,39,31),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 122)				_hx_tmp7 = false;
            			}
HXDLIN( 122)			if (_hx_tmp7) {
HXLINE( 122)				flags = ((int)flags | (int)(int)1024);
            			}
HXLINE( 123)			bool _hx_tmp8;
HXDLIN( 123)			if (::Reflect_obj::hasField(this->parent->config,HX_("vsync",d1,2d,a8,3d))) {
HXLINE( 123)				_hx_tmp8 = ( (bool)(this->parent->config->__Field(HX_("vsync",d1,2d,a8,3d),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 123)				_hx_tmp8 = false;
            			}
HXDLIN( 123)			if (_hx_tmp8) {
HXLINE( 123)				flags = ((int)flags | (int)(int)16);
            			}
HXLINE( 124)			bool _hx_tmp9;
HXDLIN( 124)			if (::Reflect_obj::hasField(this->parent->config,HX_("colorDepth",a0,08,96,fb))) {
HXLINE( 124)				_hx_tmp9 = hx::IsEq( this->parent->config->__Field(HX_("colorDepth",a0,08,96,fb),hx::paccDynamic),(int)32 );
            			}
            			else {
HXLINE( 124)				_hx_tmp9 = false;
            			}
HXDLIN( 124)			if (_hx_tmp9) {
HXLINE( 124)				flags = ((int)flags | (int)(int)65536);
            			}
            		}
HXLINE( 135)		this->handle = ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_create(hx::DynamicPtr(application->backend->handle),this->parent->_hx___width,this->parent->_hx___height,flags,title)) );
HXLINE( 137)		if (hx::IsNotNull( this->handle )) {
HXLINE( 139)			int _hx_tmp10 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_width(hx::DynamicPtr(this->handle));
HXDLIN( 139)			this->parent->_hx___width = _hx_tmp10;
HXLINE( 140)			int _hx_tmp11 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_height(hx::DynamicPtr(this->handle));
HXDLIN( 140)			this->parent->_hx___height = _hx_tmp11;
HXLINE( 141)			int _hx_tmp12 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_x(hx::DynamicPtr(this->handle));
HXDLIN( 141)			this->parent->_hx___x = _hx_tmp12;
HXLINE( 142)			int _hx_tmp13 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_y(hx::DynamicPtr(this->handle));
HXDLIN( 142)			this->parent->_hx___y = _hx_tmp13;
HXLINE( 143)			int _hx_tmp14 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_id(hx::DynamicPtr(this->handle));
HXDLIN( 143)			this->parent->id = _hx_tmp14;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,create,(void))

void NativeWindow_obj::focus(){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_153_focus)
HXDLIN( 153)		if (hx::IsNotNull( this->handle )) {
HXLINE( 156)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_focus(hx::DynamicPtr(this->handle));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,focus,(void))

 ::lime::_hx_system::Display NativeWindow_obj::getDisplay(){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_164_getDisplay)
HXLINE( 166)		if (hx::IsNotNull( this->handle )) {
HXLINE( 169)			int index = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_display(hx::DynamicPtr(this->handle));
HXLINE( 171)			if ((index > (int)-1)) {
HXLINE( 173)				return ::lime::_hx_system::System_obj::getDisplay(index);
            			}
            		}
HXLINE( 180)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplay,return )

 ::lime::_hx_system::DisplayMode NativeWindow_obj::getDisplayMode(){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_185_getDisplayMode)
HXLINE( 187)		if (hx::IsNotNull( this->handle )) {
HXLINE( 190)			 ::Dynamic data = ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_display_mode(hx::DynamicPtr(this->handle))) );
HXLINE( 191)			this->displayMode->width = ( (int)(data->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)) );
HXLINE( 192)			this->displayMode->height = ( (int)(data->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)) );
HXLINE( 193)			this->displayMode->pixelFormat = ( (int)(data->__Field(HX_("pixelFormat",5d,72,1b,6f),hx::paccDynamic)) );
HXLINE( 194)			this->displayMode->refreshRate = ( (int)(data->__Field(HX_("refreshRate",5b,e2,3f,40),hx::paccDynamic)) );
            		}
HXLINE( 199)		return this->displayMode;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getDisplayMode,return )

 ::lime::_hx_system::DisplayMode NativeWindow_obj::setDisplayMode( ::lime::_hx_system::DisplayMode value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_204_setDisplayMode)
HXLINE( 206)		if (hx::IsNotNull( this->handle )) {
HXLINE( 209)			 ::Dynamic data = ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_display_mode(hx::DynamicPtr(this->handle),hx::DynamicPtr(value))) );
HXLINE( 210)			this->displayMode->width = ( (int)(data->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic)) );
HXLINE( 211)			this->displayMode->height = ( (int)(data->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic)) );
HXLINE( 212)			this->displayMode->pixelFormat = ( (int)(data->__Field(HX_("pixelFormat",5d,72,1b,6f),hx::paccDynamic)) );
HXLINE( 213)			this->displayMode->refreshRate = ( (int)(data->__Field(HX_("refreshRate",5b,e2,3f,40),hx::paccDynamic)) );
            		}
HXLINE( 218)		return this->displayMode;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setDisplayMode,return )

bool NativeWindow_obj::getEnableTextEvents(){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_223_getEnableTextEvents)
HXLINE( 225)		if (hx::IsNotNull( this->handle )) {
HXLINE( 228)			return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_enable_text_events(hx::DynamicPtr(this->handle));
            		}
HXLINE( 233)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(NativeWindow_obj,getEnableTextEvents,return )

void NativeWindow_obj::move(int x,int y){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_240_move)
HXDLIN( 240)		if (hx::IsNotNull( this->handle )) {
HXLINE( 243)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_move(hx::DynamicPtr(this->handle),x,y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,move,(void))

void NativeWindow_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_253_resize)
HXDLIN( 253)		if (hx::IsNotNull( this->handle )) {
HXLINE( 256)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_resize(hx::DynamicPtr(this->handle),width,height);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(NativeWindow_obj,resize,(void))

bool NativeWindow_obj::setBorderless(bool value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_264_setBorderless)
HXLINE( 266)		if (hx::IsNotNull( this->handle )) {
HXLINE( 269)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_borderless(hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 274)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setBorderless,return )

bool NativeWindow_obj::setEnableTextEvents(bool value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_278_setEnableTextEvents)
HXLINE( 280)		if (hx::IsNotNull( this->handle )) {
HXLINE( 283)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_enable_text_events(hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 288)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setEnableTextEvents,return )

bool NativeWindow_obj::setFullscreen(bool value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_293_setFullscreen)
HXLINE( 295)		if (hx::IsNotNull( this->handle )) {
HXLINE( 298)			value = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_fullscreen(hx::DynamicPtr(this->handle),value);
HXLINE( 300)			int _hx_tmp = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_width(hx::DynamicPtr(this->handle));
HXDLIN( 300)			this->parent->_hx___width = _hx_tmp;
HXLINE( 301)			int _hx_tmp1 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_height(hx::DynamicPtr(this->handle));
HXDLIN( 301)			this->parent->_hx___height = _hx_tmp1;
HXLINE( 302)			int _hx_tmp2 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_x(hx::DynamicPtr(this->handle));
HXDLIN( 302)			this->parent->_hx___x = _hx_tmp2;
HXLINE( 303)			int _hx_tmp3 = ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_get_y(hx::DynamicPtr(this->handle));
HXDLIN( 303)			this->parent->_hx___y = _hx_tmp3;
HXLINE( 306)			if (value) {
HXLINE( 308)				this->parent->onFullscreen->dispatch();
            			}
            		}
HXLINE( 314)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setFullscreen,return )

void NativeWindow_obj::setIcon( ::lime::graphics::Image image){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_321_setIcon)
HXDLIN( 321)		if (hx::IsNotNull( this->handle )) {
HXLINE( 324)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_icon(hx::DynamicPtr(this->handle),hx::DynamicPtr(image->buffer));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setIcon,(void))

bool NativeWindow_obj::setMaximized(bool value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_332_setMaximized)
HXLINE( 334)		if (hx::IsNotNull( this->handle )) {
HXLINE( 337)			return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_maximized(hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 342)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMaximized,return )

bool NativeWindow_obj::setMinimized(bool value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_347_setMinimized)
HXLINE( 349)		if (hx::IsNotNull( this->handle )) {
HXLINE( 352)			return ::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_minimized(hx::DynamicPtr(this->handle),value);
            		}
HXLINE( 357)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setMinimized,return )

bool NativeWindow_obj::setResizable(bool value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_362_setResizable)
HXLINE( 364)		if (hx::IsNotNull( this->handle )) {
HXLINE( 367)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_resizable(hx::DynamicPtr(this->handle),value);
HXLINE( 371)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_borderless(hx::DynamicPtr(this->handle),!(this->parent->_hx___borderless));
HXLINE( 372)			::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_borderless(hx::DynamicPtr(this->handle),this->parent->_hx___borderless);
            		}
HXLINE( 377)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setResizable,return )

::String NativeWindow_obj::setTitle(::String value){
            	HX_STACKFRAME(&_hx_pos_fe3f835f12a28e22_381_setTitle)
HXLINE( 383)		if (hx::IsNotNull( this->handle )) {
HXLINE( 386)			return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_window_set_title(hx::DynamicPtr(this->handle),value)) );
            		}
HXLINE( 391)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(NativeWindow_obj,setTitle,return )


hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__new( ::lime::ui::Window parent) {
	hx::ObjectPtr< NativeWindow_obj > __this = new NativeWindow_obj();
	__this->__construct(parent);
	return __this;
}

hx::ObjectPtr< NativeWindow_obj > NativeWindow_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::ui::Window parent) {
	NativeWindow_obj *__this = (NativeWindow_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(NativeWindow_obj), true, "lime._backend.native.NativeWindow"));
	*(void **)__this = NativeWindow_obj::_hx_vtable;
	__this->__construct(parent);
	return __this;
}

NativeWindow_obj::NativeWindow_obj()
{
}

void NativeWindow_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NativeWindow);
	HX_MARK_MEMBER_NAME(handle,"handle");
	HX_MARK_MEMBER_NAME(closing,"closing");
	HX_MARK_MEMBER_NAME(displayMode,"displayMode");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_END_CLASS();
}

void NativeWindow_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(handle,"handle");
	HX_VISIT_MEMBER_NAME(closing,"closing");
	HX_VISIT_MEMBER_NAME(displayMode,"displayMode");
	HX_VISIT_MEMBER_NAME(parent,"parent");
}

hx::Val NativeWindow_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"move") ) { return hx::Val( move_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alert") ) { return hx::Val( alert_dyn() ); }
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		if (HX_FIELD_EQ(inName,"focus") ) { return hx::Val( focus_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { return hx::Val( handle ); }
		if (HX_FIELD_EQ(inName,"parent") ) { return hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { return hx::Val( closing ); }
		if (HX_FIELD_EQ(inName,"setIcon") ) { return hx::Val( setIcon_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"setTitle") ) { return hx::Val( setTitle_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getDisplay") ) { return hx::Val( getDisplay_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { return hx::Val( displayMode ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"setMaximized") ) { return hx::Val( setMaximized_dyn() ); }
		if (HX_FIELD_EQ(inName,"setMinimized") ) { return hx::Val( setMinimized_dyn() ); }
		if (HX_FIELD_EQ(inName,"setResizable") ) { return hx::Val( setResizable_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"setBorderless") ) { return hx::Val( setBorderless_dyn() ); }
		if (HX_FIELD_EQ(inName,"setFullscreen") ) { return hx::Val( setFullscreen_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getDisplayMode") ) { return hx::Val( getDisplayMode_dyn() ); }
		if (HX_FIELD_EQ(inName,"setDisplayMode") ) { return hx::Val( setDisplayMode_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"getEnableTextEvents") ) { return hx::Val( getEnableTextEvents_dyn() ); }
		if (HX_FIELD_EQ(inName,"setEnableTextEvents") ) { return hx::Val( setEnableTextEvents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val NativeWindow_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"handle") ) { handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::lime::ui::Window >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"closing") ) { closing=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"displayMode") ) { displayMode=inValue.Cast<  ::lime::_hx_system::DisplayMode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NativeWindow_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"));
	outFields->push(HX_HCSTRING("closing","\xf5","\xde","\x25","\x79"));
	outFields->push(HX_HCSTRING("displayMode","\xc5","\x72","\x53","\x30"));
	outFields->push(HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo NativeWindow_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(NativeWindow_obj,handle),HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7")},
	{hx::fsBool,(int)offsetof(NativeWindow_obj,closing),HX_HCSTRING("closing","\xf5","\xde","\x25","\x79")},
	{hx::fsObject /*::lime::_hx_system::DisplayMode*/ ,(int)offsetof(NativeWindow_obj,displayMode),HX_HCSTRING("displayMode","\xc5","\x72","\x53","\x30")},
	{hx::fsObject /*::lime::ui::Window*/ ,(int)offsetof(NativeWindow_obj,parent),HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *NativeWindow_obj_sStaticStorageInfo = 0;
#endif

static ::String NativeWindow_obj_sMemberFields[] = {
	HX_HCSTRING("handle","\xa8","\x83","\xfd","\xb7"),
	HX_HCSTRING("closing","\xf5","\xde","\x25","\x79"),
	HX_HCSTRING("displayMode","\xc5","\x72","\x53","\x30"),
	HX_HCSTRING("parent","\x2a","\x05","\x7e","\xed"),
	HX_HCSTRING("alert","\x5c","\x57","\x8e","\x21"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("focus","\xd8","\x5f","\x89","\x04"),
	HX_HCSTRING("getDisplay","\x4c","\xb0","\xab","\x0a"),
	HX_HCSTRING("getDisplayMode","\xcf","\xc5","\xf1","\xb7"),
	HX_HCSTRING("setDisplayMode","\x43","\xae","\x11","\xd8"),
	HX_HCSTRING("getEnableTextEvents","\xbf","\x4c","\x30","\x24"),
	HX_HCSTRING("move","\x11","\xe3","\x60","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("setBorderless","\x87","\x84","\xe9","\xb8"),
	HX_HCSTRING("setEnableTextEvents","\xcb","\x3f","\xcd","\x60"),
	HX_HCSTRING("setFullscreen","\x7d","\x78","\x2c","\x9b"),
	HX_HCSTRING("setIcon","\x3b","\x28","\x37","\x0b"),
	HX_HCSTRING("setMaximized","\x16","\xce","\x30","\x23"),
	HX_HCSTRING("setMinimized","\x84","\xbb","\xed","\x4c"),
	HX_HCSTRING("setResizable","\x69","\xf7","\x9f","\xcd"),
	HX_HCSTRING("setTitle","\x96","\x7e","\x6f","\x1e"),
	::String(null()) };

static void NativeWindow_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NativeWindow_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NativeWindow_obj::__mClass,"__mClass");
};

#endif

hx::Class NativeWindow_obj::__mClass;

void NativeWindow_obj::__register()
{
	hx::Object *dummy = new NativeWindow_obj;
	NativeWindow_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native.NativeWindow","\xde","\x3b","\x5b","\x7f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NativeWindow_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(NativeWindow_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< NativeWindow_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NativeWindow_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NativeWindow_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NativeWindow_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native