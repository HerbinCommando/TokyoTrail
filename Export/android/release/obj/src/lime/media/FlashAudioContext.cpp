// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime_media_AudioBuffer
#include <lime/media/AudioBuffer.h>
#endif
#ifndef INCLUDED_lime_media_FlashAudioContext
#include <lime/media/FlashAudioContext.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7dd59041b290264e_12_new,"lime.media.FlashAudioContext","new",0x3c697ef8,"lime.media.FlashAudioContext.new","lime/media/FlashAudioContext.hx",12,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_26_createBuffer,"lime.media.FlashAudioContext","createBuffer",0xd5e5bb84,"lime.media.FlashAudioContext.createBuffer","lime/media/FlashAudioContext.hx",26,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_42_getBytesLoaded,"lime.media.FlashAudioContext","getBytesLoaded",0x899ee242,"lime.media.FlashAudioContext.getBytesLoaded","lime/media/FlashAudioContext.hx",42,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_57_getBytesTotal,"lime.media.FlashAudioContext","getBytesTotal",0x5b979027,"lime.media.FlashAudioContext.getBytesTotal","lime/media/FlashAudioContext.hx",57,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_72_getID3,"lime.media.FlashAudioContext","getID3",0xc9c2a18a,"lime.media.FlashAudioContext.getID3","lime/media/FlashAudioContext.hx",72,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_87_getIsBuffering,"lime.media.FlashAudioContext","getIsBuffering",0x7fe4a20a,"lime.media.FlashAudioContext.getIsBuffering","lime/media/FlashAudioContext.hx",87,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_102_getIsURLInaccessible,"lime.media.FlashAudioContext","getIsURLInaccessible",0x2151ec92,"lime.media.FlashAudioContext.getIsURLInaccessible","lime/media/FlashAudioContext.hx",102,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_117_getLength,"lime.media.FlashAudioContext","getLength",0x5ca8ceb4,"lime.media.FlashAudioContext.getLength","lime/media/FlashAudioContext.hx",117,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_132_getURL,"lime.media.FlashAudioContext","getURL",0xc9cbc8e1,"lime.media.FlashAudioContext.getURL","lime/media/FlashAudioContext.hx",132,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_137_close,"lime.media.FlashAudioContext","close",0xf8339c50,"lime.media.FlashAudioContext.close","lime/media/FlashAudioContext.hx",137,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_160_extract,"lime.media.FlashAudioContext","extract",0x21578fd9,"lime.media.FlashAudioContext.extract","lime/media/FlashAudioContext.hx",160,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_165_load,"lime.media.FlashAudioContext","load",0x9e9ab08e,"lime.media.FlashAudioContext.load","lime/media/FlashAudioContext.hx",165,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_178_loadCompressedDataFromByteArray,"lime.media.FlashAudioContext","loadCompressedDataFromByteArray",0xb153326e,"lime.media.FlashAudioContext.loadCompressedDataFromByteArray","lime/media/FlashAudioContext.hx",178,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_191_loadPCMFromByteArray,"lime.media.FlashAudioContext","loadPCMFromByteArray",0x78e0b7db,"lime.media.FlashAudioContext.loadPCMFromByteArray","lime/media/FlashAudioContext.hx",191,0xce29ab3a)
HX_LOCAL_STACK_FRAME(_hx_pos_7dd59041b290264e_214_play,"lime.media.FlashAudioContext","play",0xa13d445c,"lime.media.FlashAudioContext.play","lime/media/FlashAudioContext.hx",214,0xce29ab3a)
namespace lime{
namespace media{

void FlashAudioContext_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_12_new)
            	}

Dynamic FlashAudioContext_obj::__CreateEmpty() { return new FlashAudioContext_obj; }

void *FlashAudioContext_obj::_hx_vtable = 0;

Dynamic FlashAudioContext_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlashAudioContext_obj > _hx_result = new FlashAudioContext_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool FlashAudioContext_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x78ee545a;
}

 ::lime::media::AudioBuffer FlashAudioContext_obj::createBuffer( ::Dynamic stream, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_26_createBuffer)
HXDLIN(  26)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlashAudioContext_obj,createBuffer,return )

int FlashAudioContext_obj::getBytesLoaded( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_42_getBytesLoaded)
HXDLIN(  42)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesLoaded,return )

int FlashAudioContext_obj::getBytesTotal( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_57_getBytesTotal)
HXDLIN(  57)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getBytesTotal,return )

 ::Dynamic FlashAudioContext_obj::getID3( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_72_getID3)
HXDLIN(  72)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getID3,return )

bool FlashAudioContext_obj::getIsBuffering( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_87_getIsBuffering)
HXDLIN(  87)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsBuffering,return )

bool FlashAudioContext_obj::getIsURLInaccessible( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_102_getIsURLInaccessible)
HXDLIN( 102)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getIsURLInaccessible,return )

Float FlashAudioContext_obj::getLength( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_117_getLength)
HXDLIN( 117)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getLength,return )

::String FlashAudioContext_obj::getURL( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_132_getURL)
HXDLIN( 132)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,getURL,return )

void FlashAudioContext_obj::close( ::lime::media::AudioBuffer buffer){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_137_close)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlashAudioContext_obj,close,(void))

Float FlashAudioContext_obj::extract( ::lime::media::AudioBuffer buffer, ::Dynamic target,Float length,hx::Null< Float >  __o_startPosition){
Float startPosition = __o_startPosition.Default(-1);
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_160_extract)
HXDLIN( 160)		return (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,extract,return )

void FlashAudioContext_obj::load( ::lime::media::AudioBuffer buffer, ::Dynamic stream, ::Dynamic context){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_165_load)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,load,(void))

void FlashAudioContext_obj::loadCompressedDataFromByteArray( ::lime::media::AudioBuffer buffer, ::Dynamic bytes,int bytesLength){
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_178_loadCompressedDataFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlashAudioContext_obj,loadCompressedDataFromByteArray,(void))

void FlashAudioContext_obj::loadPCMFromByteArray( ::lime::media::AudioBuffer buffer, ::Dynamic bytes,int samples,::String format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(44100);
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_191_loadPCMFromByteArray)
            	}


HX_DEFINE_DYNAMIC_FUNC6(FlashAudioContext_obj,loadPCMFromByteArray,(void))

 ::Dynamic FlashAudioContext_obj::play( ::lime::media::AudioBuffer buffer,hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops, ::Dynamic sndTransform){
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
            	HX_STACKFRAME(&_hx_pos_7dd59041b290264e_214_play)
HXDLIN( 214)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlashAudioContext_obj,play,return )


hx::ObjectPtr< FlashAudioContext_obj > FlashAudioContext_obj::__new() {
	hx::ObjectPtr< FlashAudioContext_obj > __this = new FlashAudioContext_obj();
	__this->__construct();
	return __this;
}

hx::ObjectPtr< FlashAudioContext_obj > FlashAudioContext_obj::__alloc(hx::Ctx *_hx_ctx) {
	FlashAudioContext_obj *__this = (FlashAudioContext_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlashAudioContext_obj), false, "lime.media.FlashAudioContext"));
	*(void **)__this = FlashAudioContext_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

FlashAudioContext_obj::FlashAudioContext_obj()
{
}

hx::Val FlashAudioContext_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"getID3") ) { return hx::Val( getID3_dyn() ); }
		if (HX_FIELD_EQ(inName,"getURL") ) { return hx::Val( getURL_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"extract") ) { return hx::Val( extract_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getLength") ) { return hx::Val( getLength_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createBuffer") ) { return hx::Val( createBuffer_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBytesTotal") ) { return hx::Val( getBytesTotal_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getBytesLoaded") ) { return hx::Val( getBytesLoaded_dyn() ); }
		if (HX_FIELD_EQ(inName,"getIsBuffering") ) { return hx::Val( getIsBuffering_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getIsURLInaccessible") ) { return hx::Val( getIsURLInaccessible_dyn() ); }
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return hx::Val( loadPCMFromByteArray_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return hx::Val( loadCompressedDataFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *FlashAudioContext_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *FlashAudioContext_obj_sStaticStorageInfo = 0;
#endif

static ::String FlashAudioContext_obj_sMemberFields[] = {
	HX_HCSTRING("createBuffer","\x1c","\xfd","\xe9","\xf2"),
	HX_HCSTRING("getBytesLoaded","\xda","\xb9","\x68","\x21"),
	HX_HCSTRING("getBytesTotal","\x8f","\xb3","\x4c","\xa2"),
	HX_HCSTRING("getID3","\x22","\x21","\x1f","\xa3"),
	HX_HCSTRING("getIsBuffering","\xa2","\x79","\xae","\x17"),
	HX_HCSTRING("getIsURLInaccessible","\x2a","\x86","\x55","\x6d"),
	HX_HCSTRING("getLength","\x1c","\x1e","\x5e","\x1b"),
	HX_HCSTRING("getURL","\x79","\x48","\x28","\xa3"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("extract","\x41","\xb5","\xea","\x78"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	::String(null()) };

static void FlashAudioContext_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlashAudioContext_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlashAudioContext_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlashAudioContext_obj::__mClass,"__mClass");
};

#endif

hx::Class FlashAudioContext_obj::__mClass;

void FlashAudioContext_obj::__register()
{
	hx::Object *dummy = new FlashAudioContext_obj;
	FlashAudioContext_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.media.FlashAudioContext","\x06","\xe3","\x98","\x07");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlashAudioContext_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlashAudioContext_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlashAudioContext_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlashAudioContext_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlashAudioContext_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlashAudioContext_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace media
