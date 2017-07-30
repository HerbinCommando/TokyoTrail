// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_EXT_unpack_subimage
#include <lime/graphics/opengl/ext/EXT_unpack_subimage.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_379d20639afe89d4_6_new,"lime.graphics.opengl.ext.EXT_unpack_subimage","new",0xdcb8a1da,"lime.graphics.opengl.ext.EXT_unpack_subimage.new","lime/graphics/opengl/ext/EXT_unpack_subimage.hx",6,0xb36a48f8)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void EXT_unpack_subimage_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_379d20639afe89d4_6_new)
HXLINE(  11)		this->UNPACK_SKIP_PIXELS = (int)3316;
HXLINE(  10)		this->UNPACK_SKIP_ROWS = (int)3315;
HXLINE(   9)		this->UNPACK_ROW_LENGTH = (int)3314;
            	}

Dynamic EXT_unpack_subimage_obj::__CreateEmpty() { return new EXT_unpack_subimage_obj; }

void *EXT_unpack_subimage_obj::_hx_vtable = 0;

Dynamic EXT_unpack_subimage_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< EXT_unpack_subimage_obj > _hx_result = new EXT_unpack_subimage_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EXT_unpack_subimage_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x01f3d05c;
}


EXT_unpack_subimage_obj::EXT_unpack_subimage_obj()
{
}

hx::Val EXT_unpack_subimage_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_ROWS") ) { return hx::Val( UNPACK_SKIP_ROWS ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"UNPACK_ROW_LENGTH") ) { return hx::Val( UNPACK_ROW_LENGTH ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_PIXELS") ) { return hx::Val( UNPACK_SKIP_PIXELS ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val EXT_unpack_subimage_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_ROWS") ) { UNPACK_SKIP_ROWS=inValue.Cast< int >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"UNPACK_ROW_LENGTH") ) { UNPACK_ROW_LENGTH=inValue.Cast< int >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"UNPACK_SKIP_PIXELS") ) { UNPACK_SKIP_PIXELS=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void EXT_unpack_subimage_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f"));
	outFields->push(HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d"));
	outFields->push(HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo EXT_unpack_subimage_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(EXT_unpack_subimage_obj,UNPACK_ROW_LENGTH),HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f")},
	{hx::fsInt,(int)offsetof(EXT_unpack_subimage_obj,UNPACK_SKIP_ROWS),HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d")},
	{hx::fsInt,(int)offsetof(EXT_unpack_subimage_obj,UNPACK_SKIP_PIXELS),HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *EXT_unpack_subimage_obj_sStaticStorageInfo = 0;
#endif

static ::String EXT_unpack_subimage_obj_sMemberFields[] = {
	HX_HCSTRING("UNPACK_ROW_LENGTH","\x78","\x04","\xc5","\x5f"),
	HX_HCSTRING("UNPACK_SKIP_ROWS","\x0c","\xe6","\x50","\x4d"),
	HX_HCSTRING("UNPACK_SKIP_PIXELS","\xe0","\x26","\x60","\xaf"),
	::String(null()) };

static void EXT_unpack_subimage_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EXT_unpack_subimage_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EXT_unpack_subimage_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EXT_unpack_subimage_obj::__mClass,"__mClass");
};

#endif

hx::Class EXT_unpack_subimage_obj::__mClass;

void EXT_unpack_subimage_obj::__register()
{
	hx::Object *dummy = new EXT_unpack_subimage_obj;
	EXT_unpack_subimage_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.EXT_unpack_subimage","\xe8","\x6c","\x60","\x32");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EXT_unpack_subimage_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(EXT_unpack_subimage_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< EXT_unpack_subimage_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EXT_unpack_subimage_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EXT_unpack_subimage_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EXT_unpack_subimage_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
