#include <iostream>
#include <string>
#include <random> // this library allows for random number generation
#include <ctime>
using namespace std;
// this program simulates combat between pirates and spartans

class Fighters{
   int numOfSpartans;
   int numOfPirates;
   char turn = 'S';
   float spartanHealth = 100.0f;
   float pirateHealth = 75.0f;
   float spartanAttack = 0.04f;
   float pirateAttack = 0.07f;
   float attackResult;
   float currentSpartanHealth = spartanHealth;
   float currentPirateHealth = pirateHealth;
public:

int getnumSpartans() // this function gets the number of spartans
{
    cout << "How many spartans will fight: ";
    cin >> numOfSpartans;
    return numOfSpartans;
}
int getnumPirates() // this function gets the number of pirates
{
    cout << "How many pirates will fight: ";
    cin >> numOfPirates;
    return numOfPirates;
}
void printResults(int numOfSpartans, int numOfPirates) // // this function prints the results of the battle
{
    if (numOfSpartans > 0)
   {
      cout << "Spartans won!!!\n";
      cout << "there are " << numOfSpartans << " Spartans left\n";
   }
   else
   {
       cout << "Pirates win!!!\n";
       cout << "there are " << numOfPirates << " Pirates left\n";
   }
}
void simulateBattle(int &numOfSpartans, int &numOfPirates) // this function simulates the battle
{
    static default_random_engine generator(time(0)); // random number generator
    uniform_real_distribution<float> attack(0.0f, 1.0f); // generate an attack number  
   
     while((numOfSpartans > 0) && (numOfPirates > 0)){ 

        // get our attack result
        attackResult = attack(generator);
        if (turn == 'S'){   // spartans go first by default
            // check if attack was successful
            if (attackResult <= spartanAttack) { // if attack was successful then reduce health
               currentPirateHealth -= spartanAttack;
               if (currentPirateHealth < 0){
                  numOfPirates--;
                  currentPirateHealth = pirateHealth;
               }   
            }
            turn = 'P'; // change turn to other fighter
        }
        else{
            if (attackResult <= pirateAttack){ // if attack was successful then reduce health
                currentSpartanHealth -= pirateAttack;
                if (currentSpartanHealth < 0){
                  numOfSpartans--;
                  currentSpartanHealth = spartanHealth;
               } 
            }
          turn = 'S'; // change turn after pirates after a person dies
        }  
    }
}
};

int main()
{
    // to do: attack, and health variable
    // simulate combate between spartans and pirates
    // combate will be 1 v 1, if 1 person dies other army members step up to challenged until one side wins
    // print out results of how many are left, how many died, overall score

   Fighters fighter; // making an object of a class Fighter
   int numOfSpartans;
   int numOfPirates;
   int startSpartans;
   int startPirates;
   startSpartans = numOfSpartans;
   startPirates = numOfPirates;

    cout << "****Spartans vs Pirates****" << endl;
    numOfSpartans = fighter.getnumSpartans(); // functions for getting number of fighters
    numOfPirates = fighter.getnumPirates();
 
    cout << "Battle is beginning!\n";
    fighter.simulateBattle(numOfSpartans, numOfPirates);
    fighter.printResults(numOfSpartans, numOfPirates);
    
   system("PAUSE");
    return 0;
}