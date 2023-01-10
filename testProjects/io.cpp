#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    ofstream file ("example.txt");

    file << "This is pretty cool stuff";
    vector<string> name;
   
    name.push_back("\nMaikel is awesome");
    for(string name : name)
    {
        file << name << endl;
    }
    file.close();
    
    return 0;
}