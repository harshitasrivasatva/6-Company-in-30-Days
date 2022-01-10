class Solution{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        vector<vector<string>> res;

        for(int i=0;i<s.length();i++)
        {
            // cout<<i<<endl;
            vector<string> v;
            set<string> st;

            for(int j=0;j<n;j++)
            {
                if(s.compare(0,i+1,contact[j],0,i+1)==0)
                   st.insert(contact[j]);
            }

            for(auto s:st)
              v.push_back(s);

            if(v.size()==0) v.push_back("0");
            sort(v.begin(),v.end());
            res.push_back(v);
        }

        return res;
    }
};
