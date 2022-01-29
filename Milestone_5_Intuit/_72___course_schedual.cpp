vector<int> v[5000];
    int in[5000];

    vector<int> findOrder(int n, vector<vector<int>>& arr) {
        vector<int> res;

        for(int i=0;i<arr.size();i++){
            v[arr[i][1]].push_back(arr[i][0]);
            in[arr[i][0]]++;
        }

        queue<int> q;

        for(int i=0;i<n;i++)
            if(in[i]==0) q.push(i);

        while(!q.empty())
        {
            int i = q.front();
            q.pop();

            res.push_back(i);

            for(auto x:v[i]){
                in[x]--;
                if(in[x]==0) q.push(x);
            }
        }

        if(res.size()<n) res.clear();

        return res;
    }
