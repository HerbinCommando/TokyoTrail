// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_com_gamejam_location_CityLocation
#include <com/gamejam/location/CityLocation.h>
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
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_14b439e5705244d5_12_new,"com.gamejam.location.CityLocation","new",0x3cc8a334,"com.gamejam.location.CityLocation.new","com/gamejam/location/CityLocation.hx",12,0x6005c6dd)
namespace com{
namespace gamejam{
namespace location{

void CityLocation_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_14b439e5705244d5_12_new)
HXDLIN(  12)		super::__construct();
            	}

Dynamic CityLocation_obj::__CreateEmpty() { return new CityLocation_obj; }

void *CityLocation_obj::_hx_vtable = 0;

Dynamic CityLocation_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CityLocation_obj > _hx_result = new CityLocation_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CityLocation_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x19c29573) {
		if (inClassId<=(int)0x17120186) {
			if (inClassId<=(int)0x0ddfced7) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0ddfced7;
			} else {
				return inClassId==(int)0x17120186;
			}
		} else {
			return inClassId==(int)0x19c29573;
		}
	} else {
		if (inClassId<=(int)0x3f2b00af) {
			return inClassId==(int)0x1b123bf8 || inClassId==(int)0x3f2b00af;
		} else {
			return inClassId==(int)0x4830fa98;
		}
	}
}


hx::ObjectPtr< CityLocation_obj > CityLocation_obj::__new() {
	hx::ObjectPtr< CityLocation_obj > __this = new CityLocation_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< CityLocation_obj > CityLocation_obj::__alloc(hx::Ctx *_hx_ctx) {
	CityLocation_obj *__this = (CityLocation_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CityLocation_obj), true, "com.gamejam.location.CityLocation"));
	*(void **)__this = CityLocation_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

CityLocation_obj::CityLocation_obj()
{
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CityLocation_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CityLocation_obj_sStaticStorageInfo = 0;
#endif

static void CityLocation_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CityLocation_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CityLocation_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CityLocation_obj::__mClass,"__mClass");
};

#endif

hx::Class CityLocation_obj::__mClass;

void CityLocation_obj::__register()
{
	hx::Object *dummy = new CityLocation_obj;
	CityLocation_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.gamejam.location.CityLocation","\x42","\x39","\x8a","\xb9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CityLocation_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CityLocation_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CityLocation_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CityLocation_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CityLocation_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace gamejam
} // end namespace location
