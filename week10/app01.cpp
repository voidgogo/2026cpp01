#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    char a[] = "ACE";  // ACB, ACZ
    char b[] = "ACE";
    string c = "ACE";
    string d = "ACE";

    cout << strcmp(a, b) << '\n';  // 0(두 문자열이 같을때) /  -1, 1(두 문자열이 다를 때)
    cout << (c == d) << '\n';  // 1(true), 0(false)

    //a = "XYZ";
    c = "XYZ!";
    cout << c << '\n';

    return 0;
}