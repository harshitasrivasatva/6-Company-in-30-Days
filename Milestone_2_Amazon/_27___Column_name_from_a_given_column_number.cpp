class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string str = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans;

        while(n)
        {
            if(n%26 == 0){
                ans += str[25];
                n = n/26 - 1;
            } else {
                ans += str[n%26-1];
                n /= 26;
            }
        }

        reverse(ans.begin(),ans.end());
        return ans;
    }
};
