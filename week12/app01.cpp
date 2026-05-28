#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
private:
    int hp;
public:
    Pokemon() : hp(1) {

    }
    //Pokemon(int hp) {
    //    this->hp = hp;
    //}
    Pokemon(int hp) : hp(hp) {

    }
    Pokemon(const Pokemon& pokemon) : hp(pokemon.hp) {

    }
    void set(int hp) {
        this->hp = hp;
    }
    int getHp() const {
        return hp;
    }
};
class Pikachu : public Pokemon  // is-a
{
private:
    int electricAttack;
public:
    Pikachu() : Pokemon(), electricAttack(10){  // Invocation

    }
    Pikachu(int hp, int electricAttack) : Pokemon(hp), electricAttack(electricAttack) {// Invocation

    }
    Pikachu(const Pikachu& pikachu) : Pokemon(pikachu), electricAttack(pikachu.electricAttack) {// Invocation

    }
        void set(int hp) {
        Pokemon::set(hp);  // Delegation
    }
    void set(int hp, int electricAttack) {
        Pokemon::set(hp);  // Delegation
        this->electricAttack = electricAttack;
    }
    int getElectricAttack() const {
        return electricAttack;
    }
};
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