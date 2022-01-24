class Solution{
public:

	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    string str = "!#$%&*@^~";

	    map<char,int> nt;

	    for(int i=0;i<n;i++)
	       nt[nuts[i]]=i;

	    int k=0;
	    for(int i=0;i<str.length();i++)
	    {
	        if(nt.find(str[i])!=nt.end())
	           nuts[k]=str[i], bolts[k]=str[i], k++;
	    }

	}

};
