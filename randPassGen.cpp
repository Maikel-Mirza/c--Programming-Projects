#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const char alphanum[] = "0123456789!@#$%^*abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRS UVWXYZ";

int string_length = sizeof(alphanum) - 1;

int main(){

    int n;
    cout << "Enter the length of the password:";
    cin >> n;
    srand(time(0));
    cout << "Generated Password:";
    for (int i = 0; i < n; i++)
        cout << alphanum[rand() % string_length];
        return 0;
}