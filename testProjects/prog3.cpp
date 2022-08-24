#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int random;
    int rollDice;
    int dicenum;
    srand((unsigned) time(0));
    bool playgame = true;
    while(playgame == true){
        cout << "1. Roll dice\t2.Quit\n";
        cin >> rollDice;
        if (rollDice == 1)
        {
            cout << "guess the dice number: ";
            cin >> dicenum;
            random = (rand() % 6) + 1;
            cout << random << "\n";
            if (dicenum == random)
            {
               cout << "You win!\n";
            }
            else
            {
                cout << "You lose!\n";
            }
            
        }
        else{

            playgame = false;
        }
        
      
    }
    return 0;
}