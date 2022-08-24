#include <iostream>
#include <ctime>
#include <random>
using namespace std;

// guessing game
void playGame(string *coinGuess){
    
    cout << "Guess Heads or Tails: ";
    cin.ignore();
    getline(cin, *coinGuess);
    cout << "You guessed " << *coinGuess;
   
}
void randomeGenerator(string compChoice){
   
    srand(time(0));
    int computerGuess = (rand() % 2) + 1;
    if(computerGuess == 1){
        compChoice = "Heads";
    }
    else{
         compChoice = "Tails";
    }

}
int main(){

    bool game = true;
    string play;
    string guess;
    string comp;
    cout << "Are you ready to play the game?";
    cin >> play;
     while(game == true){

       if (play == "Yes"|| play == "yes")
        {
            randomeGenerator(comp);
            playGame(&guess);
            if(guess == "Heads" && comp == "Tails")
            {
                cout << "You win!\n";
            }
            else if(guess == "Tails" && comp == "Heads")
            {
                cout << "You lose!\n";
            }
        }
        else{
            game = false;
            cout << "you stood no chance\n";
        }
    }
    
        
     
        
   

    return 0;
}