 bool stoneGame(vector<int>& piles) {
        int n =piles.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));

        int alice = solve(0,n-1,dp,piles);
        int total =0;

        for(auto x:piles)
            total+=x;

        int bob =total -alice;

        return alice > bob;

    }

    int solve(int i,int j,vector<vector<int>> &dp,vector<int>& piles)
    {
        if(i>j) return 0;

        if(dp[i][j]!=-1) return dp[i][j];

        int a =piles[i] + min(solve(i+2,j,dp,piles), solve(i+1,j-1,dp,piles));
        int b =piles[j] + min(solve(i+1,j-1,dp,piles),solve(i,j-2,dp,piles));

        return dp[i][j] =max(a,b);
    }
