#pragma once
#include "pokemon.h"

class Squirtle : public Pokemon  // is-a
{
private:
    int hydroAttack;
public:
    Squirtle();
    Squirtle(int hp, int electricAttack);
    Squirtle(const Squirtle& pikachu);
    void set(int hp);
    void set(int hp, int electricAttack);
    int getHydroAttack() const;
};