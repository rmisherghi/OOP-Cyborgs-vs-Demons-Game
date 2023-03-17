//
// Created by ramim on 4/15/2021.
//

#ifndef HWEXAMPLE_CREATURE_H
#define HWEXAMPLE_CREATURE_H
#include <string>

class Creature {
protected:
    int strength;
    int hitpoints;
public:
    Creature();
    Creature(int newStrength, int newHit);
    virtual int getDamage();
    std::string getSpecies() const;
};

#endif //HWEXAMPLE_CREATURE_H
