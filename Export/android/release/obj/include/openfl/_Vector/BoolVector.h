// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__Vector_BoolVector
#define INCLUDED_openfl__Vector_BoolVector

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
HX_DECLARE_CLASS2(openfl,_Vector,BoolVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)

namespace openfl{
namespace _Vector{


class HXCPP_CLASS_ATTRIBUTES BoolVector_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef BoolVector_obj OBJ_;
		BoolVector_obj();

	public:
		enum { _hx_ClassId = 0x63ff549f };

		void __construct( ::Dynamic length, ::Dynamic fixed,::Array< bool > array);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._Vector.BoolVector")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._Vector.BoolVector"); }
		static hx::ObjectPtr< BoolVector_obj > __new( ::Dynamic length, ::Dynamic fixed,::Array< bool > array);
		static hx::ObjectPtr< BoolVector_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic length, ::Dynamic fixed,::Array< bool > array);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~BoolVector_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		void unshift_489e4d05( ::Dynamic x);

		 ::Dynamic set_15539e57(int index, ::Dynamic value);

		int push_9c73657a( ::Dynamic x);

		int lastIndexOf_02dfccf1( ::Dynamic x, ::Dynamic from);

		void insertAt_5d1f93e2(int index, ::Dynamic element);

		int indexOf_02dfccf1( ::Dynamic x, ::Dynamic from);

		 ::Dynamic get_c4bfee54(int index);
		::String __ToString() const { return HX_HCSTRING("BoolVector","\xad","\x28","\xbf","\x2d"); }

		bool fixed;
		::Array< bool > _hx___array;
		::Dynamic concat(::Dynamic a);
		::Dynamic concat_dyn();

		::Dynamic copy();
		::Dynamic copy_dyn();

		bool get(int index);
		::Dynamic get_dyn();

		int indexOf(bool x, ::Dynamic from);
		::Dynamic indexOf_dyn();

		void insertAt(int index,bool element);
		::Dynamic insertAt_dyn();

		 ::Dynamic iterator();
		::Dynamic iterator_dyn();

		::String join(::String sep);
		::Dynamic join_dyn();

		int lastIndexOf(bool x, ::Dynamic from);
		::Dynamic lastIndexOf_dyn();

		 ::Dynamic pop();
		::Dynamic pop_dyn();

		int push(bool x);
		::Dynamic push_dyn();

		::Dynamic reverse();
		::Dynamic reverse_dyn();

		bool set(int index,bool value);
		::Dynamic set_dyn();

		 ::Dynamic shift();
		::Dynamic shift_dyn();

		::Dynamic slice( ::Dynamic startIndex, ::Dynamic endIndex);
		::Dynamic slice_dyn();

		void sort( ::Dynamic f);
		::Dynamic sort_dyn();

		::Dynamic splice(int pos,int len);
		::Dynamic splice_dyn();

		virtual ::String toString();
		::Dynamic toString_dyn();

		void unshift(bool x);
		::Dynamic unshift_dyn();

		int get_length();
		::Dynamic get_length_dyn();

		int set_length(int value);
		::Dynamic set_length_dyn();

};

} // end namespace openfl
} // end namespace _Vector

#endif /* INCLUDED_openfl__Vector_BoolVector */ 
