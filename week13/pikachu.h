#pragma once
#include "pokemon.h"

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