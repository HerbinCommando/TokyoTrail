// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native__NativeApplication_ClipboardEventInfo
#include <lime/_backend/native/_NativeApplication/ClipboardEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e537199fee37e312_768_new,"lime._backend.native._NativeApplication.ClipboardEventInfo","new",0x1badfa21,"lime._backend.native._NativeApplication.ClipboardEventInfo.new","lime/_backend/native/NativeApplication.hx",768,0xb13849fd)
HX_LOCAL_STACK_FRAME(_hx_pos_e537199fee37e312_775_clone,"lime._backend.native._NativeApplication.ClipboardEventInfo","clone",0x8debef5e,"lime._backend.native._NativeApplication.ClipboardEventInfo.clone","lime/_backend/native/NativeApplication.hx",775,0xb13849fd)
namespace lime{
namespace _backend{
namespace native{
namespace _NativeApplication{

void ClipboardEventInfo_obj::__construct( ::Dynamic type){
            	HX_STACKFRAME(&_hx_pos_e537199fee37e312_768_new)
HXDLIN( 768)		this->type = type;
            	}

Dynamic ClipboardEventInfo_obj::__CreateEmpty() { return new ClipboardEventInfo_obj; }

void *ClipboardEventInfo_obj::_hx_vtable = 0;

Dynamic ClipboardEventInfo_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ClipboardEventInfo_obj > _hx_result = new ClipboardEventInfo_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ClipboardEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4ed36a2d;
}

 ::lime::_backend::native::_NativeApplication::ClipboardEventInfo ClipboardEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_e537199fee37e312_775_clone)
HXDLIN( 775)		return  ::lime::_backend::native::_NativeApplication::ClipboardEventInfo_obj::__alloc( HX_CTX ,this->type);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ClipboardEventInfo_obj,clone,return )


ClipboardEventInfo_obj::ClipboardEventInfo_obj()
{
}

hx::Val ClipboardEventInfo_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ClipboardEventInfo_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ClipboardEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ClipboardEventInfo_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ClipboardEventInfo_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ClipboardEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String ClipboardEventInfo_obj_sMemberFields[] = {
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	::String(null()) };

static void ClipboardEventInfo_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ClipboardEventInfo_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ClipboardEventInfo_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ClipboardEventInfo_obj::__mClass,"__mClass");
};

#endif

hx::Class ClipboardEventInfo_obj::__mClass;

void ClipboardEventInfo_obj::__register()
{
	hx::Object *dummy = new ClipboardEventInfo_obj;
	ClipboardEventInfo_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime._backend.native._NativeApplication.ClipboardEventInfo","\xaf","\x55","\x84","\x98");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ClipboardEventInfo_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ClipboardEventInfo_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ClipboardEventInfo_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ClipboardEventInfo_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ClipboardEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ClipboardEventInfo_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _backend
} // end namespace native
} // end namespace _NativeApplication
