#include <iostream>
using namespace std;

void grade(char* name, int age)
{
    int grade1, grade2, grade3;
    int aveGrade;
    cout << "Okay " << name << " your "<< age << " years old " << "\n"
            "Enter you grades to calculate your average: ";
    cin >> grade1 >> grade2 >> grade3;
    aveGrade = (grade1 + grade2 + grade3) / 3;
    cout << "your overall average is " << aveGrade;
}

int main()
{
    int age;
    int *p;
    p = &age;
    char *name;

    cout << "What is your name, how old are you?\n";
    cin >> age;
    cin >> name;
    grade(name, age);
return 0;
}