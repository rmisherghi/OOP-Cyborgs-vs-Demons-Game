//
// Created by ramim on 4/15/2021.
//

#ifndef HWEXAMPLE_BALROG_H
#define HWEXAMPLE_BALROG_H
#include <string>
#include "Demon.h"
class Balrog :public Demon
{
private:
    int damage2;
public:
    Balrog();
    Balrog(int newStrength, int newHit);
    int getDamage();
    std::string getSpecies() const;
};

#endif //HWEXAMPLE_BALROG_H
