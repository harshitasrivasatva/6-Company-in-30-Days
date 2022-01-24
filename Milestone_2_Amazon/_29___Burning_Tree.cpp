vector<int> v[10000];
int vis[10000];
int ans=0;

class Solution {
  public:
    int minTime(Node* root, int target)
    {
        // Your code goes here
        ans=0;

        for(int i=0;i<10000;i++)
        {
            vis[i]=0;
            v[i].clear();
        }

        solve(root);
        bfs(target);

        return ans;
    }

    void solve(Node* root)
    {
        if(!root) return;

        if(root->left){
          v[root->data].push_back(root->left->data);
          v[root->left->data].push_back(root->data);
        }

        if(root->right){
          v[root->data].push_back(root->right->data);
          v[root->right->data].push_back(root->data);
        }

        solve(root->left);
        solve(root->right);
    }

    void bfs(int tar)
    {
        queue<pair<int,int>> q;
        q.push({tar,0});
        vis[tar]=1;

        while(!q.empty())
        {
            auto it =q.front();
            q.pop();

            for(auto x:v[it.first])
            {
                if(!vis[x])
                {
                    q.push({x,it.second+1});
                    vis[x]=1;
                }
            }

            ans =it.second;
        }
    }
};
