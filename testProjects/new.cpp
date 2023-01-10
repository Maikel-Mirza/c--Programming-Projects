#include <iostream>
using namespace std;

int main()
{
    int id1 = 111;
    int id2 = 222;
    int id3 = 111;
    double price1 = 111.4900;
    double price2 = 222.9900;
    double price3 = 334.4900;
    double aveprice = (price1 + price2 + price3) /3;
    char tax = 'Y';
    char tax2 = 'N';
    char tax3 = 'N';
    cout << "Product Information\n"
            "===================\n";
    cout << "Product-1 (ID:"<< id1 << ")\n"
            "Taxed: "<< tax <<"\n" 
            "Price: $"<< price1 <<"\n\n";
    
    cout << "Product-2 (ID:"<< id2 << ")\n"
            "Taxed: "<< tax <<"\n" 
            "Price: $"<< price2 <<"\n\n";
    
    cout << "Product-3 (ID:"<< id3 << ")\n"
            "Taxed: "<< tax <<"\n" 
            "Price: $"<< price3 <<"\n\n";
    
    cout << "The average of all prices is: $" << aveprice;
    return 0;
}