int maxDistance(vector<vector<int>>& grid) {
        queue<pair<pair<int,int>,int>> q;

        int n =grid.size();
        int m =grid[0].size();

        int zero =0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    q.push({{i,j},0});
                    grid[i][j]=0;
                }
                else {
                    grid[i][j]=INT_MAX;
                    zero++;
                }
            }
        }

        if(q.empty() || !zero)
            return -1;

        int dx[] ={0,0,1,-1};
        int dy[] ={1,-1,0,0};
        int ans =0;

        while(!q.empty())
        {
            auto it =q.front();
            q.pop();

            int x =it.first.first;
            int y =it.first.second;
            int t =it.second;

           for(int i=0;i<4;i++){
                int r =x+dx[i];
                int c =y+dy[i];

                if(r>=0 && c>=0 && r<n && c<m && grid[r][c] > t+1){
                    grid[r][c] =t+1;
                    q.push({{r,c},t+1});
                }
            }

            ans =max(ans,t);
        }

        return ans;
    }
