// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_cb23a2f94d762c95_15_new,"openfl._internal.renderer.AbstractBlendModeManager","new",0x10154be8,"openfl._internal.renderer.AbstractBlendModeManager.new","openfl/_internal/renderer/AbstractBlendModeManager.hx",15,0x14ce0069)
HX_LOCAL_STACK_FRAME(_hx_pos_cb23a2f94d762c95_22_setBlendMode,"openfl._internal.renderer.AbstractBlendModeManager","setBlendMode",0x8fce77ca,"openfl._internal.renderer.AbstractBlendModeManager.setBlendMode","openfl/_internal/renderer/AbstractBlendModeManager.hx",22,0x14ce0069)
namespace openfl{
namespace _internal{
namespace renderer{

void AbstractBlendModeManager_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_cb23a2f94d762c95_15_new)
            	}

Dynamic AbstractBlendModeManager_obj::__CreateEmpty() { return new AbstractBlendModeManager_obj; }

void *AbstractBlendModeManager_obj::_hx_vtable = 0;

Dynamic AbstractBlendModeManager_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< AbstractBlendModeManager_obj > _hx_result = new AbstractBlendModeManager_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AbstractBlendModeManager_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0310e86a;
}

void AbstractBlendModeManager_obj::setBlendMode( ::Dynamic blendMode){
            	HX_STACKFRAME(&_hx_pos_cb23a2f94d762c95_22_setBlendMode)
            	}


HX_DEFINE_DYNAMIC_FUNC1(AbstractBlendModeManager_obj,setBlendMode,(void))


AbstractBlendModeManager_obj::AbstractBlendModeManager_obj()
{
}

hx::Val AbstractBlendModeManager_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"setBlendMode") ) { return hx::Val( setBlendMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *AbstractBlendModeManager_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *AbstractBlendModeManager_obj_sStaticStorageInfo = 0;
#endif

static ::String AbstractBlendModeManager_obj_sMemberFields[] = {
	HX_HCSTRING("setBlendMode","\x52","\xa4","\x87","\x30"),
	::String(null()) };

static void AbstractBlendModeManager_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AbstractBlendModeManager_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AbstractBlendModeManager_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AbstractBlendModeManager_obj::__mClass,"__mClass");
};

#endif

hx::Class AbstractBlendModeManager_obj::__mClass;

void AbstractBlendModeManager_obj::__register()
{
	hx::Object *dummy = new AbstractBlendModeManager_obj;
	AbstractBlendModeManager_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.AbstractBlendModeManager","\xf6","\x77","\x3f","\x12");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AbstractBlendModeManager_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(AbstractBlendModeManager_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< AbstractBlendModeManager_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AbstractBlendModeManager_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AbstractBlendModeManager_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AbstractBlendModeManager_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
