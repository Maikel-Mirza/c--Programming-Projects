//this is a guessing game
// created by Maikel Mirzadegan
// 05/05/22
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void playgame()
{
    srand((unsigned) time(0));
    int randomNumber;
    int userRand;
    randomNumber = (rand() % 35) +1;
    while(1)
    {
    cout << "Try to guess the number:\n";
    cin >> userRand;
    cout << "\n" << randomNumber << endl;
    if (userRand == randomNumber)
    {
        cout << "You won the game!\n";
        break;
    }
    else if (userRand < randomNumber)
    {
        cout << "You should guess higher\n";
    }
    else if (userRand > randomNumber)
    {
        cout << "You should guess lower\n";
 
    }  
    }
}
 
int main()
{
    int choice;
    do
    {
       cout << "Do you want to play a Guessing Game?\n"
                "1. Play \t 0. Quit\n";
       cin >> choice;
       system("cls");
       switch (choice)
       {
       case 1:
           playgame();
           break;
       
       default:
       cout << "You lost before you started\n";
           break;
       }
       
    } while (choice == 1);
    
    return 0;

}