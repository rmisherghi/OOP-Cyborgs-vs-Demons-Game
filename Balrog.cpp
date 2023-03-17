//
// Created by ramim on 4/15/2021.
//
#include <iostream>
#include <cstdlib>
#include "Demon.h"
#include "Balrog.h"
using namespace std;
Balrog::Balrog() : Demon()
{
}
Balrog::Balrog(int newStrength, int newHit)
        : Demon(newStrength, newHit)
{
}
int Balrog::getDamage()
{
    damage = (rand() % strength) + 1;
    cout << "Balrog attacks for " << damage << " points!" << endl;
    if ((rand() % 100) < 5)
    {
        damage = damage + 50;
        cout << "Demonic attack inflicts 50 additional additional damage Points!" << endl;
    }
    damage2 = (rand() % strength) + 1;
    cout << "Balrog speed attack inflicts " << damage2 << " additional damage points!" << endl;
    damage += damage2;
    return damage;
}
string Balrog::getSpecies() const
{
    return "Balrog";
}


