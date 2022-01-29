int shipWithinDays(vector<int>& v, int days) {
        int l=0;
        int r=1000000001;

        while(l<r)
        {
            int mid =(l+r)/2;

            if(check(v,days,mid))
                r =mid;
            else
                l =mid+1;
        }

        return l;
    }

    bool check(vector<int> v,int days,int mid)
    {
        int cnt=0, total=0;

        for(auto x:v)
        {
            if(x>mid) return false;

            if(total+x <= mid)
                total+=x;
            else
                cnt++, total=x;
        }

        cnt++;
        return (cnt<=days);
    }
