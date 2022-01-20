public:
    //Function to find if the given edge is a bridge in graph.
    int vis[100005], in[100005], low[100005];
    int t=0;
    map<pair<int,int>,int> m;;

    int isBridge(int n, vector<int> adj[], int c, int d)
    {
        t=0;
        for(int i=0;i<n;i++)
           vis[i]=0, in[i]=0, low[i]=0;

        for(int i=0;i<n;i++)
            if(!vis[i])
              solve(i,-1,adj);

        // for(auto x:m)
        // {
        //     cout<<x.first.first<<" "<<x.first.second<<endl;
        // }

        if(m[{c,d}]==1) return 1;
        if(m[{d,c}]==1) return 1;

        return 0;
    }

    void solve(int n,int p,vector<int> adj[])
    {
        low[n]=t, in[n]=t;
        vis[n]=1, t++;

        for(auto child:adj[n])
        {
            if(child == p) continue;

            if(vis[child]==1)
               low[n]=min(low[n],in[child]);
            else {
                solve(child,n,adj);
                if(low[child] > in[n])
                {
                    m[{child,n}]=1;
                }

                low[n] =min(low[n],low[child]);
            }
        }
    }
