#include <iostream>
#include "Creature.h"
#include "Demon.h"
#include "Human.h"
#include "Elf.h"
#include "Cyberdemon.h"
#include "Balrog.h"
#include "Creature.cpp"
#include "Demon.cpp"
#include "Human.cpp"
#include "Elf.cpp"
#include "Cyberdemon.cpp"
#include "Balrog.cpp"
#include <ctime>
 


using namespace std;
int main()
{
    srand(time(0));
    Human h(50, 60);
    Elf e(10, 20);
    Balrog b(20, 30);
    Cyberdemon c(30, 40);

    cout << h.getSpecies() << " Damage: " << endl;
    for (int i = 0; i < 5; i++) {
        int damage = h.getDamage();
        cout << "Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;

    cout << e.getSpecies() << " Damage: " << endl;
    for (int i = 0; i < 5; i++) {
        int damage = e.getDamage();
        cout << "Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << c.getSpecies() << " Damage: " << endl;
    for (int i = 0; i < 5; i++) {
        int damage = c.getDamage();
        cout << "Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;
    cout << b.getSpecies() << " Damage: " << endl;
    for (int i = 0; i < 5; i++) {
        int damage = b.getDamage();
        cout << "Total damage = " << damage << endl;
        cout << endl;
    }
    cout << endl;

}
