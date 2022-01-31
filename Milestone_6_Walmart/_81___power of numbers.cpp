long long power(int N,int R)
    {
       //Your code here
       long long res = power((long long)N,(long long)R);
       return res%mod;
    }

    long long power(long long x,long long n)
    {
        long long res =1;

        while(n)
        {
            if(n%2==1) res = res%mod * x%mod;
            x =x%mod * x%mod;
            n /=2;
        }

        return res%mod;
    }
