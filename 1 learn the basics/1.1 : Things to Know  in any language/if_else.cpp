#include <iostream>
using namespace std;

// write a program to take age input
// and prints if you are adult or not
//>=18,yes
//<18.no
int main()
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "You are adult";
    }
    else
    {
        cout << "You are not adult";
    }
}