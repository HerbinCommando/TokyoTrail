// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_utils_AssetLibrary
#include <lime/utils/AssetLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLite
#include <openfl/_internal/swf/SWFLite.h>
#endif
#ifndef INCLUDED_openfl__internal_swf_SWFLiteLibrary
#include <openfl/_internal/swf/SWFLiteLibrary.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_BitmapSymbol
#include <openfl/_internal/symbols/BitmapSymbol.h>
#endif
#ifndef INCLUDED_openfl__internal_symbols_SWFSymbol
#include <openfl/_internal/symbols/SWFSymbol.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6ebf8e17a3abb08a_29_new,"openfl._internal.symbols.BitmapSymbol","new",0x8818031c,"openfl._internal.symbols.BitmapSymbol.new","openfl/_internal/symbols/BitmapSymbol.hx",29,0x5876b9f1)
HX_LOCAL_STACK_FRAME(_hx_pos_6ebf8e17a3abb08a_36___createObject,"openfl._internal.symbols.BitmapSymbol","__createObject",0xcb0ed0bf,"openfl._internal.symbols.BitmapSymbol.__createObject","openfl/_internal/symbols/BitmapSymbol.hx",36,0x5876b9f1)
namespace openfl{
namespace _internal{
namespace symbols{

void BitmapSymbol_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6ebf8e17a3abb08a_29_new)
HXDLIN(  29)		super::__construct();
            	}

Dynamic BitmapSymbol_obj::__CreateEmpty() { return new BitmapSymbol_obj; }

void *BitmapSymbol_obj::_hx_vtable = 0;

Dynamic BitmapSymbol_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapSymbol_obj > _hx_result = new BitmapSymbol_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapSymbol_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5bdcc22b) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5bdcc22b;
	} else {
		return inClassId==(int)0x5ce92b56;
	}
}

 ::openfl::display::DisplayObject BitmapSymbol_obj::_hx___createObject( ::openfl::_internal::swf::SWFLite swf){
            	HX_GC_STACKFRAME(&_hx_pos_6ebf8e17a3abb08a_36___createObject)
HXDLIN(  36)		 ::openfl::display::BitmapData _hx_tmp = ::openfl::display::BitmapData_obj::fromImage(swf->library->getImage(this->path),null());
HXDLIN(  36)		return  ::openfl::display::Bitmap_obj::__alloc( HX_CTX ,_hx_tmp,(int)1,hx::IsNotEq( this->smooth,false ));
            	}



hx::ObjectPtr< BitmapSymbol_obj > BitmapSymbol_obj::__new() {
	hx::ObjectPtr< BitmapSymbol_obj > __this = new BitmapSymbol_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BitmapSymbol_obj > BitmapSymbol_obj::__alloc(hx::Ctx *_hx_ctx) {
	BitmapSymbol_obj *__this = (BitmapSymbol_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BitmapSymbol_obj), true, "openfl._internal.symbols.BitmapSymbol"));
	*(void **)__this = BitmapSymbol_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapSymbol_obj::BitmapSymbol_obj()
{
}

void BitmapSymbol_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BitmapSymbol);
	HX_MARK_MEMBER_NAME(alpha,"alpha");
	HX_MARK_MEMBER_NAME(path,"path");
	HX_MARK_MEMBER_NAME(smooth,"smooth");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void BitmapSymbol_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(alpha,"alpha");
	HX_VISIT_MEMBER_NAME(path,"path");
	HX_VISIT_MEMBER_NAME(smooth,"smooth");
	 ::openfl::_internal::symbols::SWFSymbol_obj::__Visit(HX_VISIT_ARG);
}

hx::Val BitmapSymbol_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return hx::Val( path ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { return hx::Val( alpha ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { return hx::Val( smooth ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__createObject") ) { return hx::Val( _hx___createObject_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BitmapSymbol_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::String >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"alpha") ) { alpha=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"smooth") ) { smooth=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapSymbol_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"));
	outFields->push(HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"));
	outFields->push(HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BitmapSymbol_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(BitmapSymbol_obj,alpha),HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21")},
	{hx::fsString,(int)offsetof(BitmapSymbol_obj,path),HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(BitmapSymbol_obj,smooth),HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BitmapSymbol_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapSymbol_obj_sMemberFields[] = {
	HX_HCSTRING("alpha","\x5e","\xa7","\x96","\x21"),
	HX_HCSTRING("path","\xa5","\xe5","\x51","\x4a"),
	HX_HCSTRING("smooth","\x2e","\x08","\x6b","\x07"),
	HX_HCSTRING("__createObject","\xfb","\x41","\x55","\x58"),
	::String(null()) };

static void BitmapSymbol_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapSymbol_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapSymbol_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapSymbol_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapSymbol_obj::__mClass;

void BitmapSymbol_obj::__register()
{
	hx::Object *dummy = new BitmapSymbol_obj;
	BitmapSymbol_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.symbols.BitmapSymbol","\x2a","\x85","\xe1","\x6a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BitmapSymbol_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapSymbol_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapSymbol_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapSymbol_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapSymbol_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapSymbol_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace symbols
