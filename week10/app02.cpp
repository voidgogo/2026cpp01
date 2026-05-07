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
	string s2(s1); // copy constructor
	cout << s2 << "/" << s2.size() << "/" << s2.capacity() << endl;
	cout << s2.empty() << '\n';
	s2.clear();
	cout << s2.empty() << '\n';

	return 0;
}