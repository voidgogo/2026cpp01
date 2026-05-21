#include <string>
#include <iostream>
using namespace std;

class Pokemon {
private:
	int a;
protected:
	int b;
public:
	int c;
	int getA() {
		return a;
	}
	int getB() {
		return b;
	}
};
class Pikachu : private Pokemon {
private:
	int d;
public:
	int getD() {
		return d;
	}
};
int main()
{
	Pikachu p;
	//p.a = 8;
	//p.b = 8;
	//p.c = 8;
	p.c = 8;
	return 0;
}