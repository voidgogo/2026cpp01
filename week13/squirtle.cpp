#include "squirtle.h"

Squirtle::Squirtle() : Pokemon(), hydroAttack(10) {  // Invocation
}
Squirtle::Squirtle(int hp, int hydroAttack) : Pokemon(hp), hydroAttack(hydroAttack) {// Invocation
}
Squirtle::Squirtle(const Squirtle& squirtle) : Pokemon(squirtle), hydroAttack(squirtle.hydroAttack) {// Invocation
}
void Squirtle::set(int hp) {
    Pokemon::set(hp);  // Delegation
}
void Squirtle::set(int hp, int hydroAttack) {
    Pokemon::set(hp);  // Delegation
    this->hydroAttack = hydroAttack;
}
int Squirtle::getHydroAttack() const {
    return hydroAttack;
}