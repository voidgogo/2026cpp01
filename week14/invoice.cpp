#include "invoice.h"

Invoice::Invoice(int invoiceNumber): invoiceNumber(invoiceNumber), invoiceTotal(0)
{  
}
Invoice::~Invoice() 
{
}
void Invoice::add(int quantity, Product product)  // use-a
{
  invoiceTotal += quantity * product.getPrice();
}
void Invoice::print() const
{
   cout << "청구 번호: " << invoiceNumber << endl;
   cout << "청구 금액: " << invoiceTotal << endl;
}