// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_openal__ALBuffer_ALBuffer_Impl_
#include <lime/media/openal/_ALBuffer/ALBuffer_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_954ac8746c6b351b_12__new,"lime.media.openal._ALBuffer.ALBuffer_Impl_","_new",0x1ea1d24a,"lime.media.openal._ALBuffer.ALBuffer_Impl_._new","lime/media/openal/ALBuffer.hx",12,0xb4fc5d3e)
namespace lime{
namespace media{
namespace openal{
namespace _ALBuffer{

void ALBuffer_Impl__obj::__construct() { }

Dynamic ALBuffer_Impl__obj::__CreateEmpty() { return new ALBuffer_Impl__obj; }

void *ALBuffer_Impl__obj::_hx_vtable = 0;

Dynamic ALBuffer_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ALBuffer_Impl__obj > _hx_result = new ALBuffer_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ALBuffer_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78e0f2dd;
}

 ::Dynamic ALBuffer_Impl__obj::_new( ::Dynamic handle){
            	HX_STACKFRAME(&_hx_pos_954ac8746c6b351b_12__new)
HXDLIN(  12)		 ::Dynamic this1 = handle;
HXDLIN(  12)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(ALBuffer_Impl__obj,_new,return )


ALBuffer_Impl__obj::ALBuffer_Impl__obj()
{
}

bool ALBuffer_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *ALBuffer_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *ALBuffer_Impl__obj_sStaticStorageInfo = 0;
#endif

static void ALBuffer_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ALBuffer_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ALBuffer_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ALBuffer_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class ALBuffer_Impl__obj::__mClass;

static ::String ALBuffer_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	::String(null())
};

void ALBuffer_Impl__obj::__register()
{
	hx::Object *dummy = new ALBuffer_Impl__obj;
	ALBuffer_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.openal._ALBuffer.ALBuffer_Impl_","\x25","\xcc","\x3c","\x5c");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &ALBuffer_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ALBuffer_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(ALBuffer_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< ALBuffer_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ALBuffer_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ALBuffer_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ALBuffer_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
} // end namespace openal
} // end namespace _ALBuffer
