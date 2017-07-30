// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_DestRegister
#include <openfl/_internal/stage3D/_AGALConverter/DestRegister.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_e7e94d427cda442e_518_new,"openfl._internal.stage3D._AGALConverter.DestRegister","new",0x9e816f26,"openfl._internal.stage3D._AGALConverter.DestRegister.new","openfl/_internal/stage3D/AGALConverter.hx",518,0x0a35cc61)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e94d427cda442e_525_getWriteMask,"openfl._internal.stage3D._AGALConverter.DestRegister","getWriteMask",0xc4282a6f,"openfl._internal.stage3D._AGALConverter.DestRegister.getWriteMask","openfl/_internal/stage3D/AGALConverter.hx",525,0x0a35cc61)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e94d427cda442e_549_toGLSL,"openfl._internal.stage3D._AGALConverter.DestRegister","toGLSL",0x2891b9f3,"openfl._internal.stage3D._AGALConverter.DestRegister.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",549,0x0a35cc61)
HX_LOCAL_STACK_FRAME(_hx_pos_e7e94d427cda442e_537_parse,"openfl._internal.stage3D._AGALConverter.DestRegister","parse",0x793cec79,"openfl._internal.stage3D._AGALConverter.DestRegister.parse","openfl/_internal/stage3D/AGALConverter.hx",537,0x0a35cc61)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

void DestRegister_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_e7e94d427cda442e_518_new)
            	}

Dynamic DestRegister_obj::__CreateEmpty() { return new DestRegister_obj; }

void *DestRegister_obj::_hx_vtable = 0;

Dynamic DestRegister_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< DestRegister_obj > _hx_result = new DestRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool DestRegister_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cd811f8;
}

::String DestRegister_obj::getWriteMask(){
            	HX_STACKFRAME(&_hx_pos_e7e94d427cda442e_525_getWriteMask)
HXLINE( 527)		::String str = HX_(".",2e,00,00,00);
HXLINE( 528)		if ((((int)this->mask & (int)(int)1) != (int)0)) {
HXLINE( 528)			str = (str + HX_("x",78,00,00,00));
            		}
HXLINE( 529)		if ((((int)this->mask & (int)(int)2) != (int)0)) {
HXLINE( 529)			str = (str + HX_("y",79,00,00,00));
            		}
HXLINE( 530)		if ((((int)this->mask & (int)(int)4) != (int)0)) {
HXLINE( 530)			str = (str + HX_("z",7a,00,00,00));
            		}
HXLINE( 531)		if ((((int)this->mask & (int)(int)8) != (int)0)) {
HXLINE( 531)			str = (str + HX_("w",77,00,00,00));
            		}
HXLINE( 532)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC0(DestRegister_obj,getWriteMask,return )

::String DestRegister_obj::toGLSL(hx::Null< bool >  __o_useMask){
bool useMask = __o_useMask.Default(true);
            	HX_STACKFRAME(&_hx_pos_e7e94d427cda442e_549_toGLSL)
HXLINE( 551)		::String str;
HXLINE( 553)		if ((this->type == (int)3)) {
HXLINE( 555)			if (hx::IsEq( this->programType,::openfl::_internal::stage3D::_AGALConverter::ProgramType_obj::VERTEX_dyn() )) {
HXLINE( 555)				str = HX_("gl_Position",63,0d,2a,e5);
            			}
            			else {
HXLINE( 555)				str = HX_("gl_FragColor",d7,68,e4,21);
            			}
            		}
            		else {
HXLINE( 559)			::String str1 = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(this->type,this->programType);
HXDLIN( 559)			str = (str1 + this->n);
            		}
HXLINE( 563)		bool _hx_tmp;
HXDLIN( 563)		if (useMask) {
HXLINE( 563)			_hx_tmp = (this->mask != (int)15);
            		}
            		else {
HXLINE( 563)			_hx_tmp = false;
            		}
HXDLIN( 563)		if (_hx_tmp) {
HXLINE( 565)			str = (str + this->getWriteMask());
            		}
HXLINE( 569)		return str;
            	}


HX_DEFINE_DYNAMIC_FUNC1(DestRegister_obj,toGLSL,return )

 ::openfl::_internal::stage3D::_AGALConverter::DestRegister DestRegister_obj::parse(int v, ::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
            	HX_GC_STACKFRAME(&_hx_pos_e7e94d427cda442e_537_parse)
HXLINE( 539)		 ::openfl::_internal::stage3D::_AGALConverter::DestRegister dr =  ::openfl::_internal::stage3D::_AGALConverter::DestRegister_obj::__alloc( HX_CTX );
HXLINE( 540)		dr->programType = programType;
HXLINE( 541)		dr->type = ((int)hx::UShr(v,(int)24) & (int)(int)15);
HXLINE( 542)		dr->mask = ((int)hx::UShr(v,(int)16) & (int)(int)15);
HXLINE( 543)		dr->n = ((int)v & (int)(int)65535);
HXLINE( 544)		return dr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(DestRegister_obj,parse,return )


hx::ObjectPtr< DestRegister_obj > DestRegister_obj::__new() {
	hx::ObjectPtr< DestRegister_obj > __this = new DestRegister_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< DestRegister_obj > DestRegister_obj::__alloc(hx::Ctx *_hx_ctx) {
	DestRegister_obj *__this = (DestRegister_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(DestRegister_obj), true, "openfl._internal.stage3D._AGALConverter.DestRegister"));
	*(void **)__this = DestRegister_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

DestRegister_obj::DestRegister_obj()
{
}

void DestRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(DestRegister);
	HX_MARK_MEMBER_NAME(mask,"mask");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_END_CLASS();
}

void DestRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(mask,"mask");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(type,"type");
}

hx::Val DestRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { return hx::Val( n ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { return hx::Val( mask ); }
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return hx::Val( toGLSL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return hx::Val( programType ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"getWriteMask") ) { return hx::Val( getWriteMask_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool DestRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

hx::Val DestRegister_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mask") ) { mask=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast<  ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void DestRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("mask","\xec","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo DestRegister_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(DestRegister_obj,mask),HX_HCSTRING("mask","\xec","\x40","\x56","\x48")},
	{hx::fsInt,(int)offsetof(DestRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(DestRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(DestRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *DestRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String DestRegister_obj_sMemberFields[] = {
	HX_HCSTRING("mask","\xec","\x40","\x56","\x48"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("getWriteMask","\xf5","\xd1","\x60","\x60"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	::String(null()) };

static void DestRegister_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(DestRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void DestRegister_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(DestRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class DestRegister_obj::__mClass;

static ::String DestRegister_obj_sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null())
};

void DestRegister_obj::__register()
{
	hx::Object *dummy = new DestRegister_obj;
	DestRegister_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.DestRegister","\x34","\xa4","\x4d","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &DestRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = DestRegister_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(DestRegister_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(DestRegister_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< DestRegister_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = DestRegister_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DestRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DestRegister_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
