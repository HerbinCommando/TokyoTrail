// Generated by Haxe 3.4.2
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_graphics_ImageBuffer
#include <lime/graphics/ImageBuffer.h>
#endif
#ifndef INCLUDED_lime_utils_ArrayBufferView
#include <lime/utils/ArrayBufferView.h>
#endif
#ifndef INCLUDED_lime_utils_TAError
#include <lime/utils/TAError.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_890299056ccc780d_49_new,"lime.graphics.ImageBuffer","new",0xb261c9e3,"lime.graphics.ImageBuffer.new","lime/graphics/ImageBuffer.hx",49,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_62_clone,"lime.graphics.ImageBuffer","clone",0x1504b3a0,"lime.graphics.ImageBuffer.clone","lime/graphics/ImageBuffer.hx",62,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_146_get_src,"lime.graphics.ImageBuffer","get_src",0x9748e67e,"lime.graphics.ImageBuffer.get_src","lime/graphics/ImageBuffer.hx",146,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_153_set_src,"lime.graphics.ImageBuffer","set_src",0x8a4a778a,"lime.graphics.ImageBuffer.set_src","lime/graphics/ImageBuffer.hx",153,0x6475c2cd)
HX_LOCAL_STACK_FRAME(_hx_pos_890299056ccc780d_185_get_stride,"lime.graphics.ImageBuffer","get_stride",0xb11b1cbf,"lime.graphics.ImageBuffer.get_stride","lime/graphics/ImageBuffer.hx",185,0x6475c2cd)
namespace lime{
namespace graphics{

void ImageBuffer_obj::__construct( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel, ::Dynamic format){
int width = __o_width.Default(0);
int height = __o_height.Default(0);
int bitsPerPixel = __o_bitsPerPixel.Default(32);
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_49_new)
HXLINE(  51)		this->data = data;
HXLINE(  52)		this->width = width;
HXLINE(  53)		this->height = height;
HXLINE(  54)		this->bitsPerPixel = bitsPerPixel;
HXLINE(  55)		int _hx_tmp;
HXDLIN(  55)		if (hx::IsNull( format )) {
HXLINE(  55)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE(  55)			_hx_tmp = format;
            		}
HXDLIN(  55)		this->format = _hx_tmp;
HXLINE(  56)		this->premultiplied = false;
HXLINE(  57)		this->transparent = true;
            	}

Dynamic ImageBuffer_obj::__CreateEmpty() { return new ImageBuffer_obj; }

void *ImageBuffer_obj::_hx_vtable = 0;

Dynamic ImageBuffer_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< ImageBuffer_obj > _hx_result = new ImageBuffer_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool ImageBuffer_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0e331317;
}

 ::lime::graphics::ImageBuffer ImageBuffer_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_890299056ccc780d_62_clone)
HXLINE(  64)		 ::lime::graphics::ImageBuffer buffer =  ::lime::graphics::ImageBuffer_obj::__alloc( HX_CTX ,this->data,this->width,this->height,this->bitsPerPixel,null());
HXLINE( 108)		if (hx::IsNotNull( this->data )) {
HXLINE( 110)			 ::haxe::io::Bytes bytes = ::haxe::io::Bytes_obj::alloc(this->data->byteLength);
HXLINE( 111)			bytes->blit((int)0,buffer->data->buffer,(int)0,this->data->byteLength);
HXLINE( 112)			 ::lime::utils::ArrayBufferView this1;
HXDLIN( 112)			if (hx::IsNotNull( bytes )) {
HXLINE( 112)				 ::lime::utils::ArrayBufferView _this =  ::lime::utils::ArrayBufferView_obj::__alloc( HX_CTX ,(int)0,(int)4);
HXDLIN( 112)				int in_byteOffset = (int)0;
HXDLIN( 112)				if ((in_byteOffset < (int)0)) {
HXLINE( 112)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 112)				if ((hx::Mod(in_byteOffset,_this->bytesPerElement) != (int)0)) {
HXLINE( 112)					HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            				}
HXDLIN( 112)				int bufferByteLength = bytes->length;
HXDLIN( 112)				int elementSize = _this->bytesPerElement;
HXDLIN( 112)				int newByteLength = bufferByteLength;
HXDLIN( 112)				{
HXLINE( 112)					newByteLength = (bufferByteLength - in_byteOffset);
HXDLIN( 112)					if ((hx::Mod(bufferByteLength,_this->bytesPerElement) != (int)0)) {
HXLINE( 112)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
HXDLIN( 112)					if ((newByteLength < (int)0)) {
HXLINE( 112)						HX_STACK_DO_THROW(::lime::utils::TAError_obj::RangeError_dyn());
            					}
            				}
HXDLIN( 112)				_this->buffer = bytes;
HXDLIN( 112)				_this->byteOffset = in_byteOffset;
HXDLIN( 112)				_this->byteLength = newByteLength;
HXDLIN( 112)				_this->length = ::Std_obj::_hx_int(((Float)newByteLength / (Float)_this->bytesPerElement));
HXDLIN( 112)				this1 = _this;
            			}
            			else {
HXLINE( 112)				HX_STACK_DO_THROW(HX_("Invalid constructor arguments for UInt8Array",6b,44,d5,85));
            			}
HXDLIN( 112)			buffer->data = this1;
            		}
HXLINE( 117)		buffer->bitsPerPixel = this->bitsPerPixel;
HXLINE( 118)		buffer->format = this->format;
HXLINE( 119)		buffer->premultiplied = this->premultiplied;
HXLINE( 120)		buffer->transparent = this->transparent;
HXLINE( 121)		return buffer;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,clone,return )

 ::Dynamic ImageBuffer_obj::get_src(){
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_146_get_src)
HXDLIN( 146)		return this->_hx___srcCustom;
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_src,return )

 ::Dynamic ImageBuffer_obj::set_src( ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_153_set_src)
HXLINE( 174)		this->_hx___srcCustom = value;
HXLINE( 178)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(ImageBuffer_obj,set_src,return )

int ImageBuffer_obj::get_stride(){
            	HX_STACKFRAME(&_hx_pos_890299056ccc780d_185_get_stride)
HXDLIN( 185)		return (this->width * (int)4);
            	}


HX_DEFINE_DYNAMIC_FUNC0(ImageBuffer_obj,get_stride,return )


hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__new( ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel, ::Dynamic format) {
	hx::ObjectPtr< ImageBuffer_obj > __this = new ImageBuffer_obj();
	__this->__construct(data,__o_width,__o_height,__o_bitsPerPixel,format);
	return __this;
}

hx::ObjectPtr< ImageBuffer_obj > ImageBuffer_obj::__alloc(hx::Ctx *_hx_ctx, ::lime::utils::ArrayBufferView data,hx::Null< int >  __o_width,hx::Null< int >  __o_height,hx::Null< int >  __o_bitsPerPixel, ::Dynamic format) {
	ImageBuffer_obj *__this = (ImageBuffer_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(ImageBuffer_obj), true, "lime.graphics.ImageBuffer"));
	*(void **)__this = ImageBuffer_obj::_hx_vtable;
	__this->__construct(data,__o_width,__o_height,__o_bitsPerPixel,format);
	return __this;
}

ImageBuffer_obj::ImageBuffer_obj()
{
}

void ImageBuffer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ImageBuffer);
	HX_MARK_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_MARK_MEMBER_NAME(data,"data");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(premultiplied,"premultiplied");
	HX_MARK_MEMBER_NAME(transparent,"transparent");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(_hx___srcBitmapData,"__srcBitmapData");
	HX_MARK_MEMBER_NAME(_hx___srcCanvas,"__srcCanvas");
	HX_MARK_MEMBER_NAME(_hx___srcContext,"__srcContext");
	HX_MARK_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_MARK_MEMBER_NAME(_hx___srcImage,"__srcImage");
	HX_MARK_MEMBER_NAME(_hx___srcImageData,"__srcImageData");
	HX_MARK_END_CLASS();
}

void ImageBuffer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bitsPerPixel,"bitsPerPixel");
	HX_VISIT_MEMBER_NAME(data,"data");
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(premultiplied,"premultiplied");
	HX_VISIT_MEMBER_NAME(transparent,"transparent");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(_hx___srcBitmapData,"__srcBitmapData");
	HX_VISIT_MEMBER_NAME(_hx___srcCanvas,"__srcCanvas");
	HX_VISIT_MEMBER_NAME(_hx___srcContext,"__srcContext");
	HX_VISIT_MEMBER_NAME(_hx___srcCustom,"__srcCustom");
	HX_VISIT_MEMBER_NAME(_hx___srcImage,"__srcImage");
	HX_VISIT_MEMBER_NAME(_hx___srcImageData,"__srcImageData");
}

hx::Val ImageBuffer_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_src() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { return hx::Val( data ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return hx::Val( width ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"height") ) { return hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"stride") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_stride() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_src") ) { return hx::Val( get_src_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_src") ) { return hx::Val( set_src_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { return hx::Val( _hx___srcImage ); }
		if (HX_FIELD_EQ(inName,"get_stride") ) { return hx::Val( get_stride_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { return hx::Val( transparent ); }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { return hx::Val( _hx___srcCanvas ); }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { return hx::Val( _hx___srcCustom ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { return hx::Val( bitsPerPixel ); }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { return hx::Val( _hx___srcContext ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { return hx::Val( premultiplied ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { return hx::Val( _hx___srcImageData ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { return hx::Val( _hx___srcBitmapData ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val ImageBuffer_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"src") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_src(inValue.Cast<  ::Dynamic >()) ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"data") ) { data=inValue.Cast<  ::lime::utils::ArrayBufferView >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__srcImage") ) { _hx___srcImage=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"transparent") ) { transparent=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCanvas") ) { _hx___srcCanvas=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcCustom") ) { _hx___srcCustom=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"bitsPerPixel") ) { bitsPerPixel=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__srcContext") ) { _hx___srcContext=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"premultiplied") ) { premultiplied=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__srcImageData") ) { _hx___srcImageData=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"__srcBitmapData") ) { _hx___srcBitmapData=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ImageBuffer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"));
	outFields->push(HX_HCSTRING("data","\x2a","\x56","\x63","\x42"));
	outFields->push(HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"));
	outFields->push(HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"));
	outFields->push(HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"));
	outFields->push(HX_HCSTRING("src","\xe4","\xa6","\x57","\x00"));
	outFields->push(HX_HCSTRING("stride","\x19","\x20","\x30","\x11"));
	outFields->push(HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"));
	outFields->push(HX_HCSTRING("width","\x06","\xb6","\x62","\xca"));
	outFields->push(HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"));
	outFields->push(HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"));
	outFields->push(HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"));
	outFields->push(HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"));
	outFields->push(HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"));
	outFields->push(HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo ImageBuffer_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,bitsPerPixel),HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c")},
	{hx::fsObject /*::lime::utils::ArrayBufferView*/ ,(int)offsetof(ImageBuffer_obj,data),HX_HCSTRING("data","\x2a","\x56","\x63","\x42")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,format),HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,height),HX_HCSTRING("height","\xe7","\x07","\x4c","\x02")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,premultiplied),HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4")},
	{hx::fsBool,(int)offsetof(ImageBuffer_obj,transparent),HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22")},
	{hx::fsInt,(int)offsetof(ImageBuffer_obj,width),HX_HCSTRING("width","\x06","\xb6","\x62","\xca")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,_hx___srcBitmapData),HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,_hx___srcCanvas),HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,_hx___srcContext),HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,_hx___srcCustom),HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,_hx___srcImage),HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(ImageBuffer_obj,_hx___srcImageData),HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *ImageBuffer_obj_sStaticStorageInfo = 0;
#endif

static ::String ImageBuffer_obj_sMemberFields[] = {
	HX_HCSTRING("bitsPerPixel","\x8f","\x4d","\xee","\x1c"),
	HX_HCSTRING("data","\x2a","\x56","\x63","\x42"),
	HX_HCSTRING("format","\x37","\x8f","\x8e","\xfd"),
	HX_HCSTRING("height","\xe7","\x07","\x4c","\x02"),
	HX_HCSTRING("premultiplied","\x56","\xf1","\x4e","\xa4"),
	HX_HCSTRING("transparent","\x52","\x2b","\xba","\x22"),
	HX_HCSTRING("width","\x06","\xb6","\x62","\xca"),
	HX_HCSTRING("__srcBitmapData","\x9d","\x9e","\xde","\x24"),
	HX_HCSTRING("__srcCanvas","\xbc","\xfb","\xb8","\x6a"),
	HX_HCSTRING("__srcContext","\x8b","\xf6","\xd2","\x8e"),
	HX_HCSTRING("__srcCustom","\x95","\x2e","\x09","\xf2"),
	HX_HCSTRING("__srcImage","\xf7","\xe0","\x5b","\xbf"),
	HX_HCSTRING("__srcImageData","\xc1","\xaa","\x01","\x30"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("get_src","\x7b","\x6f","\xcc","\x26"),
	HX_HCSTRING("set_src","\x87","\x00","\xce","\x19"),
	HX_HCSTRING("get_stride","\xe2","\x8f","\xb7","\x01"),
	::String(null()) };

static void ImageBuffer_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ImageBuffer_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ImageBuffer_obj::__mClass,"__mClass");
};

#endif

hx::Class ImageBuffer_obj::__mClass;

void ImageBuffer_obj::__register()
{
	hx::Object *dummy = new ImageBuffer_obj;
	ImageBuffer_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("lime.graphics.ImageBuffer","\x71","\x9c","\xe0","\x10");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = ImageBuffer_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(ImageBuffer_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< ImageBuffer_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ImageBuffer_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ImageBuffer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ImageBuffer_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
