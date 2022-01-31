double maxProbability(int n, vector<vector<int>>& v, vector<double>& sp, int start, int end) {
        vector<vector<pair<int,double>>> adj(n);
        int flag =0;

        for(int i=0;i<v.size();i++)
        {
            adj[v[i][0]].push_back({v[i][1],sp[i]});
            adj[v[i][1]].push_back({v[i][0],sp[i]});

            if(v[i][1]==end || v[i][0]==end)
                flag=1;
        }

        if(!flag) return 0;

        vector<double> dp(n,INT_MIN);
        return bfs(start,dp,adj,end);
    }

    double bfs(int s,vector<double> &dp,vector<vector<pair<int,double>>> adj,int e)
    {
        queue<pair<double,int>> q;
        q.push({1.0,s});

        while(!q.empty())
        {
            double p =q.front().first;
            int n =q.front().second;

            // cout<<n<<" -> ";
            q.pop();

            for(auto x:adj[n]){
                if(dp[x.first] < p*x.second ){
                    q.push({p*x.second,x.first});
                    dp[x.first] =x.second * p;
                    // cout<<x.first<<" "<<dp[x.first]<<endl;
                }
            }
        }

        return dp[e] == INT_MIN ? 0 : dp[e];

    }
