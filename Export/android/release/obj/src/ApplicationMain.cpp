// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_ApplicationMain
#include <ApplicationMain.h>
#endif
#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_ManifestResources
#include <ManifestResources.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_com_gamejam_Main
#include <com/gamejam/Main.h>
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
#ifndef INCLUDED_lime_app_Preloader
#include <lime/app/Preloader.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl_display_Application
#include <openfl/display/Application.h>
#endif
#ifndef INCLUDED_openfl_display_DefaultPreloader
#include <openfl/display/DefaultPreloader.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Preloader
#include <openfl/display/Preloader.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_ActivityEvent
#include <openfl/events/ActivityEvent.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_FullScreenEvent
#include <openfl/events/FullScreenEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b3b993f62d801895_227___init__,"::ApplicationMain_obj","__init__",0x253d991d,"::ApplicationMain_obj.__init__","ApplicationMain.hx",227,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_21_main,"ApplicationMain","main",0x93d2f73e,"ApplicationMain.main","ApplicationMain.hx",21,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_95_create,"ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",95,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_85_create,"ApplicationMain","create",0x2f7db141,"ApplicationMain.create","ApplicationMain.hx",85,0x0780ded5)
HX_LOCAL_STACK_FRAME(_hx_pos_6fcf922b66429816_128_start,"ApplicationMain","start",0x45b5d9bd,"ApplicationMain.start","ApplicationMain.hx",128,0x0780ded5)

void ApplicationMain_obj::__construct() { }

Dynamic ApplicationMain_obj::__CreateEmpty() { return new ApplicationMain_obj; }

void *ApplicationMain_obj::_hx_vtable = 0;

Dynamic ApplicationMain_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ApplicationMain_obj > _hx_result = new ApplicationMain_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ApplicationMain_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a39ff89;
}

void ApplicationMain_obj::__init__(){
            	HX_STACKFRAME(&_hx_pos_b3b993f62d801895_227___init__)
HXDLIN( 227)		 ::Dynamic init = hx::ClassOf< ::lime::app::Application >();
            	}


void ApplicationMain_obj::main(){
            	HX_STACKFRAME(&_hx_pos_6fcf922b66429816_21_main)
HXLINE(  23)		::String projectName = HX_("AkibaTrail",48,9b,a2,d0);
HXLINE(  25)		 ::Dynamic config =  ::Dynamic(hx::Anon_obj::Create(9)
            			->setFixed(0,HX_("company",3d,15,69,83),HX_("Mars Cilla Consulting",06,15,5b,be))
            			->setFixed(1,HX_("build",2e,db,ea,ba),HX_("25",c3,2b,00,00))
            			->setFixed(2,HX_("windows",83,de,74,e8),::Array_obj< ::Dynamic>::__new(1)->init(0, ::Dynamic(hx::Anon_obj::Create(21)
            				->setFixed(0,HX_("resizable",6b,37,50,a9),true)
            				->setFixed(1,HX_("allowHighDPI",92,07,a2,b4),true)
            				->setFixed(2,HX_("display",42,2a,4a,bb),(int)0)
            				->setFixed(3,HX_("width",06,b6,62,ca),(int)0)
            				->setFixed(4,HX_("fullscreen",3b,3a,b4,f9),true)
            				->setFixed(5,HX_("maximized",18,0e,e1,fe),null())
            				->setFixed(6,HX_("x",78,00,00,00),null())
            				->setFixed(7,HX_("y",79,00,00,00),null())
            				->setFixed(8,HX_("height",e7,07,4c,02),(int)0)
            				->setFixed(9,HX_("title",98,15,3b,10),HX_("AkibaTrail",48,9b,a2,d0))
            				->setFixed(10,HX_("alwaysOnTop",67,4d,53,16),false)
            				->setFixed(11,HX_("borderless",45,46,71,17),false)
            				->setFixed(12,HX_("background",ee,93,1d,26),(int)16777215)
            				->setFixed(13,HX_("minimized",86,fb,9d,28),null())
            				->setFixed(14,HX_("stencilBuffer",1c,94,39,31),true)
            				->setFixed(15,HX_("vsync",d1,2d,a8,3d),false)
            				->setFixed(16,HX_("antialiasing",f4,16,b3,48),(int)0)
            				->setFixed(17,HX_("hidden",6a,ff,95,4c),null())
            				->setFixed(18,HX_("parameters",aa,be,7e,51), ::Dynamic(hx::Anon_obj::Create(0)))
            				->setFixed(19,HX_("depthBuffer",63,46,9e,52),false)
            				->setFixed(20,HX_("hardware",a8,e2,d3,75),true))))
            			->setFixed(3,HX_("orientation",d0,ee,fe,fd),HX_("",00,00,00,00))
            			->setFixed(4,HX_("fps",e9,c7,4d,00),(int)30)
            			->setFixed(5,HX_("packageName",f1,04,ad,04),HX_("com.gamejam.akibatrail",5f,54,1c,87))
            			->setFixed(6,HX_("file",7c,ce,bb,43),HX_("AkibaTrail",48,9b,a2,d0))
            			->setFixed(7,HX_("name",4b,72,ff,48),HX_("AkibaTrail",48,9b,a2,d0))
            			->setFixed(8,HX_("version",18,e7,f1,7c),HX_("1.0.0",b5,d1,2e,55)));
HXLINE(  64)		::lime::_hx_system::System_obj::_hx___registerEntryPoint(projectName,::ApplicationMain_obj::create_dyn(),config);
HXLINE(  79)		::ApplicationMain_obj::create(config);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(ApplicationMain_obj,main,(void))

void ApplicationMain_obj::create( ::Dynamic config){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::openfl::display::Stage,a1) HXARGC(0)
            		void _hx_run(){
            			HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_95_create)
HXLINE(  95)			::ApplicationMain_obj::start(a1);
            		}
            		HX_END_LOCAL_FUNC0((void))

            	HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_85_create)
HXLINE(  87)		 ::openfl::display::Application app =  ::openfl::display::Application_obj::__alloc( HX_CTX );
HXLINE(  88)		app->create(config);
HXLINE(  90)		::ManifestResources_obj::init(config);
HXLINE(  92)		 ::openfl::display::Preloader preloader =  ::openfl::display::Preloader_obj::__alloc( HX_CTX , ::openfl::display::DefaultPreloader_obj::__alloc( HX_CTX ));
HXLINE(  93)		app->setPreloader(preloader);
HXLINE(  94)		preloader->create(config);
HXLINE(  95)		 ::openfl::display::Stage a1 = app->_hx___windows->__get((int)0).StaticCast<  ::lime::ui::Window >()->stage;
HXDLIN(  95)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1));
HXDLIN(  95)		preloader->onComplete->add(_hx_tmp,null(),null());
HXLINE(  97)		{
HXLINE(  97)			int _g = (int)0;
HXDLIN(  97)			::Array< ::Dynamic> _g1 = ::ManifestResources_obj::preloadLibraries;
HXDLIN(  97)			while((_g < _g1->length)){
HXLINE(  97)				 ::lime::utils::AssetLibrary library = _g1->__get(_g).StaticCast<  ::lime::utils::AssetLibrary >();
HXDLIN(  97)				_g = (_g + (int)1);
HXLINE(  99)				preloader->addLibrary(library);
            			}
            		}
HXLINE( 103)		{
HXLINE( 103)			int _g2 = (int)0;
HXDLIN( 103)			::Array< ::String > _g11 = ::ManifestResources_obj::preloadLibraryNames;
HXDLIN( 103)			while((_g2 < _g11->length)){
HXLINE( 103)				::String name = _g11->__get(_g2);
HXDLIN( 103)				_g2 = (_g2 + (int)1);
HXLINE( 105)				preloader->addLibraryName(name);
            			}
            		}
HXLINE( 109)		preloader->load();
HXLINE( 111)		int result = app->exec();
HXLINE( 114)		::lime::_hx_system::System_obj::exit(result);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,create,(void))

void ApplicationMain_obj::start( ::openfl::display::Stage stage){
            	HX_GC_STACKFRAME(&_hx_pos_6fcf922b66429816_128_start)
HXDLIN( 128)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 183)			{
HXLINE( 185)				 ::openfl::display::DisplayObject current = stage->getChildAt((int)0);
HXLINE( 187)				bool _hx_tmp;
HXDLIN( 187)				if (hx::IsNotNull( current )) {
HXLINE( 187)					_hx_tmp = !(::Std_obj::is(current,hx::ClassOf< ::openfl::display::DisplayObjectContainer >()));
            				}
            				else {
HXLINE( 187)					_hx_tmp = true;
            				}
HXDLIN( 187)				if (_hx_tmp) {
HXLINE( 189)					current =  ::openfl::display::MovieClip_obj::__alloc( HX_CTX );
HXLINE( 190)					stage->addChild(current);
            				}
HXLINE( 194)				 ::DocumentClass_obj::__alloc( HX_CTX ,( ( ::openfl::display::DisplayObjectContainer)(current) ));
            			}
HXLINE( 132)			stage->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("resize",f4,59,7b,08),false,false));
HXLINE( 134)			if (stage->window->_hx___fullscreen) {
HXLINE( 136)				stage->dispatchEvent( ::openfl::events::FullScreenEvent_obj::__alloc( HX_CTX ,HX_("fullScreen",5b,ae,48,2e),false,false,true,true));
            			}
            		}
            		catch( ::Dynamic _hx_e){
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic e = _hx_e;
HXLINE( 143)				stage->_hx___handleError(e);
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ApplicationMain_obj,start,(void))


ApplicationMain_obj::ApplicationMain_obj()
{
}

bool ApplicationMain_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"main") ) { outValue = main_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"start") ) { outValue = start_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { outValue = create_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ApplicationMain_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ApplicationMain_obj_sStaticStorageInfo = 0;
#endif

static void ApplicationMain_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ApplicationMain_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ApplicationMain_obj::__mClass,"__mClass");
};

#endif

hx::Class ApplicationMain_obj::__mClass;

static ::String ApplicationMain_obj_sStaticFields[] = {
	HX_HCSTRING("main","\x39","\x38","\x56","\x48"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("start","\x62","\x74","\x0b","\x84"),
	::String(null())
};

void ApplicationMain_obj::__register()
{
	hx::Object *dummy = new ApplicationMain_obj;
	ApplicationMain_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("ApplicationMain","\x89","\xff","\x39","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ApplicationMain_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ApplicationMain_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ApplicationMain_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ApplicationMain_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ApplicationMain_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ApplicationMain_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ApplicationMain_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void ApplicationMain_obj::__boot()
{
}

