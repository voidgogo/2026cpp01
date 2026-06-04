#ifndef PERSON_H
#define PERSON_H
#include "date.h"
#include "string"

class Person
{
  private:
    string id;
    Date birthDate;  // has-a
  public: 
    Person(string id, Date birthDate); // aggregation
    ~Person(); 
    void print() const; 
};
#endif