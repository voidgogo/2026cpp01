#include "invoice.h"

int main()
{
	Product product1("Monitor", 150000);
	Product product2("Keyboard", 70000);
	Invoice invoice(1000);
	invoice.add(2, product1);  // dependency
	invoice.add(5, product2);  // dependency
	invoice.print();
	return 0;
}