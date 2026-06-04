#include "date.h"
                                                                                                                                           
Date::Date(int year, int month, int day): year(year), month(month), day(day)
{
  if((month < 1) || (month > 12))
  {
    cout << "Month is out of range. ";
    assert(false);
  }
  int daysInMonths[13] = {0, 31, 28, 31, 30, 31, 30, 31, 
                           31, 30, 31, 30 ,31};
  if((day < 1) || (day > daysInMonths [month]))
  {
    cout << "Day out of range! ";
    assert(false);
  }
  if((year < 1900) ||(year > 2099))
  {
    cout << "Year out of range! " ;
    assert(false);
  }
}
                         
Date::~Date()
{
}
                                                   
void Date::print() const 
{
  cout << year << "년 " << month <<  "월 " << day << "일\n";
}