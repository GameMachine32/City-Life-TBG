#include "buildings.h"
#include "resources.h"
#include "town.h"
#include "jobs.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;
void pizzaplace()
{
    srand(time(NULL));
    int capacity = rand() % 20 + 1;
    if (capacity > 10) {
        cout << "There are a lot of people in the pizza place \n";
    }
    else {
        cout << "The pizza place is pretty empty \n";
    }
    cout << "You walk up the the cashier \n";
    for (;;) {
        cout << "1: Order pizza ($20.34 and restores 15 hunger). 2: Apply for a job. 3: Leave ";
        cin >> option;
        switch (option) {
        case '1': {
            if (money == 20.34 || money > 20.34) {
                cout << "\nYou buy a pizza.. \n";
                money -= 20.34;
                hunger += 5;
                pause();
                continue;
            }
            else {
                cout << "\nYou don't that much money for that \n";
                pause();
                continue;
            }
        }
        case '2': {
            cout << "\nSkill level required: 0 \n";
            cout << "\nConfirm? (Y/N)";
            cin >> option;
            switch (option) {
            case 'Y': {
                cout << "\nYou applied to work as the cashier at the pizza place. \n";
                pause();
                pizzaplacej();
            }
            }
        }
        case '3': {
            pizzaplacej;
        }
        }
    }
}

void grocerystore() {
     srand(time(NULL));
     int purchase;
     int capacity = rand() % 20 + 1;
     if (capacity > 10) {
        cout << "There are a lot of people in the grocery store \n";
     }
     else {
        cout << "The grocery store is pretty empty \n";
     }
     for( ; ; ) {
     cout << "1: look around at what they have. 2: Quit: ";
     cin >> option;
     switch(option) {
         case '1': {
             cout << "1: Apple: 4 dollars (restores 5 hunger) \n";
             cout << "2: Cheese: 9 dollars (restores 10 hunger) \n";
             cout << "3: Steak: 20 dollars (restores 21 hunger \n";
             cout << "What would you like to buy (enter the id)? ";
             cin >> purchase;
             switch(purchase) {
                 case 1: {
                     if(money >= 4) {
                            cout << "you bought an apple... \n";
                            pause();
                     }
                     else {
                         cout << "You don't have that much money for that \n";
                         pause();
                     }
                     continue;
                 }
                 case 2: {
                     if(money >= 9) {
                            cout << "you bought some cheese... \n";
                            hunger += 10;
                            pause();
                     }
                     else {
                         cout << "You don't have that much money for that \n";
                         pause();
                     }
                     continue;
                 }
                 case 3: {
                     if(money >= 20) {
                            cout << "you bought some steak... \n";
                            hunger += 21;
                            pause();
                     }
                     else {
                         cout << "You don't have that much money for that \n";
                         pause();
                     }
                     continue;
                 }
             }
         }
         case '2': {
             cout << "You leave the grocery store... \n";
             pause();
             town();
         }
     }
   }
}
