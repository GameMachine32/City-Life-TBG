#include "resources.h"
#include <string>
#include <conio.h>
#include <iostream>

int hp;
int hunger;
float money;
int reputation;
int section;
int difficulty;
int job;
char option;
bool wanted;
std::string name;

void pause()
{
    std::cout << "Press any key to continue... \n";
    getch();
}
