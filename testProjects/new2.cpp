//Betting game
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <Windows.h>
using namespace std;

int cash = 100;
void playgame(int bet)
{
    string randomString;
    string userChoice;
    srand(time(0));
    string choices[] = {"King", "Queen", "Jack"};
    cout << "The choices are King, Queen, or Jack\n"
            "Please guess which one: "; 
    cin.ignore();        
    getline(cin, userChoice);
    randomString = (rand() % 3);
    if (userChoice == randomString)
    {
        cout << "Good job!\n";
        cash += (bet * 3);
    }
    else if (userChoice != randomString)
    {
        cout << "You lose!\n";
        cash -= bet;
   
    }
    else
    {
        cout << "Thats not an option!\n";
    }   
}
int main()
{ 
    int choice;
    int bet;
    int flag = 1;
    do
    {
       // system("cls");
        cout << "This is a Betting Game\n"
                "1. Play \t0. Quit\n";
        cin >> choice;
                switch (choice)
                {
                case 1:
                  cout << "Welcome to the table\n"
                          "You have $" << cash << "\n"
                          "How much do you want to bet?\n";
                  cin >> bet;
                    playgame(bet);
                    break;
                
                default:
                    cout << "Thank you, have a nice day";
                    break;
                }

                
    } while (choice == 1 && cash > 0);
    
    return 0;
}