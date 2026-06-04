#ifndef INVOICE_H
#define INVOICE_H
#include "product.h"

class Invoice
{
  private:
    int invoiceNumber;
    int invoiceTotal; 
  public: 
    Invoice(int invoiceNumber);
    ~Invoice(); 
    void add(int quantity, Product product);  // use-a, dependency
    void print() const; 
};
#endif