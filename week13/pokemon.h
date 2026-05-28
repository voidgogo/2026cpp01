#pragma once

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

