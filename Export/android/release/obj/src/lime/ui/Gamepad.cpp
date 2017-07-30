// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_IntMap
#include <haxe/ds/IntMap.h>
#endif
#ifndef INCLUDED_lime__backend_native_NativeCFFI
#include <lime/_backend/native/NativeCFFI.h>
#endif
#ifndef INCLUDED_lime_app__Event_Void_Void
#include <lime/app/_Event_Void_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadAxis_Float_Void
#include <lime/app/_Event_lime_ui_GamepadAxis_Float_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_GamepadButton_Void
#include <lime/app/_Event_lime_ui_GamepadButton_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_lime_ui_Gamepad_Void
#include <lime/app/_Event_lime_ui_Gamepad_Void.h>
#endif
#ifndef INCLUDED_lime_ui_Gamepad
#include <lime/ui/Gamepad.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_16_new,"lime.ui.Gamepad","new",0xd780a212,"lime.ui.Gamepad.new","lime/ui/Gamepad.hx",16,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_82_get_guid,"lime.ui.Gamepad","get_guid",0x2f6ca220,"lime.ui.Gamepad.get_guid","lime/ui/Gamepad.hx",82,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_96_get_name,"lime.ui.Gamepad","get_name",0x33fdf6e2,"lime.ui.Gamepad.get_name","lime/ui/Gamepad.hx",96,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_43_addMappings,"lime.ui.Gamepad","addMappings",0x7dce3c98,"lime.ui.Gamepad.addMappings","lime/ui/Gamepad.hx",43,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_51___connect,"lime.ui.Gamepad","__connect",0x06daaffc,"lime.ui.Gamepad.__connect","lime/ui/Gamepad.hx",51,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_62___disconnect,"lime.ui.Gamepad","__disconnect",0x04d0478a,"lime.ui.Gamepad.__disconnect","lime/ui/Gamepad.hx",62,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_19_boot,"lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",19,0x36bc843e)
HX_LOCAL_STACK_FRAME(_hx_pos_b33f1f9ffbdc366b_20_boot,"lime.ui.Gamepad","boot",0xb1262e40,"lime.ui.Gamepad.boot","lime/ui/Gamepad.hx",20,0x36bc843e)
namespace lime{
namespace ui{

void Gamepad_obj::__construct(int id){
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_16_new)
HXLINE(  29)		this->onDisconnect =  ::lime::app::_Event_Void_Void_obj::__alloc( HX_CTX );
HXLINE(  28)		this->onButtonUp =  ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__alloc( HX_CTX );
HXLINE(  27)		this->onButtonDown =  ::lime::app::_Event_lime_ui_GamepadButton_Void_obj::__alloc( HX_CTX );
HXLINE(  26)		this->onAxisMove =  ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void_obj::__alloc( HX_CTX );
HXLINE(  34)		this->id = id;
HXLINE(  35)		this->connected = true;
            	}

Dynamic Gamepad_obj::__CreateEmpty() { return new Gamepad_obj; }

void *Gamepad_obj::_hx_vtable = 0;

Dynamic Gamepad_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Gamepad_obj > _hx_result = new Gamepad_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Gamepad_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1b592030;
}

::String Gamepad_obj::get_guid(){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_82_get_guid)
HXDLIN(  82)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_guid(this->id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_guid,return )

::String Gamepad_obj::get_name(){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_96_get_name)
HXDLIN(  96)		return ( ( ::Dynamic)(::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_get_device_name(this->id)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Gamepad_obj,get_name,return )

 ::haxe::ds::IntMap Gamepad_obj::devices;

 ::lime::app::_Event_lime_ui_Gamepad_Void Gamepad_obj::onConnect;

void Gamepad_obj::addMappings(::Array< ::String > mappings){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_43_addMappings)
HXDLIN(  43)		::lime::_backend::native::NativeCFFI_obj::cffi_lime_gamepad_add_mappings(hx::DynamicPtr(mappings));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,addMappings,(void))

void Gamepad_obj::_hx___connect(int id){
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_51___connect)
HXDLIN(  51)		if (!(::lime::ui::Gamepad_obj::devices->exists(id))) {
HXLINE(  53)			 ::lime::ui::Gamepad gamepad =  ::lime::ui::Gamepad_obj::__alloc( HX_CTX ,id);
HXLINE(  54)			::lime::ui::Gamepad_obj::devices->set(id,gamepad);
HXLINE(  55)			::lime::ui::Gamepad_obj::onConnect->dispatch(gamepad);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,_hx___connect,(void))

void Gamepad_obj::_hx___disconnect(int id){
            	HX_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_62___disconnect)
HXLINE(  64)		 ::lime::ui::Gamepad gamepad = ::lime::ui::Gamepad_obj::devices->get(id).StaticCast<  ::lime::ui::Gamepad >();
HXLINE(  65)		if (hx::IsNotNull( gamepad )) {
HXLINE(  65)			gamepad->connected = false;
            		}
HXLINE(  66)		::lime::ui::Gamepad_obj::devices->remove(id);
HXLINE(  67)		if (hx::IsNotNull( gamepad )) {
HXLINE(  67)			gamepad->onDisconnect->dispatch();
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Gamepad_obj,_hx___disconnect,(void))


hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__new(int id) {
	hx::ObjectPtr< Gamepad_obj > __this = new Gamepad_obj();
	__this->__construct(id);
	return __this;
}

hx::ObjectPtr< Gamepad_obj > Gamepad_obj::__alloc(hx::Ctx *_hx_ctx,int id) {
	Gamepad_obj *__this = (Gamepad_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Gamepad_obj), true, "lime.ui.Gamepad"));
	*(void **)__this = Gamepad_obj::_hx_vtable;
	__this->__construct(id);
	return __this;
}

Gamepad_obj::Gamepad_obj()
{
}

void Gamepad_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Gamepad);
	HX_MARK_MEMBER_NAME(connected,"connected");
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_MARK_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_MARK_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_MARK_MEMBER_NAME(onDisconnect,"onDisconnect");
	HX_MARK_END_CLASS();
}

void Gamepad_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(connected,"connected");
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(onAxisMove,"onAxisMove");
	HX_VISIT_MEMBER_NAME(onButtonDown,"onButtonDown");
	HX_VISIT_MEMBER_NAME(onButtonUp,"onButtonUp");
	HX_VISIT_MEMBER_NAME(onDisconnect,"onDisconnect");
}

hx::Val Gamepad_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"guid") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_guid() ); }
		if (HX_FIELD_EQ(inName,"name") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_name() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"get_guid") ) { return hx::Val( get_guid_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_name") ) { return hx::Val( get_name_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { return hx::Val( connected ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { return hx::Val( onAxisMove ); }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { return hx::Val( onButtonUp ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { return hx::Val( onButtonDown ); }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { return hx::Val( onDisconnect ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Gamepad_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { outValue = ( devices ); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { outValue = ( onConnect ); return true; }
		if (HX_FIELD_EQ(inName,"__connect") ) { outValue = _hx___connect_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addMappings") ) { outValue = addMappings_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__disconnect") ) { outValue = _hx___disconnect_dyn(); return true; }
	}
	return false;
}

hx::Val Gamepad_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"connected") ) { connected=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"onAxisMove") ) { onAxisMove=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadAxis_Float_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onButtonUp") ) { onButtonUp=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onButtonDown") ) { onButtonDown=inValue.Cast<  ::lime::app::_Event_lime_ui_GamepadButton_Void >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDisconnect") ) { onDisconnect=inValue.Cast<  ::lime::app::_Event_Void_Void >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Gamepad_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"devices") ) { devices=ioValue.Cast<  ::haxe::ds::IntMap >(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"onConnect") ) { onConnect=ioValue.Cast<  ::lime::app::_Event_lime_ui_Gamepad_Void >(); return true; }
	}
	return false;
}

void Gamepad_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"));
	outFields->push(HX_HCSTRING("guid","\x89","\x1d","\x6e","\x44"));
	outFields->push(HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"));
	outFields->push(HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"));
	outFields->push(HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"));
	outFields->push(HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Gamepad_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(Gamepad_obj,connected),HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2")},
	{hx::fsInt,(int)offsetof(Gamepad_obj,id),HX_HCSTRING("id","\xdb","\x5b","\x00","\x00")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadAxis_Float_Void*/ ,(int)offsetof(Gamepad_obj,onAxisMove),HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonDown),HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_GamepadButton_Void*/ ,(int)offsetof(Gamepad_obj,onButtonUp),HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39")},
	{hx::fsObject /*::lime::app::_Event_Void_Void*/ ,(int)offsetof(Gamepad_obj,onDisconnect),HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Gamepad_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*::haxe::ds::IntMap*/ ,(void *) &Gamepad_obj::devices,HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7")},
	{hx::fsObject /*::lime::app::_Event_lime_ui_Gamepad_Void*/ ,(void *) &Gamepad_obj::onConnect,HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Gamepad_obj_sMemberFields[] = {
	HX_HCSTRING("connected","\xc9","\xe2","\xf6","\xa2"),
	HX_HCSTRING("id","\xdb","\x5b","\x00","\x00"),
	HX_HCSTRING("onAxisMove","\x91","\x64","\xab","\x6d"),
	HX_HCSTRING("onButtonDown","\x73","\x09","\xa8","\x84"),
	HX_HCSTRING("onButtonUp","\x2c","\x61","\xe9","\x39"),
	HX_HCSTRING("onDisconnect","\x5b","\x06","\x88","\x41"),
	HX_HCSTRING("get_guid","\x12","\xd9","\x28","\xc4"),
	HX_HCSTRING("get_name","\xd4","\x2d","\xba","\xc8"),
	::String(null()) };

static void Gamepad_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_MARK_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Gamepad_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Gamepad_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::devices,"devices");
	HX_VISIT_MEMBER_NAME(Gamepad_obj::onConnect,"onConnect");
};

#endif

hx::Class Gamepad_obj::__mClass;

static ::String Gamepad_obj_sStaticFields[] = {
	HX_HCSTRING("devices","\x1d","\x27","\x69","\xd7"),
	HX_HCSTRING("onConnect","\x8b","\xf4","\x2a","\xed"),
	HX_HCSTRING("addMappings","\xe6","\x68","\x0d","\xd8"),
	HX_HCSTRING("__connect","\xca","\x8c","\xce","\x96"),
	HX_HCSTRING("__disconnect","\x7c","\xdf","\xd7","\xa1"),
	::String(null())
};

void Gamepad_obj::__register()
{
	hx::Object *dummy = new Gamepad_obj;
	Gamepad_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.ui.Gamepad","\x20","\xf1","\xa5","\x83");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Gamepad_obj::__GetStatic;
	__mClass->mSetStaticField = &Gamepad_obj::__SetStatic;
	__mClass->mMarkFunc = Gamepad_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Gamepad_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Gamepad_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Gamepad_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Gamepad_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Gamepad_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Gamepad_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Gamepad_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_19_boot)
HXDLIN(  19)		devices =  ::haxe::ds::IntMap_obj::__alloc( HX_CTX );
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_b33f1f9ffbdc366b_20_boot)
HXDLIN(  20)		onConnect =  ::lime::app::_Event_lime_ui_Gamepad_Void_obj::__alloc( HX_CTX );
            	}
}

} // end namespace lime
} // end namespace ui
