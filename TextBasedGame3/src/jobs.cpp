#include "jobs.h"
#include "resources.h"
#include "town.h"
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

void pizzaplacej()
{
    string a;
    string b;
    string c;
    string ia;
    string ib;
    string ic;
    int ai;
    int bi;
    int ci;
    int hint;
    srand(time(NULL));
    for (;;) {
        ai = rand() % 3 + 1;
        switch (ai) {
        case 1: {
            a = "pepperoni pizza";
        }
        case 2: {
            a = "cheese pizza";
        }
        case 3: {
            a = "sausage pizza";
        }
        }
        bi = rand() % 3 + 1;
        switch (bi) {
        case 1: {
            b = "french fries";
        }
        case 2: {
            b = "potato chips";
        }
        case 3: {
            b = "fried chicken";
        }
        }
        ci = rand() % 3 + 1;
        switch (ci) {
        case 1: {
            c = "cola";
        }
        case 2: {
            c = "lemonade";
        }
        case 3: {
            c = "grape soda";
        }
        }
        cout << "Waiting for somone to come... \n";
        Sleep(rand() % 2000 + 1000);
        cout << "\nSomeone comes up to the desk... \n";
        cout << "\nI want... \n";
        Sleep(2000);
        cout << "\nA " << a << endl;
        Sleep(2000);
        cout << "\nand some " << b << endl;
        Sleep(2000);
        cout << "\nand a " << c << endl;
        cout << endl;
        pause();
        system("cls");
        cout << "Please wait ten seconds... \n";
        Sleep(10000);
        for (;;) {
            cout << "Enter the pizza the customer wants: ";
            getline(cin, ia);
            cout << "Enter the snack the customer wants: ";
            getline(cin, ib);
            cout << "Enter the drink the customer wants: ";
            getline(cin, ic);
            if (ia == a && ib == b && ic == c) {
                cout << "You got the customers order right!\n";
                cout << "\nThe customer walked over to one of the seats...\n";
                pause();
                break;
            }
            else {
                cout << "you got the order wrong! Please try again. \n";
                hint++;
                if (hint >= 5) {
                    cout << "You got it wrong 5 times! heres what the customer wants: \n";
                    cout << a << endl;
                    cout << b << endl;
                    cout << c << endl;
                }
                pause();
                continue;
            }
        }
        cout << "You earned 1 dollar for that. Do you want to keep working or be done for the day (W/D)? \n";
        money++;
        cin >> option;
        switch (option) {
        case 'W': {
            continue;
        }
        case 'D': {
            cout << "You leave the pizza place...";
            town();
        }
        }
    }
}
