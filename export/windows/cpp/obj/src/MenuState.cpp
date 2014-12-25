#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_Reg
#include <Reg.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_animation_FlxAnimationController
#include <flixel/animation/FlxAnimationController.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
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
#ifndef INCLUDED_flixel_math_FlxMath
#include <flixel/math/FlxMath.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxButton
#include <flixel/ui/FlxButton.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool_flixel_math_FlxPoint
#include <flixel/util/FlxPool_flixel_math_FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

Void MenuState_obj::__construct(Dynamic MaxSize)
{
HX_STACK_FRAME("MenuState","new",0xe563b1c4,"MenuState.new","MenuState.hx",20,0xdfbcb22c)
HX_STACK_THIS(this)
HX_STACK_ARG(MaxSize,"MaxSize")
{
	HX_STACK_LINE(20)
	super::__construct(MaxSize);
}
;
	return null();
}

//MenuState_obj::~MenuState_obj() { }

Dynamic MenuState_obj::__CreateEmpty() { return  new MenuState_obj; }
hx::ObjectPtr< MenuState_obj > MenuState_obj::__new(Dynamic MaxSize)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(MaxSize);
	return result;}

Dynamic MenuState_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< MenuState_obj > result = new MenuState_obj();
	result->__construct(inArgs[0]);
	return result;}

Void MenuState_obj::create( ){
{
		HX_STACK_FRAME("MenuState","create",0xe57b7c18,"MenuState.create","MenuState.hx",27,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(28)
		int c;		HX_STACK_VAR(c,"c");
		HX_STACK_LINE(29)
		{
			HX_STACK_LINE(29)
			int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(29)
			int _g = ::Math_obj::floor((Float(::Reg_obj::gH) / Float(::Reg_obj::tH)));		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(29)
			while((true)){
				HX_STACK_LINE(29)
				if ((!(((_g1 < _g))))){
					HX_STACK_LINE(29)
					break;
				}
				HX_STACK_LINE(29)
				int Y = (_g1)++;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(30)
				{
					HX_STACK_LINE(30)
					int _g3 = (int)0;		HX_STACK_VAR(_g3,"_g3");
					HX_STACK_LINE(30)
					int _g2 = ::Math_obj::floor((Float(::Reg_obj::gW) / Float(::Reg_obj::tW)));		HX_STACK_VAR(_g2,"_g2");
					HX_STACK_LINE(30)
					while((true)){
						HX_STACK_LINE(30)
						if ((!(((_g3 < _g2))))){
							HX_STACK_LINE(30)
							break;
						}
						HX_STACK_LINE(30)
						int X = (_g3)++;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(31)
						if ((this->isOdd((Y + X)))){
							HX_STACK_LINE(31)
							c = ::Reg_obj::gridColors->__get((int)0);
						}
						else{
							HX_STACK_LINE(31)
							c = ::Reg_obj::gridColors->__get((int)1);
						}
						HX_STACK_LINE(32)
						::flixel::FlxSprite g = ::flixel::FlxSprite_obj::__new((X * ::Reg_obj::tW),(Y * ::Reg_obj::tH),null());		HX_STACK_VAR(g,"g");
						HX_STACK_LINE(33)
						g->makeGraphic(::Reg_obj::tW,::Reg_obj::tH,c,null(),null());
						HX_STACK_LINE(34)
						this->add(g);
					}
				}
			}
		}
		HX_STACK_LINE(37)
		::flixel::FlxSprite tiles = ::flixel::FlxSprite_obj::__new((int)0,(int)0,::Reg_obj::graphic);		HX_STACK_VAR(tiles,"tiles");
		HX_STACK_LINE(38)
		this->add(tiles);
		HX_STACK_LINE(39)
		Float _g = tiles->get_width();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(39)
		Float _g1 = tiles->get_height();		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(39)
		::flixel::math::FlxRect _g2 = ::flixel::math::FlxRect_obj::__new(tiles->x,tiles->y,_g,_g1);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(39)
		this->box = _g2;
		HX_STACK_LINE(40)
		::flixel::group::FlxTypedSpriteGroup _g3 = ::flixel::group::FlxTypedSpriteGroup_obj::__new(null(),null(),null());		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(40)
		this->options = _g3;
		HX_STACK_LINE(41)
		{
			HX_STACK_LINE(41)
			int _g11 = (int)0;		HX_STACK_VAR(_g11,"_g11");
			HX_STACK_LINE(41)
			int _g4 = ::Math_obj::floor((Float(::Reg_obj::gH) / Float(::Reg_obj::tH)));		HX_STACK_VAR(_g4,"_g4");
			HX_STACK_LINE(41)
			while((true)){
				HX_STACK_LINE(41)
				if ((!(((_g11 < _g4))))){
					HX_STACK_LINE(41)
					break;
				}
				HX_STACK_LINE(41)
				int Y = (_g11)++;		HX_STACK_VAR(Y,"Y");
				HX_STACK_LINE(41)
				{
					HX_STACK_LINE(41)
					int _g31 = (int)0;		HX_STACK_VAR(_g31,"_g31");
					HX_STACK_LINE(41)
					int _g21 = ::Math_obj::floor((Float(::Reg_obj::gW) / Float(::Reg_obj::tW)));		HX_STACK_VAR(_g21,"_g21");
					HX_STACK_LINE(41)
					while((true)){
						HX_STACK_LINE(41)
						if ((!(((_g31 < _g21))))){
							HX_STACK_LINE(41)
							break;
						}
						HX_STACK_LINE(41)
						int X = (_g31)++;		HX_STACK_VAR(X,"X");
						HX_STACK_LINE(41)
						::Option _g41 = ::Option_obj::__new(X,Y);		HX_STACK_VAR(_g41,"_g41");
						HX_STACK_LINE(41)
						this->options->add(_g41);
					}
				}
			}
		}
		HX_STACK_LINE(42)
		this->add(this->options);
		HX_STACK_LINE(43)
		::flixel::FlxSprite _g5 = ::flixel::FlxSprite_obj::__new(null(),null(),null());		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(43)
		this->selectionSquare = _g5;
		HX_STACK_LINE(44)
		this->selectionSquare->makeGraphic((::Reg_obj::tW + (int)2),(::Reg_obj::tH + (int)2),(int)16777215,null(),null());
		HX_STACK_LINE(45)
		Float _g6 = this->selectionSquare->get_width();		HX_STACK_VAR(_g6,"_g6");
		HX_STACK_LINE(45)
		::flixel::util::FlxSpriteUtil_obj::drawRect(this->selectionSquare,(int)0,(int)0,_g6,(int)1,null(),null(),null());
		HX_STACK_LINE(46)
		Float _g7 = this->selectionSquare->get_height();		HX_STACK_VAR(_g7,"_g7");
		HX_STACK_LINE(46)
		::flixel::util::FlxSpriteUtil_obj::drawRect(this->selectionSquare,(int)0,(int)0,(int)1,_g7,null(),null(),null());
		HX_STACK_LINE(47)
		Float _g8 = this->selectionSquare->get_width();		HX_STACK_VAR(_g8,"_g8");
		HX_STACK_LINE(47)
		Float _g9 = (_g8 - (int)1);		HX_STACK_VAR(_g9,"_g9");
		HX_STACK_LINE(47)
		Float _g10 = this->selectionSquare->get_height();		HX_STACK_VAR(_g10,"_g10");
		HX_STACK_LINE(47)
		::flixel::util::FlxSpriteUtil_obj::drawRect(this->selectionSquare,_g9,(int)0,(int)1,_g10,null(),null(),null());
		HX_STACK_LINE(48)
		Float _g11 = this->selectionSquare->get_height();		HX_STACK_VAR(_g11,"_g11");
		HX_STACK_LINE(48)
		Float _g12 = (_g11 - (int)1);		HX_STACK_VAR(_g12,"_g12");
		HX_STACK_LINE(48)
		Float _g13 = this->selectionSquare->get_width();		HX_STACK_VAR(_g13,"_g13");
		HX_STACK_LINE(48)
		::flixel::util::FlxSpriteUtil_obj::drawRect(this->selectionSquare,(int)0,_g12,_g13,(int)1,null(),null(),null());
		HX_STACK_LINE(49)
		this->add(this->selectionSquare);
		HX_STACK_LINE(50)
		::flixel::ui::FlxButton button = ::flixel::ui::FlxButton_obj::__new((int)0,(::flixel::FlxG_obj::height - (int)40),HX_CSTRING("Write To File"),this->writeToFile_dyn());		HX_STACK_VAR(button,"button");
		HX_STACK_LINE(51)
		::flixel::util::FlxSpriteUtil_obj::screenCenter(button,true,false);
		HX_STACK_LINE(52)
		this->add(button);
		HX_STACK_LINE(53)
		::flixel::FlxG_obj::camera->setScrollBounds(null(),null(),null(),null());
	}
return null();
}


bool MenuState_obj::isOdd( int num){
	HX_STACK_FRAME("MenuState","isOdd",0xf328be49,"MenuState.isOdd","MenuState.hx",56,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(num,"num")
	HX_STACK_LINE(56)
	return (hx::Mod(num,(int)2) == (int)0);
}


HX_DEFINE_DYNAMIC_FUNC1(MenuState_obj,isOdd,return )

::String MenuState_obj::getNonCollidableTiles( ){
	HX_STACK_FRAME("MenuState","getNonCollidableTiles",0x5dbb53b1,"MenuState.getNonCollidableTiles","MenuState.hx",59,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(60)
	::String s = HX_CSTRING("[");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(61)
	bool first = false;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(62)
	{
		HX_STACK_LINE(62)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(62)
		int _g = (int)400;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(62)
		while((true)){
			HX_STACK_LINE(62)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(62)
				break;
			}
			HX_STACK_LINE(62)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(63)
			if (((this->options->group->members->__GetItem(i)->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("frameIndex"),true) == (int)1))){
				HX_STACK_LINE(64)
				if ((!(first))){
					HX_STACK_LINE(65)
					first = true;
					HX_STACK_LINE(66)
					s = (s + i);
				}
				else{
					HX_STACK_LINE(68)
					s = ((s + HX_CSTRING(", ")) + i);
				}
			}
		}
	}
	HX_STACK_LINE(72)
	s = (s + HX_CSTRING("]"));
	HX_STACK_LINE(73)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,getNonCollidableTiles,return )

::String MenuState_obj::getCloudTiles( ){
	HX_STACK_FRAME("MenuState","getCloudTiles",0x654d4e6a,"MenuState.getCloudTiles","MenuState.hx",77,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_LINE(78)
	::String s = HX_CSTRING("[");		HX_STACK_VAR(s,"s");
	HX_STACK_LINE(79)
	bool first = false;		HX_STACK_VAR(first,"first");
	HX_STACK_LINE(80)
	{
		HX_STACK_LINE(80)
		int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(80)
		int _g = (int)400;		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(80)
		while((true)){
			HX_STACK_LINE(80)
			if ((!(((_g1 < _g))))){
				HX_STACK_LINE(80)
				break;
			}
			HX_STACK_LINE(80)
			int i = (_g1)++;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(81)
			if (((this->options->group->members->__GetItem(i)->__Field(HX_CSTRING("animation"),true)->__Field(HX_CSTRING("frameIndex"),true) == (int)2))){
				HX_STACK_LINE(82)
				if ((!(first))){
					HX_STACK_LINE(83)
					first = true;
					HX_STACK_LINE(84)
					s = (s + i);
				}
				else{
					HX_STACK_LINE(86)
					s = ((s + HX_CSTRING(", ")) + i);
				}
			}
		}
	}
	HX_STACK_LINE(90)
	s = (s + HX_CSTRING("]"));
	HX_STACK_LINE(91)
	return s;
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,getCloudTiles,return )

Void MenuState_obj::writeToFile( ){
{
		HX_STACK_FRAME("MenuState","writeToFile",0xae14713a,"MenuState.writeToFile","MenuState.hx",95,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_LINE(96)
		::String fname = HX_CSTRING("file.txt");		HX_STACK_VAR(fname,"fname");
		HX_STACK_LINE(97)
		::sys::io::FileOutput fout = ::sys::io::File_obj::write(fname,false);		HX_STACK_VAR(fout,"fout");
		HX_STACK_LINE(98)
		::String _g = this->getNonCollidableTiles();		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(98)
		::String _g1 = (HX_CSTRING("var nC:Array<Int> = ") + _g);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(98)
		::String _g2 = (_g1 + HX_CSTRING("; \nfor (i in 0...nC.length) map.setTileProperties(nC[i], FlxObject.NONE)\n"));		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(98)
		fout->writeString(_g2);
		HX_STACK_LINE(99)
		::String _g3 = this->getCloudTiles();		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(99)
		::String _g4 = (HX_CSTRING("var cT:Array<Int> = ") + _g3);		HX_STACK_VAR(_g4,"_g4");
		HX_STACK_LINE(99)
		::String _g5 = (_g4 + HX_CSTRING("; \nfor (i in 0...cT.length) map.setTileProperties(cT[i], FlxObject.FLOOR)\n"));		HX_STACK_VAR(_g5,"_g5");
		HX_STACK_LINE(99)
		fout->writeString(_g5);
		HX_STACK_LINE(100)
		fout->close();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(MenuState_obj,writeToFile,(void))

Void MenuState_obj::update( Float elapsed){
{
		HX_STACK_FRAME("MenuState","update",0xf0719b25,"MenuState.update","MenuState.hx",104,0xdfbcb22c)
		HX_STACK_THIS(this)
		HX_STACK_ARG(elapsed,"elapsed")
		struct _Function_1_1{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",105,0xdfbcb22c)
				{
					HX_STACK_LINE(105)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->justPressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(105)
					return _this->keyManager->checkStatus((int)81,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(105)
		if (((  ((_Function_1_1::Block())) ? bool((::flixel::FlxG_obj::camera->zoom > (int)1)) : bool(false) ))){
			HX_STACK_LINE(105)
			::flixel::FlxCamera _g = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(105)
			Float _g1 = _g->zoom;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(105)
			_g->set_zoom((_g1 - (int)1));
			HX_STACK_LINE(105)
			_g1;
		}
		struct _Function_1_2{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",106,0xdfbcb22c)
				{
					HX_STACK_LINE(106)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->justPressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(106)
					return _this->keyManager->checkStatus((int)69,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(106)
		if ((_Function_1_2::Block())){
			HX_STACK_LINE(106)
			::flixel::FlxCamera _g = ::flixel::FlxG_obj::camera;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(106)
			Float _g1 = _g->zoom;		HX_STACK_VAR(_g1,"_g1");
			HX_STACK_LINE(106)
			_g->set_zoom((_g1 + (int)1));
			HX_STACK_LINE(106)
			_g1;
		}
		HX_STACK_LINE(107)
		::flixel::math::FlxPoint cS;		HX_STACK_VAR(cS,"cS");
		HX_STACK_LINE(107)
		{
			HX_STACK_LINE(107)
			::flixel::math::FlxPoint point = ::flixel::math::FlxPoint_obj::_pool->get()->set((int)0,(int)0);		HX_STACK_VAR(point,"point");
			HX_STACK_LINE(107)
			point->_inPool = false;
			HX_STACK_LINE(107)
			cS = point;
		}
		struct _Function_1_3{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",108,0xdfbcb22c)
				{
					HX_STACK_LINE(108)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->pressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(108)
					return _this->keyManager->checkStatus((int)87,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(108)
		if ((_Function_1_3::Block())){
			HX_STACK_LINE(108)
			::flixel::math::FlxPoint _g = cS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(108)
			_g->set_y((_g->y - (int)2));
		}
		struct _Function_1_4{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",109,0xdfbcb22c)
				{
					HX_STACK_LINE(109)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->pressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(109)
					return _this->keyManager->checkStatus((int)83,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(109)
		if ((_Function_1_4::Block())){
			HX_STACK_LINE(109)
			::flixel::math::FlxPoint _g = cS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(109)
			_g->set_y((_g->y + (int)2));
		}
		struct _Function_1_5{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",110,0xdfbcb22c)
				{
					HX_STACK_LINE(110)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->pressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(110)
					return _this->keyManager->checkStatus((int)65,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(110)
		if ((_Function_1_5::Block())){
			HX_STACK_LINE(110)
			::flixel::math::FlxPoint _g = cS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(110)
			_g->set_x((_g->x - (int)2));
		}
		struct _Function_1_6{
			inline static bool Block( ){
				HX_STACK_FRAME("*","closure",0x5bdab937,"*.closure","MenuState.hx",111,0xdfbcb22c)
				{
					HX_STACK_LINE(111)
					::flixel::input::keyboard::FlxKeyList _this = ::flixel::FlxG_obj::keys->pressed;		HX_STACK_VAR(_this,"_this");
					HX_STACK_LINE(111)
					return _this->keyManager->checkStatus((int)68,_this->status);
				}
				return null();
			}
		};
		HX_STACK_LINE(111)
		if ((_Function_1_6::Block())){
			HX_STACK_LINE(111)
			::flixel::math::FlxPoint _g = cS;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(111)
			_g->set_x((_g->x + (int)2));
		}
		HX_STACK_LINE(112)
		{
			HX_STACK_LINE(112)
			::flixel::math::FlxPoint _g = this->get_camera()->scroll;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(112)
			_g->set_x((_g->x + cS->x));
		}
		HX_STACK_LINE(113)
		{
			HX_STACK_LINE(113)
			::flixel::math::FlxPoint _g = this->get_camera()->scroll;		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(113)
			_g->set_y((_g->y + cS->y));
		}
		HX_STACK_LINE(115)
		if ((::flixel::math::FlxMath_obj::pointInFlxRect(::flixel::FlxG_obj::mouse->x,::flixel::FlxG_obj::mouse->y,this->box))){
			HX_STACK_LINE(115)
			this->selectionSquare->set_visible(true);
		}
		else{
			HX_STACK_LINE(115)
			this->selectionSquare->set_visible(false);
		}
		HX_STACK_LINE(116)
		int _g = this->snapToGrid(::flixel::FlxG_obj::mouse->x,::Reg_obj::tW);		HX_STACK_VAR(_g,"_g");
		HX_STACK_LINE(116)
		int _g1 = (_g - (int)1);		HX_STACK_VAR(_g1,"_g1");
		HX_STACK_LINE(116)
		int _g2 = this->snapToGrid(::flixel::FlxG_obj::mouse->y,::Reg_obj::tH);		HX_STACK_VAR(_g2,"_g2");
		HX_STACK_LINE(116)
		int _g3 = (_g2 - (int)1);		HX_STACK_VAR(_g3,"_g3");
		HX_STACK_LINE(116)
		this->selectionSquare->setPosition(_g1,_g3);
		HX_STACK_LINE(118)
		this->super::update(elapsed);
	}
return null();
}


int MenuState_obj::snapToGrid( Float n,int gridSize){
	HX_STACK_FRAME("MenuState","snapToGrid",0xaa3cb2e7,"MenuState.snapToGrid","MenuState.hx",122,0xdfbcb22c)
	HX_STACK_THIS(this)
	HX_STACK_ARG(n,"n")
	HX_STACK_ARG(gridSize,"gridSize")
	HX_STACK_LINE(123)
	int _g = ::Math_obj::floor((Float(n) / Float(gridSize)));		HX_STACK_VAR(_g,"_g");
	HX_STACK_LINE(123)
	return (_g * gridSize);
}


HX_DEFINE_DYNAMIC_FUNC2(MenuState_obj,snapToGrid,return )


MenuState_obj::MenuState_obj()
{
}

void MenuState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MenuState);
	HX_MARK_MEMBER_NAME(options,"options");
	HX_MARK_MEMBER_NAME(selectionSquare,"selectionSquare");
	HX_MARK_MEMBER_NAME(box,"box");
	::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MenuState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(options,"options");
	HX_VISIT_MEMBER_NAME(selectionSquare,"selectionSquare");
	HX_VISIT_MEMBER_NAME(box,"box");
	::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

Dynamic MenuState_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return box; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"isOdd") ) { return isOdd_dyn(); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return create_dyn(); }
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { return options; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"snapToGrid") ) { return snapToGrid_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"writeToFile") ) { return writeToFile_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getCloudTiles") ) { return getCloudTiles_dyn(); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectionSquare") ) { return selectionSquare; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"getNonCollidableTiles") ) { return getNonCollidableTiles_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic MenuState_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast< ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"options") ) { options=inValue.Cast< ::flixel::group::FlxTypedSpriteGroup >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"selectionSquare") ) { selectionSquare=inValue.Cast< ::flixel::FlxSprite >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MenuState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("options"));
	outFields->push(HX_CSTRING("selectionSquare"));
	outFields->push(HX_CSTRING("box"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::group::FlxTypedSpriteGroup*/ ,(int)offsetof(MenuState_obj,options),HX_CSTRING("options")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(MenuState_obj,selectionSquare),HX_CSTRING("selectionSquare")},
	{hx::fsObject /*::flixel::math::FlxRect*/ ,(int)offsetof(MenuState_obj,box),HX_CSTRING("box")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String sMemberFields[] = {
	HX_CSTRING("options"),
	HX_CSTRING("selectionSquare"),
	HX_CSTRING("box"),
	HX_CSTRING("create"),
	HX_CSTRING("isOdd"),
	HX_CSTRING("getNonCollidableTiles"),
	HX_CSTRING("getCloudTiles"),
	HX_CSTRING("writeToFile"),
	HX_CSTRING("update"),
	HX_CSTRING("snapToGrid"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MenuState_obj::__mClass,"__mClass");
};

#endif

Class MenuState_obj::__mClass;

void MenuState_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("MenuState"), hx::TCanCast< MenuState_obj> ,sStaticFields,sMemberFields,
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

void MenuState_obj::__boot()
{
}

