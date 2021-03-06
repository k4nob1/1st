#ifdef TEST
#define BOOST_TEST_MODULE tests

#include <boost/test/included/unit_test.hpp>
#include "numbers.h"

BOOST_AUTO_TEST_SUITE( test_suite1 )

BOOST_AUTO_TEST_CASE( test_case1 )
{
	BOOST_TEST( string_from_int(0) == string("����") );
	BOOST_TEST( string_from_int(1) == string("����") );
	BOOST_TEST( string_from_int(2) == string("���") );
	BOOST_TEST( string_from_int(3) == string("���") );
	BOOST_TEST( string_from_int(4) == string("������") );
	BOOST_TEST( string_from_int(5) == string("����") );
	BOOST_TEST( string_from_int(6) == string("�����") );
	BOOST_TEST( string_from_int(7) == string("����") );
	BOOST_TEST( string_from_int(8) == string("������") );
	BOOST_TEST( string_from_int(9) == string("������") );
	BOOST_TEST( string_from_int(10) == string("������") );
	BOOST_TEST( string_from_int(11) == string("����������") );
	BOOST_TEST( string_from_int(12) == string("����������") );
	BOOST_TEST( string_from_int(13) == string("����������") );
	BOOST_TEST( string_from_int(14) == string("������������") );
	BOOST_TEST( string_from_int(15) == string("�����������") );
	BOOST_TEST( string_from_int(16) == string("������������") );	
	BOOST_TEST( string_from_int(17) == string("�����������") );
	BOOST_TEST( string_from_int(18) == string("�������������") );
	BOOST_TEST( string_from_int(19) == string("�������������") );
}
BOOST_AUTO_TEST_CASE( test_int_to_sto )
{
	BOOST_TEST( int_to_sto(6) == string("�����") );
	BOOST_TEST( int_to_sto(7) == string("����") );
	BOOST_TEST( int_to_sto(8) == string("������") );
	BOOST_TEST( int_to_sto(9) == string("������") );
	BOOST_TEST( int_to_sto(10) == string("������") );
	BOOST_TEST( int_to_sto(22) == string("�������� ���") );
	BOOST_TEST( int_to_sto(30) == string("��������") );
	BOOST_TEST( int_to_sto(99) == string("��������� ������") );
	BOOST_TEST( int_to_sto(64) == string("���������� ������") );
	BOOST_TEST( int_to_sto(86) == string("����������� �����") );

}
BOOST_AUTO_TEST_CASE( test_kilo )
{
	BOOST_TEST( kilo(6) == string("�����") );
	BOOST_TEST( kilo(7) == string("����") );
	BOOST_TEST( kilo(8) == string("������") );
	BOOST_TEST( kilo(9) == string("������") );
	BOOST_TEST( kilo(10) == string("������") );
	BOOST_TEST( kilo(22) == string("�������� ���") );
	BOOST_TEST( kilo(30) == string("��������") );
	BOOST_TEST( kilo(99) == string("��������� ������") );
	BOOST_TEST( kilo(999) == string("��������� ��������� ������") );
	BOOST_TEST( kilo(886) == string("��������� ����������� �����") );
}
BOOST_AUTO_TEST_CASE( test_sch )
{
	BOOST_TEST( sch(3,"�����","�����","������") == string("��� �����") );
	BOOST_TEST( sch(1,"����","�����","�������") == string("���� ����") );
	BOOST_TEST( sch(6,"�����","�����","������") == string("����� ������") );
	BOOST_TEST( sch(101,"������","�������","��������") == string("��� ���� ������") );
	BOOST_TEST( sch(103,"����","�����","������") == string("��� ��� �����") );
	BOOST_TEST( sch(999,"�����","������","�������") == string("��������� ��������� ������ �������") );
}
BOOST_AUTO_TEST_CASE( test_last )
{
	BOOST_TEST( last(3,"�����","�����","������",6,"�������","�������","������") == string("��� �����, ����� ������") );
	BOOST_TEST( last(11,"rubl","rublya","rubley",0,"kopeika","kopeiki","kopeek") == string("���������� rubley") );
	BOOST_TEST( last(99,"������","�������","��������",99,"����","�����","������") == string("��������� ������ ��������, ��������� ������ ������") );
	BOOST_TEST( last(111,"������","�������","��������",1,"����","�����","������") == string("��� ���������� ��������, ���� ����") );
	BOOST_TEST( last(999,"dollar","dollara","dollarov",999,"cent","centa","centov") == string("��������� ��������� ������ dollarov, ��������� ��������� ������ centov"));
}



BOOST_AUTO_TEST_SUITE_END()
#endif