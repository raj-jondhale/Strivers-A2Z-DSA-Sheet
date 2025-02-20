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

            int space = n - i;
            for (int k = 1; k <= space; k++)
            {
                cout << " ";
            }

            for (int j = 1; j <= i; j++)
            {
                char ch = 'A' + j - 1;
                cout << ch;
            }
            if (i != 1)
                for (int m = i - 1; m >= 1; m--)
                {
                    cout << char(65 + m - 1);
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