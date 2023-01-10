#include <iostream>
#include <string>
using namespace std;

int menu(int);
void printName(string str);
void printAddress(string add);
void printCountry(string cunt);
void printProgram(string prog);

int main()
{
  int selection = -1;
  int x; // for calling menu function
  string str;
  string add;
  string cunt;
  string prog;
  
 while (selection != 0) 
 {  
   selection = menu(x);

    if (selection == 1)
    {
      printName(str);
      
    }
    if (selection == 2)
    {
      printAddress(add);
      
    }
    if (selection == 3)
    {
      printCountry(cunt);
      
    }
    if (selection == 4)
    {
      printProgram(prog);
      break;
      
    }
  
 }
 cout << "Have a nice day!\n" << endl;
  return 0;
}

int menu(int selection)
{
  cout << "1. Print Name\n"
          "2. Print Address\n"
          "3. Print Country\n"
          "4. Print Program\n";
  cout << "Please select one of the following menu options: ";
  cin >> selection;
  return selection;
}

void printName(string str)
{
  cout << "\nPlease enter your name: ";
  cin.ignore(); // to discard the trailing '\n'
  getline (cin, str);
  system("cls");
  cout << "Hi there " << str << "\n\n"; 
}

void printAddress(string add)
{
  cout << "\nPlease enter your address: ";
  cin.ignore(); // to discard the trailing '\n'
  getline (cin, add);
  cout << "Your address is " << add << "\n\n";


}

void printCountry(string cunt)
{
  cout << "\nAlright there buddy\n"
          "What country do you live in? ";
  cin.ignore(); 
  getline (cin, cunt);
  cout << cunt << " is an interesting place \n";

}

void printProgram(string prog)
{
  cout << "\nYou sound like an interesting chap but...\n"
          "Im curious, what program are you currently studying? " << endl;
  cin.ignore();
  getline (cin, prog);
  cout << "hmmm... " << prog << " is an interesting subject " << "\n\n";

}