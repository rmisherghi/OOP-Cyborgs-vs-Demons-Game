//
// Created by ramim on 4/15/2021.
//
#include <iostream>
#include "Creature.h"
using namespace std;

Creature::Creature()
{
    strength = 10;
    hitpoints = 10;
}
Creature::Creature(int newStrength, int newHit)
{
    strength = newStrength;
    hitpoints = newHit;
}
int Creature:: getDamage()
{
    int damage = (rand() % strength) + 1;
    cout << "Creature attacks for " << damage << " points!" << endl;
    return damage;
}
string Creature::getSpecies() const
{
    return "Creature";
}

