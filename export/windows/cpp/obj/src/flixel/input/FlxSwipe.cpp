#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_input_FlxSwipe
#include <flixel/input/FlxSwipe.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_util_LabelValuePair
#include <flixel/util/FlxPool_flixel_util_LabelValuePair.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObject
#include <openfl/_v2/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_DisplayObjectContainer
#include <openfl/_v2/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__v2_display_IBitmapDrawable
#include <openfl/_v2/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__v2_display_InteractiveObject
#include <openfl/_v2/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__v2_display_Sprite
#include <openfl/_v2/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__v2_events_EventDispatcher
#include <openfl/_v2/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__v2_events_IEventDispatcher
#include <openfl/_v2/events/IEventDispatcher.h>
#endif
namespace flixel{
namespace input{

Void FlxSwipe_obj::__construct(int ID,::flixel::math::FlxPoint StartPosition,::flixel::math::FlxPoint EndPosition,Float StartTimeInTicks)
{
HX_STACK_FRAME("flixel.input.FlxSwipe","new",0xecc12d70,"flixel.input.FlxSwipe.new","flixel/input/FlxSwipe.hx",33,0xe38cac7e)
HX_STACK_THIS(this)
HX_STACK_ARG(ID,"ID")
HX_STACK_ARG(StartPosition,"StartPosition")
HX_STACK_ARG(EndPosition,"EndPosition")
HX_STACK_ARG(StartTimeInTicks,"StartTimeInTicks")
{
	HX_STACK_LINE(34)
	this->ID = ID;
	HX_STACK_LINE(35)
	this->startPosition = StartPosition;
	HX_STACK_LINE(36)
	this->endPosition = EndPosition;
	HX_STACK_LINE(37)
	this->_startTimeInTicks = StartTimeInTicks;
	HX_STACK_LINE(38)
	this->_endTimeInTicks = ::flixel::FlxG_obj::game->ticks;
}
;
	return null();
}

//FlxSwipe_obj::~FlxSwipe_obj() { }

Dynamic FlxSwipe_obj::__CreateEmpty() { return  new FlxSwipe_obj; }
hx::ObjectPtr< FlxSwipe_obj > FlxSwipe_obj::__new(int ID,::flixel::math::FlxPoint StartPosition,::flixel::math::FlxPoint EndPosition,Float StartTimeInTicks)
{  hx::ObjectPtr< FlxSwipe_obj > result = new FlxSwipe_obj();
	result->__construct(ID,StartPosition,EndPosition,StartTimeInTicks);
	return result;}

Dynamic FlxSwipe_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxSwipe_obj > result = new FlxSwipe_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::String FlxSwipe_obj::toString( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","toString",0xb726199c,"flixel.input.FlxSwipe.toString","flixel/input/FlxSwipe.hx",42,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(44)
	::flixel::util::LabelValuePair _g;		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(44)
	{
		HX_STACK_LINE(44)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(44)
		_this->label = HX_CSTRING("ID");
		HX_STACK_LINE(44)
		_this->value = this->ID;
		HX_STACK_LINE(44)
		_g = _this;
	}
	HX_STACK_LINE(45)
	::flixel::util::LabelValuePair _g1;		HX_STACK_VAR(_g1,"_g1");
	HX_STACK_LINE(45)
	{
		HX_STACK_LINE(45)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(45)
		_this->label = HX_CSTRING("start");
		HX_STACK_LINE(45)
		_this->value = this->startPosition;
		HX_STACK_LINE(45)
		_g1 = _this;
	}
	HX_STACK_LINE(46)
	::flixel::util::LabelValuePair _g2;		HX_STACK_VAR(_g2,"_g2");
	HX_STACK_LINE(46)
	{
		HX_STACK_LINE(46)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(46)
		_this->label = HX_CSTRING("end");
		HX_STACK_LINE(46)
		_this->value = this->endPosition;
		HX_STACK_LINE(46)
		_g2 = _this;
	}
	HX_STACK_LINE(47)
	::flixel::util::LabelValuePair _g3;		HX_STACK_VAR(_g3,"_g3");
	HX_STACK_LINE(47)
	{
		HX_STACK_LINE(47)
		Dynamic value;		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			Float dx = (this->startPosition->x - this->endPosition->x);		HX_STACK_VAR(dx,"dx");
			HX_STACK_LINE(47)
			Float dy = (this->startPosition->y - this->endPosition->y);		HX_STACK_VAR(dy,"dy");
			HX_STACK_LINE(47)
			value = ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
		}
		HX_STACK_LINE(47)
		{
			HX_STACK_LINE(47)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(47)
			_this->label = HX_CSTRING("distance");
			HX_STACK_LINE(47)
			_this->value = value;
			HX_STACK_LINE(47)
			_g3 = _this;
		}
	}
	HX_STACK_LINE(48)
	::flixel::util::LabelValuePair _g4;		HX_STACK_VAR(_g4,"_g4");
	HX_STACK_LINE(48)
	{
		HX_STACK_LINE(48)
		Dynamic value = this->startPosition->angleBetween(this->endPosition);		HX_STACK_VAR(value,"value");
		HX_STACK_LINE(48)
		{
			HX_STACK_LINE(48)
			::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
			HX_STACK_LINE(48)
			_this->label = HX_CSTRING("angle");
			HX_STACK_LINE(48)
			_this->value = value;
			HX_STACK_LINE(48)
			_g4 = _this;
		}
	}
	HX_STACK_LINE(49)
	::flixel::util::LabelValuePair _g5;		HX_STACK_VAR(_g5,"_g5");
	HX_STACK_LINE(49)
	{
		HX_STACK_LINE(49)
		::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get();		HX_STACK_VAR(_this,"_this");
		HX_STACK_LINE(49)
		_this->label = HX_CSTRING("duration");
		HX_STACK_LINE(49)
		_this->value = (Float(((this->_endTimeInTicks - this->_startTimeInTicks))) / Float((int)1000));
		HX_STACK_LINE(49)
		_g5 = _this;
	}
	HX_STACK_LINE(43)
	Array< ::Dynamic > _g6 = Array_obj< ::Dynamic >::__new().Add(_g).Add(_g1).Add(_g2).Add(_g3).Add(_g4).Add(_g5);		HX_STACK_VAR(_g6,"_g6");
	HX_STACK_LINE(43)
	return ::flixel::util::FlxStringUtil_obj::getDebugString(_g6);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,toString,return )

Float FlxSwipe_obj::get_distance( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_distance",0xd139c82e,"flixel.input.FlxSwipe.get_distance","flixel/input/FlxSwipe.hx",54,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(54)
	Float dx = (this->startPosition->x - this->endPosition->x);		HX_STACK_VAR(dx,"dx");
	HX_STACK_LINE(54)
	Float dy = (this->startPosition->y - this->endPosition->y);		HX_STACK_VAR(dy,"dy");
	HX_STACK_LINE(54)
	return ::Math_obj::sqrt(((dx * dx) + (dy * dy)));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_distance,return )

Float FlxSwipe_obj::get_angle( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_angle",0xc834293a,"flixel.input.FlxSwipe.get_angle","flixel/input/FlxSwipe.hx",59,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(59)
	return this->startPosition->angleBetween(this->endPosition);
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_angle,return )

Float FlxSwipe_obj::get_duration( ){
	HX_STACK_FRAME("flixel.input.FlxSwipe","get_duration",0x79ce444d,"flixel.input.FlxSwipe.get_duration","flixel/input/FlxSwipe.hx",64,0xe38cac7e)
	HX_STACK_THIS(this)
	HX_STACK_LINE(64)
	return (Float(((this->_endTimeInTicks - this->_startTimeInTicks))) / Float((int)1000));
}


HX_DEFINE_DYNAMIC_FUNC0(FlxSwipe_obj,get_duration,return )


FlxSwipe_obj::FlxSwipe_obj()
{
}

void FlxSwipe_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxSwipe);
	HX_MARK_MEMBER_NAME(ID,"ID");
	HX_MARK_MEMBER_NAME(startPosition,"startPosition");
	HX_MARK_MEMBER_NAME(endPosition,"endPosition");
	HX_MARK_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_MARK_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
	HX_MARK_END_CLASS();
}

void FlxSwipe_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(ID,"ID");
	HX_VISIT_MEMBER_NAME(startPosition,"startPosition");
	HX_VISIT_MEMBER_NAME(endPosition,"endPosition");
	HX_VISIT_MEMBER_NAME(_startTimeInTicks,"_startTimeInTicks");
	HX_VISIT_MEMBER_NAME(_endTimeInTicks,"_endTimeInTicks");
}

Dynamic FlxSwipe_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { return ID; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"angle") ) { return get_angle(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"distance") ) { return get_distance(); }
		if (HX_FIELD_EQ(inName,"duration") ) { return get_duration(); }
		if (HX_FIELD_EQ(inName,"toString") ) { return toString_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_angle") ) { return get_angle_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { return endPosition; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_distance") ) { return get_distance_dyn(); }
		if (HX_FIELD_EQ(inName,"get_duration") ) { return get_duration_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { return startPosition; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { return _endTimeInTicks; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { return _startTimeInTicks; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxSwipe_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"ID") ) { ID=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"endPosition") ) { endPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"startPosition") ) { startPosition=inValue.Cast< ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_endTimeInTicks") ) { _endTimeInTicks=inValue.Cast< Float >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_startTimeInTicks") ) { _startTimeInTicks=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxSwipe_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("ID"));
	outFields->push(HX_CSTRING("startPosition"));
	outFields->push(HX_CSTRING("endPosition"));
	outFields->push(HX_CSTRING("distance"));
	outFields->push(HX_CSTRING("angle"));
	outFields->push(HX_CSTRING("duration"));
	outFields->push(HX_CSTRING("_startTimeInTicks"));
	outFields->push(HX_CSTRING("_endTimeInTicks"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FlxSwipe_obj,ID),HX_CSTRING("ID")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,startPosition),HX_CSTRING("startPosition")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FlxSwipe_obj,endPosition),HX_CSTRING("endPosition")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_startTimeInTicks),HX_CSTRING("_startTimeInTicks")},
	{hx::fsFloat,(int)offsetof(FlxSwipe_obj,_endTimeInTicks),HX_CSTRING("_endTimeInTicks")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("ID"),
	HX_CSTRING("startPosition"),
	HX_CSTRING("endPosition"),
	HX_CSTRING("_startTimeInTicks"),
	HX_CSTRING("_endTimeInTicks"),
	HX_CSTRING("toString"),
	HX_CSTRING("get_distance"),
	HX_CSTRING("get_angle"),
	HX_CSTRING("get_duration"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxSwipe_obj::__mClass,"__mClass");
};

#endif

Class FlxSwipe_obj::__mClass;

void FlxSwipe_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("flixel.input.FlxSwipe"), hx::TCanCast< FlxSwipe_obj> ,sStaticFields,sMemberFields,
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

void FlxSwipe_obj::__boot()
{
}

} // end namespace flixel
} // end namespace input
