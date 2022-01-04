// Decode string



#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0, ans=INT_MAX;
        int s =0, flag=0;

        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            while(s<=i && sum>=target)
            {
                flag=1;
                ans =min(ans,i-s+1);
                sum -=nums[s];
                s++;
            }
        }

        if(flag==0) return 0;

        return ans;
    }
};
