int dp[1000][1000];

    int maxCoins(vector<int>&A,int n)
    {
	    //Write your code here
	    for(int i=0;i<n;i++)
	        for(int j=0;j<n;j++)
	            dp[i][j]=-1;

	    return solve(A,0,n-1);
    }

    int solve(vector<int>&A,int s,int e)
    {
        if(s>e) return 0;
        if(s==e) return dp[s][e]=A[s];
        if(dp[s][e]!=-1) return dp[s][e];

        int l = A[s] + min(solve(A,s+2,e), solve(A,s+1,e-1));
        int r = A[e] + min(solve(A,s+1,e-1), solve(A,s,e-2));

        return dp[s][e] =max(l,r);
    }
