#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string name;
    bool order = true;
    string yourOrder;
    cout << "Who are you? ";
    cin >> name;

    while(order == true){

      cout << "What would you like to order? ";
      cin >> yourOrder;
      if (yourOrder == "Nothing")
      {
        cout << "have a nice day";
        order = false;
      }
      else{
        cout << "It will be approximately 15 minutes\n";
        break;
      }
      
    }
  cout << "Have a nice day";
    return 0;
}