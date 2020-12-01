#pragma once
#include "Human.hpp"
#include <list>
#include <vector>

using namespace std;

vector< char > foo(list< Human >& people)
{
  vector< char > obj; // wektor objektow typu character(char)

  for(Human& h : people)
  {
    h.birthday(); // ikrementacja poprzez wywolanie metody "birthday()"
    if (h.isMonster() == false)
      obj.emplace_back('y');
    else
 	    obj.emplace_back('n');
  }
  
  for(auto rh = obj.crbegin(); rh != obj.crend(); rh++)
    obj.emplace_front(*rh);
  
  return obj; // zwrot wektora objektow typu 'char'
}