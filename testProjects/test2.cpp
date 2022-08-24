#include <iostream>
using namespace std;

struct Student
{
    string studentName;
    string studentProgram;
    int age;
};
int main()
{  
    Student student1;
    Student *ptr;
    cout << "Enter you name: " << endl;
    getline(cin, student1.studentName);
    ptr = &student1;
    cout << "your name is " << ptr->studentName << endl;
    return 0;
}