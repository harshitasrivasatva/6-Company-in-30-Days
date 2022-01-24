 vector<int> subarraySum(int arr[], int n, long long t)
    {
        // Your code here
        long long sum=0, s=0, e=-1;
        vector<int> v;

        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            // cout<<sum<<" ";

            while(s<i && sum > t)
            {
                sum-=arr[s];
                s++;
            }

            // cout<<sum<<" "<<s<<" "<<t<<endl;

            if(sum==t){
                // cout<<"here";
                v.push_back(s+1);
                v.push_back(i+1);
                return v;
            }
        }

        if(v.size()==0) v.push_back(-1);
        return v;
    }
