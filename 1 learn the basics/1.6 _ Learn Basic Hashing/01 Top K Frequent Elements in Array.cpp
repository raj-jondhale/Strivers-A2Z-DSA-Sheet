//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    vector<int> topK(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]]++;
        }

        vector<pair<int, int>> ans;

        // storing the element on the basis of {frequency,elmenent}

        for (auto i : mp)
        {
            ans.push_back({i.second, i.first});
        }
        // sorting the array in descending order on the basis of x-cordinate(frequency)
        sort(ans.begin(), ans.end(), greater<pair<int, int>>());

        // checking if 2 frequency are same if sort on the basis of their y-cordinate as per question
        for (int i = 0; i < ans.size(); i++)
        {
            if (ans[i].first == ans[i + 1].first && ans[i].second < ans[i + 1].second && i != ans.size() - 1)
            {
                swap(ans[i], ans[i + 1]);
            }
        }
        // storing resulatnt ans;
        vector<int> res;
        for (int i = 0; i < k; i++)
        {
            res.push_back(ans[i].second);
        }
        return res;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums)
            cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends