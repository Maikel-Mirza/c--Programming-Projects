#include <iostream>
using namespace std;

// this program accepts 2 numbers and performs (multiplacation, division, subtraction, or addition) operations on them

int main()
{
    char op;
    double num1, num2;
    double result;
    int keepGoing = 0;

   cout << "What operation would you like to perform:\n"
            "(+, -, *, /)\n";
   cin >> op;
   cout << "Enter 2 numbers: ";
   cin >> num1 >> num2;
  for(;;)
  {
  if (op == '+')
  {
      cout << num1 << " + " << num2 << " = " << (num1 + num2);
      break;

  }
  if (op == '-')
  {
      cout << num1 << " - " << num2 << " = " << (num1 - num2);
      break;
  }
  if (op == '*')
  {
      cout << num1 << " * " << num2 << " = " << (num1 * num2);
      break;
  }
  if (op == '/')
  {
      if (num2 == 0)
      {
          cout << "Error! Cannot divide by zero\n";
      }
      else
      {
          cout << num1 << " / " << num2 << " = " << (num1 / num2);
      }
      
       
      break;
  }
  
  }

    return 0;
}