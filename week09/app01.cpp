#include <iostream>
#include <cstring>  // string.h
using namespace std;

int main() {
	//char s1[] = { 'A', 'C', 'E', '\0' };
	//char s1[] = { 'A', 'C', 'E'};  // !!!
	//char s1[] = { 'A', 'C', 'E', NULL };	
	//char s1[] = { 'A', 'C', 'E', 0 };
	//char s1[] = "ACE";

	char s1[] = { 'A', 'C', NULL, 'E' };
	cout << s1 << '\n';

	return 0;
}