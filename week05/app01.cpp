// heap memory : dynamic memory allocation
#include <iostream>
using namespace std;

int main()
{
    int age, totalPrice = 0;
    int humans = 0;
    cout << "몇 명? ";
    cin >> humans;
    int* ages = new int[humans];  // heap memory

    for (int i = 0; i < humans; i++) {
        cout << "나이? ";
        cin >> age;
        *(ages + i) = age;
    }
    int kid = 5000, adult = 10000, senior = 7000;

    for (int i = 0; i < humans; i++) {
        //cout << *(ages + i) << '\n';
        age = *(ages + i);
        if (age >= 65)
            totalPrice = totalPrice + senior;
        else if(age >= 19)
            totalPrice = totalPrice + adult;
        else
            totalPrice = totalPrice + kid;
    }
    cout << "총 요금 : " << totalPrice << '\n';
    delete[] ages;  // free memory

    return 0;
}