#include <iostream>
#include <string>
using namespace std;
class Pokemon
{
private:
    int hp;
public:
    void setHp(int hp) {
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
    void setElectricAttack(int electricAttack) {
        this->electricAttack = electricAttack;
    }
    int getElectricAttack() const {
        return electricAttack;
    }
};
int main()
{
    Pokemon Pokemon;
    Pokemon.setHp(100);
    cout << Pokemon.getHp();
    cout << endl << endl;
    Pikachu Pikachu;
    Pikachu.setHp(150);
    Pikachu.setElectricAttack(1000);
    cout << Pikachu.getHp() << endl;
    cout << Pikachu.getElectricAttack();
    return 0;
}