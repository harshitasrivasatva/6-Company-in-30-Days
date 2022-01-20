class Solution
{ public:
    //Function to find unit area of the largest region of 1s.

    int findMaxArea(vector<vector<int>>& grid) {
        int n =grid.size();
        int m =grid[0].size();
        int ans =0;

        int vis[n][m];
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                vis[i][j]=0;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!vis[i][j] && grid[i][j]==1)
                {
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    vis[i][j]=1;
                    int cnt =0;

                    while(!q.empty())
                    {
                        auto it =q.front();
                        q.pop();
                        cnt++;

                        int dx[] = {0,0,1,-1,-1,-1,1,1};
                        int dy[] = {-1,1,0,0,1,-1,-1,1};

                        for(int i=0;i<8;i++){
                            int x =it.first + dx[i];
                            int y =it.second + dy[i];

                            if(x>=0 && x<n && y>=0 && y<m){
                                if(!vis[x][y] && grid[x][y]==1){
                                    q.push({x,y}),vis[x][y]=1;
                                }
                            }
                        }
                    }

                    ans =max(ans,cnt);
                }
            }
        }

        return ans;
    }
};
