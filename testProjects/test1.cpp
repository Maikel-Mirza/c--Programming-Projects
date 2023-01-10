#include <iostream>
using namespace std;

void changeNum(int* x)
{
    cout << "the value of x is " << *x << endl;
    *x = *x + 100;
    cout << "the value of x is " << *x << endl;
}

int main()
{
    int x;
    cin >> x;
    changeNum(&x);
    return 0;
}