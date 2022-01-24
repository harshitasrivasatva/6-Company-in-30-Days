public:
    int minSteps(int D){
        // code here
        queue<pair<int,int>> q;
        q.push({0,0});

        while(!q.empty())
        {
            auto it =q.front();
            q.pop();

            int x =it.first;
            int t =it.second;

            if(x == D)
               return t-1;

            q.push({x+t,t+1});
            q.push({x-t,t+1});
        }

        return -1;
    }
