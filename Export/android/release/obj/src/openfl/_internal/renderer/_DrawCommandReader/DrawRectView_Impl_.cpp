// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandReader
#include <openfl/_internal/renderer/DrawCommandReader.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer__DrawCommandReader_DrawRectView_Impl_
#include <openfl/_internal/renderer/_DrawCommandReader/DrawRectView_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e6795655338a3c2e_313__new,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_","_new",0x5ddfb9ba,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_._new","openfl/_internal/renderer/DrawCommandReader.hx",313,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_e6795655338a3c2e_314_get_x,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_","get_x",0x5b2fced6,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_.get_x","openfl/_internal/renderer/DrawCommandReader.hx",314,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_e6795655338a3c2e_315_get_y,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_","get_y",0x5b2fced7,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_.get_y","openfl/_internal/renderer/DrawCommandReader.hx",315,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_e6795655338a3c2e_316_get_width,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_","get_width",0x943c0b64,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_.get_width","openfl/_internal/renderer/DrawCommandReader.hx",316,0xbbdbd1ae)
HX_LOCAL_STACK_FRAME(_hx_pos_e6795655338a3c2e_317_get_height,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_","get_height",0xd69d64c9,"openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_.get_height","openfl/_internal/renderer/DrawCommandReader.hx",317,0xbbdbd1ae)
namespace openfl{
namespace _internal{
namespace renderer{
namespace _DrawCommandReader{

void DrawRectView_Impl__obj::__construct() { }

Dynamic DrawRectView_Impl__obj::__CreateEmpty() { return new DrawRectView_Impl__obj; }

void *DrawRectView_Impl__obj::_hx_vtable = 0;

Dynamic DrawRectView_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DrawRectView_Impl__obj > _hx_result = new DrawRectView_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DrawRectView_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x18bd0687;
}

 ::openfl::_internal::renderer::DrawCommandReader DrawRectView_Impl__obj::_new( ::openfl::_internal::renderer::DrawCommandReader d){
            	HX_STACKFRAME(&_hx_pos_e6795655338a3c2e_313__new)
HXDLIN( 313)		 ::openfl::_internal::renderer::DrawCommandReader this1 = d;
HXDLIN( 313)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,_new,return )

Float DrawRectView_Impl__obj::get_x( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_e6795655338a3c2e_314_get_x)
HXDLIN( 314)		return this1->buffer->f->__get(this1->fPos);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_x,return )

Float DrawRectView_Impl__obj::get_y( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_e6795655338a3c2e_315_get_y)
HXDLIN( 315)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 315)		return this2->__get((this1->fPos + (int)1));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_y,return )

Float DrawRectView_Impl__obj::get_width( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_e6795655338a3c2e_316_get_width)
HXDLIN( 316)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 316)		return this2->__get((this1->fPos + (int)2));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_width,return )

Float DrawRectView_Impl__obj::get_height( ::openfl::_internal::renderer::DrawCommandReader this1){
            	HX_STACKFRAME(&_hx_pos_e6795655338a3c2e_317_get_height)
HXDLIN( 317)		::Array< Float > this2 = this1->buffer->f;
HXDLIN( 317)		return this2->__get((this1->fPos + (int)3));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(DrawRectView_Impl__obj,get_height,return )


DrawRectView_Impl__obj::DrawRectView_Impl__obj()
{
}

bool DrawRectView_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"_new") ) { outValue = _new_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_x") ) { outValue = get_x_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_y") ) { outValue = get_y_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { outValue = get_width_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { outValue = get_height_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *DrawRectView_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *DrawRectView_Impl__obj_sStaticStorageInfo = 0;
#endif

static void DrawRectView_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DrawRectView_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DrawRectView_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DrawRectView_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class DrawRectView_Impl__obj::__mClass;

static ::String DrawRectView_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("_new","\x61","\x15","\x1f","\x3f"),
	HX_HCSTRING("get_x","\x4f","\xa5","\x60","\x91"),
	HX_HCSTRING("get_y","\x50","\xa5","\x60","\x91"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	::String(null())
};

void DrawRectView_Impl__obj::__register()
{
	hx::Object *dummy = new DrawRectView_Impl__obj;
	DrawRectView_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer._DrawCommandReader.DrawRectView_Impl_","\xb5","\x1a","\xa8","\x62");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DrawRectView_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DrawRectView_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DrawRectView_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< DrawRectView_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DrawRectView_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DrawRectView_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DrawRectView_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace _DrawCommandReader
