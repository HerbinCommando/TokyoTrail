// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_ShaderParameter
#include <openfl/display/ShaderParameter.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7714f6598ef03af2_23_new,"openfl.display.ShaderParameter","new",0x4699528c,"openfl.display.ShaderParameter.new","openfl/display/ShaderParameter.hx",23,0xc89f13e6)
namespace openfl{
namespace display{

void ShaderParameter_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7714f6598ef03af2_23_new)
HXDLIN(  23)		this->index = (int)0;
            	}

Dynamic ShaderParameter_obj::__CreateEmpty() { return new ShaderParameter_obj; }

void *ShaderParameter_obj::_hx_vtable = 0;

Dynamic ShaderParameter_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ShaderParameter_obj > _hx_result = new ShaderParameter_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ShaderParameter_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4a93ecb2;
}


ShaderParameter_obj::ShaderParameter_obj()
{
}

void ShaderParameter_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ShaderParameter);
	HX_MARK_MEMBER_NAME(index,"index");
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_END_CLASS();
}

void ShaderParameter_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(index,"index");
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(value,"value");
}

hx::Val ShaderParameter_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ShaderParameter_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ShaderParameter_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ShaderParameter_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderParameter_obj,index),HX_HCSTRING("index","\x12","\x9b","\x14","\xbe")},
	{hx::fsString,(int)offsetof(ShaderParameter_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ShaderParameter_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(ShaderParameter_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ShaderParameter_obj_sStaticStorageInfo = 0;
#endif

static ::String ShaderParameter_obj_sMemberFields[] = {
	HX_HCSTRING("index","\x12","\x9b","\x14","\xbe"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	::String(null()) };

static void ShaderParameter_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ShaderParameter_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ShaderParameter_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ShaderParameter_obj::__mClass,"__mClass");
};

#endif

hx::Class ShaderParameter_obj::__mClass;

void ShaderParameter_obj::__register()
{
	hx::Object *dummy = new ShaderParameter_obj;
	ShaderParameter_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.ShaderParameter","\x9a","\x5c","\xca","\xf1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ShaderParameter_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ShaderParameter_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ShaderParameter_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ShaderParameter_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ShaderParameter_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ShaderParameter_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
