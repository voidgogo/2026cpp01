//#pragma once

#ifndef POKEMON_H
#define POKEMON_H

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

#endif