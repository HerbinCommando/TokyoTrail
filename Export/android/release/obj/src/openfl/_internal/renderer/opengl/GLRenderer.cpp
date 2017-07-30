// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_lime__backend_native_NativeGLRenderContext
#include <lime/_backend/native/NativeGLRenderContext.h>
#endif
#ifndef INCLUDED_lime_app_IModule
#include <lime/app/IModule.h>
#endif
#ifndef INCLUDED_lime_graphics_opengl_GLObject
#include <lime/graphics/opengl/GLObject.h>
#endif
#ifndef INCLUDED_lime_math__Matrix4_Matrix4_Impl_
#include <lime/math/_Matrix4/Matrix4_Impl_.h>
#endif
#ifndef INCLUDED_lime_ui_Window
#include <lime/ui/Window.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_ObjectPool_openfl_geom_Matrix
#include <lime/utils/ObjectPool_openfl_geom_Matrix.h>
#endif
#ifndef INCLUDED_openfl__Vector_IVector
#include <openfl/_Vector/IVector.h>
#endif
#ifndef INCLUDED_openfl__Vector_ObjectVector
#include <openfl/_Vector/ObjectVector.h>
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
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLBlendModeManager
#include <openfl/_internal/renderer/opengl/GLBlendModeManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLFilterManager
#include <openfl/_internal/renderer/opengl/GLFilterManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLMaskManager
#include <openfl/_internal/renderer/opengl/GLMaskManager.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLRenderer
#include <openfl/_internal/renderer/opengl/GLRenderer.h>
#endif
#ifndef INCLUDED_openfl__internal_renderer_opengl_GLShaderManager
#include <openfl/_internal/renderer/opengl/GLShaderManager.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
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
#ifndef INCLUDED_openfl_display_Stage
#include <openfl/display/Stage.h>
#endif
#ifndef INCLUDED_openfl_display_Stage3D
#include <openfl/display/Stage3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_Context3D
#include <openfl/display3D/Context3D.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_RectangleTexture
#include <openfl/display3D/textures/RectangleTexture.h>
#endif
#ifndef INCLUDED_openfl_display3D_textures_TextureBase
#include <openfl/display3D/textures/TextureBase.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_45_new,"openfl._internal.renderer.opengl.GLRenderer","new",0xb6a82d5e,"openfl._internal.renderer.opengl.GLRenderer.new","openfl/_internal/renderer/opengl/GLRenderer.hx",45,0xb2b97130)
HX_LOCAL_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_80_clear,"openfl._internal.renderer.opengl.GLRenderer","clear",0x823f8a0b,"openfl._internal.renderer.opengl.GLRenderer.clear","openfl/_internal/renderer/opengl/GLRenderer.hx",80,0xb2b97130)
HX_LOCAL_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_97_getCacheObject,"openfl._internal.renderer.opengl.GLRenderer","getCacheObject",0xc4fee56d,"openfl._internal.renderer.opengl.GLRenderer.getCacheObject","openfl/_internal/renderer/opengl/GLRenderer.hx",97,0xb2b97130)
HX_LOCAL_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_109_getMatrix,"openfl._internal.renderer.opengl.GLRenderer","getMatrix",0x5e6beef5,"openfl._internal.renderer.opengl.GLRenderer.getMatrix","openfl/_internal/renderer/opengl/GLRenderer.hx",109,0xb2b97130)
HX_LOCAL_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_146_getRenderTarget,"openfl._internal.renderer.opengl.GLRenderer","getRenderTarget",0x5f982efb,"openfl._internal.renderer.opengl.GLRenderer.getRenderTarget","openfl/_internal/renderer/opengl/GLRenderer.hx",146,0xb2b97130)
HX_LOCAL_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_196_render,"openfl._internal.renderer.opengl.GLRenderer","render",0x72dac118,"openfl._internal.renderer.opengl.GLRenderer.render","openfl/_internal/renderer/opengl/GLRenderer.hx",196,0xb2b97130)
HX_LOCAL_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_239_renderStage3D,"openfl._internal.renderer.opengl.GLRenderer","renderStage3D",0x5c457cb7,"openfl._internal.renderer.opengl.GLRenderer.renderStage3D","openfl/_internal/renderer/opengl/GLRenderer.hx",239,0xb2b97130)
HX_LOCAL_STACK_FRAME(_hx_pos_c64fe149f16bcd1e_248_resize,"openfl._internal.renderer.opengl.GLRenderer","resize",0x762cafb6,"openfl._internal.renderer.opengl.GLRenderer.resize","openfl/_internal/renderer/opengl/GLRenderer.hx",248,0xb2b97130)
namespace openfl{
namespace _internal{
namespace renderer{
namespace opengl{

void GLRenderer_obj::__construct( ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped){
bool flipped = __o_flipped.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_45_new)
HXLINE(  47)		super::__construct(stage);
HXLINE(  49)		this->gl = gl;
HXLINE(  50)		this->flipped = flipped;
HXLINE(  52)		this->matrix = ::lime::math::_Matrix4::Matrix4_Impl__obj::_new(null());
HXLINE(  53)		this->values = ::Array_obj< Float >::__new();
HXLINE(  55)		this->renderSession =  ::openfl::_internal::renderer::RenderSession_obj::__alloc( HX_CTX );
HXLINE(  56)		this->renderSession->clearDirtyFlags = true;
HXLINE(  57)		this->renderSession->gl = gl;
HXLINE(  59)		this->renderSession->renderer = hx::ObjectPtr<OBJ_>(this);
HXLINE(  60)		this->renderSession->blendModeManager =  ::openfl::_internal::renderer::opengl::GLBlendModeManager_obj::__alloc( HX_CTX ,gl);
HXLINE(  61)		this->renderSession->filterManager =  ::openfl::_internal::renderer::opengl::GLFilterManager_obj::__alloc( HX_CTX ,hx::ObjectPtr<OBJ_>(this),this->renderSession);
HXLINE(  62)		this->renderSession->shaderManager =  ::openfl::_internal::renderer::opengl::GLShaderManager_obj::__alloc( HX_CTX ,gl);
HXLINE(  63)		this->renderSession->maskManager =  ::openfl::_internal::renderer::opengl::GLMaskManager_obj::__alloc( HX_CTX ,this->renderSession);
HXLINE(  65)		if (hx::IsNotNull( stage->window )) {
HXLINE(  67)			if (hx::IsNull( stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D )) {
HXLINE(  69)				 ::openfl::display::Stage3D _hx_tmp = stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN(  69)				_hx_tmp->_hx___createContext(stage,this->renderSession);
            			}
HXLINE(  73)			int _hx_tmp1 = ::Math_obj::ceil((stage->window->_hx___width * stage->window->_hx___scale));
HXDLIN(  73)			this->resize(_hx_tmp1,::Math_obj::ceil((stage->window->_hx___height * stage->window->_hx___scale)));
            		}
            	}

Dynamic GLRenderer_obj::__CreateEmpty() { return new GLRenderer_obj; }

void *GLRenderer_obj::_hx_vtable = 0;

Dynamic GLRenderer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< GLRenderer_obj > _hx_result = new GLRenderer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool GLRenderer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0339ec6e) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0339ec6e;
	} else {
		return inClassId==(int)0x58060c34;
	}
}

void GLRenderer_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_80_clear)
HXLINE(  82)		if (this->stage->_hx___transparent) {
HXLINE(  84)			this->gl->clearColor((int)0,(int)0,(int)0,(int)0);
            		}
            		else {
HXLINE(  88)			 ::lime::_backend::native::NativeGLRenderContext _hx_tmp = this->gl;
HXDLIN(  88)			Float _hx_tmp1 = this->stage->_hx___colorSplit->__get((int)0);
HXDLIN(  88)			Float _hx_tmp2 = this->stage->_hx___colorSplit->__get((int)1);
HXDLIN(  88)			_hx_tmp->clearColor(_hx_tmp1,_hx_tmp2,this->stage->_hx___colorSplit->__get((int)2),(int)1);
            		}
HXLINE(  92)		this->gl->clear(this->gl->COLOR_BUFFER_BIT);
            	}


void GLRenderer_obj::getCacheObject(){
            	HX_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_97_getCacheObject)
            	}


HX_DEFINE_DYNAMIC_FUNC0(GLRenderer_obj,getCacheObject,(void))

::Array< Float > GLRenderer_obj::getMatrix( ::openfl::geom::Matrix transform){
            	HX_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_109_getMatrix)
HXLINE( 111)		 ::openfl::geom::Matrix _matrix = ::openfl::geom::Matrix_obj::_hx___pool->get();
HXLINE( 112)		_matrix->copyFrom(transform);
HXLINE( 113)		_matrix->concat(this->displayMatrix);
HXLINE( 115)		if (this->renderSession->roundPixels) {
HXLINE( 117)			_matrix->tx = ::Math_obj::round(_matrix->tx);
HXLINE( 118)			_matrix->ty = ::Math_obj::round(_matrix->ty);
            		}
HXLINE( 122)		::lime::math::_Matrix4::Matrix4_Impl__obj::identity(this->matrix);
HXLINE( 123)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)0,_matrix->a);
HXLINE( 124)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)1,_matrix->b);
HXLINE( 125)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)4,_matrix->c);
HXLINE( 126)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)5,_matrix->d);
HXLINE( 127)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)12,_matrix->tx);
HXLINE( 128)		::lime::math::_Matrix4::Matrix4_Impl__obj::set(this->matrix,(int)13,_matrix->ty);
HXLINE( 129)		 ::lime::utils::ArrayBufferView _hx_tmp;
HXDLIN( 129)		if (this->flipped) {
HXLINE( 129)			_hx_tmp = this->projectionFlipped;
            		}
            		else {
HXLINE( 129)			_hx_tmp = this->projection;
            		}
HXDLIN( 129)		::lime::math::_Matrix4::Matrix4_Impl__obj::append(this->matrix,_hx_tmp);
HXLINE( 131)		{
HXLINE( 131)			int _g = (int)0;
HXDLIN( 131)			while((_g < (int)16)){
HXLINE( 131)				_g = (_g + (int)1);
HXDLIN( 131)				int i = (_g - (int)1);
HXLINE( 133)				::Array< Float > _hx_tmp1 = this->values;
HXDLIN( 133)				_hx_tmp1[i] = ::lime::math::_Matrix4::Matrix4_Impl__obj::get(this->matrix,i);
            			}
            		}
HXLINE( 137)		::openfl::geom::Matrix_obj::_hx___pool->release(_matrix);
HXLINE( 139)		return this->values;
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getMatrix,return )

void GLRenderer_obj::getRenderTarget(bool framebuffer){
            	HX_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_146_getRenderTarget)
HXDLIN( 146)		if (framebuffer) {
HXLINE( 148)			if (hx::IsNull( this->renderTargetA )) {
HXLINE( 150)				 ::openfl::display::Stage3D _hx_tmp = this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN( 150)				this->renderTargetA = ::openfl::display::BitmapData_obj::fromTexture(_hx_tmp->context3D->createRectangleTexture(this->width,this->height,(int)1,true));
HXLINE( 152)				 ::lime::_backend::native::NativeGLRenderContext _hx_tmp1 = this->gl;
HXDLIN( 152)				int _hx_tmp2 = this->gl->TEXTURE_2D;
HXDLIN( 152)				_hx_tmp1->bindTexture(_hx_tmp2,this->renderTargetA->getTexture(this->gl));
HXLINE( 153)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 154)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            			}
HXLINE( 158)			if (hx::IsNull( this->renderTargetB )) {
HXLINE( 160)				 ::openfl::display::Stage3D _hx_tmp3 = this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN( 160)				this->renderTargetB = ::openfl::display::BitmapData_obj::fromTexture(_hx_tmp3->context3D->createRectangleTexture(this->width,this->height,(int)1,true));
HXLINE( 162)				 ::lime::_backend::native::NativeGLRenderContext _hx_tmp4 = this->gl;
HXDLIN( 162)				int _hx_tmp5 = this->gl->TEXTURE_2D;
HXDLIN( 162)				_hx_tmp4->bindTexture(_hx_tmp5,this->renderTargetB->getTexture(this->gl));
HXLINE( 163)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 164)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            			}
HXLINE( 168)			if (hx::IsEq( this->currentRenderTarget,this->renderTargetA )) {
HXLINE( 170)				this->currentRenderTarget = this->renderTargetB;
            			}
            			else {
HXLINE( 174)				this->currentRenderTarget = this->renderTargetA;
            			}
HXLINE( 178)			 ::lime::_backend::native::NativeGLRenderContext _hx_tmp6 = this->gl;
HXDLIN( 178)			int _hx_tmp7 = this->gl->FRAMEBUFFER;
HXDLIN( 178)			_hx_tmp6->bindFramebuffer(_hx_tmp7,this->currentRenderTarget->_hx___getFramebuffer(this->gl));
HXLINE( 179)			this->gl->viewport((int)0,(int)0,this->width,this->height);
HXLINE( 180)			this->gl->clearColor((int)0,(int)0,(int)0,(int)0);
HXLINE( 181)			this->gl->clear(this->gl->COLOR_BUFFER_BIT);
HXLINE( 183)			this->flipped = false;
            		}
            		else {
HXLINE( 187)			this->gl->bindFramebuffer(this->gl->FRAMEBUFFER,null());
HXLINE( 189)			this->flipped = true;
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(GLRenderer_obj,getRenderTarget,(void))

void GLRenderer_obj::render(){
            	HX_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_196_render)
HXLINE( 198)		this->gl->viewport(this->offsetX,this->offsetY,this->displayWidth,this->displayHeight);
HXLINE( 200)		this->renderSession->allowSmoothing = hx::IsNotEq( this->stage->quality,(int)2 );
HXLINE( 201)		bool _hx_tmp;
HXDLIN( 201)		if ((this->displayMatrix->a == (int)1)) {
HXLINE( 201)			_hx_tmp = (this->displayMatrix->d != (int)1);
            		}
            		else {
HXLINE( 201)			_hx_tmp = true;
            		}
HXDLIN( 201)		this->renderSession->upscaled = _hx_tmp;
HXLINE( 203)		this->stage->_hx___renderGL(this->renderSession);
HXLINE( 205)		bool _hx_tmp1;
HXDLIN( 205)		if ((this->offsetX <= (int)0)) {
HXLINE( 205)			_hx_tmp1 = (this->offsetY > (int)0);
            		}
            		else {
HXLINE( 205)			_hx_tmp1 = true;
            		}
HXDLIN( 205)		if (_hx_tmp1) {
HXLINE( 207)			this->gl->clearColor((int)0,(int)0,(int)0,(int)1);
HXLINE( 208)			this->gl->enable(this->gl->SCISSOR_TEST);
HXLINE( 210)			if ((this->offsetX > (int)0)) {
HXLINE( 212)				this->gl->scissor((int)0,(int)0,this->offsetX,this->height);
HXLINE( 213)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
HXLINE( 215)				 ::lime::_backend::native::NativeGLRenderContext _hx_tmp2 = this->gl;
HXDLIN( 215)				_hx_tmp2->scissor((this->offsetX + this->displayWidth),(int)0,this->width,this->height);
HXLINE( 216)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
            			}
HXLINE( 220)			if ((this->offsetY > (int)0)) {
HXLINE( 222)				this->gl->scissor((int)0,(int)0,this->width,this->offsetY);
HXLINE( 223)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
HXLINE( 225)				 ::lime::_backend::native::NativeGLRenderContext _hx_tmp3 = this->gl;
HXDLIN( 225)				_hx_tmp3->scissor((int)0,(this->offsetY + this->displayHeight),this->width,this->height);
HXLINE( 226)				this->gl->clear(this->gl->COLOR_BUFFER_BIT);
            			}
HXLINE( 230)			this->gl->disable(this->gl->SCISSOR_TEST);
            		}
            	}


void GLRenderer_obj::renderStage3D(){
            	HX_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_239_renderStage3D)
HXDLIN( 239)		int _g = (int)0;
HXDLIN( 239)		 ::openfl::_Vector::ObjectVector _g1 = this->stage->stage3Ds;
HXDLIN( 239)		while((_g < _g1->get_length())){
HXDLIN( 239)			 ::openfl::display::Stage3D stage3D = _g1->get(_g).StaticCast<  ::openfl::display::Stage3D >();
HXDLIN( 239)			_g = (_g + (int)1);
HXLINE( 241)			stage3D->_hx___renderGL(this->stage,this->renderSession);
            		}
            	}


void GLRenderer_obj::resize(int width,int height){
            	HX_STACKFRAME(&_hx_pos_c64fe149f16bcd1e_248_resize)
HXLINE( 250)		this->super::resize(width,height);
HXLINE( 262)		bool _hx_tmp;
HXDLIN( 262)		if ((width > (int)0)) {
HXLINE( 262)			_hx_tmp = (height > (int)0);
            		}
            		else {
HXLINE( 262)			_hx_tmp = false;
            		}
HXDLIN( 262)		if (_hx_tmp) {
HXLINE( 264)			bool _hx_tmp1;
HXDLIN( 264)			if (hx::IsNotNull( this->renderTargetA )) {
HXLINE( 264)				if ((this->renderTargetA->width == width)) {
HXLINE( 264)					_hx_tmp1 = (this->renderTargetA->height != height);
            				}
            				else {
HXLINE( 264)					_hx_tmp1 = true;
            				}
            			}
            			else {
HXLINE( 264)				_hx_tmp1 = false;
            			}
HXDLIN( 264)			if (_hx_tmp1) {
HXLINE( 266)				this->renderTargetA = ::openfl::display::BitmapData_obj::fromTexture(this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D->createRectangleTexture(width,height,(int)1,true));
HXLINE( 268)				 ::lime::_backend::native::NativeGLRenderContext _hx_tmp2 = this->gl;
HXDLIN( 268)				int _hx_tmp3 = this->gl->TEXTURE_2D;
HXDLIN( 268)				_hx_tmp2->bindTexture(_hx_tmp3,this->renderTargetA->getTexture(this->gl));
HXLINE( 269)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 270)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            			}
HXLINE( 274)			bool _hx_tmp4;
HXDLIN( 274)			if (hx::IsNotNull( this->renderTargetB )) {
HXLINE( 274)				if ((this->renderTargetB->width == width)) {
HXLINE( 274)					_hx_tmp4 = (this->renderTargetB->height != height);
            				}
            				else {
HXLINE( 274)					_hx_tmp4 = true;
            				}
            			}
            			else {
HXLINE( 274)				_hx_tmp4 = false;
            			}
HXDLIN( 274)			if (_hx_tmp4) {
HXLINE( 276)				this->renderTargetB = ::openfl::display::BitmapData_obj::fromTexture(this->stage->stage3Ds->get((int)0).StaticCast<  ::openfl::display::Stage3D >()->context3D->createRectangleTexture(width,height,(int)1,true));
HXLINE( 278)				 ::lime::_backend::native::NativeGLRenderContext _hx_tmp5 = this->gl;
HXDLIN( 278)				int _hx_tmp6 = this->gl->TEXTURE_2D;
HXDLIN( 278)				_hx_tmp5->bindTexture(_hx_tmp6,this->renderTargetB->getTexture(this->gl));
HXLINE( 279)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_S,this->gl->CLAMP_TO_EDGE);
HXLINE( 280)				this->gl->texParameteri(this->gl->TEXTURE_2D,this->gl->TEXTURE_WRAP_T,this->gl->CLAMP_TO_EDGE);
            			}
            		}
HXLINE( 286)		this->displayMatrix = this->stage->_hx___displayMatrix;
HXLINE( 288)		 ::openfl::geom::Matrix _this = this->displayMatrix;
HXDLIN( 288)		Float _hx_tmp7 = ((int)0 * _this->a);
HXDLIN( 288)		this->offsetX = ::Math_obj::round(((_hx_tmp7 + ((int)0 * _this->c)) + _this->tx));
HXLINE( 289)		 ::openfl::geom::Matrix _this1 = this->displayMatrix;
HXDLIN( 289)		Float _hx_tmp8 = ((int)0 * _this1->b);
HXDLIN( 289)		this->offsetY = ::Math_obj::round(((_hx_tmp8 + ((int)0 * _this1->d)) + _this1->ty));
HXLINE( 290)		 ::openfl::geom::Matrix _this2 = this->displayMatrix;
HXDLIN( 290)		Float _hx_tmp9 = (this->stage->stageWidth * _this2->a);
HXDLIN( 290)		this->displayWidth = ::Math_obj::round((((_hx_tmp9 + ((int)0 * _this2->c)) + _this2->tx) - this->offsetX));
HXLINE( 291)		 ::openfl::geom::Matrix _this3 = this->displayMatrix;
HXDLIN( 291)		Float _hx_tmp10 = ((int)0 * _this3->b);
HXDLIN( 291)		this->displayHeight = ::Math_obj::round((((_hx_tmp10 + (this->stage->stageHeight * _this3->d)) + _this3->ty) - this->offsetY));
HXLINE( 293)		int _hx_tmp11 = this->offsetX;
HXDLIN( 293)		int _hx_tmp12 = (this->displayWidth + this->offsetX);
HXDLIN( 293)		int _hx_tmp13 = this->offsetY;
HXDLIN( 293)		this->projection = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(_hx_tmp11,_hx_tmp12,_hx_tmp13,(this->displayHeight + this->offsetY),(int)-1000,(int)1000);
HXLINE( 294)		int _hx_tmp14 = this->offsetX;
HXDLIN( 294)		int _hx_tmp15 = (this->displayWidth + this->offsetX);
HXDLIN( 294)		this->projectionFlipped = ::lime::math::_Matrix4::Matrix4_Impl__obj::createOrtho(_hx_tmp14,_hx_tmp15,(this->displayHeight + this->offsetY),this->offsetY,(int)-1000,(int)1000);
            	}



hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__new( ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped) {
	hx::ObjectPtr< GLRenderer_obj > __this = new GLRenderer_obj();
	__this->__construct(stage,gl,__o_flipped);
	return __this;
}

hx::ObjectPtr< GLRenderer_obj > GLRenderer_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::display::Stage stage, ::lime::_backend::native::NativeGLRenderContext gl,hx::Null< bool >  __o_flipped) {
	GLRenderer_obj *__this = (GLRenderer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(GLRenderer_obj), true, "openfl._internal.renderer.opengl.GLRenderer"));
	*(void **)__this = GLRenderer_obj::_hx_vtable;
	__this->__construct(stage,gl,__o_flipped);
	return __this;
}

GLRenderer_obj::GLRenderer_obj()
{
}

void GLRenderer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(GLRenderer);
	HX_MARK_MEMBER_NAME(projection,"projection");
	HX_MARK_MEMBER_NAME(projectionFlipped,"projectionFlipped");
	HX_MARK_MEMBER_NAME(currentRenderTarget,"currentRenderTarget");
	HX_MARK_MEMBER_NAME(displayHeight,"displayHeight");
	HX_MARK_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_MARK_MEMBER_NAME(displayWidth,"displayWidth");
	HX_MARK_MEMBER_NAME(flipped,"flipped");
	HX_MARK_MEMBER_NAME(gl,"gl");
	HX_MARK_MEMBER_NAME(matrix,"matrix");
	HX_MARK_MEMBER_NAME(renderTargetA,"renderTargetA");
	HX_MARK_MEMBER_NAME(renderTargetB,"renderTargetB");
	HX_MARK_MEMBER_NAME(offsetX,"offsetX");
	HX_MARK_MEMBER_NAME(offsetY,"offsetY");
	HX_MARK_MEMBER_NAME(values,"values");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void GLRenderer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(projection,"projection");
	HX_VISIT_MEMBER_NAME(projectionFlipped,"projectionFlipped");
	HX_VISIT_MEMBER_NAME(currentRenderTarget,"currentRenderTarget");
	HX_VISIT_MEMBER_NAME(displayHeight,"displayHeight");
	HX_VISIT_MEMBER_NAME(displayMatrix,"displayMatrix");
	HX_VISIT_MEMBER_NAME(displayWidth,"displayWidth");
	HX_VISIT_MEMBER_NAME(flipped,"flipped");
	HX_VISIT_MEMBER_NAME(gl,"gl");
	HX_VISIT_MEMBER_NAME(matrix,"matrix");
	HX_VISIT_MEMBER_NAME(renderTargetA,"renderTargetA");
	HX_VISIT_MEMBER_NAME(renderTargetB,"renderTargetB");
	HX_VISIT_MEMBER_NAME(offsetX,"offsetX");
	HX_VISIT_MEMBER_NAME(offsetY,"offsetY");
	HX_VISIT_MEMBER_NAME(values,"values");
	 ::openfl::_internal::renderer::AbstractRenderer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val GLRenderer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { return hx::Val( gl ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clear") ) { return hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { return hx::Val( matrix ); }
		if (HX_FIELD_EQ(inName,"values") ) { return hx::Val( values ); }
		if (HX_FIELD_EQ(inName,"render") ) { return hx::Val( render_dyn() ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { return hx::Val( flipped ); }
		if (HX_FIELD_EQ(inName,"offsetX") ) { return hx::Val( offsetX ); }
		if (HX_FIELD_EQ(inName,"offsetY") ) { return hx::Val( offsetY ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"getMatrix") ) { return hx::Val( getMatrix_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { return hx::Val( projection ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { return hx::Val( displayWidth ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { return hx::Val( displayHeight ); }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { return hx::Val( displayMatrix ); }
		if (HX_FIELD_EQ(inName,"renderTargetA") ) { return hx::Val( renderTargetA ); }
		if (HX_FIELD_EQ(inName,"renderTargetB") ) { return hx::Val( renderTargetB ); }
		if (HX_FIELD_EQ(inName,"renderStage3D") ) { return hx::Val( renderStage3D_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"getCacheObject") ) { return hx::Val( getCacheObject_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getRenderTarget") ) { return hx::Val( getRenderTarget_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projectionFlipped") ) { return hx::Val( projectionFlipped ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentRenderTarget") ) { return hx::Val( currentRenderTarget ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val GLRenderer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"gl") ) { gl=inValue.Cast<  ::lime::_backend::native::NativeGLRenderContext >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"matrix") ) { matrix=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		if (HX_FIELD_EQ(inName,"values") ) { values=inValue.Cast< ::Array< Float > >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"flipped") ) { flipped=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetX") ) { offsetX=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offsetY") ) { offsetY=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"projection") ) { projection=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"displayWidth") ) { displayWidth=inValue.Cast< int >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"displayHeight") ) { displayHeight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"displayMatrix") ) { displayMatrix=inValue.Cast<  ::openfl::geom::Matrix >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTargetA") ) { renderTargetA=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		if (HX_FIELD_EQ(inName,"renderTargetB") ) { renderTargetB=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"projectionFlipped") ) { projectionFlipped=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"currentRenderTarget") ) { currentRenderTarget=inValue.Cast<  ::openfl::display::BitmapData >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void GLRenderer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"));
	outFields->push(HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf"));
	outFields->push(HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27"));
	outFields->push(HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"));
	outFields->push(HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"));
	outFields->push(HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"));
	outFields->push(HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"));
	outFields->push(HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"));
	outFields->push(HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"));
	outFields->push(HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84"));
	outFields->push(HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84"));
	outFields->push(HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"));
	outFields->push(HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo GLRenderer_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projection),HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,projectionFlipped),HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,currentRenderTarget),HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayHeight),HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3")},
	{hx::fsObject /*::openfl::geom::Matrix*/ ,(int)offsetof(GLRenderer_obj,displayMatrix),HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,displayWidth),HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6")},
	{hx::fsBool,(int)offsetof(GLRenderer_obj,flipped),HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f")},
	{hx::fsObject /*::lime::_backend::native::NativeGLRenderContext*/ ,(int)offsetof(GLRenderer_obj,gl),HX_HCSTRING("gl","\x25","\x5a","\x00","\x00")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(GLRenderer_obj,matrix),HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,renderTargetA),HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84")},
	{hx::fsObject /*::openfl::display::BitmapData*/ ,(int)offsetof(GLRenderer_obj,renderTargetB),HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetX),HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7")},
	{hx::fsInt,(int)offsetof(GLRenderer_obj,offsetY),HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7")},
	{hx::fsObject /*Array< Float >*/ ,(int)offsetof(GLRenderer_obj,values),HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *GLRenderer_obj_sStaticStorageInfo = 0;
#endif

static ::String GLRenderer_obj_sMemberFields[] = {
	HX_HCSTRING("projection","\x8f","\x88","\x8b","\xc4"),
	HX_HCSTRING("projectionFlipped","\x73","\xcb","\x7c","\xbf"),
	HX_HCSTRING("currentRenderTarget","\x20","\xd1","\x0e","\x27"),
	HX_HCSTRING("displayHeight","\xc9","\xc3","\xae","\xc3"),
	HX_HCSTRING("displayMatrix","\x23","\xf2","\x2a","\x7d"),
	HX_HCSTRING("displayWidth","\x64","\x8c","\xbb","\xd6"),
	HX_HCSTRING("flipped","\x42","\x6c","\x88","\x7f"),
	HX_HCSTRING("gl","\x25","\x5a","\x00","\x00"),
	HX_HCSTRING("matrix","\x41","\x36","\xc8","\xbb"),
	HX_HCSTRING("renderTargetA","\x1a","\x67","\x55","\x84"),
	HX_HCSTRING("renderTargetB","\x1b","\x67","\x55","\x84"),
	HX_HCSTRING("offsetX","\x65","\x09","\x65","\xd7"),
	HX_HCSTRING("offsetY","\x66","\x09","\x65","\xd7"),
	HX_HCSTRING("values","\xe2","\x03","\xb7","\x4f"),
	HX_HCSTRING("clear","\x8d","\x71","\x5b","\x48"),
	HX_HCSTRING("getCacheObject","\xab","\xfd","\x7e","\xbb"),
	HX_HCSTRING("getMatrix","\x77","\xbf","\x1e","\x38"),
	HX_HCSTRING("getRenderTarget","\xfd","\x4c","\x2d","\x19"),
	HX_HCSTRING("render","\x56","\x6b","\x29","\x05"),
	HX_HCSTRING("renderStage3D","\x39","\xb6","\xb7","\x29"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void GLRenderer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GLRenderer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GLRenderer_obj::__mClass,"__mClass");
};

#endif

hx::Class GLRenderer_obj::__mClass;

void GLRenderer_obj::__register()
{
	hx::Object *dummy = new GLRenderer_obj;
	GLRenderer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._internal.renderer.opengl.GLRenderer","\x6c","\xe6","\x3a","\x9a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = GLRenderer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(GLRenderer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< GLRenderer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = GLRenderer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = GLRenderer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = GLRenderer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace _internal
} // end namespace renderer
} // end namespace opengl