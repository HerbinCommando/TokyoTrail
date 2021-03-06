// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_20_new,"openfl.filters.BitmapFilter","new",0x22686a4a,"openfl.filters.BitmapFilter.new","openfl/filters/BitmapFilter.hx",20,0x1697f5a4)
HX_LOCAL_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_27_clone,"openfl.filters.BitmapFilter","clone",0x8c417bc7,"openfl.filters.BitmapFilter.clone","openfl/filters/BitmapFilter.hx",27,0x1697f5a4)
HX_LOCAL_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_32___applyFilter,"openfl.filters.BitmapFilter","__applyFilter",0xc6240310,"openfl.filters.BitmapFilter.__applyFilter","openfl/filters/BitmapFilter.hx",32,0x1697f5a4)
HX_LOCAL_STACK_FRAME(_hx_pos_f182c9f42f2f4da3_41___initShader,"openfl.filters.BitmapFilter","__initShader",0x9b1b6e4b,"openfl.filters.BitmapFilter.__initShader","openfl/filters/BitmapFilter.hx",41,0x1697f5a4)
namespace openfl{
namespace filters{

void BitmapFilter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_20_new)
HXDLIN(  20)		this->_hx___numPasses = (int)0;
            	}

Dynamic BitmapFilter_obj::__CreateEmpty() { return new BitmapFilter_obj; }

void *BitmapFilter_obj::_hx_vtable = 0;

Dynamic BitmapFilter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< BitmapFilter_obj > _hx_result = new BitmapFilter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BitmapFilter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4f68d692;
}

 ::openfl::filters::BitmapFilter BitmapFilter_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_27_clone)
HXDLIN(  27)		return  ::openfl::filters::BitmapFilter_obj::__alloc( HX_CTX );
            	}


HX_DEFINE_DYNAMIC_FUNC0(BitmapFilter_obj,clone,return )

void BitmapFilter_obj::_hx___applyFilter( ::openfl::display::BitmapData sourceBitmapData, ::openfl::display::BitmapData destBitmapData, ::openfl::geom::Rectangle sourceRect, ::openfl::geom::Point destPoint){
            	HX_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_32___applyFilter)
            	}


HX_DEFINE_DYNAMIC_FUNC4(BitmapFilter_obj,_hx___applyFilter,(void))

 ::openfl::display::Shader BitmapFilter_obj::_hx___initShader( ::openfl::_internal::renderer::RenderSession renderSession,int pass){
            	HX_STACKFRAME(&_hx_pos_f182c9f42f2f4da3_41___initShader)
HXDLIN(  41)		return renderSession->shaderManager->defaultShader;
            	}


HX_DEFINE_DYNAMIC_FUNC2(BitmapFilter_obj,_hx___initShader,return )


hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__new() {
	hx::ObjectPtr< BitmapFilter_obj > __this = new BitmapFilter_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< BitmapFilter_obj > BitmapFilter_obj::__alloc(hx::Ctx *_hx_ctx) {
	BitmapFilter_obj *__this = (BitmapFilter_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(BitmapFilter_obj), false, "openfl.filters.BitmapFilter"));
	*(void **)__this = BitmapFilter_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BitmapFilter_obj::BitmapFilter_obj()
{
}

hx::Val BitmapFilter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { return hx::Val( _hx___numPasses ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__initShader") ) { return hx::Val( _hx___initShader_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cacheObject") ) { return hx::Val( _hx___cacheObject ); }
		if (HX_FIELD_EQ(inName,"__applyFilter") ) { return hx::Val( _hx___applyFilter_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val BitmapFilter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 11:
		if (HX_FIELD_EQ(inName,"__numPasses") ) { _hx___numPasses=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__cacheObject") ) { _hx___cacheObject=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BitmapFilter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("__cacheObject","\x81","\xeb","\x58","\x7c"));
	outFields->push(HX_HCSTRING("__numPasses","\x45","\x67","\x5f","\xcd"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo BitmapFilter_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(BitmapFilter_obj,_hx___cacheObject),HX_HCSTRING("__cacheObject","\x81","\xeb","\x58","\x7c")},
	{hx::fsInt,(int)offsetof(BitmapFilter_obj,_hx___numPasses),HX_HCSTRING("__numPasses","\x45","\x67","\x5f","\xcd")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *BitmapFilter_obj_sStaticStorageInfo = 0;
#endif

static ::String BitmapFilter_obj_sMemberFields[] = {
	HX_HCSTRING("__cacheObject","\x81","\xeb","\x58","\x7c"),
	HX_HCSTRING("__numPasses","\x45","\x67","\x5f","\xcd"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("__applyFilter","\xa6","\x20","\xa8","\x09"),
	HX_HCSTRING("__initShader","\x75","\x95","\xf9","\x59"),
	::String(null()) };

static void BitmapFilter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void BitmapFilter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(BitmapFilter_obj::__mClass,"__mClass");
};

#endif

hx::Class BitmapFilter_obj::__mClass;

void BitmapFilter_obj::__register()
{
	hx::Object *dummy = new BitmapFilter_obj;
	BitmapFilter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters.BitmapFilter","\x58","\x3d","\x87","\x17");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = BitmapFilter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(BitmapFilter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< BitmapFilter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = BitmapFilter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BitmapFilter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BitmapFilter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
