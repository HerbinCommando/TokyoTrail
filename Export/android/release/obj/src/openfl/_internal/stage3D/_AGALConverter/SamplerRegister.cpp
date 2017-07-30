// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_38344beec7696400
#define INCLUDED_38344beec7696400
#include "cpp/Int64.h"
#endif
#ifndef INCLUDED_openfl__internal_stage3D_AGALConverter
#include <openfl/_internal/stage3D/AGALConverter.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D_SamplerState
#include <openfl/_internal/stage3D/SamplerState.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_ProgramType
#include <openfl/_internal/stage3D/_AGALConverter/ProgramType.h>
#endif
#ifndef INCLUDED_openfl__internal_stage3D__AGALConverter_SamplerRegister
#include <openfl/_internal/stage3D/_AGALConverter/SamplerRegister.h>
#endif
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_errors_IllegalOperationError
#include <openfl/errors/IllegalOperationError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4fd42e04ab930eb2_912_new,"openfl._internal.stage3D._AGALConverter.SamplerRegister","new",0xf340d88e,"openfl._internal.stage3D._AGALConverter.SamplerRegister.new","openfl/_internal/stage3D/AGALConverter.hx",912,0x0a35cc61)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd42e04ab930eb2_937_toGLSL,"openfl._internal.stage3D._AGALConverter.SamplerRegister","toGLSL",0xc158218b,"openfl._internal.stage3D._AGALConverter.SamplerRegister.toGLSL","openfl/_internal/stage3D/AGALConverter.hx",937,0x0a35cc61)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd42e04ab930eb2_945_toSamplerState,"openfl._internal.stage3D._AGALConverter.SamplerRegister","toSamplerState",0x8ed80c96,"openfl._internal.stage3D._AGALConverter.SamplerRegister.toSamplerState","openfl/_internal/stage3D/AGALConverter.hx",945,0x0a35cc61)
HX_LOCAL_STACK_FRAME(_hx_pos_4fd42e04ab930eb2_919_parse,"openfl._internal.stage3D._AGALConverter.SamplerRegister","parse",0x0bb77fe1,"openfl._internal.stage3D._AGALConverter.SamplerRegister.parse","openfl/_internal/stage3D/AGALConverter.hx",919,0x0a35cc61)
namespace openfl{
namespace _internal{
namespace stage3D{
namespace _AGALConverter{

void SamplerRegister_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4fd42e04ab930eb2_912_new)
            	}

Dynamic SamplerRegister_obj::__CreateEmpty() { return new SamplerRegister_obj; }

void *SamplerRegister_obj::_hx_vtable = 0;

Dynamic SamplerRegister_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< SamplerRegister_obj > _hx_result = new SamplerRegister_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool SamplerRegister_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0a77be58;
}

::String SamplerRegister_obj::toGLSL(){
            	HX_STACKFRAME(&_hx_pos_4fd42e04ab930eb2_937_toGLSL)
HXLINE( 939)		::String str = ::openfl::_internal::stage3D::AGALConverter_obj::prefixFromType(this->type,this->programType);
HXDLIN( 939)		::String str1 = (str + this->n);
HXLINE( 940)		return str1;
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toGLSL,return )

 ::openfl::_internal::stage3D::SamplerState SamplerRegister_obj::toSamplerState(){
            	HX_GC_STACKFRAME(&_hx_pos_4fd42e04ab930eb2_945_toSamplerState)
HXLINE( 947)		int magFilter = (int)0;
HXLINE( 948)		int minFilter = (int)0;
HXLINE( 949)		int wrapModeS = (int)0;
HXLINE( 950)		int wrapModeT = (int)0;
HXLINE( 953)		{
HXLINE( 953)			int _g = this->f;
HXDLIN( 953)			switch((int)(_g)){
            				case (int)0: {
HXLINE( 955)					magFilter = (int)9728;
            				}
            				break;
            				case (int)1: {
HXLINE( 956)					magFilter = (int)9729;
            				}
            				break;
            				default:{
HXLINE( 957)					HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            				}
            			}
            		}
HXLINE( 962)		{
HXLINE( 962)			int _g1 = this->m;
HXDLIN( 962)			switch((int)(_g1)){
            				case (int)0: {
HXLINE( 967)					if ((this->f != (int)0)) {
HXLINE( 967)						minFilter = (int)9729;
            					}
            					else {
HXLINE( 967)						minFilter = (int)9728;
            					}
            				}
            				break;
            				case (int)1: {
HXLINE( 972)					if ((this->f != (int)0)) {
HXLINE( 972)						minFilter = (int)9985;
            					}
            					else {
HXLINE( 972)						minFilter = (int)9984;
            					}
            				}
            				break;
            				case (int)2: {
HXLINE( 977)					if ((this->f != (int)0)) {
HXLINE( 977)						minFilter = (int)9987;
            					}
            					else {
HXLINE( 977)						minFilter = (int)9986;
            					}
            				}
            				break;
            				default:{
HXLINE( 981)					HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            				}
            			}
            		}
HXLINE( 986)		{
HXLINE( 986)			int _g2 = this->w;
HXDLIN( 986)			switch((int)(_g2)){
            				case (int)0: {
HXLINE( 990)					wrapModeS = (int)33071;
HXLINE( 991)					wrapModeT = (int)33071;
            				}
            				break;
            				case (int)1: {
HXLINE( 995)					wrapModeS = (int)10497;
HXLINE( 996)					wrapModeT = (int)10497;
            				}
            				break;
            				default:{
HXLINE(1000)					HX_STACK_DO_THROW( ::openfl::errors::IllegalOperationError_obj::__alloc( HX_CTX ,null()));
            				}
            			}
            		}
HXLINE(1004)		bool ignoreSampler = (((int)this->s & (int)(int)4) == (int)4);
HXLINE(1005)		bool centroid = (((int)this->s & (int)(int)1) == (int)1);
HXLINE(1008)		Float lodBias = ((Float)((int)((int)this->b << (int)(int)24) >> (int)(int)24) / (Float)((Float)8.0));
HXLINE(1009)		Float maxAniso = ((Float)0.0);
HXLINE(1011)		return  ::openfl::_internal::stage3D::SamplerState_obj::__alloc( HX_CTX ,minFilter,magFilter,wrapModeS,wrapModeT,lodBias,maxAniso,ignoreSampler,centroid,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(SamplerRegister_obj,toSamplerState,return )

 ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister SamplerRegister_obj::parse( cpp::Int64Struct v, ::openfl::_internal::stage3D::_AGALConverter::ProgramType programType){
            	HX_GC_STACKFRAME(&_hx_pos_4fd42e04ab930eb2_919_parse)
HXLINE( 921)		 ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister sr =  ::openfl::_internal::stage3D::_AGALConverter::SamplerRegister_obj::__alloc( HX_CTX );
HXLINE( 922)		sr->programType = programType;
HXLINE( 923)		 cpp::Int64Struct a = _hx_int64_shr(v,(int)60);
HXDLIN( 923)		sr->f = _hx_int64_low(_hx_int64_and(a,( ::cpp::Int64Struct((int)15))));
HXLINE( 924)		 cpp::Int64Struct a1 = _hx_int64_shr(v,(int)56);
HXDLIN( 924)		sr->m = _hx_int64_low(_hx_int64_and(a1,( ::cpp::Int64Struct((int)15))));
HXLINE( 925)		 cpp::Int64Struct a2 = _hx_int64_shr(v,(int)52);
HXDLIN( 925)		sr->w = _hx_int64_low(_hx_int64_and(a2,( ::cpp::Int64Struct((int)15))));
HXLINE( 926)		 cpp::Int64Struct a3 = _hx_int64_shr(v,(int)48);
HXDLIN( 926)		sr->s = _hx_int64_low(_hx_int64_and(a3,( ::cpp::Int64Struct((int)15))));
HXLINE( 927)		 cpp::Int64Struct a4 = _hx_int64_shr(v,(int)44);
HXDLIN( 927)		sr->d = _hx_int64_low(_hx_int64_and(a4,( ::cpp::Int64Struct((int)15))));
HXLINE( 928)		 cpp::Int64Struct a5 = _hx_int64_shr(v,(int)40);
HXDLIN( 928)		sr->t = _hx_int64_low(_hx_int64_and(a5,( ::cpp::Int64Struct((int)15))));
HXLINE( 929)		 cpp::Int64Struct a6 = _hx_int64_shr(v,(int)32);
HXDLIN( 929)		sr->type = _hx_int64_low(_hx_int64_and(a6,( ::cpp::Int64Struct((int)15))));
HXLINE( 930)		 cpp::Int64Struct a7 = _hx_int64_shr(v,(int)16);
HXDLIN( 930)		sr->b = _hx_int64_low(_hx_int64_and(a7,( ::cpp::Int64Struct((int)255))));
HXLINE( 931)		sr->n = _hx_int64_low(_hx_int64_and(v,( ::cpp::Int64Struct((int)65535))));
HXLINE( 932)		return sr;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(SamplerRegister_obj,parse,return )


hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__new() {
	hx::ObjectPtr< SamplerRegister_obj > __this = new SamplerRegister_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< SamplerRegister_obj > SamplerRegister_obj::__alloc(hx::Ctx *_hx_ctx) {
	SamplerRegister_obj *__this = (SamplerRegister_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SamplerRegister_obj), true, "openfl._internal.stage3D._AGALConverter.SamplerRegister"));
	*(void **)__this = SamplerRegister_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

SamplerRegister_obj::SamplerRegister_obj()
{
}

void SamplerRegister_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(SamplerRegister);
	HX_MARK_MEMBER_NAME(b,"b");
	HX_MARK_MEMBER_NAME(d,"d");
	HX_MARK_MEMBER_NAME(f,"f");
	HX_MARK_MEMBER_NAME(m,"m");
	HX_MARK_MEMBER_NAME(n,"n");
	HX_MARK_MEMBER_NAME(programType,"programType");
	HX_MARK_MEMBER_NAME(s,"s");
	HX_MARK_MEMBER_NAME(t,"t");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(w,"w");
	HX_MARK_END_CLASS();
}

void SamplerRegister_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(b,"b");
	HX_VISIT_MEMBER_NAME(d,"d");
	HX_VISIT_MEMBER_NAME(f,"f");
	HX_VISIT_MEMBER_NAME(m,"m");
	HX_VISIT_MEMBER_NAME(n,"n");
	HX_VISIT_MEMBER_NAME(programType,"programType");
	HX_VISIT_MEMBER_NAME(s,"s");
	HX_VISIT_MEMBER_NAME(t,"t");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(w,"w");
}

hx::Val SamplerRegister_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { return hx::Val( b ); }
		if (HX_FIELD_EQ(inName,"d") ) { return hx::Val( d ); }
		if (HX_FIELD_EQ(inName,"f") ) { return hx::Val( f ); }
		if (HX_FIELD_EQ(inName,"m") ) { return hx::Val( m ); }
		if (HX_FIELD_EQ(inName,"n") ) { return hx::Val( n ); }
		if (HX_FIELD_EQ(inName,"s") ) { return hx::Val( s ); }
		if (HX_FIELD_EQ(inName,"t") ) { return hx::Val( t ); }
		if (HX_FIELD_EQ(inName,"w") ) { return hx::Val( w ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return hx::Val( type ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"toGLSL") ) { return hx::Val( toGLSL_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { return hx::Val( programType ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"toSamplerState") ) { return hx::Val( toSamplerState_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool SamplerRegister_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { outValue = parse_dyn(); return true; }
	}
	return false;
}

hx::Val SamplerRegister_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"b") ) { b=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"d") ) { d=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"f") ) { f=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"m") ) { m=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"n") ) { n=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"s") ) { s=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"t") ) { t=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"w") ) { w=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"programType") ) { programType=inValue.Cast<  ::openfl::_internal::stage3D::_AGALConverter::ProgramType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void SamplerRegister_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("b","\x62","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("d","\x64","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("f","\x66","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("m","\x6d","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("n","\x6e","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"));
	outFields->push(HX_HCSTRING("s","\x73","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("t","\x74","\x00","\x00","\x00"));
	outFields->push(HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"));
	outFields->push(HX_HCSTRING("w","\x77","\x00","\x00","\x00"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo SamplerRegister_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,b),HX_HCSTRING("b","\x62","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,d),HX_HCSTRING("d","\x64","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,f),HX_HCSTRING("f","\x66","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,m),HX_HCSTRING("m","\x6d","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,n),HX_HCSTRING("n","\x6e","\x00","\x00","\x00")},
	{hx::fsObject /*::openfl::_internal::stage3D::_AGALConverter::ProgramType*/ ,(int)offsetof(SamplerRegister_obj,programType),HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,s),HX_HCSTRING("s","\x73","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,t),HX_HCSTRING("t","\x74","\x00","\x00","\x00")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,type),HX_HCSTRING("type","\xba","\xf2","\x08","\x4d")},
	{hx::fsInt,(int)offsetof(SamplerRegister_obj,w),HX_HCSTRING("w","\x77","\x00","\x00","\x00")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *SamplerRegister_obj_sStaticStorageInfo = 0;
#endif

static ::String SamplerRegister_obj_sMemberFields[] = {
	HX_HCSTRING("b","\x62","\x00","\x00","\x00"),
	HX_HCSTRING("d","\x64","\x00","\x00","\x00"),
	HX_HCSTRING("f","\x66","\x00","\x00","\x00"),
	HX_HCSTRING("m","\x6d","\x00","\x00","\x00"),
	HX_HCSTRING("n","\x6e","\x00","\x00","\x00"),
	HX_HCSTRING("programType","\x5e","\xfb","\x2c","\xc4"),
	HX_HCSTRING("s","\x73","\x00","\x00","\x00"),
	HX_HCSTRING("t","\x74","\x00","\x00","\x00"),
	HX_HCSTRING("type","\xba","\xf2","\x08","\x4d"),
	HX_HCSTRING("w","\x77","\x00","\x00","\x00"),
	HX_HCSTRING("toGLSL","\xf9","\x58","\x08","\x7a"),
	HX_HCSTRING("toSamplerState","\x04","\x62","\xd2","\xf8"),
	::String(null()) };

static void SamplerRegister_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SamplerRegister_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SamplerRegister_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SamplerRegister_obj::__mClass,"__mClass");
};

#endif

hx::Class SamplerRegister_obj::__mClass;

static ::String SamplerRegister_obj_sStaticFields[] = {
	HX_HCSTRING("parse","\x33","\x90","\x55","\xbd"),
	::String(null())
};

void SamplerRegister_obj::__register()
{
	hx::Object *dummy = new SamplerRegister_obj;
	SamplerRegister_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.stage3D._AGALConverter.SamplerRegister","\x9c","\x39","\xf2","\x49");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &SamplerRegister_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = SamplerRegister_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(SamplerRegister_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(SamplerRegister_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< SamplerRegister_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = SamplerRegister_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = SamplerRegister_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = SamplerRegister_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D
} // end namespace _AGALConverter
