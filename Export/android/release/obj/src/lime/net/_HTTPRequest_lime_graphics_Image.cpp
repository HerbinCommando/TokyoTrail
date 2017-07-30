// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_AbstractHTTPRequest
#include <lime/net/_HTTPRequest/AbstractHTTPRequest.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_Bytes
#include <lime/net/_HTTPRequest_Bytes.h>
#endif
#ifndef INCLUDED_lime_net__HTTPRequest_lime_graphics_Image
#include <lime/net/_HTTPRequest_lime_graphics_Image.h>
#endif
#ifndef INCLUDED_lime_net__IHTTPRequest
#include <lime/net/_IHTTPRequest.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_1569d1fc662dddbc_131_new,"lime.net._HTTPRequest_lime_graphics_Image","new",0xb2d90076,"lime.net._HTTPRequest_lime_graphics_Image.new","lime/_macros/HTTPRequestMacro.hx",131,0xa1943d76)
HX_LOCAL_STACK_FRAME(_hx_pos_31224ac778a9eff4_897_fromBytes,"lime.net._HTTPRequest_lime_graphics_Image","fromBytes",0xef825737,"lime.net._HTTPRequest_lime_graphics_Image.fromBytes","lime/graphics/Image.hx",897,0xc7b862ad)
namespace lime{
namespace net{

void _HTTPRequest_lime_graphics_Image_obj::__construct(::String uri){
            	HX_STACKFRAME(&_hx_pos_1569d1fc662dddbc_131_new)
HXDLIN( 131)		super::__construct(uri);
            	}

Dynamic _HTTPRequest_lime_graphics_Image_obj::__CreateEmpty() { return new _HTTPRequest_lime_graphics_Image_obj; }

void *_HTTPRequest_lime_graphics_Image_obj::_hx_vtable = 0;

Dynamic _HTTPRequest_lime_graphics_Image_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< _HTTPRequest_lime_graphics_Image_obj > _hx_result = new _HTTPRequest_lime_graphics_Image_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool _HTTPRequest_lime_graphics_Image_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x39a54782) {
		if (inClassId<=(int)0x041f8278) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x041f8278;
		} else {
			return inClassId==(int)0x39a54782;
		}
	} else {
		return inClassId==(int)0x618df855;
	}
}

 ::Dynamic _HTTPRequest_lime_graphics_Image_obj::fromBytes( ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_31224ac778a9eff4_897_fromBytes)
HXDLIN( 897)		return ::lime::graphics::Image_obj::fromBytes(bytes);
            	}



hx::ObjectPtr< _HTTPRequest_lime_graphics_Image_obj > _HTTPRequest_lime_graphics_Image_obj::__new(::String uri) {
	hx::ObjectPtr< _HTTPRequest_lime_graphics_Image_obj > __this = new _HTTPRequest_lime_graphics_Image_obj();
	__this->__construct(uri);
	return __this;
}

hx::ObjectPtr< _HTTPRequest_lime_graphics_Image_obj > _HTTPRequest_lime_graphics_Image_obj::__alloc(hx::Ctx *_hx_ctx,::String uri) {
	_HTTPRequest_lime_graphics_Image_obj *__this = (_HTTPRequest_lime_graphics_Image_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(_HTTPRequest_lime_graphics_Image_obj), true, "lime.net._HTTPRequest_lime_graphics_Image"));
	*(void **)__this = _HTTPRequest_lime_graphics_Image_obj::_hx_vtable;
	__this->__construct(uri);
	return __this;
}

_HTTPRequest_lime_graphics_Image_obj::_HTTPRequest_lime_graphics_Image_obj()
{
}

hx::Val _HTTPRequest_lime_graphics_Image_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { return hx::Val( fromBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *_HTTPRequest_lime_graphics_Image_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *_HTTPRequest_lime_graphics_Image_obj_sStaticStorageInfo = 0;
#endif

static ::String _HTTPRequest_lime_graphics_Image_obj_sMemberFields[] = {
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	::String(null()) };

static void _HTTPRequest_lime_graphics_Image_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(_HTTPRequest_lime_graphics_Image_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void _HTTPRequest_lime_graphics_Image_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(_HTTPRequest_lime_graphics_Image_obj::__mClass,"__mClass");
};

#endif

hx::Class _HTTPRequest_lime_graphics_Image_obj::__mClass;

void _HTTPRequest_lime_graphics_Image_obj::__register()
{
	hx::Object *dummy = new _HTTPRequest_lime_graphics_Image_obj;
	_HTTPRequest_lime_graphics_Image_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.net._HTTPRequest_lime_graphics_Image","\x84","\x4d","\x8e","\xd9");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = _HTTPRequest_lime_graphics_Image_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(_HTTPRequest_lime_graphics_Image_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< _HTTPRequest_lime_graphics_Image_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = _HTTPRequest_lime_graphics_Image_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = _HTTPRequest_lime_graphics_Image_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = _HTTPRequest_lime_graphics_Image_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace net
