#include "town.h"
#include "resources.h"
#include "buildings.h"
#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <string>
#include <array>
using namespace std;
void town()
{
    for( ; ; ) {
    switch (section) {
    case 1: {
            cout << "\nName: " << name << endl;
            cout << "Hp: " << hp << endl;
            cout << "Hunger: " << hunger << endl;
            cout << "Money: " << money << endl;
            cout << "Reputation: " << reputation << endl;
            cout << "\nYou are on a road. There is a post office and a pizza place" << endl;
            cout << "1: Go into the pizza place. 2: Go into the post office. N, S, E, W: Go in a direction ";
            cin >> option;
            switch (option) {
            case '1': {
                cout << "\nYou walk into the pizza place" << endl;
                hunger -= 5;
                pizzaplace();
            }
            case '2': {
                hunger -= 5;
                cout << "You walk into the post office" << endl;
            }
            case 'S': {
                hunger -= 5;
                cout << "You walk south...";
                section = 2;
                continue;
            }
            default: {
                hunger -= 5;
                cout << "Invalid option" << endl;
                pause();
            }
            }
        }
        case 2: {
          cout << "\nName: " << name << endl;
          cout << "Hp: " << hp << endl;
          cout << "Hunger: " << hunger << endl;
          cout << "Money: " << money << endl;
          cout << "Reputation: " << reputation << endl;
          cout << "You are on a road. There is a grocery store and a bank";
          cout << "1: Enter the grocery store. 2: Enter the bank. N, S, E, W: Go in direction: ";
          cin >> option;
          switch(option) {
              case '1': {
                  hunger -= 5;
                  cout << "You walk into the grocery store... ";
                  grocerystore();
              }
              case 'N': {
                  cout << "You walk north... \n";
                  hunger -= 5;
                  pause();
                  section = 1;
              }
          }
      }

      }
   }
}

