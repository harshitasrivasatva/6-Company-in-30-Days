vector<int> find3Numbers(vector<int> arr, int n) {
        // Your code here
        vector<int> res;
        stack<int> st;

        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top() <= arr[i])
               st.pop();

            st.push(arr[i]);
            if(st.size()==3)
              break;
        }

        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }

        if(res.size()<3) res.clear();

        return res;
    }
