// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_List
#include <List.h>
#endif
#ifndef INCLUDED_com_gamejam_character_Character
#include <com/gamejam/character/Character.h>
#endif
#ifndef INCLUDED_com_gamejam_enums_CharacterType
#include <com/gamejam/enums/CharacterType.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f45ba8bdf19e2761_14_new,"com.gamejam.character.Character","new",0xd71e11ff,"com.gamejam.character.Character.new","com/gamejam/character/Character.hx",14,0x5c38aa54)
namespace com{
namespace gamejam{
namespace character{

void Character_obj::__construct(::String characterName, ::com::gamejam::enums::CharacterType characterClass){
            	HX_GC_STACKFRAME(&_hx_pos_f45ba8bdf19e2761_14_new)
HXLINE(  16)		super::__construct();
HXLINE(  18)		this->stats =  ::List_obj::__alloc( HX_CTX );
HXLINE(  19)		this->charName = characterName;
HXLINE(  20)		this->charClass = characterClass;
            	}

Dynamic Character_obj::__CreateEmpty() { return new Character_obj; }

void *Character_obj::_hx_vtable = 0;

Dynamic Character_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Character_obj > _hx_result = new Character_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool Character_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x17120186) {
		if (inClassId<=(int)0x0ddfced7) {
			if (inClassId<=(int)0x097bcb8b) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x097bcb8b;
			} else {
				return inClassId==(int)0x0ddfced7;
			}
		} else {
			return inClassId==(int)0x17120186;
		}
	} else {
		if (inClassId<=(int)0x1b123bf8) {
			return inClassId==(int)0x19c29573 || inClassId==(int)0x1b123bf8;
		} else {
			return inClassId==(int)0x3f2b00af;
		}
	}
}


hx::ObjectPtr< Character_obj > Character_obj::__new(::String characterName, ::com::gamejam::enums::CharacterType characterClass) {
	hx::ObjectPtr< Character_obj > __this = new Character_obj();
	__this->__construct(characterName,characterClass);
	return __this;
}

hx::ObjectPtr< Character_obj > Character_obj::__alloc(hx::Ctx *_hx_ctx,::String characterName, ::com::gamejam::enums::CharacterType characterClass) {
	Character_obj *__this = (Character_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Character_obj), true, "com.gamejam.character.Character"));
	*(void **)__this = Character_obj::_hx_vtable;
	__this->__construct(characterName,characterClass);
	return __this;
}

Character_obj::Character_obj()
{
}

void Character_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Character);
	HX_MARK_MEMBER_NAME(stats,"stats");
	HX_MARK_MEMBER_NAME(charClass,"charClass");
	HX_MARK_MEMBER_NAME(charName,"charName");
	 ::openfl::display::Sprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Character_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(stats,"stats");
	HX_VISIT_MEMBER_NAME(charClass,"charClass");
	HX_VISIT_MEMBER_NAME(charName,"charName");
	 ::openfl::display::Sprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Character_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { return hx::Val( stats ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charName") ) { return hx::Val( charName ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"charClass") ) { return hx::Val( charClass ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Character_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"stats") ) { stats=inValue.Cast<  ::List >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"charName") ) { charName=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"charClass") ) { charClass=inValue.Cast<  ::com::gamejam::enums::CharacterType >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Character_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"));
	outFields->push(HX_HCSTRING("charClass","\x82","\x01","\xb1","\x01"));
	outFields->push(HX_HCSTRING("charName","\x41","\x20","\x5f","\xa3"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Character_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::List*/ ,(int)offsetof(Character_obj,stats),HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84")},
	{hx::fsObject /*::com::gamejam::enums::CharacterType*/ ,(int)offsetof(Character_obj,charClass),HX_HCSTRING("charClass","\x82","\x01","\xb1","\x01")},
	{hx::fsString,(int)offsetof(Character_obj,charName),HX_HCSTRING("charName","\x41","\x20","\x5f","\xa3")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Character_obj_sStaticStorageInfo = 0;
#endif

static ::String Character_obj_sMemberFields[] = {
	HX_HCSTRING("stats","\x1f","\x76","\x0b","\x84"),
	HX_HCSTRING("charClass","\x82","\x01","\xb1","\x01"),
	HX_HCSTRING("charName","\x41","\x20","\x5f","\xa3"),
	::String(null()) };

static void Character_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Character_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Character_obj::__mClass,"__mClass");
};

#endif

hx::Class Character_obj::__mClass;

void Character_obj::__register()
{
	hx::Object *dummy = new Character_obj;
	Character_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("com.gamejam.character.Character","\x8d","\xa6","\x17","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Character_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Character_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Character_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Character_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Character_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Character_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace com
} // end namespace gamejam
} // end namespace character
