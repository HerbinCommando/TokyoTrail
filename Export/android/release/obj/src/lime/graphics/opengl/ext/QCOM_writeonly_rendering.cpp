// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_QCOM_writeonly_rendering
#include <lime/graphics/opengl/ext/QCOM_writeonly_rendering.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e1536ec9c60761cf_9_new,"lime.graphics.opengl.ext.QCOM_writeonly_rendering","new",0x32a4831d,"lime.graphics.opengl.ext.QCOM_writeonly_rendering.new","lime/graphics/opengl/ext/QCOM_writeonly_rendering.hx",9,0x4b8fa191)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void QCOM_writeonly_rendering_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e1536ec9c60761cf_9_new)
HXDLIN(   9)		this->WRITEONLY_RENDERING_QCOM = (int)34851;
            	}

Dynamic QCOM_writeonly_rendering_obj::__CreateEmpty() { return new QCOM_writeonly_rendering_obj; }

void *QCOM_writeonly_rendering_obj::_hx_vtable = 0;

Dynamic QCOM_writeonly_rendering_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< QCOM_writeonly_rendering_obj > _hx_result = new QCOM_writeonly_rendering_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool QCOM_writeonly_rendering_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0c5062bb;
}


QCOM_writeonly_rendering_obj::QCOM_writeonly_rendering_obj()
{
}

hx::Val QCOM_writeonly_rendering_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"WRITEONLY_RENDERING_QCOM") ) { return hx::Val( WRITEONLY_RENDERING_QCOM ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val QCOM_writeonly_rendering_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"WRITEONLY_RENDERING_QCOM") ) { WRITEONLY_RENDERING_QCOM=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void QCOM_writeonly_rendering_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("WRITEONLY_RENDERING_QCOM","\xf7","\xd8","\xe8","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo QCOM_writeonly_rendering_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(QCOM_writeonly_rendering_obj,WRITEONLY_RENDERING_QCOM),HX_HCSTRING("WRITEONLY_RENDERING_QCOM","\xf7","\xd8","\xe8","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *QCOM_writeonly_rendering_obj_sStaticStorageInfo = 0;
#endif

static ::String QCOM_writeonly_rendering_obj_sMemberFields[] = {
	HX_HCSTRING("WRITEONLY_RENDERING_QCOM","\xf7","\xd8","\xe8","\xa3"),
	::String(null()) };

static void QCOM_writeonly_rendering_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(QCOM_writeonly_rendering_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void QCOM_writeonly_rendering_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(QCOM_writeonly_rendering_obj::__mClass,"__mClass");
};

#endif

hx::Class QCOM_writeonly_rendering_obj::__mClass;

void QCOM_writeonly_rendering_obj::__register()
{
	hx::Object *dummy = new QCOM_writeonly_rendering_obj;
	QCOM_writeonly_rendering_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.QCOM_writeonly_rendering","\xab","\xb0","\xcb","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = QCOM_writeonly_rendering_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(QCOM_writeonly_rendering_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< QCOM_writeonly_rendering_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = QCOM_writeonly_rendering_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = QCOM_writeonly_rendering_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = QCOM_writeonly_rendering_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
