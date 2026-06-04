#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "name.h"

class Employee
{
  private:
    Name name;
    int salary;
  public: 
    Employee(string last, string first, int salary);
    ~Employee(); 
    void print() const; 
};
#endif