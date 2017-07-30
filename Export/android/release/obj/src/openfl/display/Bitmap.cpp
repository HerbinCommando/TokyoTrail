// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_CanvasRenderContext
#include <lime/graphics/CanvasRenderContext.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo_Cairo
#include <lime/graphics/cairo/Cairo.h>
#endif
#ifndef INCLUDED_lime_graphics_cairo__CairoPattern_CairoPattern_Impl_
#include <lime/graphics/cairo/_CairoPattern/CairoPattern_Impl_.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math_Matrix3
#include <lime/math/Matrix3.h>
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
#ifndef INCLUDED_openfl__internal_renderer_DrawCommandBuffer
#include <openfl/_internal/renderer/DrawCommandBuffer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_RenderSession
#include <openfl/_internal/renderer/RenderSession.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
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
#ifndef INCLUDED_openfl_filters_BitmapFilter
#include <openfl/filters/BitmapFilter.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f5857023424199a6_40_new,"openfl.display.Bitmap","new",0x8bc0314b,"openfl.display.Bitmap.new","openfl/display/Bitmap.hx",40,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_59___getBounds,"openfl.display.Bitmap","__getBounds",0x13081c76,"openfl.display.Bitmap.__getBounds","openfl/display/Bitmap.hx",59,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_74___hitTest,"openfl.display.Bitmap","__hitTest",0x80f61450,"openfl.display.Bitmap.__hitTest","openfl/display/Bitmap.hx",74,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_107___hitTestMask,"openfl.display.Bitmap","__hitTestMask",0x7acde95c,"openfl.display.Bitmap.__hitTestMask","openfl/display/Bitmap.hx",107,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_130___renderCairo,"openfl.display.Bitmap","__renderCairo",0x941372dd,"openfl.display.Bitmap.__renderCairo","openfl/display/Bitmap.hx",130,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_138___renderCairoMask,"openfl.display.Bitmap","__renderCairoMask",0xba721269,"openfl.display.Bitmap.__renderCairoMask","openfl/display/Bitmap.hx",138,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_145___renderCanvas,"openfl.display.Bitmap","__renderCanvas",0x00421ce3,"openfl.display.Bitmap.__renderCanvas","openfl/display/Bitmap.hx",145,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_152___renderCanvasMask,"openfl.display.Bitmap","__renderCanvasMask",0x68a5376f,"openfl.display.Bitmap.__renderCanvasMask","openfl/display/Bitmap.hx",152,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_157___renderDOM,"openfl.display.Bitmap","__renderDOM",0xfdebb997,"openfl.display.Bitmap.__renderDOM","openfl/display/Bitmap.hx",157,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_168___renderGL,"openfl.display.Bitmap","__renderGL",0xbc428090,"openfl.display.Bitmap.__renderGL","openfl/display/Bitmap.hx",168,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_173___updateMask,"openfl.display.Bitmap","__updateMask",0x5202506a,"openfl.display.Bitmap.__updateMask","openfl/display/Bitmap.hx",173,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_204_set_bitmapData,"openfl.display.Bitmap","set_bitmapData",0x81bf676b,"openfl.display.Bitmap.set_bitmapData","openfl/display/Bitmap.hx",204,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_226_get_height,"openfl.display.Bitmap","get_height",0x5901da25,"openfl.display.Bitmap.get_height","openfl/display/Bitmap.hx",226,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_239_set_height,"openfl.display.Bitmap","set_height",0x5c7f7899,"openfl.display.Bitmap.set_height","openfl/display/Bitmap.hx",239,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_259_get_width,"openfl.display.Bitmap","get_width",0x2b347588,"openfl.display.Bitmap.get_width","openfl/display/Bitmap.hx",259,0x461b2743)
HX_LOCAL_STACK_FRAME(_hx_pos_f5857023424199a6_272_set_width,"openfl.display.Bitmap","set_width",0x0e856194,"openfl.display.Bitmap.set_width","openfl/display/Bitmap.hx",272,0x461b2743)
namespace openfl{
namespace display{

void Bitmap_obj::__construct( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing){
bool smoothing = __o_smoothing.Default(false);
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_40_new)
HXLINE(  42)		super::__construct();
HXLINE(  44)		this->set_bitmapData(bitmapData);
HXLINE(  45)		this->pixelSnapping = pixelSnapping;
HXLINE(  46)		this->smoothing = smoothing;
HXLINE(  48)		if (hx::IsNull( pixelSnapping )) {
HXLINE(  50)			this->pixelSnapping = (int)1;
            		}
            	}

Dynamic Bitmap_obj::__CreateEmpty() { return new Bitmap_obj; }

void *Bitmap_obj::_hx_vtable = 0;

Dynamic Bitmap_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Bitmap_obj > _hx_result = new Bitmap_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Bitmap_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1b123bf8) {
		if (inClassId<=(int)0x19c29573) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x19c29573;
		} else {
			return inClassId==(int)0x1b123bf8;
		}
	} else {
		return inClassId==(int)0x3b5602c1;
	}
}

void Bitmap_obj::_hx___getBounds( ::openfl::geom::Rectangle rect, ::openfl::geom::Matrix matrix){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_59___getBounds)
HXDLIN(  59)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE(  61)			 ::openfl::geom::Rectangle bounds = ::openfl::geom::Rectangle_obj::_hx___pool->get();
HXLINE(  62)			bounds->setTo((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE(  63)			bounds->_hx___transform(bounds,matrix);
HXLINE(  65)			rect->_hx___expand(bounds->x,bounds->y,bounds->width,bounds->height);
HXLINE(  67)			::openfl::geom::Rectangle_obj::_hx___pool->release(bounds);
            		}
            	}


bool Bitmap_obj::_hx___hitTest(Float x,Float y,bool shapeFlag,::Array< ::Dynamic> stack,bool interactiveOnly, ::openfl::display::DisplayObject hitObject){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_74___hitTest)
HXLINE(  76)		bool _hx_tmp;
HXDLIN(  76)		bool _hx_tmp1;
HXDLIN(  76)		if (!(!(hitObject->get_visible()))) {
HXLINE(  76)			_hx_tmp1 = this->_hx___isMask;
            		}
            		else {
HXLINE(  76)			_hx_tmp1 = true;
            		}
HXDLIN(  76)		if (!(_hx_tmp1)) {
HXLINE(  76)			_hx_tmp = hx::IsNull( this->bitmapData );
            		}
            		else {
HXLINE(  76)			_hx_tmp = true;
            		}
HXDLIN(  76)		if (_hx_tmp) {
HXLINE(  76)			return false;
            		}
HXLINE(  77)		bool _hx_tmp2;
HXDLIN(  77)		if (hx::IsNotNull( this->get_mask() )) {
HXLINE(  77)			_hx_tmp2 = !(this->get_mask()->_hx___hitTestMask(x,y));
            		}
            		else {
HXLINE(  77)			_hx_tmp2 = false;
            		}
HXDLIN(  77)		if (_hx_tmp2) {
HXLINE(  77)			return false;
            		}
HXLINE(  79)		this->_hx___getRenderTransform();
HXLINE(  81)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN(  81)		Float norm = (_this->a * _this->d);
HXDLIN(  81)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN(  81)		Float px;
HXDLIN(  81)		if ((norm1 == (int)0)) {
HXLINE(  81)			px = -(_this->tx);
            		}
            		else {
HXLINE(  81)			Float _this1 = _this->c;
HXDLIN(  81)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN(  81)			Float _this2 = _this->d;
HXDLIN(  81)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE(  82)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN(  82)		Float norm2 = (_this3->a * _this3->d);
HXDLIN(  82)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN(  82)		Float py;
HXDLIN(  82)		if ((norm3 == (int)0)) {
HXLINE(  82)			py = -(_this3->ty);
            		}
            		else {
HXLINE(  82)			Float _this4 = _this3->a;
HXDLIN(  82)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN(  82)			Float _this5 = _this3->b;
HXDLIN(  82)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE(  84)		bool _hx_tmp3;
HXDLIN(  84)		bool _hx_tmp4;
HXDLIN(  84)		bool _hx_tmp5;
HXDLIN(  84)		if ((px > (int)0)) {
HXLINE(  84)			_hx_tmp5 = (py > (int)0);
            		}
            		else {
HXLINE(  84)			_hx_tmp5 = false;
            		}
HXDLIN(  84)		if (_hx_tmp5) {
HXLINE(  84)			_hx_tmp4 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE(  84)			_hx_tmp4 = false;
            		}
HXDLIN(  84)		if (_hx_tmp4) {
HXLINE(  84)			_hx_tmp3 = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE(  84)			_hx_tmp3 = false;
            		}
HXDLIN(  84)		if (_hx_tmp3) {
HXLINE(  86)			bool _hx_tmp6;
HXDLIN(  86)			if (hx::IsNotNull( this->_hx___scrollRect )) {
HXLINE(  86)				_hx_tmp6 = !(this->_hx___scrollRect->contains(px,py));
            			}
            			else {
HXLINE(  86)				_hx_tmp6 = false;
            			}
HXDLIN(  86)			if (_hx_tmp6) {
HXLINE(  88)				return false;
            			}
HXLINE(  92)			bool _hx_tmp7;
HXDLIN(  92)			if (hx::IsNotNull( stack )) {
HXLINE(  92)				_hx_tmp7 = !(interactiveOnly);
            			}
            			else {
HXLINE(  92)				_hx_tmp7 = false;
            			}
HXDLIN(  92)			if (_hx_tmp7) {
HXLINE(  94)				stack->push(hitObject);
            			}
HXLINE(  98)			return true;
            		}
HXLINE( 102)		return false;
            	}


bool Bitmap_obj::_hx___hitTestMask(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_107___hitTestMask)
HXLINE( 109)		if (hx::IsNull( this->bitmapData )) {
HXLINE( 109)			return false;
            		}
HXLINE( 111)		this->_hx___getRenderTransform();
HXLINE( 113)		 ::openfl::geom::Matrix _this = this->_hx___renderTransform;
HXDLIN( 113)		Float norm = (_this->a * _this->d);
HXDLIN( 113)		Float norm1 = (norm - (_this->b * _this->c));
HXDLIN( 113)		Float px;
HXDLIN( 113)		if ((norm1 == (int)0)) {
HXLINE( 113)			px = -(_this->tx);
            		}
            		else {
HXLINE( 113)			Float _this1 = _this->c;
HXDLIN( 113)			Float px1 = (_this1 * (_this->ty - y));
HXDLIN( 113)			Float _this2 = _this->d;
HXDLIN( 113)			px = (((Float)((Float)1.0) / (Float)norm1) * (px1 + (_this2 * (x - _this->tx))));
            		}
HXLINE( 114)		 ::openfl::geom::Matrix _this3 = this->_hx___renderTransform;
HXDLIN( 114)		Float norm2 = (_this3->a * _this3->d);
HXDLIN( 114)		Float norm3 = (norm2 - (_this3->b * _this3->c));
HXDLIN( 114)		Float py;
HXDLIN( 114)		if ((norm3 == (int)0)) {
HXLINE( 114)			py = -(_this3->ty);
            		}
            		else {
HXLINE( 114)			Float _this4 = _this3->a;
HXDLIN( 114)			Float py1 = (_this4 * (y - _this3->ty));
HXDLIN( 114)			Float _this5 = _this3->b;
HXDLIN( 114)			py = (((Float)((Float)1.0) / (Float)norm3) * (py1 + (_this5 * (_this3->tx - x))));
            		}
HXLINE( 116)		bool _hx_tmp;
HXDLIN( 116)		bool _hx_tmp1;
HXDLIN( 116)		bool _hx_tmp2;
HXDLIN( 116)		if ((px > (int)0)) {
HXLINE( 116)			_hx_tmp2 = (py > (int)0);
            		}
            		else {
HXLINE( 116)			_hx_tmp2 = false;
            		}
HXDLIN( 116)		if (_hx_tmp2) {
HXLINE( 116)			_hx_tmp1 = (px <= this->bitmapData->width);
            		}
            		else {
HXLINE( 116)			_hx_tmp1 = false;
            		}
HXDLIN( 116)		if (_hx_tmp1) {
HXLINE( 116)			_hx_tmp = (py <= this->bitmapData->height);
            		}
            		else {
HXLINE( 116)			_hx_tmp = false;
            		}
HXDLIN( 116)		if (_hx_tmp) {
HXLINE( 118)			return true;
            		}
HXLINE( 122)		return false;
            	}


void Bitmap_obj::_hx___renderCairo( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_130___renderCairo)
HXDLIN( 130)		bool _hx_tmp;
HXDLIN( 130)		if (!(!(this->_hx___renderable))) {
HXDLIN( 130)			_hx_tmp = (this->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXDLIN( 130)			_hx_tmp = true;
            		}
HXDLIN( 130)		if (!(_hx_tmp)) {
HXDLIN( 130)			 ::lime::graphics::cairo::Cairo cairo = renderSession->cairo;
HXDLIN( 130)			bool _hx_tmp1;
HXDLIN( 130)			if (hx::IsNotNull( this->bitmapData )) {
HXDLIN( 130)				_hx_tmp1 = this->bitmapData->_hx___isValid;
            			}
            			else {
HXDLIN( 130)				_hx_tmp1 = false;
            			}
HXDLIN( 130)			if (_hx_tmp1) {
HXDLIN( 130)				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 130)				 ::openfl::geom::Matrix transform = this->_hx___renderTransform;
HXDLIN( 130)				if (renderSession->roundPixels) {
HXDLIN( 130)					 ::lime::math::Matrix3 matrix = transform->_hx___toMatrix3();
HXDLIN( 130)					matrix->tx = ::Math_obj::round(matrix->tx);
HXDLIN( 130)					matrix->ty = ::Math_obj::round(matrix->ty);
HXDLIN( 130)					cairo->set_matrix(matrix);
            				}
            				else {
HXDLIN( 130)					cairo->set_matrix(transform->_hx___toMatrix3());
            				}
HXDLIN( 130)				 ::Dynamic surface = this->bitmapData->getSurface();
HXDLIN( 130)				if (hx::IsNotNull( surface )) {
HXDLIN( 130)					 ::Dynamic pattern = ::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::createForSurface(surface);
HXDLIN( 130)					int _hx_tmp2;
HXDLIN( 130)					bool _hx_tmp3;
HXDLIN( 130)					if (renderSession->allowSmoothing) {
HXDLIN( 130)						_hx_tmp3 = this->smoothing;
            					}
            					else {
HXDLIN( 130)						_hx_tmp3 = false;
            					}
HXDLIN( 130)					if (_hx_tmp3) {
HXDLIN( 130)						_hx_tmp2 = (int)1;
            					}
            					else {
HXDLIN( 130)						_hx_tmp2 = (int)3;
            					}
HXDLIN( 130)					::lime::graphics::cairo::_CairoPattern::CairoPattern_Impl__obj::set_filter(pattern,_hx_tmp2);
HXDLIN( 130)					cairo->set_source(pattern);
HXDLIN( 130)					if ((this->_hx___worldAlpha == (int)1)) {
HXDLIN( 130)						cairo->paint();
            					}
            					else {
HXDLIN( 130)						cairo->paintWithAlpha(this->_hx___worldAlpha);
            					}
            				}
HXDLIN( 130)				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
            	}


void Bitmap_obj::_hx___renderCairoMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_138___renderCairoMask)
HXDLIN( 138)		 ::lime::graphics::cairo::Cairo renderSession1 = renderSession->cairo;
HXDLIN( 138)		Float _hx_tmp = this->get_width();
HXDLIN( 138)		renderSession1->rectangle((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderCanvas( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_145___renderCanvas)
            	}


void Bitmap_obj::_hx___renderCanvasMask( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_152___renderCanvasMask)
HXDLIN( 152)		 ::lime::graphics::CanvasRenderContext renderSession1 = renderSession->context;
HXDLIN( 152)		Float _hx_tmp = this->get_width();
HXDLIN( 152)		renderSession1->rect((int)0,(int)0,_hx_tmp,this->get_height());
            	}


void Bitmap_obj::_hx___renderDOM( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_157___renderDOM)
            	}


void Bitmap_obj::_hx___renderGL( ::openfl::_internal::renderer::RenderSession renderSession){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_168___renderGL)
HXDLIN( 168)		bool _hx_tmp;
HXDLIN( 168)		if (!(!(this->_hx___renderable))) {
HXDLIN( 168)			_hx_tmp = (this->_hx___worldAlpha <= (int)0);
            		}
            		else {
HXDLIN( 168)			_hx_tmp = true;
            		}
HXDLIN( 168)		if (!(_hx_tmp)) {
HXDLIN( 168)			bool _hx_tmp1;
HXDLIN( 168)			if (hx::IsNotNull( this->bitmapData )) {
HXDLIN( 168)				_hx_tmp1 = this->bitmapData->_hx___isValid;
            			}
            			else {
HXDLIN( 168)				_hx_tmp1 = false;
            			}
HXDLIN( 168)			if (_hx_tmp1) {
HXDLIN( 168)				 ::openfl::_internal::renderer::opengl::GLRenderer renderer = ( ( ::openfl::_internal::renderer::opengl::GLRenderer)(renderSession->renderer) );
HXDLIN( 168)				 ::lime::_backend::native::NativeGLRenderContext gl = renderSession->gl;
HXDLIN( 168)				renderSession->blendModeManager->setBlendMode(this->_hx___worldBlendMode);
HXDLIN( 168)				renderSession->maskManager->pushObject(hx::ObjectPtr<OBJ_>(this),null());
HXDLIN( 168)				 ::openfl::display::Shader shader = renderSession->filterManager->pushObject(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 168)				shader->get_data()->uImage0->input = this->bitmapData;
HXDLIN( 168)				bool _hx_tmp2;
HXDLIN( 168)				if (renderSession->allowSmoothing) {
HXDLIN( 168)					if (!(this->smoothing)) {
HXDLIN( 168)						_hx_tmp2 = renderSession->upscaled;
            					}
            					else {
HXDLIN( 168)						_hx_tmp2 = true;
            					}
            				}
            				else {
HXDLIN( 168)					_hx_tmp2 = false;
            				}
HXDLIN( 168)				shader->get_data()->uImage0->smoothing = _hx_tmp2;
HXDLIN( 168)				shader->get_data()->uMatrix->value = renderer->getMatrix(this->_hx___renderTransform);
HXDLIN( 168)				renderSession->shaderManager->setShader(shader);
HXDLIN( 168)				int gl1 = gl->ARRAY_BUFFER;
HXDLIN( 168)				gl->bindBuffer(gl1,this->bitmapData->getBuffer(gl,this->_hx___worldAlpha));
HXDLIN( 168)				int _hx_tmp3 = shader->get_data()->aPosition->index;
HXDLIN( 168)				int gl2 = gl->FLOAT;
HXDLIN( 168)				gl->vertexAttribPointer(_hx_tmp3,(int)3,gl2,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)0));
HXDLIN( 168)				int _hx_tmp4 = shader->get_data()->aTexCoord->index;
HXDLIN( 168)				int gl3 = gl->FLOAT;
HXDLIN( 168)				gl->vertexAttribPointer(_hx_tmp4,(int)2,gl3,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)12));
HXDLIN( 168)				int _hx_tmp5 = shader->get_data()->aAlpha->index;
HXDLIN( 168)				int gl4 = gl->FLOAT;
HXDLIN( 168)				gl->vertexAttribPointer(_hx_tmp5,(int)1,gl4,false,(int)24,::lime::utils::_DataPointer::DataPointer_Impl__obj::fromInt((int)20));
HXDLIN( 168)				gl->drawArrays(gl->TRIANGLE_STRIP,(int)0,(int)4);
HXDLIN( 168)				renderSession->filterManager->popObject(hx::ObjectPtr<OBJ_>(this));
HXDLIN( 168)				renderSession->maskManager->popObject(hx::ObjectPtr<OBJ_>(this),null());
            			}
            		}
            	}


void Bitmap_obj::_hx___updateMask( ::openfl::display::Graphics maskGraphics){
            	HX_GC_STACKFRAME(&_hx_pos_f5857023424199a6_173___updateMask)
HXLINE( 175)		if (hx::IsNull( this->bitmapData )) {
HXLINE( 177)			return;
            		}
HXLINE( 181)		maskGraphics->_hx___commands->overrideMatrix(this->_hx___worldTransform);
HXLINE( 182)		maskGraphics->beginFill((int)0,null());
HXLINE( 183)		maskGraphics->drawRect((int)0,(int)0,this->bitmapData->width,this->bitmapData->height);
HXLINE( 185)		if (hx::IsNull( maskGraphics->_hx___bounds )) {
HXLINE( 187)			maskGraphics->_hx___bounds =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            		}
HXLINE( 191)		this->_hx___getBounds(maskGraphics->_hx___bounds,::openfl::geom::Matrix_obj::_hx___identity);
HXLINE( 193)		this->super::_hx___updateMask(maskGraphics);
            	}


 ::openfl::display::BitmapData Bitmap_obj::set_bitmapData( ::openfl::display::BitmapData value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_204_set_bitmapData)
HXLINE( 206)		this->bitmapData = value;
HXLINE( 207)		this->smoothing = false;
HXLINE( 209)		if (!(this->_hx___renderDirty)) {
HXLINE( 209)			this->_hx___renderDirty = true;
HXDLIN( 209)			this->_hx___setParentRenderDirty();
            		}
HXLINE( 211)		bool _hx_tmp;
HXDLIN( 211)		if (hx::IsNotNull( this->_hx___filters )) {
HXLINE( 211)			_hx_tmp = (this->_hx___filters->length > (int)0);
            		}
            		else {
HXLINE( 211)			_hx_tmp = false;
            		}
HXLINE( 221)		return this->bitmapData;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Bitmap_obj,set_bitmapData,return )

Float Bitmap_obj::get_height(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_226_get_height)
HXLINE( 228)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 230)			int _hx_tmp = this->bitmapData->height;
HXDLIN( 230)			return (_hx_tmp * ::Math_obj::abs(this->get_scaleY()));
            		}
HXLINE( 234)		return (int)0;
            	}


Float Bitmap_obj::set_height(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_239_set_height)
HXLINE( 241)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 243)			if ((value != this->bitmapData->height)) {
HXLINE( 245)				if (!(this->_hx___renderDirty)) {
HXLINE( 245)					this->_hx___renderDirty = true;
HXDLIN( 245)					this->_hx___setParentRenderDirty();
            				}
HXLINE( 246)				this->set_scaleY(((Float)value / (Float)this->bitmapData->height));
            			}
HXLINE( 250)			return value;
            		}
HXLINE( 254)		return (int)0;
            	}


Float Bitmap_obj::get_width(){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_259_get_width)
HXLINE( 261)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 263)			int _hx_tmp = this->bitmapData->width;
HXDLIN( 263)			return (_hx_tmp * ::Math_obj::abs(this->_hx___scaleX));
            		}
HXLINE( 267)		return (int)0;
            	}


Float Bitmap_obj::set_width(Float value){
            	HX_STACKFRAME(&_hx_pos_f5857023424199a6_272_set_width)
HXLINE( 274)		if (hx::IsNotNull( this->bitmapData )) {
HXLINE( 276)			if ((value != this->bitmapData->width)) {
HXLINE( 278)				if (!(this->_hx___renderDirty)) {
HXLINE( 278)					this->_hx___renderDirty = true;
HXDLIN( 278)					this->_hx___setParentRenderDirty();
            				}
HXLINE( 279)				this->set_scaleX(((Float)value / (Float)this->bitmapData->width));
            			}
HXLINE( 283)			return value;
            		}
HXLINE( 287)		return (int)0;
            	}



hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__new( ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	hx::ObjectPtr< Bitmap_obj > __this = new Bitmap_obj();
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

hx::ObjectPtr< Bitmap_obj > Bitmap_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::BitmapData bitmapData, ::Dynamic pixelSnapping,hx::Null< bool >  __o_smoothing) {
	Bitmap_obj *__this = (Bitmap_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Bitmap_obj), true, "openfl.display.Bitmap"));
	*(void **)__this = Bitmap_obj::_hx_vtable;
	__this->__construct(bitmapData,pixelSnapping,__o_smoothing);
	return __this;
}

Bitmap_obj::Bitmap_obj()
{
}

void Bitmap_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Bitmap);
	HX_MARK_MEMBER_NAME(bitmapData,"bitmapData");
	HX_MARK_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_MARK_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::DisplayObject_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Bitmap_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitmapData,"bitmapData");
	HX_VISIT_MEMBER_NAME(pixelSnapping,"pixelSnapping");
	HX_VISIT_MEMBER_NAME(smoothing,"smoothing");
	 ::openfl::display::DisplayObject_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Bitmap_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { return hx::Val( smoothing ); }
		if (HX_FIELD_EQ(inName,"__hitTest") ) { return hx::Val( _hx___hitTest_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_width") ) { return hx::Val( get_width_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_width") ) { return hx::Val( set_width_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { return hx::Val( bitmapData ); }
		if (HX_FIELD_EQ(inName,"__renderGL") ) { return hx::Val( _hx___renderGL_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_height") ) { return hx::Val( get_height_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_height") ) { return hx::Val( set_height_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__getBounds") ) { return hx::Val( _hx___getBounds_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderDOM") ) { return hx::Val( _hx___renderDOM_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"__updateMask") ) { return hx::Val( _hx___updateMask_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { return hx::Val( pixelSnapping ); }
		if (HX_FIELD_EQ(inName,"__hitTestMask") ) { return hx::Val( _hx___hitTestMask_dyn() ); }
		if (HX_FIELD_EQ(inName,"__renderCairo") ) { return hx::Val( _hx___renderCairo_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__renderCanvas") ) { return hx::Val( _hx___renderCanvas_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_bitmapData") ) { return hx::Val( set_bitmapData_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__renderCairoMask") ) { return hx::Val( _hx___renderCairoMask_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"__renderCanvasMask") ) { return hx::Val( _hx___renderCanvasMask_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val Bitmap_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"smoothing") ) { smoothing=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bitmapData") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_bitmapData(inValue.Cast<  ::openfl::display::BitmapData >()) );bitmapData=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"pixelSnapping") ) { pixelSnapping=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Bitmap_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"));
	outFields->push(HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"));
	outFields->push(HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Bitmap_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(Bitmap_obj,bitmapData),HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Bitmap_obj,pixelSnapping),HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8")},
	{hx::fsBool,(int)offsetof(Bitmap_obj,smoothing),HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *Bitmap_obj_sStaticStorageInfo = 0;
#endif

static ::String Bitmap_obj_sMemberFields[] = {
	HX_HCSTRING("bitmapData","\xb9","\xb5","\xc0","\x33"),
	HX_HCSTRING("pixelSnapping","\x62","\xae","\xa1","\xb8"),
	HX_HCSTRING("smoothing","\x74","\xd5","\xe1","\x95"),
	HX_HCSTRING("__getBounds","\x8b","\x58","\xa0","\x10"),
	HX_HCSTRING("__hitTest","\x25","\xb1","\xcd","\x63"),
	HX_HCSTRING("__hitTestMask","\xb1","\x14","\xfd","\x3b"),
	HX_HCSTRING("__renderCairo","\x32","\x9e","\x42","\x55"),
	HX_HCSTRING("__renderCairoMask","\x3e","\x0c","\x22","\x6b"),
	HX_HCSTRING("__renderCanvas","\xee","\xdb","\x58","\x48"),
	HX_HCSTRING("__renderCanvasMask","\xfa","\xd7","\xef","\x51"),
	HX_HCSTRING("__renderDOM","\xac","\xf5","\x83","\xfb"),
	HX_HCSTRING("__renderGL","\x1b","\x1e","\x14","\x56"),
	HX_HCSTRING("__updateMask","\xb5","\xa6","\x9e","\x39"),
	HX_HCSTRING("set_bitmapData","\x76","\x26","\xd6","\xc9"),
	HX_HCSTRING("get_height","\xb0","\x77","\xd3","\xf2"),
	HX_HCSTRING("set_height","\x24","\x16","\x51","\xf6"),
	HX_HCSTRING("get_width","\x5d","\x12","\x0c","\x0e"),
	HX_HCSTRING("set_width","\x69","\xfe","\x5c","\xf1"),
	::String(null()) };

static void Bitmap_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Bitmap_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Bitmap_obj::__mClass,"__mClass");
};

#endif

hx::Class Bitmap_obj::__mClass;

void Bitmap_obj::__register()
{
	hx::Object *dummy = new Bitmap_obj;
	Bitmap_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.Bitmap","\xd9","\x2f","\x4d","\x7b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Bitmap_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Bitmap_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Bitmap_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Bitmap_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Bitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Bitmap_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
