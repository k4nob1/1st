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
	BOOST_TEST( string_from_int(5) == string("п€ть") );
	BOOST_TEST( string_from_int(6) == string("шесть") );
	BOOST_TEST( string_from_int(7) == string("семь") );
	BOOST_TEST( string_from_int(8) == string("восемь") );
	BOOST_TEST( string_from_int(9) == string("дев€ть") );
	BOOST_TEST( string_from_int(10) == string("дес€ть") );
	BOOST_TEST( string_from_int(11) == string("одинадцать") );
	BOOST_TEST( string_from_int(12) == string("двенадцать") );
	BOOST_TEST( string_from_int(13) == string("тринадцать") );
	BOOST_TEST( string_from_int(14) == string("четырнадцать") );
	BOOST_TEST( string_from_int(15) == string("п€тьнадцать") );
	BOOST_TEST( string_from_int(16) == string("шестьнадцать") );	
	BOOST_TEST( string_from_int(17) == string("семьнадцать") );
	BOOST_TEST( string_from_int(18) == string("восемьнадцать") );
	BOOST_TEST( string_from_int(19) == string("дев€тьнадцать") );

}

BOOST_AUTO_TEST_SUITE_END()
#endif