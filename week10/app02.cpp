#include <cstring>
#include <iostream>
using namespace std;

int main()
{
	//string s1 = "abc";
	//string s1("abc");
	//string s1("abc", 2);
	string s1(5, 'X');
	cout << s1 << "/" << s1.size() << "/" << s1.capacity() << endl;	
	s1 = "defghijk";
	cout << s1 << "/" << s1.size() << "/" << s1.capacity() << endl;
	s1 = "123456789012345";
	cout << s1 << "/" << s1.size() << "/" << s1.capacity() << endl;
	s1 = "12345678901234567";
	cout << s1 << "/" << s1.size() << "/" << s1.capacity() << endl;

	return 0;
}