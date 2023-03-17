//
// Created by ramim on 4/15/2021.
//

#ifndef HWEXAMPLE_ELF_H
#define HWEXAMPLE_ELF_H
#include "Creature.h"


class Elf : public Creature
{
private:
    int damage;
public:
    Elf();
    Elf(int newStrength, int newHit);
    int getDamage();
    std::string getSpecies() const;

};

#endif //HWEXAMPLE_ELF_H
