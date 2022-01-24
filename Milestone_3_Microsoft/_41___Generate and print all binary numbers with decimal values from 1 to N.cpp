vector<string> generate(int n)
{
	// Your code here
	vector<string> v;

	for(int i=1;i<=n;i++)
	{
	    string str;
	    int N =i;

	    while(N)
	    {
	        if(N%2==0) str+="0";
	        else str+="1";
	        N/=2;
	    }

	    reverse(str.begin(),str.end());
	    v.push_back(str);
	}

	return v;
}
