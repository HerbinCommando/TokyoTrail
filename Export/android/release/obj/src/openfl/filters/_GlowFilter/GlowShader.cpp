// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
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
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_filters__GlowFilter_GlowShader
#include <openfl/filters/_GlowFilter/GlowShader.h>
#endif
#ifndef INCLUDED_openfl_utils_ByteArrayData
#include <openfl/utils/ByteArrayData.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataInput
#include <openfl/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl_utils_IDataOutput
#include <openfl/utils/IDataOutput.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_3849ff18b8ccdd38_183_new,"openfl.filters._GlowFilter.GlowShader","new",0x65561d5f,"openfl.filters._GlowFilter.GlowShader.new","openfl/filters/GlowFilter.hx",183,0x5f568606)
HX_LOCAL_STACK_FRAME(_hx_pos_3849ff18b8ccdd38_195___update,"openfl.filters._GlowFilter.GlowShader","__update",0x776027ca,"openfl.filters._GlowFilter.GlowShader.__update","openfl/filters/GlowFilter.hx",195,0x5f568606)
namespace openfl{
namespace filters{
namespace _GlowFilter{

void GlowShader_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_3849ff18b8ccdd38_183_new)
HXLINE( 111)		if (hx::IsNull( this->_hx___glFragmentSource )) {
HXLINE( 111)			this->_hx___glFragmentSource = HX_("varying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\tuniform sampler2D uImage0;\n\t\t\n\t\tuniform vec4 uColor;\n\t\t\n\t\tvarying vec2 vBlurCoords[7];\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tfloat a = 0.0;\n\t\t\ta += texture2D(uImage0, vBlurCoords[0]).a * 0.00443;\n\t\t\ta += texture2D(uImage0, vBlurCoords[1]).a * 0.05399;\n\t\t\ta += texture2D(uImage0, vBlurCoords[2]).a * 0.24197;\n\t\t\ta += texture2D(uImage0, vBlurCoords[3]).a * 0.39894;\n\t\t\ta += texture2D(uImage0, vBlurCoords[4]).a * 0.24197;\n\t\t\ta += texture2D(uImage0, vBlurCoords[5]).a * 0.05399;\n\t\t\ta += texture2D(uImage0, vBlurCoords[6]).a * 0.00443;\n\t\t\ta *= uColor.a;\n\t\t\t\n\t\t\tgl_FragColor = vec4(uColor.rgb * a, a);\n\t\t\t\n\t\t}",9e,7e,f1,b7);
            		}
HXLINE( 110)		if (hx::IsNull( this->_hx___glVertexSource )) {
HXLINE( 110)			this->_hx___glVertexSource = HX_("attribute float aAlpha;\n\t\tattribute vec4 aPosition;\n\t\tattribute vec2 aTexCoord;\n\t\tvarying float vAlpha;\n\t\tvarying vec2 vTexCoord;\n\t\t\n\t\tuniform mat4 uMatrix;\n\t\t\n\t\tuniform vec2 uRadius;\n\t\tvarying vec2 vBlurCoords[7];\n\t\tuniform vec2 uTextureSize;\n\t\t\n\t\tvoid main(void) {\n\t\t\t\n\t\t\tvAlpha = aAlpha;\n\t\t\tvTexCoord = aTexCoord;\n\t\t\tgl_Position = uMatrix * aPosition;\n\t\t\t\n\t\t\tvec2 r = uRadius / uTextureSize;\n\t\t\tvBlurCoords[0] = aTexCoord - r * 1.0;\n\t\t\tvBlurCoords[1] = aTexCoord - r * 0.75;\n\t\t\tvBlurCoords[2] = aTexCoord - r * 0.5;\n\t\t\tvBlurCoords[3] = aTexCoord;\n\t\t\tvBlurCoords[4] = aTexCoord + r * 0.5;\n\t\t\tvBlurCoords[5] = aTexCoord + r * 0.75;\n\t\t\tvBlurCoords[6] = aTexCoord + r * 1.0;\n\t\t\t\n\t\t}",76,1b,0f,ea);
            		}
HXLINE( 185)		super::__construct(null());
HXLINE( 188)		 ::Dynamic(this->get_data()->__Field(HX_("uRadius",a7,8a,da,e6),hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),::cpp::VirtualArray_obj::__new(2)->init(0,(int)0)->init(1,(int)0),hx::paccDynamic);
HXLINE( 189)		 ::Dynamic(this->get_data()->__Field(HX_("uColor",ae,18,4b,a5),hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),::cpp::VirtualArray_obj::__new(4)->init(0,(int)0)->init(1,(int)0)->init(2,(int)0)->init(3,(int)0),hx::paccDynamic);
            	}

Dynamic GlowShader_obj::__CreateEmpty() { return new GlowShader_obj; }

void *GlowShader_obj::_hx_vtable = 0;

Dynamic GlowShader_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GlowShader_obj > _hx_result = new GlowShader_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GlowShader_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0b486eaf) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0b486eaf;
	} else {
		return inClassId==(int)0x676ab1f7;
	}
}

void GlowShader_obj::_hx___update(){
            	HX_STACKFRAME(&_hx_pos_3849ff18b8ccdd38_195___update)
HXLINE( 197)		int _hx_tmp = this->get_data()->uImage0->input->width;
HXDLIN( 197)		 ::Dynamic(this->get_data()->__Field(HX_("uTextureSize",c7,50,82,f3),hx::paccDynamic))->__SetField(HX_("value",71,7f,b8,31),::cpp::VirtualArray_obj::__new(2)->init(0,_hx_tmp)->init(1,this->get_data()->uImage0->input->height),hx::paccDynamic);
HXLINE( 199)		this->super::_hx___update();
            	}



hx::ObjectPtr< GlowShader_obj > GlowShader_obj::__new() {
	hx::ObjectPtr< GlowShader_obj > __this = new GlowShader_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< GlowShader_obj > GlowShader_obj::__alloc(hx::Ctx *_hx_ctx) {
	GlowShader_obj *__this = (GlowShader_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GlowShader_obj), true, "openfl.filters._GlowFilter.GlowShader"));
	*(void **)__this = GlowShader_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

GlowShader_obj::GlowShader_obj()
{
}

hx::Val GlowShader_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"__update") ) { return hx::Val( _hx___update_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GlowShader_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GlowShader_obj_sStaticStorageInfo = 0;
#endif

static ::String GlowShader_obj_sMemberFields[] = {
	HX_HCSTRING("__update","\x29","\xf1","\x34","\x2f"),
	::String(null()) };

static void GlowShader_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GlowShader_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GlowShader_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GlowShader_obj::__mClass,"__mClass");
};

#endif

hx::Class GlowShader_obj::__mClass;

void GlowShader_obj::__register()
{
	hx::Object *dummy = new GlowShader_obj;
	GlowShader_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.filters._GlowFilter.GlowShader","\xed","\x81","\xce","\xa0");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GlowShader_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GlowShader_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GlowShader_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GlowShader_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GlowShader_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GlowShader_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace filters
} // end namespace _GlowFilter
