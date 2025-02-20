#include <bits/stdc++.h>
using namespace std;

/* void->returns nothing
void printName()
{
    cout << "Hey! Raj";
}
int main()
{
    printName();
}
*/

// parameterized
/*
void printName(string name)
{
    cout << "Hey!" << name << endl;
}
int main()
{
    string name;
    cin >> name;
    printName(name);

    string name2;
    cin >> name2;
    printName(name2);
    return 0;
}
*/

// Take two numbers and print its sum
/*
int sum(int num1, int num2)
{
    int num3 = num1 + num2;
    return num3;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2);
    cout << res;
    return 0;
}
*/

// pass by value
/*
void doSomething(string s){
    s[0]='t';
    cout<<s<<endl;
}

int main(){
    string s="raj";
    doSomething(s);
    cout<<s<<endl;
    return 0;
}
*/

// pass by reference &
/*
void doSomething(string &s)
{
    s[0] = 't';
    cout << s << endl;
}

int main()
{
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}
*/
void doSomething(int arr[], int n)
{
    arr[0] += 100;
    cout << "Value insidde the function  " << arr[0] << endl;
}

int main()
{
    int n = 5;
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "value inside the int main " << arr[0] << endl;
}