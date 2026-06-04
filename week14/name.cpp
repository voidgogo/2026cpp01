#include "name.h"

Name::Name(string last, string first) :last(last), first(first)
{
}
Name::~Name()
{
}
void Name::print() const
{
  cout << "직원 이름: " << last << " " << first << endl; 
}