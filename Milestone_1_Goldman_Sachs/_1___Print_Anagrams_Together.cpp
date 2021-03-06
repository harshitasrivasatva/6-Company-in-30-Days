// Given an array of strings, return all groups of strings that are anagrams.


#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;
vector<vector<string>> Anagrams(vector<string> &string_list);

vector<vector<string>> Anagrams(vector<string> &v)
{
        map<string,vector<string>> mp;

        for(auto str:v)
        {
            string temp = str;
            sort(temp.begin(),temp.end());

            mp[temp].push_back(str);
        }

        vector<vector<string>> res;
        for(auto x:mp)
        {
            vector<string> ans;
            for(auto str:x.second)
              ans.push_back(str);
            res.push_back(ans);
        }

        return res;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin >> string_list[i];
        vector<vector<string>> result = Anagrams(string_list);
        sort(result.begin(), result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                cout << result[i][j] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}
// } Driver Code Ends
