// Generated by Haxe 3.4.2
#ifndef INCLUDED_com_gamejam_utils_TextButton
#define INCLUDED_com_gamejam_utils_TextButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_SimpleButton
#include <openfl/display/SimpleButton.h>
#endif
HX_DECLARE_CLASS3(com,gamejam,utils,TextButton)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,SimpleButton)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace com{
namespace gamejam{
namespace utils{


class HXCPP_CLASS_ATTRIBUTES TextButton_obj : public  ::openfl::display::SimpleButton_obj
{
	public:
		typedef  ::openfl::display::SimpleButton_obj super;
		typedef TextButton_obj OBJ_;
		TextButton_obj();

	public:
		enum { _hx_ClassId = 0x7ec23ee9 };

		void __construct(::String buttonText,Float w,Float h);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.gamejam.utils.TextButton")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.gamejam.utils.TextButton"); }
		static hx::ObjectPtr< TextButton_obj > __new(::String buttonText,Float w,Float h);
		static hx::ObjectPtr< TextButton_obj > __alloc(hx::Ctx *_hx_ctx,::String buttonText,Float w,Float h);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~TextButton_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("TextButton","\x9f","\xe6","\x81","\x07"); }

		 ::openfl::display::Sprite bg;
		 ::openfl::text::TextField text;
};

} // end namespace com
} // end namespace gamejam
} // end namespace utils

#endif /* INCLUDED_com_gamejam_utils_TextButton */ 
