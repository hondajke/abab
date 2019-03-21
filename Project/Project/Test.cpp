#ifdef TEST

#define BOOST_TEST_MODULE test1
#include <boost/test/included/unit_test.hpp>

#include "numbers.h"

BOOST_AUTO_TEST_CASE( test_case1 ){
	BOOST_TEST_CHECK(numbers_lt_20_to_string(0) == string("ноль"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(1) == string("один"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(2) == string("два"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(3) == string("три"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(4) == string("четыре"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(5) == string("пять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(6) == string("шесть"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(7) == string("семь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(8) == string("восемь"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(9) == string("девять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(10) == string("десять"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(11) == string("одиннадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(12) == string("двенадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(13) == string("тринадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(14) == string("четырнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(15) == string("пятьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(16) == string("шестьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(17) == string("семьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(18) == string("восемьнадцать"));
	BOOST_TEST_CHECK(numbers_lt_20_to_string(19) == string("девятьнадцать"));
}

BOOST_AUTO_TEST_CASE( test_case2 )
{
	BOOST_TEST_CHECK(number_less_100_to_string(6) == string("шесть"));
	BOOST_TEST_CHECK(number_less_100_to_string(10) == string("десять"));
	BOOST_TEST_CHECK(number_less_100_to_string(12) == string("двенадцать"));
	BOOST_TEST_CHECK(number_less_100_to_string(20) == string("двадцать"));
	BOOST_TEST_CHECK(number_less_100_to_string(30) == string("тридцать"));
	BOOST_TEST_CHECK(number_less_100_to_string(40) == string("сорок"));
	BOOST_TEST_CHECK(number_less_100_to_string(41) == string("сорок один"));
	BOOST_TEST_CHECK(number_less_100_to_string(50) == string("пятьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(52) == string("пятьдесять два"));
	BOOST_TEST_CHECK(number_less_100_to_string(60) == string("шестьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(63) == string("шестьдесять три"));
	BOOST_TEST_CHECK(number_less_100_to_string(70) == string("семьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(74) == string("семьдесять четыре"));
	BOOST_TEST_CHECK(number_less_100_to_string(80) == string("восемьдесять"));
	BOOST_TEST_CHECK(number_less_100_to_string(85) == string("восемьдесять пять"));
	BOOST_TEST_CHECK(number_less_100_to_string(90) == string("девяносто"));
	BOOST_TEST_CHECK(number_less_100_to_string(96) == string("девяносто шесть"));
}

BOOST_AUTO_TEST_CASE( test_case3 )
{
	BOOST_TEST_CHECK(number_less_1000_to_string(60) == string("шестьдесять"));
	BOOST_TEST_CHECK(number_less_1000_to_string(63) == string("шестьдесять три"));
	BOOST_TEST_CHECK(number_less_1000_to_string(70) == string("семьдесять"));
	BOOST_TEST_CHECK(number_less_1000_to_string(74) == string("семьдесять четыре"));
	BOOST_TEST_CHECK(number_less_1000_to_string(100) == string("сто"));
	BOOST_TEST_CHECK(number_less_1000_to_string(106) == string("сто шесть"));
	BOOST_TEST_CHECK(number_less_1000_to_string(200) == string("двести"));
	BOOST_TEST_CHECK(number_less_1000_to_string(212) == string("двести двенадцать"));
	BOOST_TEST_CHECK(number_less_1000_to_string(300) == string("триста"));
	BOOST_TEST_CHECK(number_less_1000_to_string(400) == string("четыреста"));
	BOOST_TEST_CHECK(number_less_1000_to_string(500) == string("пятьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(600) == string("шестьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(700) == string("семьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(800) == string("восемьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(900) == string("девятьсот"));
	BOOST_TEST_CHECK(number_less_1000_to_string(137) == string("сто тридцать семь"));
}
BOOST_AUTO_TEST_CASE( test_case4 ){
	BOOST_TEST_CHECK(objects_less_100_to_string(1, "объект", "объекта", "объектов")==string("один объект"));
	BOOST_TEST_CHECK(objects_less_100_to_string(2, "объект", "объекта", "объектов")==string("два объекта"));
	BOOST_TEST_CHECK(objects_less_100_to_string(6, "объект", "объекта", "объектов")==string("шесть объектов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(10, "объект", "объекта", "объектов")==string("десять объектов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(11, "объект", "объекта", "объектов")==string("одиннадцать объектов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(12, "объект", "объекта", "объектов")==string("двенадцать объектов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(17, "объект", "объекта", "объектов")==string("семьнадцать объектов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(20, "объект", "объекта", "объектов")==string("двадцать объектов"));
	BOOST_TEST_CHECK(objects_less_100_to_string(21, "объект", "объекта", "объектов")==string("двадцать один объект"));
	BOOST_TEST_CHECK(objects_less_100_to_string(22, "объект", "объекта", "объектов")==string("двадцать два объекта"));
	BOOST_TEST_CHECK(objects_less_100_to_string(27, "объект", "объекта", "объектов")==string("двадцать семь объектов"));
}
BOOST_AUTO_TEST_CASE( test_case5 ){
	BOOST_TEST_CHECK(currency_to_string(25, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек") == string("двадцать пять рублей, семьдесять три копейки"));
	BOOST_TEST_CHECK(currency_to_string(0, "рубль", "рубля", "рублей", 73, "копейка", "копейки", "копеек") == string("семьдесять три копейки"));
	BOOST_TEST_CHECK(currency_to_string(10, "рубль", "рубля", "рублей", 0, "копейка", "копейки", "копеек") == string("десять рублей"));
	BOOST_TEST_CHECK(currency_to_string(10, "рубль", "рубля", "рублей", 10, "копейка", "копейки", "копеек") == string("десять рублей, десять копеек"));
}
#endif