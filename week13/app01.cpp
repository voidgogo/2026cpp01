#include <iostream>
#include <string>
using namespace std;

int main()
{
    //Pikachu pikachu;   // default
    //cout << pikachu.getHp() << endl;
    //cout << pikachu.getElectricAttack();

    Pikachu pikachu(500, 4000);  // parameter
    cout << pikachu.getHp() << endl;
    cout << pikachu.getElectricAttack() << endl;

    Pikachu pikachu2(pikachu);  // copy
    cout << pikachu2.getHp() << endl;
    cout << pikachu2.getElectricAttack() << endl;

    return 0;
}


