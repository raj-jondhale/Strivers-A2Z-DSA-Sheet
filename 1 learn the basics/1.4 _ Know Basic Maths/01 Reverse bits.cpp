//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long reversedBits(long long X)
    {
        // code here
        long long rev = 0;
        for (int i = 0; i < 32; i++)
        {
            rev <<= 1; // left shift by 1
            if (X & 1)
                rev++; // if X have 1 then it will return 1 i n reverse number
            X >>= 1;   // right shift by 1
        }
        return rev;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long X;

        cin >> X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends