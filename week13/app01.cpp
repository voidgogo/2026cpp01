#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
private:
    int hp;
public:
    Pokemon();
    Pokemon(int hp);
    Pokemon(const Pokemon& pokemon);
    void set(int hp);
    int getHp() const;
};

Pokemon::Pokemon() : hp(1) {
}
Pokemon::Pokemon(int hp) : hp(hp) {
}
Pokemon::Pokemon(const Pokemon& pokemon) : hp(pokemon.hp) {
}
void Pokemon::set(int hp) {
    this->hp = hp;
}
int Pokemon::getHp() const {
    return hp;
}

class Pikachu : public Pokemon  // is-a
{
private:
    int electricAttack;
public:
    Pikachu();
    Pikachu(int hp, int electricAttack);
    Pikachu(const Pikachu& pikachu);
    void set(int hp);
    void set(int hp, int electricAttack);
    int getElectricAttack() const;
};

Pikachu::Pikachu() : Pokemon(), electricAttack(10) {  // Invocation
}
Pikachu::Pikachu(int hp, int electricAttack) : Pokemon(hp), electricAttack(electricAttack) {// Invocation
}
Pikachu::Pikachu(const Pikachu& pikachu) : Pokemon(pikachu), electricAttack(pikachu.electricAttack) {// Invocation
}
void Pikachu::set(int hp) {
    Pokemon::set(hp);  // Delegation
}
void Pikachu::set(int hp, int electricAttack) {
    Pokemon::set(hp);  // Delegation
    this->electricAttack = electricAttack;
}
int Pikachu::getElectricAttack() const {
    return electricAttack;
}

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


