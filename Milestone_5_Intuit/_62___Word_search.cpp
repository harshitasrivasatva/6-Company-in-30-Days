bool isWordExist(vector<vector<char>>& v, string word) {
        // Code here
        int n =v.size();
        int m =v[0].size();

        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(v[i][j]==word[0] && solve(v,i,j,word,0))
                       return true;

        return false;
    }

    bool solve(vector<vector<char>> &v,int i,int j,string word,int k)
    {
        int n =v.size();
        int m =v[0].size();

        if(k==word.size()) return true;

        if(i<0 || i>=n || j<0 || j>=m)
          return false;

        if(v[i][j] != word[k])
          return false;

        v[i][j] ='$';

        bool ans = solve(v,i-1,j,word,k+1) ||
                   solve(v,i+1,j,word,k+1) ||
                   solve(v,i,j-1,word,k+1) ||
                   solve(v,i,j+1,word,k+1) ;

        v[i][j] =word[k];
        return ans;
    }
