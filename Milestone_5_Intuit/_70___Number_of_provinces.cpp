vector<int> vis;

    int findCircleNum(vector<vector<int>>& v) {
        int n =v.size();

        vector<vector<int>> arr(n);
        vector<int> vis(n,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j)
                    continue;

                if(v[i][j]==1)
                    arr[i].push_back(j);
            }
        }

        int cnt =0;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                cnt++;
                bfs(i,arr,vis);
            }
        }

        return cnt;
    }

    void bfs(int i,vector<vector<int>> arr,vector<int> &vis)
    {
        vis[i]=1;
        queue<int> q;
        q.push(i);

        while(!q.empty())
        {
            int x =q.front();
            q.pop();

            for(auto child:arr[x]){
                if(!vis[child])
                    vis[child]=1, q.push(child);
            }
        }
    }
