 int minEatingSpeed(vector<int>& arr, int h) {
        sort(arr.begin(), arr.end());

        int n =arr.size(), ans =-1;
        int mn =1, mx =arr[n-1];

        while(mn <= mx)
        {
            int mid =(mn + mx)/2;
            int sum =0;

            for(int x:arr)
                sum += (x+mid-1)/mid;

            if(sum <= h)
                ans =mid, mx =mid-1;
            else
                mn =mid+1;

        }

        return ans;
    }
