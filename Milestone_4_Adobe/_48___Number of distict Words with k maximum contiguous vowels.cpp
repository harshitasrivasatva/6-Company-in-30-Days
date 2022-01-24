int mod = 1000000007;

#define ll long long

class Solution
{
  public:
    int kvowelwords(int n, int k) {
        // Write Your Code here4
        ll dp[n+1][k+1];
        ll sum=(ll)1;

        for(int i=1;i<=n;i++)
        {
            dp[i][0] =(sum*21)%mod;
            sum =dp[i][0];

            for(int j=1;j<=k;j++)
            {
                if(j>i) dp[i][j]=0;
                else if(j==i) dp[i][j] =power(5,i);
                else dp[i][j] =dp[i-1][j-1]*5;

                dp[i][j] %=mod;
                sum +=dp[i][j];
                sum %=mod;
            }
        }

        return sum;
    }

    int power(int X,int N)
    {
        ll res =(ll)1;
        ll x ,n;
        x =(ll)X, n =(ll)N;

        while(n)
        {
            if(n%2==1) res = res%mod * x%mod;
            x =x%mod * x%mod;
            n/=2;

            x%=mod;
            res%=mod;
        }

        return res;
    }
};
