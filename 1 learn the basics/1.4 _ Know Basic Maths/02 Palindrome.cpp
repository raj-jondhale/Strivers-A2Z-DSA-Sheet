//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

// User function Template for C++

class Solution
{
public:
    string is_palindrome(int n)
    {
        // Code here.
        int rev = 0;
        int temp = n;
        while (temp != 0)
        {
            int ld = temp % 10;
            rev = rev * 10 + ld;
            temp = temp / 10;
        }
        if (rev == n)
        {
            return "Yes";
        }
        return "No";
    }
};

//{ Driver Code Starts.
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        Solution ob;
        string ans = ob.is_palindrome(n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends