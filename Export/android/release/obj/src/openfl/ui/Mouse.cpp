// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_ui_Mouse
#include <lime/ui/Mouse.h>
#endif
#ifndef INCLUDED_lime_ui_MouseCursor
#include <lime/ui/MouseCursor.h>
#endif
#ifndef INCLUDED_openfl_ui_Mouse
#include <openfl/ui/Mouse.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_22_hide,"openfl.ui.Mouse","hide",0x974c7e47,"openfl.ui.Mouse.hide","openfl/ui/Mouse.hx",22,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_29_show,"openfl.ui.Mouse","show",0x9e911e82,"openfl.ui.Mouse.show","openfl/ui/Mouse.hx",29,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_43_get_cursor,"openfl.ui.Mouse","get_cursor",0xfdb1b9e4,"openfl.ui.Mouse.get_cursor","openfl/ui/Mouse.hx",43,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_48_set_cursor,"openfl.ui.Mouse","set_cursor",0x012f5858,"openfl.ui.Mouse.set_cursor","openfl/ui/Mouse.hx",48,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_14_boot,"openfl.ui.Mouse","boot",0x9359cdb7,"openfl.ui.Mouse.boot","openfl/ui/Mouse.hx",14,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_15_boot,"openfl.ui.Mouse","boot",0x9359cdb7,"openfl.ui.Mouse.boot","openfl/ui/Mouse.hx",15,0xeac39ff5)
HX_LOCAL_STACK_FRAME(_hx_pos_9dfd1f611dbbe53a_17_boot,"openfl.ui.Mouse","boot",0x9359cdb7,"openfl.ui.Mouse.boot","openfl/ui/Mouse.hx",17,0xeac39ff5)
namespace openfl{
namespace ui{

void Mouse_obj::__construct() { }

Dynamic Mouse_obj::__CreateEmpty() { return new Mouse_obj; }

void *Mouse_obj::_hx_vtable = 0;

Dynamic Mouse_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Mouse_obj > _hx_result = new Mouse_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Mouse_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1d7c6159;
}

bool Mouse_obj::supportsCursor;

bool Mouse_obj::supportsNativeCursor;

::String Mouse_obj::_hx___cursor;

void Mouse_obj::hide(){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_22_hide)
HXDLIN(  22)		::lime::ui::Mouse_obj::hide();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,hide,(void))

void Mouse_obj::show(){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_29_show)
HXDLIN(  29)		::lime::ui::Mouse_obj::show();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,show,(void))

::String Mouse_obj::get_cursor(){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_43_get_cursor)
HXDLIN(  43)		return ::openfl::ui::Mouse_obj::_hx___cursor;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Mouse_obj,get_cursor,return )

::String Mouse_obj::set_cursor(::String value){
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_48_set_cursor)
HXLINE(  50)		::String _hx_switch_0 = value;
            		if (  (_hx_switch_0==HX_("arrow",c9,79,8f,25)) ){
HXLINE(  52)			::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::ARROW_dyn());
HXDLIN(  52)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("button",f2,61,e0,d9)) ){
HXLINE(  53)			::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::POINTER_dyn());
HXDLIN(  53)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("hand",6f,2b,08,45)) ){
HXLINE(  54)			::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::MOVE_dyn());
HXDLIN(  54)			goto _hx_goto_3;
            		}
            		if (  (_hx_switch_0==HX_("ibeam",58,ca,26,b6)) ){
HXLINE(  55)			::lime::ui::Mouse_obj::set_cursor(::lime::ui::MouseCursor_obj::TEXT_dyn());
HXDLIN(  55)			goto _hx_goto_3;
            		}
            		/* default */{
            		}
            		_hx_goto_3:;
HXLINE(  60)		return (::openfl::ui::Mouse_obj::_hx___cursor = value);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Mouse_obj,set_cursor,return )


Mouse_obj::Mouse_obj()
{
}

bool Mouse_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"hide") ) { outValue = hide_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"show") ) { outValue = show_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways) { outValue = ( get_cursor() ); return true; } }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { outValue = ( _hx___cursor ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_cursor") ) { outValue = get_cursor_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"set_cursor") ) { outValue = set_cursor_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsCursor") ) { outValue = ( supportsCursor ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsNativeCursor") ) { outValue = ( supportsNativeCursor ); return true; }
	}
	return false;
}

bool Mouse_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { if (inCallProp == hx::paccAlways)  ioValue = ( set_cursor(ioValue.Cast< ::String >()) ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__cursor") ) { _hx___cursor=ioValue.Cast< ::String >(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"supportsCursor") ) { supportsCursor=ioValue.Cast< bool >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"supportsNativeCursor") ) { supportsNativeCursor=ioValue.Cast< bool >(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *Mouse_obj_sMemberStorageInfo = 0;
static hx::StaticInfo Mouse_obj_sStaticStorageInfo[] = {
	{hx::fsBool,(void *) &Mouse_obj::supportsCursor,HX_HCSTRING("supportsCursor","\x7a","\x7f","\x2c","\xd6")},
	{hx::fsBool,(void *) &Mouse_obj::supportsNativeCursor,HX_HCSTRING("supportsNativeCursor","\x71","\x9b","\x97","\xa2")},
	{hx::fsString,(void *) &Mouse_obj::_hx___cursor,HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void Mouse_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Mouse_obj::supportsCursor,"supportsCursor");
	HX_MARK_MEMBER_NAME(Mouse_obj::supportsNativeCursor,"supportsNativeCursor");
	HX_MARK_MEMBER_NAME(Mouse_obj::_hx___cursor,"__cursor");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Mouse_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Mouse_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Mouse_obj::supportsCursor,"supportsCursor");
	HX_VISIT_MEMBER_NAME(Mouse_obj::supportsNativeCursor,"supportsNativeCursor");
	HX_VISIT_MEMBER_NAME(Mouse_obj::_hx___cursor,"__cursor");
};

#endif

hx::Class Mouse_obj::__mClass;

static ::String Mouse_obj_sStaticFields[] = {
	HX_HCSTRING("supportsCursor","\x7a","\x7f","\x2c","\xd6"),
	HX_HCSTRING("supportsNativeCursor","\x71","\x9b","\x97","\xa2"),
	HX_HCSTRING("__cursor","\xf6","\xf9","\x17","\xe7"),
	HX_HCSTRING("hide","\xc2","\x34","\x0e","\x45"),
	HX_HCSTRING("show","\xfd","\xd4","\x52","\x4c"),
	HX_HCSTRING("get_cursor","\x9f","\xfe","\x6f","\x2f"),
	HX_HCSTRING("set_cursor","\x13","\x9d","\xed","\x32"),
	::String(null())
};

void Mouse_obj::__register()
{
	hx::Object *dummy = new Mouse_obj;
	Mouse_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.ui.Mouse","\x09","\x85","\xe4","\x1f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Mouse_obj::__GetStatic;
	__mClass->mSetStaticField = &Mouse_obj::__SetStatic;
	__mClass->mMarkFunc = Mouse_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Mouse_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< Mouse_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Mouse_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Mouse_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Mouse_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Mouse_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_14_boot)
HXDLIN(  14)		supportsCursor = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_15_boot)
HXDLIN(  15)		supportsNativeCursor = false;
            	}
{
            	HX_STACKFRAME(&_hx_pos_9dfd1f611dbbe53a_17_boot)
HXDLIN(  17)		_hx___cursor = HX_("auto",6f,df,76,40);
            	}
}

} // end namespace openfl
} // end namespace ui
