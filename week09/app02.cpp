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

    cout << strcmp(a, b) << '\n';  // 0, -1, 1
    cout << (c == d) << '\n';  

    return 0;
}