// Generated by Haxe 3.4.2
#ifndef INCLUDED_openfl__internal_stage3D_Context3DStateCache
#define INCLUDED_openfl__internal_stage3D_Context3DStateCache

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_Vector,FloatVector)
HX_DECLARE_CLASS2(openfl,_Vector,IVector)
HX_DECLARE_CLASS3(openfl,_internal,stage3D,Context3DStateCache)
HX_DECLARE_CLASS2(openfl,display3D,Program3D)

namespace openfl{
namespace _internal{
namespace stage3D{


class HXCPP_CLASS_ATTRIBUTES Context3DStateCache_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef Context3DStateCache_obj OBJ_;
		Context3DStateCache_obj();

	public:
		enum { _hx_ClassId = 0x10288b06 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl._internal.stage3D.Context3DStateCache")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"openfl._internal.stage3D.Context3DStateCache"); }
		static hx::ObjectPtr< Context3DStateCache_obj > __new();
		static hx::ObjectPtr< Context3DStateCache_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Context3DStateCache_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Context3DStateCache","\xd1","\x06","\xfa","\x71"); }

		static void __boot();
		static int FLOATS_PER_REGISTER;
		static int MAX_NUM_REGISTERS;
		static bool disableCache;
		int _activeTexture;
		int _activeVertexArray;
		 ::Dynamic _cullingMode;
		 ::Dynamic _depthTestCompareMode;
		bool _depthTestEnabled;
		bool _depthTestMask;
		 ::Dynamic _destBlendFactor;
		 ::openfl::display3D::Program3D _program;
		 ::openfl::_Vector::FloatVector _registers;
		 ::Dynamic _srcBlendFactor;
		int _viewportHeight;
		int _viewportOriginX;
		int _viewportOriginY;
		int _viewportWidth;
		void clearRegisters();
		::Dynamic clearRegisters_dyn();

		void clearSettings();
		::Dynamic clearSettings_dyn();

		bool updateActiveTextureSample(int texture);
		::Dynamic updateActiveTextureSample_dyn();

		bool updateActiveVertexArray(int vertexArray);
		::Dynamic updateActiveVertexArray_dyn();

		bool updateBlendDestFactor( ::Dynamic factor);
		::Dynamic updateBlendDestFactor_dyn();

		bool updateBlendSrcFactor( ::Dynamic factor);
		::Dynamic updateBlendSrcFactor_dyn();

		bool updateCullingMode( ::Dynamic cullMode);
		::Dynamic updateCullingMode_dyn();

		bool updateDepthCompareMode( ::Dynamic mode);
		::Dynamic updateDepthCompareMode_dyn();

		bool updateDepthTestEnabled(bool test);
		::Dynamic updateDepthTestEnabled_dyn();

		bool updateDepthTestMask(bool mask);
		::Dynamic updateDepthTestMask_dyn();

		bool updateProgram3D( ::openfl::display3D::Program3D program3d);
		::Dynamic updateProgram3D_dyn();

		bool updateRegisters( ::openfl::_Vector::FloatVector mTemp,int startRegister,int numRegisters);
		::Dynamic updateRegisters_dyn();

		bool updateViewport(int originX,int originY,int width,int height);
		::Dynamic updateViewport_dyn();

};

} // end namespace openfl
} // end namespace _internal
} // end namespace stage3D

#endif /* INCLUDED_openfl__internal_stage3D_Context3DStateCache */ 
