// Count the subarrays having product less than k


#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countSubArrayProductLessThanK(const vector<int> &a, int n, long long k)
    {
        long long int s=0, e=0, p=1, ans=0;

        while(e < n)
        {
            p *= (long long)a[e];

            while(s<n && p>=k)
            {
                p /= a[s];
                s++;
            }

            if(p < k)
              ans += e-s+1;

            e++;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i;
        long long int k;
        cin >> n >> k;
        vector<int> arr(n);
        for (i = 0; i < n; i++)
            cin >> arr[i];
        Solution obj;
        cout << obj.countSubArrayProductLessThanK(arr, n, k) << endl;
    }
    return 0;
}
