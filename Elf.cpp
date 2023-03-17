//
// Created by ramim on 4/15/2021.
//

#include <iostream>
#include "Creature.h"
#include "Elf.h"
using namespace std;

Elf::Elf() : Creature()
{
}
Elf::Elf(int newStrength, int newHit)
        : Creature(newStrength, newHit)
{
}
int Elf::getDamage()
{
    damage = (rand() % strength) + 1;
    cout << "Elf attacks for " << damage << " points!" << endl;
    if (rand() % 10 == 0)
    {
        cout << "Magical attack inflicts " << damage <<
             " additional damage points!" << endl;
        damage = damage * 2;
    }
    return damage;
}
string Elf::getSpecies() const
{
    return "Elf";
}