#include <iostream>
#include <cstring>  // string.h
using namespace std;

int main() {
	//char s1[] = { 'A', 'C', 'E', '\0' };
	//char s1[] = { 'A', 'C', 'E'};  // !!!
	//char s1[] = { 'A', 'C', 'E', NULL };	
	//char s1[] = { 'A', 'C', 'E', 0 };
	char s1[] = "ACE";
	char* ps1 = s1;
	cout << s1 << '\n';
	cout << *ps1 << '\n';
	cout << ps1 << '\n';
	cout << *s1 << '\n';
	cout << s1[1] << '\n';
	cout << *(ps1+1) << '\n';
	*(ps1 + 2) = 'Z';
	cout << s1 << '\n';

	return 0;
}