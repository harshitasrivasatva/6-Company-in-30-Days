public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> res;
        set<vector<int>> st;
        int n =arr.size();

        sort(arr.begin(),arr.end());

        for(int i=0;i<n;i++){
           for(int j=i+1;j<n;j++){
              int l =j+1;
              int h =n-1;

              while(l<h)
              {
                    int sum =arr[i]+arr[j]+arr[l]+arr[h];

                    if(sum==k)
                    {
                        vector<int> v;
                        v.push_back(arr[i]);
                        v.push_back(arr[j]);
                        v.push_back(arr[l]);
                        v.push_back(arr[h]);

                        sort(v.begin(),v.end());
                        st.insert(v);
                        l++, h--;
                    }
                    else if(sum > k)
                        h--;
                    else
                        l++;
              }
           }
        }

        for(auto x:st) res.push_back(x);
        return res;

    }
