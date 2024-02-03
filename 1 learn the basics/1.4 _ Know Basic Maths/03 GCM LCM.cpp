//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    long long hcf(long long A, long long B)
    {

        if (B == 0)
            return A;

        return hcf(B, A % B);
    }

    vector<long long> lcmAndGcd(long long A, long long B)
    {

        long long hc = hcf(A, B);

        long long lc = A / hc;

        vector<long long> v;

        lc = (long long)B * lc;

        v.push_back(lc);

        v.push_back(hc);

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
        long long A, B;

        cin >> A >> B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A, B);
        cout << ans[0] << " " << ans[1] << endl;
    }
    return 0;
}
// } Driver Code Ends