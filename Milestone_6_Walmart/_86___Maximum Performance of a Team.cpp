#define ll long long
class Solution {
public:
    int mod =1000000007;

    int maxPerformance(int n, vector<int>& sp, vector<int>& eff, int k) {
        vector<pair<ll,ll>> v;

        for(int i=0;i<n;i++)
            v.push_back({(ll)eff[i],(ll)sp[i]});

        sort(v.rbegin(),v.rend());

        priority_queue<ll,vector<ll>, greater<ll>> pq;

        ll sum=0, res=0;

        for(int i=0;i<n;i++)
        {
            if(pq.size() == k)
            {
                sum-=pq.top();
                pq.pop();
            }

            pq.push(v[i].second);
            sum += v[i].second;

            res =max(res,sum*v[i].first);
        }

        return res%mod;
    }
};
