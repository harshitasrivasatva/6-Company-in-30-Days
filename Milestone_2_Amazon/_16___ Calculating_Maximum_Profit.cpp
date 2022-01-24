class Solution {
  public:
    int maxProfit(int k, int n, int A[]) {
        // code here
        int dp[k+1][n];

        for(int i=0;i<k+1;i++)
            for(int j=0;j<n;j++)
               dp[i][j]=0;

        int ans =0;

        for(int i=1;i<=k;i++)
        {
            int mx =INT_MIN;
            for(int j=1;j<n;j++){
                mx =max(mx,dp[i-1][j-1]-A[j-1]);
                dp[i][j] =max(dp[i][j-1],mx+A[j]);
            }
        }

        for(int i=0;i<=k;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<dp[i][j]<<" ";
            }
            cout<<endl;
        }

        return dp[k][n-1];
    }
};
