//
// Created by ramim on 4/15/2021.
//
#include <iostream>
#include <cstdlib>
#include "Creature.h"
#include "Human.h"
using namespace std;

Human::Human() : Creature()
{
}
Human::Human(int newStrength, int newHit)
        : Creature(newStrength, newHit)
{
}
int Human::getDamage()
{
    damage = (rand() % strength) + 1;
    cout << "Human attacks for " << damage << " points!" << endl;
    return damage;
}
string Human::getSpecies() const
{
    return "Human";
}

