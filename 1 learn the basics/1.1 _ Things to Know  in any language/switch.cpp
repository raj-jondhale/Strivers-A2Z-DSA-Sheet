#include <bits/stdc++.h>
using namespace std;
/*
Take the day no print the corresponding day
for print 1 monday.
for 2 print tuesday and so on 7print sunday
*/

int main()
{
    int day;
    cout << "Enter number:" << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monaday";
        break;
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Wrong choice";
        break;
    }
}