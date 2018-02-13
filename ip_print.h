#pragma once
#include <iostream>
#include <ostream>
#include <functional>
#include <string>
#include <vector>
#include <list>
#include <math.h>

typedef typename std::vector<char> chunk;
template <class T>
chunk create_chunk(T t)
{
  chunk res(sizeof(T) / sizeof(char) );
  return res;
}

using namespace std;
template <class In>

chunk print_ip_to_chunk(In in)
{
  chunk v;
  return v;
}

template<>
chunk print_ip_to_chunk<char>(char in)
{
  chunk v;
  v.push_back(in);
  return v;
}


template<>
chunk print_ip_to_chunk<short>(short in)
{

  chunk v(2);
  v.push_back(in>>8);
  v.push_back(in>>16);

  return v;
}

template<>
chunk print_ip_to_chunk<int>(int in)
{
  vector<char> v;
  for(int i=0;i<4;i++)
  {
    v.push_back(in>>(8*i));
  }
  return v;
}






