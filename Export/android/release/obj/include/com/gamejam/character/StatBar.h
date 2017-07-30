// Generated by Haxe 3.4.2
#ifndef INCLUDED_com_gamejam_character_StatBar
#define INCLUDED_com_gamejam_character_StatBar

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(com,gamejam,character,StatBar)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)
HX_DECLARE_CLASS2(openfl,text,TextField)

namespace com{
namespace gamejam{
namespace character{


class HXCPP_CLASS_ATTRIBUTES StatBar_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef StatBar_obj OBJ_;
		StatBar_obj();

	public:
		enum { _hx_ClassId = 0x7b80655d };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.gamejam.character.StatBar")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.gamejam.character.StatBar"); }
		static hx::ObjectPtr< StatBar_obj > __new();
		static hx::ObjectPtr< StatBar_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~StatBar_obj();

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
		::String __ToString() const { return HX_HCSTRING("StatBar","\x3f","\xca","\x98","\x03"); }

		static void __boot();
		static int BORDER_SIZE;
		static int BAR_WIDTH;
		static int BAR_HEIGHT;
		static int FILL_WIDTH;
		static int FILL_HEIGHT;
		static int BORDER_COLOR;
		static int MASK_COLOR;
		static int FILL_COLOR;
		 ::openfl::display::Sprite border;
		 ::openfl::display::Sprite borderMask;
		 ::openfl::display::Sprite fill;
		Float statValue;
		Float deltaOverTime;
		 ::openfl::text::TextField statNameText;
		void updateStat(Float dT);
		::Dynamic updateStat_dyn();

		void drawStatBar(Float fillPct);
		::Dynamic drawStatBar_dyn();

};

} // end namespace com
} // end namespace gamejam
} // end namespace character

#endif /* INCLUDED_com_gamejam_character_StatBar */ 
