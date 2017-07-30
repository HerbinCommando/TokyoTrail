// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif
namespace lime{
namespace utils{

::lime::utils::TAError TAError_obj::RangeError;

bool TAError_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) { outValue = TAError_obj::RangeError; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(TAError_obj)

int TAError_obj::__FindIndex(::String inName)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) return 0;
	return super::__FindIndex(inName);
}

int TAError_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val TAError_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("RangeError",eb,ac,85,3c)) return RangeError;
	return super::__Field(inName,inCallProp);
}

static ::String TAError_obj_sStaticFields[] = {
	HX_("RangeError",eb,ac,85,3c),
	::String(null())
};

static void TAError_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TAError_obj::RangeError,"RangeError");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TAError_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TAError_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TAError_obj::RangeError,"RangeError");
};
#endif

hx::Class TAError_obj::__mClass;

Dynamic __Create_TAError_obj() { return new TAError_obj; }

void TAError_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("lime.utils.TAError","\xc5","\x58","\x89","\x62"), hx::TCanCast< TAError_obj >,TAError_obj_sStaticFields,0,
	&__Create_TAError_obj, &__Create,
	&super::__SGetClass(), &CreateTAError_obj, TAError_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , TAError_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &TAError_obj::__GetStatic;
}

void TAError_obj::__boot()
{
RangeError = hx::CreateEnum< TAError_obj >(HX_HCSTRING("RangeError","\xeb","\xac","\x85","\x3c"),0,0);
}


} // end namespace lime
} // end namespace utils
