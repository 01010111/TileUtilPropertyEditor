#ifndef INCLUDED_Reg
#define INCLUDED_Reg

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Reg)


class HXCPP_CLASS_ATTRIBUTES  Reg_obj : public hx::Object{
	public:
		typedef hx::Object super;
		typedef Reg_obj OBJ_;
		Reg_obj();
		Void __construct();

	public:
		inline void *operator new( size_t inSize, bool inContainer=false)
			{ return hx::Object::operator new(inSize,inContainer); }
		static hx::ObjectPtr< Reg_obj > __new();
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Reg_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		::String __ToString() const { return HX_CSTRING("Reg"); }

		static ::String graphic;
		static int tW;
		static int tH;
		static int gW;
		static int gH;
		static Array< int > gridColors;
};


#endif /* INCLUDED_Reg */ 
