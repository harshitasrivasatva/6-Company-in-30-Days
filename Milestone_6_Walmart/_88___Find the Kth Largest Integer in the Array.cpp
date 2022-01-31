string kthLargestNumber(vector<string>& nums, int k) {
        map<int,vector<string>> mp;
        vector<string> temp;

        for(auto str:nums)
            mp[str.length()].push_back(str);

        for(auto it:mp)
        {
            vector<string> v =it.second;
            sort(v.begin(),v.end());

            for(auto x:v)
                temp.push_back(x);
        }

        string res = temp[temp.size()-k];
        return res;
    }
