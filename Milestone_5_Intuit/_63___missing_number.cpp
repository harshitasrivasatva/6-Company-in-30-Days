int missingNumber(const string& str)
{
    // Code here
    int len =1, cnt=0, ans=-1;

    while(len <= 6){
        int curr =0, j;
        for(j=0;j<len;j++)
            curr = curr*10 + (str[j]-'0');

        while(j<str.length()){
            int req =curr+1;
            string temp =to_string(req);

            // cout<<len<<" "<<j<<" "<<curr<<" "<<req<<endl;

            int i =0 , k =j;
            while(i<temp.length() && k<str.length()){
                if(temp[i] != str[k])
                    break;
                i++, k++;
            }

            if(i!=temp.length())
            {
                cnt++;
                ans = req;
            } else {
                j =k;
            }

            if(cnt>1) {
                cnt=0;
                ans =-1;
                break;
            }

            curr =req;
        }

        if(ans != -1)
          break;
        len++;
    }

    return ans;
}
