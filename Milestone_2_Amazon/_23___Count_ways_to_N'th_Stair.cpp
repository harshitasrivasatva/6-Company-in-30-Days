class Solution
{
    public:
    //Function to count number of ways to reach the nth stair
    //when order does not matter.
    long long countWays(int n)
    {
        // your code here
        if(n==1) return 1;
        if(n<=3) return 2;

        int ans =2;
        if(n%2==1) n--;

        for(int i=4;i<=n;i+=2)
           ans++;

        return ans;
    }
};
