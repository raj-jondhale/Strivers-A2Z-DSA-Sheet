//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution
{
public:
    void printTriangle(int n)
    {
        // code here
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << j << " ";
            }
            int space = 2 * n - 2 * i;
            for (int j = 1; j <= space; j++)
            {
                cout << " ";
            }
            int s = 2 * n - 2 * i;
            for (int j = 1; j <= s; j++)
            {
                cout << " ";
            }
            int k = i;
            for (int j = 1; j <= i; j++)
            {
                cout << k-- << " ";
            }

            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends