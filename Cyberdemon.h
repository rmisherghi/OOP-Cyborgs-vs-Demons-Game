//
// Created by ramim on 4/15/2021.
//

#ifndef HWEXAMPLE_CYBERDEMON_H
#define HWEXAMPLE_CYBERDEMON_H

#include "Demon.h"
#include <string>

class Cyberdemon : public Demon
{
public:
    Cyberdemon();
    Cyberdemon(int newStrength, int newHit);
    int getDamage();
    std::string getSpecies() const;
};

#endif //HWEXAMPLE_CYBERDEMON_H
