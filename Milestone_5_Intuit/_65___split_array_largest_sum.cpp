 int splitArray(vector<int>& nums, int m) {
        int l=0;
        int r=1000000001;

        while(l<r)
        {
            int mid =(l+r)/2;
            if(check(nums,m,mid))
                r=mid;
            else
                l=mid+1;
        }

        return l;
    }

    bool check(vector<int> nums,int m,int mid)
    {
        int cnt =0, total =0;

        for(auto x:nums)
        {
            if(x > mid)
                return false;
            if(x+total <= mid)
                total +=x;
            else
                cnt++, total=x;
        }
        cnt++;

        return (cnt<=m);
    }
