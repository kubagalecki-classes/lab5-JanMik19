#pragma once
#include "Human.hpp"
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
  vector< char > obj, robj; // wektor objektow typu character(char), robj druga lista - odwrotna

  for(Human& h : people)
  {
    h.birthday(); // ikrementacja poprzez wywolanie metody "birthday()"
    if (h.isMonster() == false)
      obj.emplace_back('y');
    else
 	  obj.emplace_back('n');
  }
  
  for(auto rh = obj.crbegin(); rh != obj.crend(); ++rh)
    robj.emplace_back(*rh);
  
  return robj; // zwrot wektora objektow typu 'char'
}