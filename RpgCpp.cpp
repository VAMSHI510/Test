// RpgCpp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;



    int main()

    {
        int strenght, spellPower, health, playerLevel, choose, playerXp;
        int evilStrenght, evilSpellPower, evilHealth, evilLevel;
        playerLevel = 1;
        playerXp = 0;
        cout << "choose a class" << endl;
        cout << "1. Warrior" << endl;
        cout << "2. Mage" << endl;
        int playerClass;
        cin >> playerClass;
        if (playerClass == 1)
        {
            strenght = 10;
            spellPower = 2;
            health = 125;
            cout << "you choose a Warrior! here is your attributes!" << endl;
            cout << "Strenght = " << strenght << endl << "Spell Power = " << spellPower << endl << "Health = " << health << endl;
        }
        else if (playerClass == 2)
        {
            strenght = 3;
            spellPower = 15;
            health = 90;
            cout << "you choose a Mage! here is your attributes!" << endl;
            cout << "Strenght = " << strenght << endl << "Spell Power = " << spellPower << endl << "Health = " << health << endl;
        }

        bool gameOver = false;
        while (!gameOver)
        {
            if (playerLevel < 5)
                if (health == 0)
                    gameOver = true;
            cout << "Welcome to the starting zone! What do you wish to do?" << endl << "\n 1. Kill monsters!" << "\n 2. Shop" << endl;
            cin >> choose;
            if (choose == 1)
            {
                cout << "1. Fight lvl 1 goblin" << endl;
                cin >> choose;
                if (choose == 1)
                {
                    cout << string(100, '\n');
                    cout << "fighting lvl 1 goblin!! Prepare for combat!" << endl;
                    evilHealth = 40;
                    evilStrenght = 4;
                    evilSpellPower = 0;


                    while (health > 0)
                    {
                        if (evilHealth < 0)
                        {
                            playerXp += 10;
                            cout << "You killed the goblin! you are awarded 10 experience points! you now have " << playerXp << " experience points!" << endl;
                            cout << "write any integer to continue" << endl;
                            cin >> choose;
                            cout << string(100, '\n');

                            break;
                        }
                        health -= evilStrenght * 2;
                        cout << "the goblin strikes and deals " << evilStrenght * 2 << " damage to you!" << "\nYou have " << health << " health left!" << endl;
                        cout << "Choose an action!" << "\n 1. Attack" << "\ 2. Cast fireball" << endl;
                        cin >> choose;
                        if (choose == 1)
                        {
                            evilHealth -= strenght * 2;
                            cout << "you swing your weapon and deal " << strenght * 2 << " damage to the goblin!" << endl;
                            cout << "the goblin has " << evilHealth << " health left!" << endl;
                        }
                        else if (choose == 2)
                        {
                            evilHealth -= spellPower * 2;
                            cout << "you cast a fiery fireball which deals " << spellPower * 2 << " damage to the goblin!" << endl;
                            cout << "the goblin has " << evilHealth << " health left!" << endl;
                        }
                    }

                }
            }
        }


        return 0;
    }
   // std::cout << "Hello World!\n";


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
