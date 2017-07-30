// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Rectangle
#include <lime/utils/ObjectPool_openfl_geom_Rectangle.h>
#endif
#ifndef INCLUDED_lime_utils__DataPointer_DataPointer_Impl_
#include <lime/utils/_DataPointer/DataPointer_Impl_.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractBlendModeManager
#include <openfl/_internal/renderer/AbstractBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractFilterManager
#include <openfl/_internal/renderer/AbstractFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractMaskManager
#include <openfl/_internal/renderer/AbstractMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractRenderer
#include <openfl/_internal/renderer/AbstractRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_AbstractShaderManager
#include <openfl/_internal/renderer/AbstractShaderManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_cairo_CairoGraphics
#include <openfl/_internal/renderer/cairo/CairoGraphics.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLDisplayObject
#include <openfl/_internal/renderer/opengl/GLDisplayObject.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_Shader
#include <openfl/display/Shader.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderData
#include <openfl/display/ShaderData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderInput_openfl_display_BitmapData
#include <openfl/display/ShaderInput_openfl_display_BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_ShaderParameter_Float
#include <openfl/display/ShaderParameter_Float.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_2687fe8a484538ac_22_render,"openfl._internal.renderer.opengl.GLDisplayObject","render",0xfc18482c,"openfl._internal.renderer.opengl.GLDisplayObject.render","openfl/_internal/renderer/opengl/GLDisplayObject.hx",22,0xe7a796c8)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLDisplayObject_obj::__construct() { }

Dynamic GLDisplayObject_obj::__CreateEmpty() { return new GLDisplayObject_obj; }

void *GLDisplayObject_obj::_hx_vtable = 0;

Dynamic GLDisplayObject_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLDisplayObject_obj > _hx_result = new GLDisplayObject_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool GLDisplayObject_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x537e993e;
}

void GLDisplayObject_obj::render( ::openfl::display::DisplayObject displayObject, ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_2687fe8a484538ac_22_render)
HXLINE(  24)		bool _hx_tmp;
HXDLIN(  24)		if (hx::IsNull( displayObject->opaqueBackground )) {
HXLINE(  24)			_hx_tmp = hx::IsNull( displayObject->_hx___graphics );
            		}
            		else {
HXLINE(  24)			_hx_tmp = false;
            		}
HXDLIN(  24)		if (_hx_tmp) {
HXLINE(  24)			return;
            		}
HXLINE(  25)		bool _hx_tmp1;
HXDLIN(  25)		if (!(!(displayObject->_hx___renderable))) {
HXLINE(  25)			_hx_tmp1 = (displayObject->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXLINE(  25)			_hx_tmp1 = true;
            		}
HXDLIN(  25)		if (_hx_tmp1) {
HXLINE(  25)			return;
            		}
HXLINE(  27)		bool _hx_tmp2;
HXDLIN(  27)		bool _hx_tmp3;
HXDLIN(  27)		bool _hx_tmp4;
HXDLIN(  27)		if (hx::IsNotNull( displayObject->opaqueBackground )) {
HXLINE(  27)			_hx_tmp4 = !(displayObject->_hx___cacheBitmapRender);
            		}
            		else {
HXLINE(  27)			_hx_tmp4 = false;
            		}
HXDLIN(  27)		if (_hx_tmp4) {
HXLINE(  27)			_hx_tmp3 = (displayObject->get_width() > (int)0);
            		}
            		else {
HXLINE(  27)			_hx_tmp3 = false;
            		}
HXDLIN(  27)		if (_hx_tmp3) {
HXLINE(  27)			_hx_tmp2 = (displayObject->get_height() > (int)0);
            		}
            		else {
HXLINE(  27)			_hx_tmp2 = false;
            		}
HXDLIN(  27)		if (_hx_tmp2) {
HXLINE(  29)			renderSession->maskManager->pushObject(displayObject,null());
HXLINE(  31)			 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXLINE(  33)			 ::openfl::geom::Rectangle rect = ::openfl::geom::Rectangle_obj::_hx___pool->get();
HXLINE(  34)			Float _hx_tmp5 = displayObject->get_width();
HXDLIN(  34)			rect->setTo((int)0,(int)0,_hx_tmp5,displayObject->get_height());
HXLINE(  35)			renderSession->maskManager->pushRect(rect,displayObject->_hx___renderTransform);
HXLINE(  37)			int color = displayObject->opaqueBackground;
HXLINE(  38)			gl->clearColor(((Float)((int)hx::UShr(color,(int)16) & (int)(int)255) / (Float)(int)255),((Float)((int)hx::UShr(color,(int)8) & (int)(int)255) / (Float)(int)255),((Float)((int)color & (int)(int)255) / (Float)(int)255),(int)1);
HXLINE(  39)			gl->clear(gl->COLOR_BUFFER_BIT);
HXLINE(  41)			renderSession->maskManager->popRect();
HXLINE(  42)			renderSession->maskManager->popObject(displayObject,null());
HXLINE(  44)			::openfl::geom::Rectangle_obj::_hx___pool->release(rect);
            		}
HXLINE(  48)		if (hx::IsNotNull( displayObject->_hx___graphics )) {
HXLINE(  50)			bool _hx_tmp6;
HXDLIN(  50)			if (!(!(displayObject->_hx___renderable))) {
HXLINE(  50)				_hx_tmp6 = (displayObject->_hx___worldAlpha <= (int)0);
            			}
            			else {
HXLINE(  50)				_hx_tmp6 = true;
            			}
HXDLIN(  50)			if (!(_hx_tmp6)) {
HXLINE(  50)				 ::openfl::display::Graphics graphics = displayObject->_hx___graphics;
HXDLIN(  50)				if (hx::IsNotNull( graphics )) {
HXLINE(  50)					::openfl::_internal::renderer::cairo::CairoGraphics_obj::render(graphics,renderSession,displayObject->_hx___renderTransform);
HXDLIN(  50)					 ::openfl::geom::Rectangle bounds = graphics->_hx___bounds;
HXDLIN(  50)					bool _hx_tmp7;
HXDLIN(  50)					if (hx::IsNotNull( graphics->_hx___bitmap )) {
HXLINE(  50)						_hx_tmp7 = graphics->_hx___visible;
            					}
            					else {
HXLINE(  50)						_hx_tmp7 = false;
            					}
HXDLIN(  50)					if (_hx_tmp7) {
HXLINE(  50)						 ::openfl::_internal::renderer::opengl::GLRenderer renderer = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXDLIN(  50)						 ::lime::_backend::native::NativeGLRenderContext gl1 = renderSession->gl;
HXDLIN(  50)						renderSession->blendModeManager->setBlendMode(displayObject->_hx___worldBlendMode);
HXDLIN(  50)						renderSession->maskManager->pushObject(displayObject,null());
HXDLIN(  50)						 ::openfl::display::Shader shader = renderSession->filterManager->pushObject(displayObject);
HXDLIN(  50)						shader->get_data()->uImage0->input = graphics->_hx___bitmap;
HXDLIN(  50)						shader->get_data()->uImage0->smoothing = renderSession->allowSmoothing;
HXDLIN(  50)						shader->get_data()->uMatrix->value = renderer->getMatrix(graphics->_hx___worldTransform);
HXDLIN(  50)						renderSession->shaderManager->setShader(shader);
HXDLIN(  50)						int gl2 = gl1->ARRAY_BUFFER;
HXDLIN(  50)						gl1->bindBuffer(gl2,graphics->_hx___bitmap->getBuffer(gl1,displayObject->_hx___worldAlpha));
HXDLIN(  50)						int _hx_tmp8 = shader->get_data()->aPosition->index;
HXDLIN(  50)						int gl3 = gl1->FLOAT;
HXDLIN(  50)						gl1->vertexAttribPointer(_hx_tmp8,(int)3,gl3,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
HXDLIN(  50)						int _hx_tmp9 = shader->get_data()->aTexCoord->index;
HXDLIN(  50)						int gl4 = gl1->FLOAT;
HXDLIN(  50)						gl1->vertexAttribPointer(_hx_tmp9,(int)2,gl4,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
HXDLIN(  50)						int _hx_tmp10 = shader->get_data()->aAlpha->index;
HXDLIN(  50)						int gl5 = gl1->FLOAT;
HXDLIN(  50)						gl1->vertexAttribPointer(_hx_tmp10,(int)1,gl5,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)20));
HXDLIN(  50)						gl1->drawArrays(gl1->TRIANGLE_STRIP,(int)0,(int)4);
HXDLIN(  50)						renderSession->filterManager->popObject(displayObject);
HXDLIN(  50)						renderSession->maskManager->popObject(displayObject,null());
            					}
            				}
            			}
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(GLDisplayObject_obj,render,(void))


GLDisplayObject_obj::GLDisplayObject_obj()
{
}

bool GLDisplayObject_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *GLDisplayObject_obj_sMemberStorageInfo = 0;
static hx::StaticInfo *GLDisplayObject_obj_sStaticStorageInfo = 0;
#endif

static void GLDisplayObject_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLDisplayObject_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLDisplayObject_obj::__mClass,"__mClass");
};

#endif

hx::Class GLDisplayObject_obj::__mClass;

static ::String GLDisplayObject_obj_sStaticFields[] = {
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	::String(null())
};

void GLDisplayObject_obj::__register()
{
	hx::Object *dummy = new GLDisplayObject_obj;
	GLDisplayObject_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLDisplayObject","\xd8","\x44","\x6d","\x02");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &GLDisplayObject_obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLDisplayObject_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(GLDisplayObject_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< GLDisplayObject_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLDisplayObject_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLDisplayObject_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLDisplayObject_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl
