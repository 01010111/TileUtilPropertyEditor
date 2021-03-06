#include <hxcpp.h>

#ifndef INCLUDED_flixel_text_FlxTextFormat
#include <flixel/text/FlxTextFormat.h>
#endif
#ifndef INCLUDED_flixel_text__FlxText_FlxTextFormatRange
#include <flixel/text/_FlxText/FlxTextFormatRange.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxRange
#include <flixel/util/helpers/FlxRange.h>
#endif
namespace flixel{
namespace text{
namespace _FlxText{

Void FlxTextFormatRange_obj::__construct(::flixel::text::FlxTextFormat format,int start,int end)
{
HX_STACK_FRAME("flixel.text._FlxText.FlxTextFormatRange","new",0x02a8ae38,"flixel.text._FlxText.FlxTextFormatRange.new","flixel/text/FlxText.hx",1028,0xdf165a6e)
HX_STACK_THIS(this)
HX_STACK_ARG(format,"format")
HX_STACK_ARG(start,"start")
HX_STACK_ARG(end,"end")
{
	HX_STACK_LINE(1029)
	::flixel::util::helpers::FlxRange _g = ::flixel::util::helpers::FlxRange_obj::__new(start,end);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(1029)
	this->range = _g;
	HX_STACK_LINE(1030)
	this->format = format;
}
;
	return null();
}

//FlxTextFormatRange_obj::~FlxTextFormatRange_obj() { }

Dynamic FlxTextFormatRange_obj::__CreateEmpty() { return  new FlxTextFormatRange_obj; }
hx::ObjectPtr< FlxTextFormatRange_obj > FlxTextFormatRange_obj::__new(::flixel::text::FlxTextFormat format,int start,int end)
{  hx::ObjectPtr< FlxTextFormatRange_obj > result = new FlxTextFormatRange_obj();
	result->__construct(format,start,end);
	return result;}

Dynamic FlxTextFormatRange_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTextFormatRange_obj > result = new FlxTextFormatRange_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return result;}


FlxTextFormatRange_obj::FlxTextFormatRange_obj()
{
}

void FlxTextFormatRange_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTextFormatRange);
	HX_MARK_MEMBER_NAME(range,"range");
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_END_CLASS();
}

void FlxTextFormatRange_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(range,"range");
	HX_VISIT_MEMBER_NAME(format,"format");
}

Dynamic FlxTextFormatRange_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { return range; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return format; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTextFormatRange_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"range") ) { range=inValue.Cast< ::flixel::util::helpers::FlxRange >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast< ::flixel::text::FlxTextFormat >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTextFormatRange_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("range"));
	outFields->push(HX_CSTRING("format"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::util::helpers::FlxRange*/ ,(int)offsetof(FlxTextFormatRange_obj,range),HX_CSTRING("range")},
	{hx::fsObject /*::flixel::text::FlxTextFormat*/ ,(int)offsetof(FlxTextFormatRange_obj,format),HX_CSTRING("format")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("range"),
	HX_CSTRING("format"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTextFormatRange_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTextFormatRange_obj::__mClass,"__mClass");
};

#endif

Class FlxTextFormatRange_obj::__mClass;

void FlxTextFormatRange_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.text._FlxText.FlxTextFormatRange"), hx::TCanCast< FlxTextFormatRange_obj> ,sStaticFields,sMemberFields,
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

void FlxTextFormatRange_obj::__boot()
{
}

} // end namespace flixel
} // end namespace text
} // end namespace _FlxText
