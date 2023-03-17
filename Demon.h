//
// Created by ramim on 4/15/2021.
//

#ifndef HWEXAMPLE_DEMON_H
#define HWEXAMPLE_DEMON_H
#include "Creature.h"
#include <string>

class Demon :public Creature
{
protected:
    int damage;
public:
    Demon();
    Demon(int newStrength, int newHit);
    virtual int getDamage();
    std::string getSpecies() const;
};

#endif //HWEXAMPLE_DEMON_H
