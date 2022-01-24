int lengthOfLongestAP(int arr[], int n) {
        // code here
        map<int,int> mp;
        for(int i=0;i<n;i++)
           mp[arr[i]]=1;

        int ans =1;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int diff =arr[j]-arr[i];
                int cnt =2;
                int num =arr[j]+diff;

                while(true)
                {
                    if(mp.find(num) == mp.end())
                       break;

                    cnt++;
                    num =num+diff;
                }

                ans =max(ans,cnt);
            }
        }

        return ans;
    }
