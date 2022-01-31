int ans=0;

    int NumberOfPath(int a, int b)
    {
        //code here
        ans=0;
        solve(0,0,a-1,b-1);

        return ans;
    }

    void solve(int i,int j,int x,int y)
    {
        // cout<<i<<" "<<j<<endl;
        if(i<0 || j<0 || i>x || j>y)
          return;

        if(i==x && j==y) ans++;

        if(i<x) solve(i+1,j,x,y);
        if(j<y) solve(i,j+1,x,y);
    }
