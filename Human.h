//
// Created by ramim on 4/15/2021.
//

#ifndef HWEXAMPLE_HUMAN_H
#define HWEXAMPLE_HUMAN_H
#include "Creature.h"
#include <string>

class Human :public Creature
{
private:
    int damage;
public:
    Human();
    Human(int newStrength, int newHit);
    int getDamage();
    std::string getSpecies() const;
};

#endif //HWEXAMPLE_HUMAN_H
