// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_sRGB
#include <lime/graphics/opengl/ext/EXT_sRGB.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_36f3917dca2bced0_10_new,"lime.graphics.opengl.ext.EXT_sRGB","new",0x9abd0eac,"lime.graphics.opengl.ext.EXT_sRGB.new","lime/graphics/opengl/ext/EXT_sRGB.hx",10,0x7d9f60e2)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_sRGB_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_36f3917dca2bced0_10_new)
HXLINE(  16)		this->FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT = (int)33296;
HXLINE(  15)		this->SRGB8_ALPHA8_EXT = (int)35907;
HXLINE(  14)		this->SRGB_ALPHA_EXT = (int)35906;
HXLINE(  13)		this->SRGB_EXT = (int)35904;
            	}

Dynamic EXT_sRGB_obj::__CreateEmpty() { return new EXT_sRGB_obj; }

void *EXT_sRGB_obj::_hx_vtable = 0;

Dynamic EXT_sRGB_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EXT_sRGB_obj > _hx_result = new EXT_sRGB_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_sRGB_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x55831fe6;
}


EXT_sRGB_obj::EXT_sRGB_obj()
{
}

hx::Val EXT_sRGB_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"SRGB_EXT") ) { return hx::Val( SRGB_EXT ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SRGB_ALPHA_EXT") ) { return hx::Val( SRGB_ALPHA_EXT ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SRGB8_ALPHA8_EXT") ) { return hx::Val( SRGB8_ALPHA8_EXT ); }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT") ) { return hx::Val( FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EXT_sRGB_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"SRGB_EXT") ) { SRGB_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"SRGB_ALPHA_EXT") ) { SRGB_ALPHA_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"SRGB8_ALPHA8_EXT") ) { SRGB8_ALPHA8_EXT=inValue.Cast< int >(); return inValue; }
		break;
	case 41:
		if (HX_FIELD_EQ(inName,"FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT") ) { FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_sRGB_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("SRGB_EXT","\xfc","\xde","\x03","\x80"));
	outFields->push(HX_HCSTRING("SRGB_ALPHA_EXT","\x7b","\x08","\xa4","\x45"));
	outFields->push(HX_HCSTRING("SRGB8_ALPHA8_EXT","\x1d","\x4d","\x56","\xfa"));
	outFields->push(HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT","\x7b","\x67","\x32","\x0b"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EXT_sRGB_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,SRGB_EXT),HX_HCSTRING("SRGB_EXT","\xfc","\xde","\x03","\x80")},
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,SRGB_ALPHA_EXT),HX_HCSTRING("SRGB_ALPHA_EXT","\x7b","\x08","\xa4","\x45")},
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,SRGB8_ALPHA8_EXT),HX_HCSTRING("SRGB8_ALPHA8_EXT","\x1d","\x4d","\x56","\xfa")},
	{hx::fsInt,(int)offsetof(EXT_sRGB_obj,FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT),HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT","\x7b","\x67","\x32","\x0b")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EXT_sRGB_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_sRGB_obj_sMemberFields[] = {
	HX_HCSTRING("SRGB_EXT","\xfc","\xde","\x03","\x80"),
	HX_HCSTRING("SRGB_ALPHA_EXT","\x7b","\x08","\xa4","\x45"),
	HX_HCSTRING("SRGB8_ALPHA8_EXT","\x1d","\x4d","\x56","\xfa"),
	HX_HCSTRING("FRAMEBUFFER_ATTACHMENT_COLOR_ENCODING_EXT","\x7b","\x67","\x32","\x0b"),
	::String(null()) };

static void EXT_sRGB_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_sRGB_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EXT_sRGB_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_sRGB_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_sRGB_obj::__mClass;

void EXT_sRGB_obj::__register()
{
	hx::Object *dummy = new EXT_sRGB_obj;
	EXT_sRGB_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_sRGB","\xba","\x88","\x15","\xb6");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EXT_sRGB_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EXT_sRGB_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_sRGB_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EXT_sRGB_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_sRGB_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_sRGB_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
