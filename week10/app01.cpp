#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
    int i;
    cin >> i;
    int* a = new int[i];

    a[0] = 'A';
    a[1] = NULL;

    cout << a << '\n';
    cout << a[0] << '\n';

    delete[] a;
    a = nullptr;
 
    return 0;
}