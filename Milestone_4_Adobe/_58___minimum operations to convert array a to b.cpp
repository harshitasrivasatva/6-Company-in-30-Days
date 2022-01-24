int minInsAndDel(int a[], int b[], int n, int m) {

        unordered_map<int,int> mb;
        for(int i=0;i<m;i++)
           mb[b[i]]++;

        vector<int> v;

        for(int i=0;i<n;i++)
        {
            if(mb.find(a[i]) != mb.end()){
                cout<<a[i]<<" ";
               v.push_back(a[i]);
            }
        }

        int lis =LongestIncreasingSubsequenceLength(v);
        // cout<<lis<<" ";
        int ans =n+m-2*lis;

        return ans;
    }

    int LongestIncreasingSubsequenceLength(std::vector<int>& v)
    {
        if (v.size() == 0) // boundary case
            return 0;

        std::vector<int> tail(v.size(), 0);
        int length = 1; // always points empty slot in tail

        tail[0] = v[0];

        for (int i = 1; i < v.size(); i++) {

            // Do binary search for the element in
            // the range from begin to begin + length
            auto b = tail.begin(), e = tail.begin() + length;
            auto it = lower_bound(b, e, v[i]);

            // If not present change the tail element to v[i]
            if (it == tail.begin() + length)
                tail[length++] = v[i];
            else
                *it = v[i];
        }

        return length;
    }
