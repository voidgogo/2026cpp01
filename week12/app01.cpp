#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
private:
//protected:
    int hp;
public:
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
    void set(int hp) {
        Pokemon::set(hp);  // Delegation
    }
    void set(int hp, int electricAttack) {
        //this->hp = hp;
        Pokemon::set(hp);  // Delegation
        this->electricAttack = electricAttack;
        // private
        //this->hp = 99;
        //hp = 99;
    }
    int getElectricAttack() const {
        return electricAttack;
    }
};
int main()
{
    Pokemon Pokemon;
    Pokemon.set(100);
    cout << Pokemon.getHp();
    cout << endl << endl;
    Pikachu Pikachu;
    Pikachu.set(150);
    cout << Pikachu.getHp() << endl;
    Pikachu.set(200, 1000);
    cout << Pikachu.getHp() << endl;
    cout << Pikachu.getElectricAttack();
    return 0;
}