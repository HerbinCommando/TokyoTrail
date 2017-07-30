// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_math_Rectangle
#include <lime/math/Rectangle.h>
#endif
#ifndef INCLUDED_lime_system_Display
#include <lime/system/Display.h>
#endif
#ifndef INCLUDED_lime_system_DisplayMode
#include <lime/system/DisplayMode.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84dc687d4538b090_43_new,"lime.system.Display","new",0x04208dce,"lime.system.Display.new","lime/system/Display.hx",43,0x4536ff82)
namespace lime{
namespace _hx_system{

void Display_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_84dc687d4538b090_43_new)
            	}

Dynamic Display_obj::__CreateEmpty() { return new Display_obj; }

void *Display_obj::_hx_vtable = 0;

Dynamic Display_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Display_obj > _hx_result = new Display_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Display_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3918111e;
}


Display_obj::Display_obj()
{
}

void Display_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Display);
	HX_MARK_MEMBER_NAME(bounds,"bounds");
	HX_MARK_MEMBER_NAME(currentMode,"currentMode");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(dpi,"dpi");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(supportedModes,"supportedModes");
	HX_MARK_END_CLASS();
}

void Display_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bounds,"bounds");
	HX_VISIT_MEMBER_NAME(currentMode,"currentMode");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(dpi,"dpi");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(supportedModes,"supportedModes");
}

hx::Val Display_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { return hx::Val( dpi ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { return hx::Val( bounds ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentMode") ) { return hx::Val( currentMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportedModes") ) { return hx::Val( supportedModes ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Display_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"dpi") ) { dpi=inValue.Cast< Float >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"bounds") ) { bounds=inValue.Cast<  ::lime::math::Rectangle >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"currentMode") ) { currentMode=inValue.Cast<  ::lime::_hx_system::DisplayMode >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportedModes") ) { supportedModes=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Display_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"));
	outFields->push(HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Display_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::math::Rectangle*/ ,(int)offsetof(Display_obj,bounds),HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66")},
	{hx::fsObject /*::lime::_hx_system::DisplayMode*/ ,(int)offsetof(Display_obj,currentMode),HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80")},
	{hx::fsInt,(int)offsetof(Display_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsFloat,(int)offsetof(Display_obj,dpi),HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00")},
	{hx::fsString,(int)offsetof(Display_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(int)offsetof(Display_obj,supportedModes),HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Display_obj_sStaticStorageInfo = 0;
#endif

static ::String Display_obj_sMemberFields[] = {
	HX_HCSTRING("bounds","\x75","\x86","\x1d","\x66"),
	HX_HCSTRING("currentMode","\x3c","\xac","\xf2","\x80"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("dpi","\x5d","\x43","\x4c","\x00"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("supportedModes","\xa2","\xa6","\xb8","\xb7"),
	::String(null()) };

static void Display_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Display_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Display_obj::__mClass,"__mClass");
};

#endif

hx::Class Display_obj::__mClass;

void Display_obj::__register()
{
	hx::Object *dummy = new Display_obj;
	Display_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.system.Display","\xdc","\x4e","\xfe","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Display_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Display_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Display_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Display_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Display_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Display_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace system
