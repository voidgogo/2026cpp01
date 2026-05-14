#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

void reverse(string& s)
{
	string temp = s;
	int size = s.size();
	for (int i = 0; i < size; i++)
	{
		s[i] = temp[size - 1 - i];
	}
}

int main()
{
	string s1("abc");
	string s2 = "abcd";

	getline(cin, s2);
	//cin >> s2;
	cout << s2 << endl;
	cout << s2[1] << endl;
	cout << s2.at(1) << endl;
	reverse(s2);
	cout << s2 << endl;

	return 0;
}