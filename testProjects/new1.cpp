#include <iostream>
using namespace std;


struct Program
    {
        string programSelection;
        int grade1, grade2, grade3, grade4, grade5;
        int aveGrade;
    };
int main()
{
    Program p;
   
    cout << "Welcome to your program selection and qualification administrator:\n"
            "The options are computer programming, or physics\n";
    getline(cin, p.programSelection);
    //int a = atoi(programSelection.c_str());
    if (p.programSelection == "Computer Programming")
    {
        cout << "Okay great!\n"
                "Please enter your 5 grades to calculate your average:";
        cin >> p.grade1 >> p.grade2 >> p.grade3 >> p.grade4 >> p.grade5;
        p.aveGrade = (p.grade1 + p.grade2 + p.grade3 + p.grade4 + p.grade5) / 5;
        if (p.aveGrade > 80)
        {
           cout << "Your overall average is " << p.aveGrade;
           cout << "\nLooking forward to getting you started\n";
        }
        else
        {
            cout << "Sorry, you don't meet the minimum grade requirements\n";
        }
        
       
    }
    else if (p.programSelection == "Physics")
    {
        cout << "Okay great!\n"
                "Please enter your 5 grades to calculate your average:";
        cin >> p.grade1 >> p.grade2 >> p.grade3 >> p.grade4 >> p.grade5;
        p.aveGrade = (p.grade1 + p.grade2 + p.grade3 + p.grade4 + p.grade5) / 5;
        if (p.aveGrade > 85)
        {
           cout << "Your overall average is " << p.aveGrade;
           cout << "\nLooking forward to getting you started\n";
        }
        else
        {
            cout << "Sorry, you don't meet the minimum grade requirements\n";
        }
    }
    else
    {
        cout << "Sorry that's not an option";
    }
   cout << "Have a nice day!\n" << endl;
    return 0;
}