// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl__GLFramebuffer_GLFramebuffer_Impl_
#include <lime/graphics/opengl/_GLFramebuffer/GLFramebuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_09e78a4290817425_14_fromInt,"lime.graphics.opengl._GLFramebuffer.GLFramebuffer_Impl_","fromInt",0xbb8569af,"lime.graphics.opengl._GLFramebuffer.GLFramebuffer_Impl_.fromInt","lime/graphics/opengl/GLFramebuffer.hx",14,0x2d1110cc)
namespace lime{
namespace graphics{
namespace opengl{
namespace _GLFramebuffer{

void GLFramebuffer_Impl__obj::__construct() { }

Dynamic GLFramebuffer_Impl__obj::__CreateEmpty() { return new GLFramebuffer_Impl__obj; }

void *GLFramebuffer_Impl__obj::_hx_vtable = 0;

Dynamic GLFramebuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLFramebuffer_Impl__obj > _hx_result = new GLFramebuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLFramebuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x5e3351d0;
}

 ::lime::graphics::opengl::GLObject GLFramebuffer_Impl__obj::fromInt(int id){
            	HX_STACKFRAME(&_hx_pos_09e78a4290817425_14_fromInt)
HXDLIN(  14)		return ::lime::graphics::opengl::GLObject_obj::fromInt((int)5,id);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(GLFramebuffer_Impl__obj,fromInt,return )


GLFramebuffer_Impl__obj::GLFramebuffer_Impl__obj()
{
}

bool GLFramebuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromInt") ) { outValue = fromInt_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLFramebuffer_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLFramebuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

static void GLFramebuffer_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLFramebuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLFramebuffer_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLFramebuffer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class GLFramebuffer_Impl__obj::__mClass;

static ::String GLFramebuffer_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("fromInt","\xa5","\xdd","\xfa","\x57"),
	::String(null())
};

void GLFramebuffer_Impl__obj::__register()
{
	hx::Object *dummy = new GLFramebuffer_Impl__obj;
	GLFramebuffer_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl._GLFramebuffer.GLFramebuffer_Impl_","\x78","\xd2","\x2e","\x55");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLFramebuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLFramebuffer_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLFramebuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLFramebuffer_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLFramebuffer_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLFramebuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLFramebuffer_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace _GLFramebuffer
