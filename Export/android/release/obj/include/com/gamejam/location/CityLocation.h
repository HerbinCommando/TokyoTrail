// Generated by Haxe 3.4.2
#ifndef INCLUDED_com_gamejam_location_CityLocation
#define INCLUDED_com_gamejam_location_CityLocation

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
HX_DECLARE_CLASS3(com,gamejam,location,CityLocation)
HX_DECLARE_CLASS2(openfl,display,DisplayObject)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectContainer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,InteractiveObject)
HX_DECLARE_CLASS2(openfl,display,Sprite)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace com{
namespace gamejam{
namespace location{


class HXCPP_CLASS_ATTRIBUTES CityLocation_obj : public  ::openfl::display::Sprite_obj
{
	public:
		typedef  ::openfl::display::Sprite_obj super;
		typedef CityLocation_obj OBJ_;
		CityLocation_obj();

	public:
		enum { _hx_ClassId = 0x4830fa98 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="com.gamejam.location.CityLocation")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"com.gamejam.location.CityLocation"); }
		static hx::ObjectPtr< CityLocation_obj > __new();
		static hx::ObjectPtr< CityLocation_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CityLocation_obj();

		HX_DO_RTTI_ALL;
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CityLocation","\x20","\xcb","\x24","\xa5"); }

};

} // end namespace com
} // end namespace gamejam
} // end namespace location

#endif /* INCLUDED_com_gamejam_location_CityLocation */ 
