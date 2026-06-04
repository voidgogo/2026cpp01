#ifndef NAME_H
#define NAME_H
#include <string>
#include <iostream>
#include <cassert>
using namespace std;

class Name
{
  private:
    string last;
    string first;    
  public: 
    Name(string last, string first);   
    ~Name(); 
    void print() const; 
};
#endif