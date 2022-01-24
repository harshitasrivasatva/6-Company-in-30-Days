 vector<string> winner(string arr[],int n)
    {
        map<string,int> mp;
        for(int i=0;i<n;i++)
           mp[arr[i]]++;

        string ans="";
        int mx=0;

        for(auto x:mp)
        {
            if(x.second > mx)
            {
                mx =x.second;
                ans =x.first;
            }
        }

        vector<string> v = {ans, to_string(mx)};
        return v;
    }
