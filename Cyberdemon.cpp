//
// Created by ramim on 4/15/2021.
//
#include <iostream>
#include "Cyberdemon.h"
#include "Demon.h"
using namespace std;

Cyberdemon::Cyberdemon() : Demon()
{
}
Cyberdemon::Cyberdemon(int newStrength, int newHit)
        : Demon(newStrength, newHit)
{
}
int Cyberdemon::getDamage()
{
    damage = (rand() % strength) + 1;
    cout << "Cyberdemon attacks for " << damage << " points!" << endl;
    if ((rand() % 100) < 5)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 additional additional damage Points!" << endl;
    }
    return damage;
}
string Cyberdemon::getSpecies() const
{
    return "Cyberdemon";
}