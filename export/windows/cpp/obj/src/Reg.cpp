#include <hxcpp.h>

#ifndef INCLUDED_Reg
#include <Reg.h>
#endif

Void Reg_obj::__construct()
{
	return null();
}

//Reg_obj::~Reg_obj() { }

Dynamic Reg_obj::__CreateEmpty() { return  new Reg_obj; }
hx::ObjectPtr< Reg_obj > Reg_obj::__new()
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

Dynamic Reg_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Reg_obj > result = new Reg_obj();
	result->__construct();
	return result;}

::String Reg_obj::graphic;

int Reg_obj::tW;

int Reg_obj::tH;

int Reg_obj::gW;

int Reg_obj::gH;

Array< int > Reg_obj::gridColors;


Reg_obj::Reg_obj()
{
}

Dynamic Reg_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tW") ) { return tW; }
		if (HX_FIELD_EQ(inName,"tH") ) { return tH; }
		if (HX_FIELD_EQ(inName,"gW") ) { return gW; }
		if (HX_FIELD_EQ(inName,"gH") ) { return gH; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { return graphic; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gridColors") ) { return gridColors; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Reg_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"tW") ) { tW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tH") ) { tH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gW") ) { gW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"gH") ) { gH=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"graphic") ) { graphic=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"gridColors") ) { gridColors=inValue.Cast< Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Reg_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("graphic"),
	HX_CSTRING("tW"),
	HX_CSTRING("tH"),
	HX_CSTRING("gW"),
	HX_CSTRING("gH"),
	HX_CSTRING("gridColors"),
	String(null()) };

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *sMemberStorageInfo = 0;
#endif

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Reg_obj::graphic,"graphic");
	HX_MARK_MEMBER_NAME(Reg_obj::tW,"tW");
	HX_MARK_MEMBER_NAME(Reg_obj::tH,"tH");
	HX_MARK_MEMBER_NAME(Reg_obj::gW,"gW");
	HX_MARK_MEMBER_NAME(Reg_obj::gH,"gH");
	HX_MARK_MEMBER_NAME(Reg_obj::gridColors,"gridColors");
};

#ifdef HXCPP_VISIT_ALLOCS
static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Reg_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Reg_obj::graphic,"graphic");
	HX_VISIT_MEMBER_NAME(Reg_obj::tW,"tW");
	HX_VISIT_MEMBER_NAME(Reg_obj::tH,"tH");
	HX_VISIT_MEMBER_NAME(Reg_obj::gW,"gW");
	HX_VISIT_MEMBER_NAME(Reg_obj::gH,"gH");
	HX_VISIT_MEMBER_NAME(Reg_obj::gridColors,"gridColors");
};

#endif

Class Reg_obj::__mClass;

void Reg_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Reg"), hx::TCanCast< Reg_obj> ,sStaticFields,sMemberFields,
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

void Reg_obj::__boot()
{
	graphic= HX_CSTRING("assets/images/tiles_stage1.png");
	tW= (int)16;
	tH= (int)16;
	gW= (int)320;
	gH= (int)320;
	gridColors= Array_obj< int >::__new().Add((int)-1).Add((int)-2236963);
}

