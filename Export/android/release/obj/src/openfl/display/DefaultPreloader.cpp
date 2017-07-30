// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_openfl_Lib
#include <openfl/Lib.h>
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
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_LoaderInfo
#include <openfl/display/LoaderInfo.h>
#endif
#ifndef INCLUDED_openfl_display_MovieClip
#include <openfl/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_ProgressEvent
#include <openfl/events/ProgressEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_a3b7e47404dab77a_133_new,"openfl.display.DefaultPreloader","new",0xd9ecb051,"openfl.display.DefaultPreloader.new","openfl/display/Preloader.hx",133,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_184_getBackgroundColor,"openfl.display.DefaultPreloader","getBackgroundColor",0xe99da5ce,"openfl.display.DefaultPreloader.getBackgroundColor","openfl/display/Preloader.hx",184,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_189_getHeight,"openfl.display.DefaultPreloader","getHeight",0xf2617bce,"openfl.display.DefaultPreloader.getHeight","openfl/display/Preloader.hx",189,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_206_getWidth,"openfl.display.DefaultPreloader","getWidth",0x7b1a7bff,"openfl.display.DefaultPreloader.getWidth","openfl/display/Preloader.hx",206,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_225_onInit,"openfl.display.DefaultPreloader","onInit",0x238e307e,"openfl.display.DefaultPreloader.onInit","openfl/display/Preloader.hx",225,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_230_onLoaded,"openfl.display.DefaultPreloader","onLoaded",0x88fcf4f3,"openfl.display.DefaultPreloader.onLoaded","openfl/display/Preloader.hx",230,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_239_onUpdate,"openfl.display.DefaultPreloader","onUpdate",0xb79332f7,"openfl.display.DefaultPreloader.onUpdate","openfl/display/Preloader.hx",239,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_267_this_onAddedToStage,"openfl.display.DefaultPreloader","this_onAddedToStage",0xa7de3014,"openfl.display.DefaultPreloader.this_onAddedToStage","openfl/display/Preloader.hx",267,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_280_this_onComplete,"openfl.display.DefaultPreloader","this_onComplete",0x228a21ea,"openfl.display.DefaultPreloader.this_onComplete","openfl/display/Preloader.hx",280,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_292_this_onEnterFrame,"openfl.display.DefaultPreloader","this_onEnterFrame",0x72c19366,"openfl.display.DefaultPreloader.this_onEnterFrame","openfl/display/Preloader.hx",292,0xc399db74)
HX_LOCAL_STACK_FRAME(_hx_pos_a3b7e47404dab77a_310_this_onProgress,"openfl.display.DefaultPreloader","this_onProgress",0x28ed18de,"openfl.display.DefaultPreloader.this_onProgress","openfl/display/Preloader.hx",310,0xc399db74)
namespace openfl{
namespace display{

void DefaultPreloader_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_a3b7e47404dab77a_133_new)
HXLINE( 135)		super::__construct();
HXLINE( 137)		int backgroundColor = this->getBackgroundColor();
HXLINE( 138)		int r = ((int)((int)backgroundColor >> (int)(int)16) & (int)(int)255);
HXLINE( 139)		int g = ((int)((int)backgroundColor >> (int)(int)8) & (int)(int)255);
HXLINE( 140)		int b = ((int)backgroundColor & (int)(int)255);
HXLINE( 141)		Float perceivedLuminosity = (((((Float)0.299) * r) + (((Float)0.587) * g)) + (((Float)0.114) * b));
HXLINE( 142)		int color = (int)0;
HXLINE( 144)		if ((perceivedLuminosity < (int)70)) {
HXLINE( 146)			color = (int)16777215;
            		}
HXLINE( 150)		int x = (int)30;
HXLINE( 151)		int height = (int)7;
HXLINE( 152)		Float y = ((Float)this->getHeight() / (Float)(int)2);
HXDLIN( 152)		Float y1 = (y - ((Float)height / (Float)(int)2));
HXLINE( 153)		Float width = this->getWidth();
HXDLIN( 153)		Float width1 = (width - (x * (int)2));
HXLINE( 155)		int padding = (int)2;
HXLINE( 157)		this->outline =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 158)		this->outline->get_graphics()->beginFill(color,((Float)0.07));
HXLINE( 159)		this->outline->get_graphics()->drawRect((int)0,(int)0,width1,height);
HXLINE( 160)		this->outline->set_x(x);
HXLINE( 161)		this->outline->set_y(y1);
HXLINE( 162)		this->outline->set_alpha((int)0);
HXLINE( 163)		this->addChild(this->outline);
HXLINE( 165)		this->progress =  ::openfl::display::Sprite_obj::__alloc( HX_CTX );
HXLINE( 166)		this->progress->get_graphics()->beginFill(color,((Float)0.35));
HXLINE( 167)		 ::openfl::display::Graphics _hx_tmp = this->progress->get_graphics();
HXDLIN( 167)		_hx_tmp->drawRect((int)0,(int)0,(width1 - (padding * (int)2)),(height - (padding * (int)2)));
HXLINE( 168)		 ::openfl::display::Sprite _hx_tmp1 = this->progress;
HXDLIN( 168)		_hx_tmp1->set_x((x + padding));
HXLINE( 169)		 ::openfl::display::Sprite _hx_tmp2 = this->progress;
HXDLIN( 169)		_hx_tmp2->set_y((y1 + padding));
HXLINE( 170)		this->progress->set_scaleX((int)0);
HXLINE( 171)		this->progress->set_alpha((int)0);
HXLINE( 172)		this->addChild(this->progress);
HXLINE( 174)		this->startAnimation = (::openfl::Lib_obj::getTimer() + (int)100);
HXLINE( 175)		this->endAnimation = (this->startAnimation + (int)1000);
HXLINE( 177)		this->addEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null(),null(),null());
            	}

Dynamic DefaultPreloader_obj::__CreateEmpty() { return new DefaultPreloader_obj; }

void *DefaultPreloader_obj::_hx_vtable = 0;

Dynamic DefaultPreloader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DefaultPreloader_obj > _hx_result = new DefaultPreloader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DefaultPreloader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17120186) {
		if (inClassId<=(int)0x0ddfced7) {
			if (inClassId<=(int)0x015b8e1b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x015b8e1b;
			} else {
				return inClassId==(int)0x0ddfced7;
			}
		} else {
			return inClassId==(int)0x17120186;
		}
	} else {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}

int DefaultPreloader_obj::getBackgroundColor(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_184_getBackgroundColor)
HXDLIN( 184)		return ( (int)(::openfl::Lib_obj::current->stage->window->config->__Field(HX_("background",ee,93,1d,26),hx::paccDynamic)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getBackgroundColor,return )

Float DefaultPreloader_obj::getHeight(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_189_getHeight)
HXLINE( 191)		 ::Dynamic height = ::openfl::Lib_obj::current->stage->window->config->__Field(HX_("height",e7,07,4c,02),hx::paccDynamic);
HXLINE( 193)		if (hx::IsGreater( height,(int)0 )) {
HXLINE( 195)			return height;
            		}
            		else {
HXLINE( 199)			return ::openfl::Lib_obj::current->stage->stageHeight;
            		}
HXLINE( 193)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getHeight,return )

Float DefaultPreloader_obj::getWidth(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_206_getWidth)
HXLINE( 208)		 ::Dynamic width = ::openfl::Lib_obj::current->stage->window->config->__Field(HX_("width",06,b6,62,ca),hx::paccDynamic);
HXLINE( 210)		if (hx::IsGreater( width,(int)0 )) {
HXLINE( 212)			return width;
            		}
            		else {
HXLINE( 216)			return ::openfl::Lib_obj::current->stage->stageWidth;
            		}
HXLINE( 210)		return ((Float)0.);
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,getWidth,return )

void DefaultPreloader_obj::onInit(){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_225_onInit)
HXDLIN( 225)		this->addEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onInit,(void))

void DefaultPreloader_obj::onLoaded(){
            	HX_GC_STACKFRAME(&_hx_pos_a3b7e47404dab77a_230_onLoaded)
HXLINE( 232)		this->removeEventListener(HX_("enterFrame",f5,03,50,02),this->this_onEnterFrame_dyn(),null());
HXLINE( 234)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("unload",ff,a0,8c,65),null(),null()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(DefaultPreloader_obj,onLoaded,(void))

void DefaultPreloader_obj::onUpdate(int bytesLoaded,int bytesTotal){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_239_onUpdate)
HXLINE( 241)		Float percentLoaded = ((Float)0.0);
HXLINE( 243)		if ((bytesTotal > (int)0)) {
HXLINE( 245)			percentLoaded = ((Float)bytesLoaded / (Float)bytesTotal);
HXLINE( 247)			if ((percentLoaded > (int)1)) {
HXLINE( 249)				percentLoaded = (int)1;
            			}
            		}
HXLINE( 255)		this->progress->set_scaleX(percentLoaded);
            	}


HX_DEFINE_DYNAMIC_FUNC2(DefaultPreloader_obj,onUpdate,(void))

void DefaultPreloader_obj::this_onAddedToStage( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_267_this_onAddedToStage)
HXLINE( 269)		this->removeEventListener(HX_("addedToStage",63,22,55,0c),this->this_onAddedToStage_dyn(),null());
HXLINE( 271)		this->onInit();
HXLINE( 272)		int _hx_tmp = this->get_loaderInfo()->bytesLoaded;
HXDLIN( 272)		this->onUpdate(_hx_tmp,this->get_loaderInfo()->bytesTotal);
HXLINE( 274)		this->addEventListener(HX_("progress",ad,f7,2a,86),this->this_onProgress_dyn(),null(),null(),null());
HXLINE( 275)		this->addEventListener(HX_("complete",b9,00,c8,7f),this->this_onComplete_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onAddedToStage,(void))

void DefaultPreloader_obj::this_onComplete( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_280_this_onComplete)
HXLINE( 282)		event->preventDefault();
HXLINE( 284)		this->removeEventListener(HX_("progress",ad,f7,2a,86),this->this_onProgress_dyn(),null());
HXLINE( 285)		this->removeEventListener(HX_("complete",b9,00,c8,7f),this->this_onComplete_dyn(),null());
HXLINE( 287)		this->onLoaded();
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onComplete,(void))

void DefaultPreloader_obj::this_onEnterFrame( ::openfl::events::Event event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_292_this_onEnterFrame)
HXLINE( 294)		int elapsed = ::openfl::Lib_obj::getTimer();
HXDLIN( 294)		int elapsed1 = (elapsed - this->startAnimation);
HXLINE( 295)		int total = (this->endAnimation - this->startAnimation);
HXLINE( 297)		Float percent = ((Float)elapsed1 / (Float)total);
HXLINE( 299)		if ((percent < (int)0)) {
HXLINE( 299)			percent = (int)0;
            		}
HXLINE( 300)		if ((percent > (int)1)) {
HXLINE( 300)			percent = (int)1;
            		}
HXLINE( 302)		this->outline->set_alpha(percent);
HXLINE( 303)		this->progress->set_alpha(percent);
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onEnterFrame,(void))

void DefaultPreloader_obj::this_onProgress( ::openfl::events::ProgressEvent event){
            	HX_STACKFRAME(&_hx_pos_a3b7e47404dab77a_310_this_onProgress)
HXDLIN( 310)		int _hx_tmp = ::Std_obj::_hx_int(event->bytesLoaded);
HXDLIN( 310)		this->onUpdate(_hx_tmp,::Std_obj::_hx_int(event->bytesTotal));
            	}


HX_DEFINE_DYNAMIC_FUNC1(DefaultPreloader_obj,this_onProgress,(void))


hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__new() {
	hx::ObjectPtr< DefaultPreloader_obj > __this = new DefaultPreloader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DefaultPreloader_obj > DefaultPreloader_obj::__alloc(hx::Ctx *_hx_ctx) {
	DefaultPreloader_obj *__this = (DefaultPreloader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DefaultPreloader_obj), true, "openfl.display.DefaultPreloader"));
	*(void **)__this = DefaultPreloader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DefaultPreloader_obj::DefaultPreloader_obj()
{
}

void DefaultPreloader_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DefaultPreloader);
	HX_MARK_MEMBER_NAME(endAnimation,"endAnimation");
	HX_MARK_MEMBER_NAME(outline,"outline");
	HX_MARK_MEMBER_NAME(progress,"progress");
	HX_MARK_MEMBER_NAME(startAnimation,"startAnimation");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void DefaultPreloader_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(endAnimation,"endAnimation");
	HX_VISIT_MEMBER_NAME(outline,"outline");
	HX_VISIT_MEMBER_NAME(progress,"progress");
	HX_VISIT_MEMBER_NAME(startAnimation,"startAnimation");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val DefaultPreloader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"onInit") ) { return hx::Val( onInit_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { return hx::Val( outline ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { return hx::Val( progress ); }
		if (HX_FIELD_EQ(inName,"getWidth") ) { return hx::Val( getWidth_dyn() ); }
		if (HX_FIELD_EQ(inName,"onLoaded") ) { return hx::Val( onLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"onUpdate") ) { return hx::Val( onUpdate_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getHeight") ) { return hx::Val( getHeight_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { return hx::Val( endAnimation ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { return hx::Val( startAnimation ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"this_onComplete") ) { return hx::Val( this_onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"this_onProgress") ) { return hx::Val( this_onProgress_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"this_onEnterFrame") ) { return hx::Val( this_onEnterFrame_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"getBackgroundColor") ) { return hx::Val( getBackgroundColor_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"this_onAddedToStage") ) { return hx::Val( this_onAddedToStage_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val DefaultPreloader_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"outline") ) { outline=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"progress") ) { progress=inValue.Cast<  ::openfl::display::Sprite >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"endAnimation") ) { endAnimation=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"startAnimation") ) { startAnimation=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DefaultPreloader_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a"));
	outFields->push(HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"));
	outFields->push(HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"));
	outFields->push(HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DefaultPreloader_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DefaultPreloader_obj,endAnimation),HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefaultPreloader_obj,outline),HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1")},
	{hx::fsObject /*::openfl::display::Sprite*/ ,(int)offsetof(DefaultPreloader_obj,progress),HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86")},
	{hx::fsInt,(int)offsetof(DefaultPreloader_obj,startAnimation),HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DefaultPreloader_obj_sStaticStorageInfo = 0;
#endif

static ::String DefaultPreloader_obj_sMemberFields[] = {
	HX_HCSTRING("endAnimation","\xa9","\xf7","\x36","\x5a"),
	HX_HCSTRING("outline","\x82","\x17","\xbe","\xe1"),
	HX_HCSTRING("progress","\xad","\xf7","\x2a","\x86"),
	HX_HCSTRING("startAnimation","\x42","\xbe","\x6f","\x6a"),
	HX_HCSTRING("getBackgroundColor","\x9f","\xee","\x0c","\xc0"),
	HX_HCSTRING("getHeight","\x1d","\x91","\xa2","\x7e"),
	HX_HCSTRING("getWidth","\x90","\xc5","\x39","\x2a"),
	HX_HCSTRING("onInit","\xcf","\x43","\x45","\xe8"),
	HX_HCSTRING("onLoaded","\x84","\x3e","\x1c","\x38"),
	HX_HCSTRING("onUpdate","\x88","\x7c","\xb2","\x66"),
	HX_HCSTRING("this_onAddedToStage","\x23","\x9e","\xce","\x72"),
	HX_HCSTRING("this_onComplete","\x79","\x9c","\x68","\xed"),
	HX_HCSTRING("this_onEnterFrame","\xb5","\x0f","\x1f","\x8e"),
	HX_HCSTRING("this_onProgress","\x6d","\x93","\xcb","\xf3"),
	::String(null()) };

static void DefaultPreloader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DefaultPreloader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DefaultPreloader_obj::__mClass,"__mClass");
};

#endif

hx::Class DefaultPreloader_obj::__mClass;

void DefaultPreloader_obj::__register()
{
	hx::Object *dummy = new DefaultPreloader_obj;
	DefaultPreloader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.DefaultPreloader","\xdf","\x33","\x40","\x45");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DefaultPreloader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DefaultPreloader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DefaultPreloader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DefaultPreloader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DefaultPreloader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DefaultPreloader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
