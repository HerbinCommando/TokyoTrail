// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED___ASSET__manifest_default_json
#include <__ASSET__manifest_default_json.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_c40c0e7060208d7e_70_new,"__ASSET__manifest_default_json","new",0x8da5bf98,"__ASSET__manifest_default_json.new","lime/_macros/AssetsMacro.hx",70,0xfe246b98)
HX_LOCAL_STACK_FRAME(_hx_pos_69f84af25da97435_1_boot,"__ASSET__manifest_default_json","boot",0x5b7ae5fa,"__ASSET__manifest_default_json.boot","?",1,0x0000003f)

void __ASSET__manifest_default_json_obj::__construct( ::Dynamic length,::Array< unsigned char > bytesData){
            	HX_STACKFRAME(&_hx_pos_c40c0e7060208d7e_70_new)
HXLINE(  75)		 ::haxe::io::Bytes bytes = ::haxe::Resource_obj::getBytes(::__ASSET__manifest_default_json_obj::resourceName);
HXLINE(  79)		super::__construct(bytes->length,bytes->b);
            	}

Dynamic __ASSET__manifest_default_json_obj::__CreateEmpty() { return new __ASSET__manifest_default_json_obj; }

void *__ASSET__manifest_default_json_obj::_hx_vtable = 0;

Dynamic __ASSET__manifest_default_json_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< __ASSET__manifest_default_json_obj > _hx_result = new __ASSET__manifest_default_json_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool __ASSET__manifest_default_json_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x5b931193) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x5b931193;
	} else {
		return inClassId==(int)0x784053a6;
	}
}

::String __ASSET__manifest_default_json_obj::resourceName;


hx::ObjectPtr< __ASSET__manifest_default_json_obj > __ASSET__manifest_default_json_obj::__new( ::Dynamic length,::Array< unsigned char > bytesData) {
	hx::ObjectPtr< __ASSET__manifest_default_json_obj > __this = new __ASSET__manifest_default_json_obj();
	__this->__construct(length,bytesData);
	return __this;
}

hx::ObjectPtr< __ASSET__manifest_default_json_obj > __ASSET__manifest_default_json_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic length,::Array< unsigned char > bytesData) {
	__ASSET__manifest_default_json_obj *__this = (__ASSET__manifest_default_json_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__manifest_default_json_obj), true, "__ASSET__manifest_default_json"));
	*(void **)__this = __ASSET__manifest_default_json_obj::_hx_vtable;
	__this->__construct(length,bytesData);
	return __this;
}

__ASSET__manifest_default_json_obj::__ASSET__manifest_default_json_obj()
{
}

bool __ASSET__manifest_default_json_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool __ASSET__manifest_default_json_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *__ASSET__manifest_default_json_obj_sMemberStorageInfo = 0;
static hx::StaticInfo __ASSET__manifest_default_json_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &__ASSET__manifest_default_json_obj::resourceName,HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void __ASSET__manifest_default_json_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__manifest_default_json_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__manifest_default_json_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__manifest_default_json_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__manifest_default_json_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__manifest_default_json_obj::resourceName,"resourceName");
};

#endif

hx::Class __ASSET__manifest_default_json_obj::__mClass;

static ::String __ASSET__manifest_default_json_obj_sStaticFields[] = {
	HX_HCSTRING("resourceName","\x39","\x7a","\x62","\x90"),
	::String(null())
};

void __ASSET__manifest_default_json_obj::__register()
{
	hx::Object *dummy = new __ASSET__manifest_default_json_obj;
	__ASSET__manifest_default_json_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("__ASSET__manifest_default_json","\xa6","\x53","\x40","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__manifest_default_json_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__manifest_default_json_obj::__SetStatic;
	__mClass->mMarkFunc = __ASSET__manifest_default_json_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(__ASSET__manifest_default_json_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< __ASSET__manifest_default_json_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__manifest_default_json_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__manifest_default_json_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__manifest_default_json_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void __ASSET__manifest_default_json_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_69f84af25da97435_1_boot)
HXDLIN(   1)		resourceName = HX_("__ASSET__:file___ASSET__manifest_default_json",1f,29,36,ad);
            	}
}

