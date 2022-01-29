int minSwaps(vector<vector<int>>& grid) {
        int n =grid.size();
        int ans =0;

        vector<int> v;

        for(int i=0;i<n;i++)
        {
            int cnt =0;
            for(int j=n-1;j>=0;j--){
                if(grid[i][j]==1)
                    break;
                cnt++;
            }
            v.push_back(cnt);
        }

        for(int i=0;i<n;i++){
            int req =n-i-1;
            int j =i;

            if(v[i]>=req)
                continue;

            while(j<n && v[j]<req)
                j++;

            if(j==n) return -1;

            for(int k=j;k>i;k--)
                swap(v[k],v[k-1]), ans++;
        }

        return ans;
    }
