#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxInput
#include <flixel/input/FlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouseButton
#include <flixel/input/mouse/FlxMouseButton.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

Void Option_obj::__construct(int X,int Y)
{
HX_STACK_FRAME("Option","new",0x702ed707,"Option.new","Option.hx",11,0x24172649)
HX_STACK_THIS(this)
HX_STACK_ARG(X,"X")
HX_STACK_ARG(Y,"Y")
{
	HX_STACK_LINE(14)
	this->option = (int)0;
	HX_STACK_LINE(18)
	super::__construct((X * (int)16),(Y * (int)16),null());
	HX_STACK_LINE(19)
	this->loadGraphic(HX_CSTRING("assets/images/options.png"),true,(int)16,(int)16,null(),null());
	HX_STACK_LINE(20)
	::flixel::math::FlxRect _g = ::flixel::math::FlxRect_obj::__new(this->x,this->y,(int)16,(int)16);		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(20)
	this->box = _g;
}
;
	return null();
}

//Option_obj::~Option_obj() { }

Dynamic Option_obj::__CreateEmpty() { return  new Option_obj; }
hx::ObjectPtr< Option_obj > Option_obj::__new(int X,int Y)
{  hx::ObjectPtr< Option_obj > result = new Option_obj();
	result->__construct(X,Y);
	return result;}

Dynamic Option_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Option_obj > result = new Option_obj();
	result->__construct(inArgs[0],inArgs[1]);
	return result;}

Void Option_obj::update( Float elapsed){
{
		HX_STACK_FRAME("Option","update",0x97b4e1c2,"Option.update","Option.hx",24,0x24172649)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		HX_STACK_LINE(25)
		this->set_alpha(0.25);
		HX_STACK_LINE(26)
		if ((::flixel::math::FlxMath_obj::pointInFlxRect(::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y,this->box))){
			HX_STACK_LINE(27)
			this->set_alpha((int)1);
			HX_STACK_LINE(28)
			if (((::flixel::FlxG_obj::mouse->_leftButton->current == (int)2))){
				HX_STACK_LINE(29)
				this->animation->set_frameIndex(hx::Mod(((this->animation->frameIndex + (int)1)),(int)3));
			}
		}
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","Option.hx",32,0x24172649)
				{
					HX_STACK_LINE(32)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->pressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(32)
					return _this->keyManager->checkStatus((int)32,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(32)
		if ((_Function_1_1::Block())){
			HX_STACK_LINE(32)
			this->set_alpha((int)1);
		}
		HX_STACK_LINE(33)
		this->super::update(elapsed);
	}
return null();
}



Option_obj::Option_obj()
{
}

void Option_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Option);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(option,"option");
	::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Option_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(option,"option");
	::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

Dynamic Option_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"option") ) { return option; }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Option_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"option") ) { option=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Option_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("box"));
	outFields->push(HX_CSTRING("option"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(Option_obj,box),HX_CSTRING("box")},
	{hx::fsInt,(int)offsetof(Option_obj,option),HX_CSTRING("option")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("box"),
	HX_CSTRING("option"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Option_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Option_obj::__mClass,"__mClass");
};

#endif

Class Option_obj::__mClass;

void Option_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Option"), hx::TCanCast< Option_obj> ,sStaticFields,sMemberFields,
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

void Option_obj::__boot()
{
}

