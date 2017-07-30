// Generated by Haxe 3.4.2
#ifndef INCLUDED_com_gamejam_screens_CharacterSetup
#define INCLUDED_com_gamejam_screens_CharacterSetup

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(com,gamejam,character,StatBar)
HX_DECLARE_CLASS3(com,gamejam,screens,CharacterSetup)
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
namespace screens{


class HXCPP_CLASS_ATTRIBUTES CharacterSetup_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef CharacterSetup_obj OBJ_;
		CharacterSetup_obj();

	public:
		enum { _hx_ClassId = 0x5d7b6558 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.gamejam.screens.CharacterSetup")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.gamejam.screens.CharacterSetup"); }
		static hx::ObjectPtr< CharacterSetup_obj > __new();
		static hx::ObjectPtr< CharacterSetup_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CharacterSetup_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CharacterSetup","\x34","\xf2","\x96","\xfa"); }

		 ::openfl::text::TextField createCharacterText;
		 ::com::gamejam::utils::TextButton createCharacterButton;
		 ::com::gamejam::character::StatBar statBar;
};

} // end namespace com
} // end namespace gamejam
} // end namespace screens

#endif /* INCLUDED_com_gamejam_screens_CharacterSetup */ 
