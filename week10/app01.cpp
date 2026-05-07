#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    //char* p = "ACE";   // string literal, error!!
    const char* p = "ACE";  // string literal(constant), read only
    cout << p << '\n';

    char a[] = "Hi";  // compact initializer, char a[] = {'H','i','\0'};
    const char b[] = "Hi";  // compact initializer
    const char* c = "Hi";  // string literal

    a[1] = 'e';
    cout << a << '\n';
    //b[1] = 'e';
    //cout << b << '\n';
    cout << c << '\n';
    cout << c[1] << '\n';
    return 0;
}