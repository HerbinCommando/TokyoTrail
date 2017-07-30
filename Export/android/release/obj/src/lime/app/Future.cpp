// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_Sys
#include <Sys.h>
#endif
#ifndef INCLUDED_lime_app_Future
#include <lime/app/Future.h>
#endif
#ifndef INCLUDED_lime_app_Promise
#include <lime/app/Promise.h>
#endif
#ifndef INCLUDED_lime_app__Event_Dynamic_Void
#include <lime/app/_Event_Dynamic_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_Int_Int_Void
#include <lime/app/_Event_Int_Int_Void.h>
#endif
#ifndef INCLUDED_lime_app__Event_ofEvents_T_Void
#include <lime/app/_Event_ofEvents_T_Void.h>
#endif
#ifndef INCLUDED_lime_app__Future_FutureWork
#include <lime/app/_Future/FutureWork.h>
#endif
#ifndef INCLUDED_lime_system_System
#include <lime/system/System.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_b16b96f10668b207_31_new,"lime.app.Future","new",0xc0e3b2bb,"lime.app.Future.new","lime/app/Future.hx",31,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_74_onComplete,"lime.app.Future","onComplete",0x3a7dc3fd,"lime.app.Future.onComplete","lime/app/Future.hx",74,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_101_onError,"lime.app.Future","onError",0xb2071604,"lime.app.Future.onError","lime/app/Future.hx",101,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_128_onProgress,"lime.app.Future","onProgress",0x40e0baf1,"lime.app.Future.onProgress","lime/app/Future.hx",128,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_164_ready,"lime.app.Future","ready",0xd4cc0f7e,"lime.app.Future.ready","lime/app/Future.hx",164,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_192_result,"lime.app.Future","result",0x69b43162,"lime.app.Future.result","lime/app/Future.hx",192,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_211_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",211,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_228_then,"lime.app.Future","then",0x0a523022,"lime.app.Future.then","lime/app/Future.hx",228,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_65_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",65,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_61_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",61,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_66_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",66,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_67_ofEvents,"lime.app.Future","ofEvents",0x0c824355,"lime.app.Future.ofEvents","lime/app/Future.hx",67,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_243_withError,"lime.app.Future","withError",0xc7ddc87d,"lime.app.Future.withError","lime/app/Future.hx",243,0x058e0853)
HX_LOCAL_STACK_FRAME(_hx_pos_b16b96f10668b207_253_withValue,"lime.app.Future","withValue",0x866c7c26,"lime.app.Future.withValue","lime/app/Future.hx",253,0x058e0853)
namespace lime{
namespace app{

void Future_obj::__construct( ::Dynamic work,hx::Null< bool >  __o_async){
bool async = __o_async.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_31_new)
HXDLIN(  31)		if (hx::IsNotNull( work )) {
HXLINE(  33)			if (async) {
HXLINE(  35)				 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE(  36)				promise->future = hx::ObjectPtr<OBJ_>(this);
HXLINE(  38)				::lime::app::_Future::FutureWork_obj::queue( ::Dynamic(hx::Anon_obj::Create(2)
            					->setFixed(0,HX_("promise",9b,cd,e9,f7),promise)
            					->setFixed(1,HX_("work",d1,01,fd,4e),work)));
            			}
            			else {
HXLINE(  42)				try {
            					HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  44)					this->value = work();
HXLINE(  45)					this->isComplete = true;
            				}
            				catch( ::Dynamic _hx_e){
            					if (_hx_e.IsClass<  ::Dynamic >() ){
            						HX_STACK_BEGIN_CATCH
            						 ::Dynamic e = _hx_e;
HXLINE(  49)						this->error = e;
HXLINE(  50)						this->isError = true;
            					}
            					else {
            						HX_STACK_DO_THROW(_hx_e);
            					}
            				}
            			}
            		}
            	}

Dynamic Future_obj::__CreateEmpty() { return new Future_obj; }

void *Future_obj::_hx_vtable = 0;

Dynamic Future_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Future_obj > _hx_result = new Future_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Future_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x29c479cf;
}

 ::lime::app::Future Future_obj::onComplete( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_74_onComplete)
HXLINE(  76)		if (hx::IsNotNull( listener )) {
HXLINE(  78)			if (this->isComplete) {
HXLINE(  80)				listener(this->value);
            			}
            			else {
HXLINE(  82)				if (!(this->isError)) {
HXLINE(  84)					if (hx::IsNull( this->_hx___completeListeners )) {
HXLINE(  86)						this->_hx___completeListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE(  90)					this->_hx___completeListeners->push(listener);
            				}
            			}
            		}
HXLINE(  96)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onComplete,return )

 ::lime::app::Future Future_obj::onError( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_101_onError)
HXLINE( 103)		if (hx::IsNotNull( listener )) {
HXLINE( 105)			if (this->isError) {
HXLINE( 107)				listener(this->error);
            			}
            			else {
HXLINE( 109)				if (!(this->isComplete)) {
HXLINE( 111)					if (hx::IsNull( this->_hx___errorListeners )) {
HXLINE( 113)						this->_hx___errorListeners = ::Array_obj< ::Dynamic>::__new();
            					}
HXLINE( 117)					this->_hx___errorListeners->push(listener);
            				}
            			}
            		}
HXLINE( 123)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onError,return )

 ::lime::app::Future Future_obj::onProgress( ::Dynamic listener){
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_128_onProgress)
HXLINE( 130)		if (hx::IsNotNull( listener )) {
HXLINE( 132)			if (hx::IsNull( this->_hx___progressListeners )) {
HXLINE( 134)				this->_hx___progressListeners = ::Array_obj< ::Dynamic>::__new();
            			}
HXLINE( 138)			this->_hx___progressListeners->push(listener);
            		}
HXLINE( 142)		return hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,onProgress,return )

 ::lime::app::Future Future_obj::ready(hx::Null< int >  __o_waitTime){
int waitTime = __o_waitTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_164_ready)
HXDLIN( 164)		bool _hx_tmp;
HXDLIN( 164)		if (!(this->isComplete)) {
HXDLIN( 164)			_hx_tmp = this->isError;
            		}
            		else {
HXDLIN( 164)			_hx_tmp = true;
            		}
HXDLIN( 164)		if (_hx_tmp) {
HXLINE( 166)			return hx::ObjectPtr<OBJ_>(this);
            		}
            		else {
HXLINE( 170)			int time = ::lime::_hx_system::System_obj::getTimer();
HXLINE( 171)			int end = (time + waitTime);
HXLINE( 173)			while(true){
HXLINE( 173)				bool _hx_tmp1;
HXDLIN( 173)				bool _hx_tmp2;
HXDLIN( 173)				if (!(this->isComplete)) {
HXLINE( 173)					_hx_tmp2 = !(this->isError);
            				}
            				else {
HXLINE( 173)					_hx_tmp2 = false;
            				}
HXDLIN( 173)				if (_hx_tmp2) {
HXLINE( 173)					_hx_tmp1 = (time <= end);
            				}
            				else {
HXLINE( 173)					_hx_tmp1 = false;
            				}
HXDLIN( 173)				if (!(_hx_tmp1)) {
HXLINE( 173)					goto _hx_goto_4;
            				}
HXLINE( 176)				::Sys_obj::sleep(((Float)0.01));
HXLINE( 179)				time = ::lime::_hx_system::System_obj::getTimer();
            			}
            			_hx_goto_4:;
HXLINE( 183)			return hx::ObjectPtr<OBJ_>(this);
            		}
HXLINE( 164)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,ready,return )

 ::Dynamic Future_obj::result(hx::Null< int >  __o_waitTime){
int waitTime = __o_waitTime.Default(-1);
            	HX_STACKFRAME(&_hx_pos_b16b96f10668b207_192_result)
HXLINE( 194)		this->ready(waitTime);
HXLINE( 196)		if (this->isComplete) {
HXLINE( 198)			return this->value;
            		}
            		else {
HXLINE( 202)			return null();
            		}
HXLINE( 196)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,result,return )

 ::lime::app::Future Future_obj::then( ::Dynamic next){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_211_then)
HXDLIN( 211)		if (this->isComplete) {
HXLINE( 213)			return ( ( ::lime::app::Future)(next(this->value)) );
            		}
            		else {
HXLINE( 215)			if (this->isError) {
HXLINE( 217)				 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 218)				future->onError(this->error);
HXLINE( 219)				return future;
            			}
            			else {
            				HX_BEGIN_LOCAL_FUNC_S2(hx::LocalFunc,_hx_Closure_0, ::Dynamic,next, ::lime::app::Promise,promise) HXARGC(1)
            				void _hx_run( ::Dynamic val){
            					HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_228_then)
HXLINE( 230)					 ::lime::app::Future future1 = ( ( ::lime::app::Future)(next(val)) );
HXLINE( 231)					future1->onError(promise->error_dyn());
HXLINE( 232)					future1->onComplete(promise->complete_dyn());
            				}
            				HX_END_LOCAL_FUNC1((void))

HXLINE( 223)				 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE( 225)				this->onError(promise->error_dyn());
HXLINE( 226)				this->onProgress(promise->progress_dyn());
HXLINE( 228)				this->onComplete( ::Dynamic(new _hx_Closure_0(next,promise)));
HXLINE( 236)				return promise->future;
            			}
            		}
HXLINE( 211)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Future_obj,then,return )

 ::lime::app::Future Future_obj::ofEvents( ::lime::app::_Event_ofEvents_T_Void onComplete, ::lime::app::_Event_Dynamic_Void onError, ::lime::app::_Event_Int_Int_Void onProgress){
            		HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0, ::lime::app::Promise,promise) HXARGC(1)
            		void _hx_run( ::Dynamic data){
            			HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_65_ofEvents)
HXLINE(  65)			promise->complete(data);
            		}
            		HX_END_LOCAL_FUNC1((void))

            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_61_ofEvents)
HXLINE(  63)		 ::lime::app::Promise promise =  ::lime::app::Promise_obj::__alloc( HX_CTX );
HXLINE(  65)		onComplete->add( ::Dynamic(new _hx_Closure_0(promise)),true,null());
HXLINE(  66)		if (hx::IsNotNull( onError )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_1, ::lime::app::Promise,promise) HXARGC(1)
            			void _hx_run( ::Dynamic error){
            				HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_66_ofEvents)
HXLINE(  66)				promise->error(error);
            			}
            			HX_END_LOCAL_FUNC1((void))

HXLINE(  66)			onError->add( ::Dynamic(new _hx_Closure_1(promise)),true,null());
            		}
HXLINE(  67)		if (hx::IsNotNull( onProgress )) {
            			HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_2, ::lime::app::Promise,promise) HXARGC(2)
            			void _hx_run(int progress,int total){
            				HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_67_ofEvents)
HXLINE(  67)				promise->progress(progress,total);
            			}
            			HX_END_LOCAL_FUNC2((void))

HXLINE(  67)			onProgress->add( ::Dynamic(new _hx_Closure_2(promise)),true,null());
            		}
HXLINE(  69)		return promise->future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Future_obj,ofEvents,return )

 ::lime::app::Future Future_obj::withError( ::Dynamic error){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_243_withError)
HXLINE( 245)		 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 246)		future->isError = true;
HXLINE( 247)		future->error = error;
HXLINE( 248)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withError,return )

 ::lime::app::Future Future_obj::withValue( ::Dynamic value){
            	HX_GC_STACKFRAME(&_hx_pos_b16b96f10668b207_253_withValue)
HXLINE( 255)		 ::lime::app::Future future =  ::lime::app::Future_obj::__alloc( HX_CTX ,null(),null());
HXLINE( 256)		future->isComplete = true;
HXLINE( 257)		future->value = value;
HXLINE( 258)		return future;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Future_obj,withValue,return )


hx::ObjectPtr< Future_obj > Future_obj::__new( ::Dynamic work,hx::Null< bool >  __o_async) {
	hx::ObjectPtr< Future_obj > __this = new Future_obj();
	__this->__construct(work,__o_async);
	return __this;
}

hx::ObjectPtr< Future_obj > Future_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic work,hx::Null< bool >  __o_async) {
	Future_obj *__this = (Future_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Future_obj), true, "lime.app.Future"));
	*(void **)__this = Future_obj::_hx_vtable;
	__this->__construct(work,__o_async);
	return __this;
}

Future_obj::Future_obj()
{
}

void Future_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Future);
	HX_MARK_MEMBER_NAME(error,"error");
	HX_MARK_MEMBER_NAME(isComplete,"isComplete");
	HX_MARK_MEMBER_NAME(isError,"isError");
	HX_MARK_MEMBER_NAME(value,"value");
	HX_MARK_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_MARK_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_MARK_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
	HX_MARK_END_CLASS();
}

void Future_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(error,"error");
	HX_VISIT_MEMBER_NAME(isComplete,"isComplete");
	HX_VISIT_MEMBER_NAME(isError,"isError");
	HX_VISIT_MEMBER_NAME(value,"value");
	HX_VISIT_MEMBER_NAME(_hx___completeListeners,"__completeListeners");
	HX_VISIT_MEMBER_NAME(_hx___errorListeners,"__errorListeners");
	HX_VISIT_MEMBER_NAME(_hx___progressListeners,"__progressListeners");
}

hx::Val Future_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"then") ) { return hx::Val( then_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { return hx::Val( error ); }
		if (HX_FIELD_EQ(inName,"value") ) { return hx::Val( value ); }
		if (HX_FIELD_EQ(inName,"ready") ) { return hx::Val( ready_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"result") ) { return hx::Val( result_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { return hx::Val( isError ); }
		if (HX_FIELD_EQ(inName,"onError") ) { return hx::Val( onError_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { return hx::Val( isComplete ); }
		if (HX_FIELD_EQ(inName,"onComplete") ) { return hx::Val( onComplete_dyn() ); }
		if (HX_FIELD_EQ(inName,"onProgress") ) { return hx::Val( onProgress_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { return hx::Val( _hx___errorListeners ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { return hx::Val( _hx___completeListeners ); }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { return hx::Val( _hx___progressListeners ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Future_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"ofEvents") ) { outValue = ofEvents_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"withError") ) { outValue = withError_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"withValue") ) { outValue = withValue_dyn(); return true; }
	}
	return false;
}

hx::Val Future_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"error") ) { error=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"value") ) { value=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isError") ) { isError=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isComplete") ) { isComplete=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"__errorListeners") ) { _hx___errorListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"__completeListeners") ) { _hx___completeListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__progressListeners") ) { _hx___progressListeners=inValue.Cast< ::Array< ::Dynamic> >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Future_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"));
	outFields->push(HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"));
	outFields->push(HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"));
	outFields->push(HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"));
	outFields->push(HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"));
	outFields->push(HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"));
	outFields->push(HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Future_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,error),HX_HCSTRING("error","\xc8","\xcb","\x29","\x73")},
	{hx::fsBool,(int)offsetof(Future_obj,isComplete),HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa")},
	{hx::fsBool,(int)offsetof(Future_obj,isError),HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Future_obj,value),HX_HCSTRING("value","\x71","\x7f","\xb8","\x31")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___completeListeners),HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___errorListeners),HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(Future_obj,_hx___progressListeners),HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Future_obj_sStaticStorageInfo = 0;
#endif

static ::String Future_obj_sMemberFields[] = {
	HX_HCSTRING("error","\xc8","\xcb","\x29","\x73"),
	HX_HCSTRING("isComplete","\xc3","\x12","\x77","\xfa"),
	HX_HCSTRING("isError","\x7e","\x6f","\xaf","\x0f"),
	HX_HCSTRING("value","\x71","\x7f","\xb8","\x31"),
	HX_HCSTRING("__completeListeners","\x66","\x0e","\x5a","\x85"),
	HX_HCSTRING("__errorListeners","\xb7","\x4b","\x93","\x70"),
	HX_HCSTRING("__progressListeners","\xf2","\x98","\xe2","\x78"),
	HX_HCSTRING("onComplete","\xf8","\xd4","\x7e","\x5d"),
	HX_HCSTRING("onError","\x29","\x6a","\x67","\x09"),
	HX_HCSTRING("onProgress","\xec","\xcb","\xe1","\x63"),
	HX_HCSTRING("ready","\x63","\xa0","\xba","\xe6"),
	HX_HCSTRING("result","\xdd","\x68","\x84","\x08"),
	HX_HCSTRING("then","\xdd","\x02","\xfc","\x4c"),
	::String(null()) };

static void Future_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Future_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Future_obj::__mClass,"__mClass");
};

#endif

hx::Class Future_obj::__mClass;

static ::String Future_obj_sStaticFields[] = {
	HX_HCSTRING("ofEvents","\x90","\x8f","\x6b","\x29"),
	HX_HCSTRING("withError","\xe2","\x2f","\x17","\xf7"),
	HX_HCSTRING("withValue","\x8b","\xe3","\xa5","\xb5"),
	::String(null())
};

void Future_obj::__register()
{
	hx::Object *dummy = new Future_obj;
	Future_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.app.Future","\x49","\x39","\x57","\xcb");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Future_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Future_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Future_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Future_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Future_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Future_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Future_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Future_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace app
