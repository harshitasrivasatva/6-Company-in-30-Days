 int findInMountainArray(int target, MountainArray &mountainArr) {
        int peak = solve(mountainArr);
        int end =mountainArr.length()-1;

        int i=-1, j=-1;

        cout<<peak<<" "<<end;

        i =findLeft(mountainArr,0,peak-1,target);
        j =findRight(mountainArr,peak,end,target);

        if(i!=-1) return i;
        return j;
    }

    int solve(MountainArray &mountainArr)
    {
        int peak=0;
        int end =mountainArr.length()-1;

        while(peak<=end)
        {
            int mid =(peak+end)/2;
            int ele =mountainArr.get(mid);

            if(ele < mountainArr.get(mid+1))
                peak =mid+1;
            else
                end =mid-1;
        }

        return peak;
    }

    int findLeft(MountainArray &mountainArr,int l,int r,int tar)
    {
        while(l<=r)
        {
            int mid =(l+r)/2;
            int ele =mountainArr.get(mid);
            if(ele == tar)
                return mid;

            if(ele < tar)
                l=mid+1;
            else
                r=mid-1;
        }

        return -1;
    }

    int findRight(MountainArray &mountainArr,int l,int r,int tar)
    {
        while(l<=r)
        {
            int mid =(l+r)/2;
            int ele =mountainArr.get(mid);
            if(ele == tar)
                return mid;

            if(ele > tar)
                l=mid+1;
            else
                r=mid-1;
        }

        return -1;
    }
