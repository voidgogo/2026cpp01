#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    //char* p = "ACE";   // string literal, error!!
    const char* p = "ACE";  // string literal(constant), read only
    cout << p << '\n';

    return 0;
}