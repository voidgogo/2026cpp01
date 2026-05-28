#include "pikachu.h"

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