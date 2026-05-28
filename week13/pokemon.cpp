#include "pokemon.h"

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