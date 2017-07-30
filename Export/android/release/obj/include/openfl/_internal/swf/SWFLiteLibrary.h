// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__internal_swf_SWFLiteLibrary
#define INCLUDED_openfl__internal_swf_SWFLiteLibrary

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_utils_AssetLibrary
#include <openfl/utils/AssetLibrary.h>
#endif
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)
HX_DECLARE_CLASS2(lime,app,Future)
HX_DECLARE_CLASS2(lime,graphics,Image)
HX_DECLARE_CLASS2(lime,utils,AssetLibrary)
HX_DECLARE_CLASS2(lime,utils,AssetManifest)
HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLite)
HX_DECLARE_CLASS3(openfl,_internal,swf,SWFLiteLibrary)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,MovieClip)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,utils,AssetLibrary)

namespace openfl{
namespace _internal{
namespace swf{


class HXCPP_CLASS_ATTRIBUTES SWFLiteLibrary_obj : public  ::openfl::utils::AssetLibrary_obj
{
	public:
		typedef  ::openfl::utils::AssetLibrary_obj super;
		typedef SWFLiteLibrary_obj OBJ_;
		SWFLiteLibrary_obj();

	public:
		enum { _hx_ClassId = 0x5a0d44e1 };

		void __construct(::String id);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.swf.SWFLiteLibrary")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.swf.SWFLiteLibrary"); }
		static hx::ObjectPtr< SWFLiteLibrary_obj > __new(::String id);
		static hx::ObjectPtr< SWFLiteLibrary_obj > __alloc(hx::Ctx *_hx_ctx,::String id);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SWFLiteLibrary_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SWFLiteLibrary","\x6b","\x93","\x93","\x20"); }

		 ::haxe::ds::StringMap alphaCheck;
		::String id;
		 ::haxe::ds::StringMap imageClassNames;
		bool preloading;
		::String rootPath;
		 ::openfl::_internal::swf::SWFLite swf;
		bool exists(::String id,::String type);

		 ::lime::graphics::Image getImage(::String id);

		 ::openfl::display::MovieClip getMovieClip(::String id);

		bool isLocal(::String id,::String type);

		 ::lime::app::Future load();

		 ::lime::app::Future loadImage(::String id);

		void unload();

		void _hx___copyChannel( ::lime::graphics::Image image, ::lime::graphics::Image alpha);
		::Dynamic _hx___copyChannel_dyn();

		void _hx___fromManifest( ::lime::utils::AssetManifest manifest);

		 ::lime::app::Future _hx___load();
		::Dynamic _hx___load_dyn();

		 ::lime::app::Future _hx___loadImage(::String id);
		::Dynamic _hx___loadImage_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace swf

#endif /* INCLUDED_openfl__internal_swf_SWFLiteLibrary */ 
