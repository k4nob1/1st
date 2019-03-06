#ifdef TEST
#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"

BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST( string_from_int(0) == string("ноль") );
	BOOST_TEST( string_from_int(1) == string("один") );
	BOOST_TEST( string_from_int(2) == string("два") );
	BOOST_TEST( string_from_int(3) == string("три") );
	BOOST_TEST( string_from_int(4) == string("четыре") );
	BOOST_TEST( string_from_int(5) == string("пять") );
	BOOST_TEST( string_from_int(6) == string("шесть") );
	BOOST_TEST( string_from_int(7) == string("семь") );
	BOOST_TEST( string_from_int(8) == string("восемь") );
	BOOST_TEST( string_from_int(9) == string("девять") );
	BOOST_TEST( string_from_int(10) == string("десять") );
	BOOST_TEST( string_from_int(11) == string("одинадцать") );
	BOOST_TEST( string_from_int(12) == string("двенадцать") );
	BOOST_TEST( string_from_int(13) == string("тринадцать") );
	BOOST_TEST( string_from_int(14) == string("четырнадцать") );
	BOOST_TEST( string_from_int(15) == string("пятьнадцать") );
	BOOST_TEST( string_from_int(16) == string("шестьнадцать") );	
	BOOST_TEST( string_from_int(17) == string("семьнадцать") );
	BOOST_TEST( string_from_int(18) == string("восемьнадцать") );
	BOOST_TEST( string_from_int(19) == string("девятьнадцать") );
}
BOOST_AUTO_TEST_CASE( test_int_to_sto )
{
	BOOST_TEST( int_to_sto(6) == string("шесть") );
	BOOST_TEST( int_to_sto(7) == string("семь") );
	BOOST_TEST( int_to_sto(8) == string("восемь") );
	BOOST_TEST( int_to_sto(9) == string("девять") );
	BOOST_TEST( int_to_sto(10) == string("десять") );
	BOOST_TEST( int_to_sto(22) == string("двадцать два") );
	BOOST_TEST( int_to_sto(30) == string("тридцать") );
	BOOST_TEST( int_to_sto(99) == string("девяносто девять") );
	BOOST_TEST( int_to_sto(64) == string("шестьдесят четыре") );
	BOOST_TEST( int_to_sto(86) == string("восемьдесят шесть") );

}
BOOST_AUTO_TEST_CASE( test_kilo )
{
	BOOST_TEST( kilo(6) == string("шесть") );
	BOOST_TEST( kilo(7) == string("семь") );
	BOOST_TEST( kilo(8) == string("восемь") );
	BOOST_TEST( kilo(9) == string("девять") );
	BOOST_TEST( kilo(10) == string("десять") );
	BOOST_TEST( kilo(22) == string("двадцать два") );
	BOOST_TEST( kilo(30) == string("тридцать") );
	BOOST_TEST( kilo(99) == string("девяносто девять") );
	BOOST_TEST( kilo(999) == string("девятьсот девяносто девять") );
	BOOST_TEST( kilo(886) == string("восемьсот восемьдесят шесть") );
}
BOOST_AUTO_TEST_CASE( test_sch )
{
	BOOST_TEST( sch(3,"рубль","рубля","рублей") == string("три рубля") );
	BOOST_TEST( sch(1,"стул","стула","стульев") == string("один стул") );
	BOOST_TEST( sch(6,"рубль","рубля","рублей") == string("шесть рублей") );
	BOOST_TEST( sch(101,"доллар","доллара","долларов") == string("сто один доллар") );
	BOOST_TEST( sch(103,"гриб","гриба","грибов") == string("сто три гриба") );
	BOOST_TEST( sch(999,"город","города","городов") == string("девятьсот девяносто девять городов") );
}
BOOST_AUTO_TEST_CASE( test_last )
{
	BOOST_TEST( last(3,"рубль","рубля","рублей",6,"копейка","копейки","копеек") == string("три рубля, шесть копеек") );
	BOOST_TEST( last(11,"rubl","rublya","rubley",0,"kopeika","kopeiki","kopeek") == string("одинадцать rubley") );
	BOOST_TEST( last(99,"доллар","доллара","долларов",99,"цент","цента","центов") == string("девяносто девять долларов, девяносто девять центов") );
	BOOST_TEST( last(111,"доллар","доллара","долларов",1,"цент","цента","центов") == string("сто одинадцать долларов, один цент") );
	BOOST_TEST( last(999,"dollar","dollara","dollarov",999,"cent","centa","centov") == string("девятьсот девяносто девять dollarov, девятьсот девяносто девять centov"));
}



BOOST_AUTO_TEST_SUITE_END()
#endif