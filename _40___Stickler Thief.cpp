public:
    //Function to find the maximum money the thief can get.
    int dp[10005];

    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        for(int i=0;i<=n;i++)
          dp[i]=-1;

        return solve(arr,n,0);
    }

    int solve(int arr[],int n,int i)
    {
        if(i>=n) return 0;
        if(dp[i]!=-1) return dp[i];

        int a =solve(arr,n,i+2)+arr[i];
        int b =solve(arr,n,i+1);

        return dp[i] = max(a,b);
    }
