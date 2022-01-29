 vector<vector<int>> pacificAtlantic(vector<vector<int>>& v) {
        int n =v.size();
        int m =v[0].size();

        vector<vector<int>> dp(n,vector<int>(m,0));

        bfs(n,m,v,dp,0,0);
        bfs(n,m,v,dp,n-1,m-1);

        vector<vector<int>> res;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dp[i][j]==2){
                    vector<int> points;
                    points.push_back(i);
                    points.push_back(j);
                    res.push_back(points);
                }
            }
        }

        return res;

    }

    void bfs(int n,int m,vector<vector<int>> v,vector<vector<int>> &dp,int r,int c)
    {
        queue<pair<int,int>> q;
        vector<vector<int>> vis(n,vector<int>(m,0));

        int dx[] ={0,0,1,-1};
        int dy[] ={1,-1,0,0};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==r || j==c){
                    q.push({i,j});
                    vis[i][j]=1;
                    dp[i][j]++;
                }
            }
        }

        while(!q.empty())
        {
            int x =q.front().first;
            int y =q.front().second;

            q.pop();

            for(int i=0;i<4;i++){
                int r1 =x+dx[i];
                int c1 =y+dy[i];

                if(r1>=0 && r1<n && c1>=0 && c1<m && !vis[r1][c1] && v[x][y]<=v[r1][c1] ){
                    dp[r1][c1]++;
                    vis[r1][c1]=1;
                    q.push({r1,c1});
                }
            }
        }
    }
