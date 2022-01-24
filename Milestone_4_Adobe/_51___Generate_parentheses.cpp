string ans;
    vector<string> v;

    void para(int close,int open)
    {
        if(open<close) return;

        if(open==0 && close==0){
            cout<<ans<<" \n ";
            v.push_back(ans);
            return;
        }

        if(open-1>=0){
           ans.push_back(')');
           para(close,open-1);
           ans.pop_back();
        }

        if(close-1>=0){
           ans.push_back('(');
           para(close-1,open);
           ans.pop_back();
        }
    }

    vector<string> AllParenthesis(int n)
    {
        // Your code goes here
        v.clear();
        ans.clear();
        para(n,n);
        return v;
    }

