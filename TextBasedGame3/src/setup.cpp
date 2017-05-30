#include "setup.h"
#include "resources.h"
#include "town.h"
#include <iostream>
using namespace std;

void init()
{
    hp = 100;
    hunger = 100;
    money = 50;
    reputation = 100;
    section = 1;
    job = 1;
    wanted = false;
}
void setup()
{
    cout << "Welcome to City life! Enter your name: ";
    cin >> name;
    init();
    town();
}
