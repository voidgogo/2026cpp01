// heap memory : dynamic memory allocation
#include <iostream>
using namespace std;

int main()
{
    //int humans = 100;
    //int ages[humans];

    int age;
    //int* a = &age;  // 포인터 변수는 메모리 번지 주소만을 받는다.

    int humans = 0;
    cout << "몇 명? ";
    cin >> humans;
    int* ages = new int[humans];  // heap memory

    for (int i = 0; i < humans; i++) {
        cout << "나이? ";
        cin >> age;
        *(ages + i) = age;
    }
    for (int i = 0; i < humans; i++) {
        cout << *(ages + i) << '\n';
    }
    //cout << ages << '\n';
    //cout << &humans << '\n';
    //cout << &age << '\n';

    delete[] ages;  // free memory

    return 0;
}