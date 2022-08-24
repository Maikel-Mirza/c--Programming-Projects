#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char fname[30];
    char lname[30];
    char fullName[30];
    cout << "Enter your first name" << endl;
    cin.getline(fname, 30);
    if(strcmp (fname, "Maikel") == 0)
        cout << "Thats my name too" << endl;
    else
       cout << "Thats not my name" << endl;
    
    cout << "You're name is " << strlen (fname) << " characters long\n";
    cout << "Enter your last name" << endl;
    fullName[0] = '\0';
    cin.getline(lname, 30);
    strcat(fullName, fname);
    strcat(fullName, " ");
    strcat(fullName, lname);
    cout << "Your name is " << fullName << endl;
    return 0;
}