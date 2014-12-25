#include <hxcpp.h>

#ifndef INCLUDED___ASSET__assets_sounds_flixel_ogg
#include <__ASSET__assets_sounds_flixel_ogg.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_media_Sound
#include <openfl/_v2/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__v2_net_URLRequest
#include <openfl/_v2/net/URLRequest.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_ByteArray
#include <openfl/_v2/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataInput
#include <openfl/_v2/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IDataOutput
#include <openfl/_v2/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__v2_utils_IMemoryRange
#include <openfl/_v2/utils/IMemoryRange.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif

Void __ASSET__assets_sounds_flixel_ogg_obj::__construct(::openfl::_v2::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{
HX_STACK_FRAME("__ASSET__assets_sounds_flixel_ogg","new",0x32b28acd,"__ASSET__assets_sounds_flixel_ogg.new","openfl/_v2/Assets.hx",1923,0x2846aac8)
HX_STACK_THIS(this)
HX_STACK_ARG(stream,"stream")
HX_STACK_ARG(context,"context")
HX_STACK_ARG(__o_forcePlayAsMusic,"forcePlayAsMusic")
Dynamic forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
{
	HX_STACK_LINE(1925)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(1927)
	::haxe::io::Bytes _g = ::haxe::Resource_obj::getBytes(::__ASSET__assets_sounds_flixel_ogg_obj::resourceName);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1927)
	::openfl::_v2::utils::ByteArray byteArray = ::openfl::_v2::utils::ByteArray_obj::fromBytes(_g);		HX_STACK_VAR(byteArray,"byteArray");
	HX_STACK_LINE(1928)
	this->loadCompressedDataFromByteArray(byteArray,byteArray->length,forcePlayAsMusic);
}
;
	return null();
}

//__ASSET__assets_sounds_flixel_ogg_obj::~__ASSET__assets_sounds_flixel_ogg_obj() { }

Dynamic __ASSET__assets_sounds_flixel_ogg_obj::__CreateEmpty() { return  new __ASSET__assets_sounds_flixel_ogg_obj; }
hx::ObjectPtr< __ASSET__assets_sounds_flixel_ogg_obj > __ASSET__assets_sounds_flixel_ogg_obj::__new(::openfl::_v2::net::URLRequest stream,::openfl::media::SoundLoaderContext context,Dynamic __o_forcePlayAsMusic)
{  hx::ObjectPtr< __ASSET__assets_sounds_flixel_ogg_obj > result = new __ASSET__assets_sounds_flixel_ogg_obj();
	result->__construct(stream,context,__o_forcePlayAsMusic);
	return result;}

Dynamic __ASSET__assets_sounds_flixel_ogg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< __ASSET__assets_sounds_flixel_ogg_obj > result = new __ASSET__assets_sounds_flixel_ogg_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}

::String __ASSET__assets_sounds_flixel_ogg_obj::resourceName;


__ASSET__assets_sounds_flixel_ogg_obj::__ASSET__assets_sounds_flixel_ogg_obj()
{
}

Dynamic __ASSET__assets_sounds_flixel_ogg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { return resourceName; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic __ASSET__assets_sounds_flixel_ogg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void __ASSET__assets_sounds_flixel_ogg_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("resourceName"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__assets_sounds_flixel_ogg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(__ASSET__assets_sounds_flixel_ogg_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__assets_sounds_flixel_ogg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(__ASSET__assets_sounds_flixel_ogg_obj::resourceName,"resourceName");
};

#endif

Class __ASSET__assets_sounds_flixel_ogg_obj::__mClass;

void __ASSET__assets_sounds_flixel_ogg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("__ASSET__assets_sounds_flixel_ogg"), hx::TCanCast< __ASSET__assets_sounds_flixel_ogg_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , sVisitStatics
#endif
#ifdef HXCPP_SCRIPTABLE
    , sMemberStorageInfo
#endif
);
}

void __ASSET__assets_sounds_flixel_ogg_obj::__boot()
{
	resourceName= HX_CSTRING("__ASSET__:sound___ASSET__assets_sounds_flixel_ogg");
}

