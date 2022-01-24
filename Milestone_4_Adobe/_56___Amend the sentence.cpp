 string amendSentence (string s)
    {
        // your code here
        string ans="", temp="";

        if(s[0]>='A' && s[0] <='Z')
           temp += (s[0]+32);
        else
           temp += (s[0]);

        for(int i=1;i<s.length();i++)
        {
            // cout<<s[i]<<" "<<temp<<endl;
            if(s[i]>='A' && s[i]<='Z')
            {
                ans += (temp + " ");
                temp ="";
                temp += (s[i]+32);
            }
            else
                temp +=s[i];
        }

        ans += temp;

        return ans;
    }
