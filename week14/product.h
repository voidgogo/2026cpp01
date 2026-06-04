#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>
using namespace std;

class Product
{
  private:
    string name;
    double unitPrice;
  public: 
    Product(string name, int unitPrice);   
   ~Product(); 
   int getPrice() const; 
};
#endif