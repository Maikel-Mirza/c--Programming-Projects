#include <iostream>
 
using namespace std;

struct Name
{
    char myName[20];
};
int main()
{
  //char *ptr;
  Name printName;
  Name *ptr;

  cout << "Please enter your name: " << endl;
  cin >> printName.myName;
  ptr = &printName;
  cin.ignore();
  for (int i = 0; i < 7; i++)
  {
      cout << ptr->myName[i] << " ";
  }
  

  cin.get();
}