#include <iostream>
using namespace std;

class Name{
    public :
        void printName(string name)
        {
            cout <<"your name is " << name << endl;
        }
        void calculateAve(int oveAverage)
        {
            cout << "Your overall average is " << oveAverage;
        }
};

int main()
{
    Name yourName;
    Name calculate;
    string name;
    int grade1, grade2, grade3;
    int average;
    cout << "Enter your name: ";
    getline(cin, name);
    yourName.printName(name);
    cout << "Enter your grades so we can calculate your average: ";
    cin >> grade1 >> grade2 >> grade3;
    average = (grade1 + grade2 + grade3) / 3;
    calculate.calculateAve(average);

    return 0;
}