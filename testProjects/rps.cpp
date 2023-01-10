#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <conio.h>
using namespace std;

int main()
{
    string player_name;
    int rounds;
    int playerScore = 0;
    int computerScore = 0;
    int playerChoice;
    int computerChoice;
    cout << "Welcome\n"
            "Lets play rock, paper, scissors\n" << endl;
    cout << "Enter you player name: ";
    cin >> player_name;
    system("cls");
    cout << "How many rounds do you want to play? ";
    cin >> rounds;
    for(int round = 1; round <=rounds; round++)
    {
        system("cls");
        cout << "Round #" << round << "/" << rounds << endl;
        cout << player_name << "'s score: " << playerScore << endl;
        cout << "Computer's score: " << computerScore << endl;
        cout << "1 = ROCK\n"
                "2 = PAPER\n"
                "3 = SCISSORS\n";
            
        do
        {
            cout <<  "Enter your choice...\n";
            cin >> playerChoice;

        } while (playerChoice != 1 && playerChoice != 2 && playerChoice !=3);
        
        srand(time(0));
        computerChoice = (rand()%3)+ 1;
 
        if (playerChoice == 1 && computerChoice == 3)
        {
            cout << "Player Wins\n";
            playerScore++;
        }
        else if (playerChoice == 2 && computerChoice == 1)
        {
            cout << "Player Wins\n";
            playerScore++;
        }
        else if (playerChoice == 3 && computerChoice == 2)
        {
            cout << "Player Wins\n";
            playerScore++;
        }
        else if (playerChoice == computerChoice)
        {
            cout << "That was a draw... lets go again!!!\n";
        }
        else
        {
          cout << "Computer wins\n" << endl;
          computerScore++;
        } 
      cout << "Press any key to continue..." << endl;
      getch();
        
    }
       if(playerScore == computerScore)
          {
            cout << "Game is a draw\n";
          }
       else if(playerScore > computerScore)
          {
            cout << player_name << " wins the game\n";
          }
       else
          {
            cout << "Computer won the game\n";
          }
          
    
    return 0;
}