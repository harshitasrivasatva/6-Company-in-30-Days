// Array Pair Sum Divisibility Problem



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    bool canPair(vector<int> a, int k)
    {
         unordered_map<int,int> mp;
        int n =nums.size();

        for(int i=0;i<n;i++)
           mp[nums[i]%k]++;

        for(auto x:mp)
        {
            int diff =k-x.first;

            if(x.first==0) diff=0;
            if(diff==x.first && x.second%2!=0)
               return false;

            if(mp.find(diff)!=mp.end())
            {
                if(mp[diff]!=x.second)
                  return false;
            }else
                return false;
        }

        return true;
    }
};

// { Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums(n);
        for (int i = 0; i < nums.size(); i++)
            cin >> nums[i];
        Solution ob;
        bool ans = ob.canPair(nums, k);
        if (ans)
            cout << "True\n";
        else
            cout << "False\n";
    }
    return 0;
} // } Driver Code Ends
