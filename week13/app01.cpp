#include "pokemon.h"
#include "pokemon.h"  // duplicated code
#include "pikachu.h"

int main()
{
    Pokemon p;
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


