class Solution
{
    public:
    //Function to find the largest number after k swaps.
    string findMaximumNum(string str, int k)
    {
       // code here.
         string ans=str;
         solve(str,k,ans,0);
         return ans;
    }

    void solve(string str,int rem,string &ans,int k)
    {
        if(rem==0) return;

        char mx =str[k];
        for(int i=k+1;i<str.length();i++)
           if(mx < str[i])
             mx =str[i];

        if(mx != str[k])
            rem--;

        for(int i=k;i<str.length();i++){
            if(str[i] == mx){
                swap(str[i],str[k]);

                if(str.compare(ans)>0)
                  ans =str;

                solve(str,rem,ans,k+1);
                swap(str[i],str[k]);
            }
        }
    }
