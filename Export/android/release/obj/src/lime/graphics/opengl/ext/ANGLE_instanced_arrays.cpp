// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_ANGLE_instanced_arrays
#include <lime/graphics/opengl/ext/ANGLE_instanced_arrays.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b3b5b227d74e9109_13_new,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","new",0x4559516a,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.new","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",13,0x2d555864)
HX_LOCAL_STACK_FRAME(_hx_pos_b3b5b227d74e9109_28_drawArraysInstancedANGLE,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","drawArraysInstancedANGLE",0xb2062558,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.drawArraysInstancedANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",28,0x2d555864)
HX_LOCAL_STACK_FRAME(_hx_pos_b3b5b227d74e9109_29_drawElementsInstancedANGLE,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","drawElementsInstancedANGLE",0x203b0e15,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.drawElementsInstancedANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",29,0x2d555864)
HX_LOCAL_STACK_FRAME(_hx_pos_b3b5b227d74e9109_30_vertexAttribDivisorANGLE,"lime.graphics.opengl.ext.ANGLE_instanced_arrays","vertexAttribDivisorANGLE",0x66bdeb39,"lime.graphics.opengl.ext.ANGLE_instanced_arrays.vertexAttribDivisorANGLE","lime/graphics/opengl/ext/ANGLE_instanced_arrays.hx",30,0x2d555864)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void ANGLE_instanced_arrays_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_13_new)
HXDLIN(  13)		this->VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE = (int)35070;
            	}

Dynamic ANGLE_instanced_arrays_obj::__CreateEmpty() { return new ANGLE_instanced_arrays_obj; }

void *ANGLE_instanced_arrays_obj::_hx_vtable = 0;

Dynamic ANGLE_instanced_arrays_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ANGLE_instanced_arrays_obj > _hx_result = new ANGLE_instanced_arrays_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool ANGLE_instanced_arrays_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x669560a4;
}

void ANGLE_instanced_arrays_obj::drawArraysInstancedANGLE(int mode,int first,int count,int primcount){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_28_drawArraysInstancedANGLE)
            	}


HX_DEFINE_DYNAMIC_FUNC4(ANGLE_instanced_arrays_obj,drawArraysInstancedANGLE,(void))

void ANGLE_instanced_arrays_obj::drawElementsInstancedANGLE(int mode,int count,int type,int offset,int primcount){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_29_drawElementsInstancedANGLE)
            	}


HX_DEFINE_DYNAMIC_FUNC5(ANGLE_instanced_arrays_obj,drawElementsInstancedANGLE,(void))

void ANGLE_instanced_arrays_obj::vertexAttribDivisorANGLE(int index,int divisor){
            	HX_STACKFRAME(&_hx_pos_b3b5b227d74e9109_30_vertexAttribDivisorANGLE)
            	}


HX_DEFINE_DYNAMIC_FUNC2(ANGLE_instanced_arrays_obj,vertexAttribDivisorANGLE,(void))


ANGLE_instanced_arrays_obj::ANGLE_instanced_arrays_obj()
{
}

hx::Val ANGLE_instanced_arrays_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 24:
		if (HX_FIELD_EQ(inName,"drawArraysInstancedANGLE") ) { return hx::Val( drawArraysInstancedANGLE_dyn() ); }
		if (HX_FIELD_EQ(inName,"vertexAttribDivisorANGLE") ) { return hx::Val( vertexAttribDivisorANGLE_dyn() ); }
		break;
	case 26:
		if (HX_FIELD_EQ(inName,"drawElementsInstancedANGLE") ) { return hx::Val( drawElementsInstancedANGLE_dyn() ); }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE") ) { return hx::Val( VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ANGLE_instanced_arrays_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 33:
		if (HX_FIELD_EQ(inName,"VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE") ) { VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ANGLE_instanced_arrays_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE","\xb2","\x5f","\xa5","\x51"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ANGLE_instanced_arrays_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ANGLE_instanced_arrays_obj,VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE),HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE","\xb2","\x5f","\xa5","\x51")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ANGLE_instanced_arrays_obj_sStaticStorageInfo = 0;
#endif

static ::String ANGLE_instanced_arrays_obj_sMemberFields[] = {
	HX_HCSTRING("VERTEX_ATTRIB_ARRAY_DIVISOR_ANGLE","\xb2","\x5f","\xa5","\x51"),
	HX_HCSTRING("drawArraysInstancedANGLE","\xa2","\x5e","\xa2","\x84"),
	HX_HCSTRING("drawElementsInstancedANGLE","\xdf","\xad","\x4f","\xfd"),
	HX_HCSTRING("vertexAttribDivisorANGLE","\x83","\x24","\x5a","\x39"),
	::String(null()) };

static void ANGLE_instanced_arrays_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ANGLE_instanced_arrays_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ANGLE_instanced_arrays_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ANGLE_instanced_arrays_obj::__mClass,"__mClass");
};

#endif

hx::Class ANGLE_instanced_arrays_obj::__mClass;

void ANGLE_instanced_arrays_obj::__register()
{
	hx::Object *dummy = new ANGLE_instanced_arrays_obj;
	ANGLE_instanced_arrays_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.opengl.ext.ANGLE_instanced_arrays","\x78","\x14","\xee","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ANGLE_instanced_arrays_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ANGLE_instanced_arrays_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ANGLE_instanced_arrays_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ANGLE_instanced_arrays_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ANGLE_instanced_arrays_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ANGLE_instanced_arrays_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
