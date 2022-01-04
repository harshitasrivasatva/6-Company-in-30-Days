// Find Missing And Repeating



#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int *findTwoElement(int *arr, int n)
    {
        ll s1=0, s2=0;
        int f=0;

        s1 =((ll)n*(ll)(n+1))/2;
        s2 =((ll)n*(ll)(n+1)*(ll)(2*n+1))/6;

        ll _s1=0, _s2=0;

        for(int i=0;i<n;i++)
        {
           _s1 += (ll)arr[i];
           _s2 += (ll)((ll)arr[i]*(ll)arr[i]);
        }

        if(_s1 < s1){
           f=1;
           swap(_s1,s1);
           swap(_s2,s2);
        }

       ll y =(_s2-s2)/(_s1-s1);
       ll x =(_s1-s1);

        int *p = new int(2);

        p[0] =(y+x)/2;
        p[1] =abs((y-x)/2);

        if(f)
           swap(p[0],p[1]);

        return p;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
} // } Driver Code Ends
