 int numberOfBoomerangs(vector<vector<int>>& v) {
        int cnt=0;
        int n =v.size();

        map<int,unordered_map<double,int>> mp;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)
                    continue;

                double x =abs(v[i][0]-v[j][0]);
                double y =abs(v[i][1]-v[j][1]);

                double dis =sqrt(x*x + y*y);

                mp[i][dis]++;
            }
        }

        for(auto points:mp)
            for(auto sz:points.second)
                cnt += (sz.second*(sz.second-1));

        return cnt;
    }
