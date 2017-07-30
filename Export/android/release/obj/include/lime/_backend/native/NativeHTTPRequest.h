// Generated by Haxe 3.4.2
#ifndef INCLUDED_lime__backend_native_NativeHTTPRequest
#define INCLUDED_lime__backend_native_NativeHTTPRequest

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(lime,_backend,native,NativeHTTPRequest)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,app,Promise_haxe_io_Bytes)
HX_DECLARE_CLASS2(lime,net,_IHTTPRequest)
HX_DECLARE_CLASS2(lime,_hx_system,ThreadPool)

namespace lime{
namespace _backend{
namespace native{


class HXCPP_CLASS_ATTRIBUTES NativeHTTPRequest_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef NativeHTTPRequest_obj OBJ_;
		NativeHTTPRequest_obj();

	public:
		enum { _hx_ClassId = 0x16ba4f4b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lime._backend.native.NativeHTTPRequest")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lime._backend.native.NativeHTTPRequest"); }
		static hx::ObjectPtr< NativeHTTPRequest_obj > __new();
		static hx::ObjectPtr< NativeHTTPRequest_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~NativeHTTPRequest_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("NativeHTTPRequest","\x50","\xe4","\xb2","\x51"); }

		static  ::lime::_hx_system::ThreadPool threadPool;
		static void threadPool_doWork( ::Dynamic state);
		static ::Dynamic threadPool_doWork_dyn();

		static void threadPool_onComplete( ::Dynamic state);
		static ::Dynamic threadPool_onComplete_dyn();

		static void threadPool_onError( ::Dynamic state);
		static ::Dynamic threadPool_onError_dyn();

		 ::haxe::io::Bytes bytes;
		int bytesLoaded;
		int bytesTotal;
		Float curl;
		::Dynamic parent;
		 ::lime::app::Promise_haxe_io_Bytes promise;
		int readPosition;
		void cancel();
		::Dynamic cancel_dyn();

		void init(::Dynamic parent);
		::Dynamic init_dyn();

		 ::lime::app::Future loadData(::String uri,hx::Null< bool >  binary);
		::Dynamic loadData_dyn();

		void loadFile(::String path);
		::Dynamic loadFile_dyn();

		 ::lime::app::Future loadText(::String uri);
		::Dynamic loadText_dyn();

		void loadURL(::String uri,bool binary);
		::Dynamic loadURL_dyn();

		int curl_onHeader( ::haxe::io::Bytes output,int size,int nmemb);
		::Dynamic curl_onHeader_dyn();

		int curl_onProgress(Float dltotal,Float dlnow,Float uptotal,Float upnow);
		::Dynamic curl_onProgress_dyn();

		 ::haxe::io::Bytes curl_onRead(int max, ::haxe::io::Bytes input);
		::Dynamic curl_onRead_dyn();

		int curl_onWrite( ::haxe::io::Bytes output,int size,int nmemb);
		::Dynamic curl_onWrite_dyn();

};

} // end namespace lime
} // end namespace _backend
} // end namespace native

#endif /* INCLUDED_lime__backend_native_NativeHTTPRequest */ 
