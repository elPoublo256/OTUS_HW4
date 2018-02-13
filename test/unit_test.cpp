#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE test_test_modul
#define BOOST_TEST_MODULE boost_test_sequence
#include <string>
#include <boost/test/unit_test.hpp>
#include "../ip_print.h"
#include <iostream>
BOOST_AUTO_TEST_CASE(test_print_ip_to_chunk_short)
{
  short x(0);
  std::vector<char> vec = print_ip_to_chunk(x);
  BOOST_CHECK(vec.size()==2);
  vector<char> vec2=print_ip_to_chunk(x);
  BOOST_CHECK_EQUAL_COLLECTIONS(vec.begin(), vec.end(), vec2.begin(), vec2.end());
}


BOOST_AUTO_TEST_CASE(test_print_ip_to_chunk_int)
{
  std::vector<char> vec(4);
  vec[0]=char(127);
  vec[1]=char(0);
  vec[2]=char(0);
  vec[3]=char(1);

  int a=2130772225;
  vector<char> vec2=print_ip_to_chunk(a);
  BOOST_CHECK(vec2.size()==4);

  BOOST_CHECK_EQUAL_COLLECTIONS(vec.begin(), vec.end(), vec2.begin(), vec2.end());
}

