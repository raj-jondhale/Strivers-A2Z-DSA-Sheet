//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

// User function Template for C++
void Reverse(string &str, int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(str[s], str[e]);
    Reverse(str, s + 1, e - 1);
}

string reverseWord(string str)
{

    // Your code here
    int s = 0;
    int e = str.length() - 1;
    Reverse(str, s, e);
    return str;
}
