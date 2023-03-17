//
// Created by ramim on 4/15/2021.
//
#include "Creature.h"
#include "Demon.h"
#include <iostream>
using namespace std;

Demon::Demon() :Creature()
{

}
Demon::Demon(int newStrength, int newHit)
        : Creature(newStrength, newHit)
{
}
int Demon::getDamage()
{
    damage = (rand() % strength) + 1;
    cout << "Demon attacks for " << damage << " points!" << endl;
    return damage;
}
string Demon::getSpecies() const
{
    return "Demon";
}