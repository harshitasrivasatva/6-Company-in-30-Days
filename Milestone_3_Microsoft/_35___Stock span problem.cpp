class Solution
{
    public:
    //Function to calculate the span of stock’s price for all n days.
    vector <int> calculateSpan(int arr[], int n)
    {
       // Your code here
       vector<int> ans;
       ans.push_back(1);

       stack<int> st;
       st.push(0);

       for(int i=1;i<n;i++)
       {
            while(!st.empty() && arr[st.top()] <= arr[i])
               st.pop();

            if(st.empty()) ans.push_back(i+1);
            else ans.push_back(i-st.top());
            st.push(i);
       }

       return ans;
    }

};



// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);

		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
