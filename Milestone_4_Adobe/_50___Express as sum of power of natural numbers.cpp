 long long numOfWays(int n, int x)
    {
        long long dp[n+1];
        memset(dp,0.,sizeof(dp));
        dp[0]=1;

        for(long long i=1;i<=n;i++)
        {
            long long y=pow(i,x);
            for(long long j=n;j>=y;j--)
            {
                dp[j]+=dp[j-y];
            }
        }
        return dp[n];
    }
