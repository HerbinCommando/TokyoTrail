// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_depth24
#include <lime/graphics/opengl/ext/OES_depth24.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8d54f752c084853_9_new,"lime.graphics.opengl.ext.OES_depth24","new",0x7a2dbe93,"lime.graphics.opengl.ext.OES_depth24.new","lime/graphics/opengl/ext/OES_depth24.hx",9,0x5d6ef45f)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_depth24_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f8d54f752c084853_9_new)
HXDLIN(   9)		this->DEPTH_COMPONENT24_OES = (int)33190;
            	}

Dynamic OES_depth24_obj::__CreateEmpty() { return new OES_depth24_obj; }

void *OES_depth24_obj::_hx_vtable = 0;

Dynamic OES_depth24_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< OES_depth24_obj > _hx_result = new OES_depth24_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_depth24_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x781f9111;
}


OES_depth24_obj::OES_depth24_obj()
{
}

hx::Val OES_depth24_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { return hx::Val( DEPTH_COMPONENT24_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val OES_depth24_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 21:
		if (HX_FIELD_EQ(inName,"DEPTH_COMPONENT24_OES") ) { DEPTH_COMPONENT24_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_depth24_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("DEPTH_COMPONENT24_OES","\x01","\x7e","\x8e","\x35"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo OES_depth24_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(OES_depth24_obj,DEPTH_COMPONENT24_OES),HX_HCSTRING("DEPTH_COMPONENT24_OES","\x01","\x7e","\x8e","\x35")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *OES_depth24_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_depth24_obj_sMemberFields[] = {
	HX_HCSTRING("DEPTH_COMPONENT24_OES","\x01","\x7e","\x8e","\x35"),
	::String(null()) };

static void OES_depth24_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OES_depth24_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OES_depth24_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OES_depth24_obj::__mClass,"__mClass");
};

#endif

hx::Class OES_depth24_obj::__mClass;

void OES_depth24_obj::__register()
{
	hx::Object *dummy = new OES_depth24_obj;
	OES_depth24_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.OES_depth24","\x21","\x79","\x08","\xbb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OES_depth24_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(OES_depth24_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< OES_depth24_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OES_depth24_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_depth24_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_depth24_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
