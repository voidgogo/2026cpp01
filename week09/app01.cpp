#include <iostream>
#include <cstring>  // string.h
using namespace std;

int main() {
	char s1[] = "ACE";  // array compact initializer
	const char* ps1 = "ACE";  // string literal
	cout << s1 << '\n';
	cout << ps1 << '\n';

	return 0;
}