//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    vector<long long> factorialNumbers(long long N)
    {
        // Write Your Code here
        long long ans = 1, i = 1;
        vector<long long> v;
        while (ans <= N)
        {
            v.push_back(ans);
            i++;
            ans *= i;
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans)
        {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends