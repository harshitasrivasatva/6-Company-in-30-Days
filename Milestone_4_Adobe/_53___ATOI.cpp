int atoi(string str) {
        int ans=0, flag=0;

        for(int i=0;i<str.length();i++)
        {
            if(i==0 && str[i]=='-'){
               flag=1;
               continue;
            }

            if(str[i]<'0' || str[i]>'9')
               return -1;

            ans = ans*10 + (str[i]-'0');
        }

        if(flag) ans =-ans;
        return ans;
    }
