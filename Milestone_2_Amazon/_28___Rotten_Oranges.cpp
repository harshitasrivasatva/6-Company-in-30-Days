class Solution {
public:
    int orangesRotting(vector<vector<int>>& arr) {
        int n =arr.size();
        int m =arr[0].size();

        queue<pair<int, pair<int,int>>> q;
        int one=0, ans =0;;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==2)
                    q.push({0,{i,j}});

                if(arr[i][j]==1)
                    one++;
            }
        }

        while(!q.empty())
        {
            auto node = q.front();
            q.pop();

            int t = node.first;
            int i = node.second.first;
            int j = node.second.second;

            if(i>0 && arr[i-1][j]==1){
                q.push({ t+1, {i-1,j} });
                arr[i-1][j]=2;
                one--;
            }

            if(i<n-1 && arr[i+1][j]==1){
                q.push({ t+1, {i+1,j} });
                arr[i+1][j]=2;
                one--;
            }

            if(j>0 && arr[i][j-1]==1){
                q.push({ t+1, {i,j-1} });
                arr[i][j-1]=2;
                one--;
            }

            if(j<m-1 && arr[i][j+1]==1){
               q.push({ t+1, {i,j+1} });
                arr[i][j+1]=2;
                one--;
            }

            ans = t;
        }

        if(one>=1) return -1;

        return ans;
    }
};
