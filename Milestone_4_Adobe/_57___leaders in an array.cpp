 vector<int> leaders(int a[], int n){
        // Code here
        vector<int> res;
        res.push_back(a[n-1]);

        int mx =a[n-1];

        for(int i=n-2;i>=0;i--){
            if(a[i]>=mx){
                res.push_back(a[i]);
                mx =a[i];
            }
        }

        reverse(res.begin(),res.end());
        return res;
    }
