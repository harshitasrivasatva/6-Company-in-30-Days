class Solution
{
  public:
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        vector<int> v;
        priority_queue<int> q;
        unordered_map<int,int> m;

        for(int i=0;i<k;i++)
        {
            q.push(arr[i]);
            m[arr[i]]++;
        }

        v.push_back(q.top());

        for(int i=k;i<n;i++)
        {
            m[arr[i-k]]--;
            m[arr[i]]++;

            q.push(arr[i]);

            while(!q.empty() && m[q.top()]==0)
              q.pop();

            v.push_back(q.top());
        }

        return v;
    }
};
