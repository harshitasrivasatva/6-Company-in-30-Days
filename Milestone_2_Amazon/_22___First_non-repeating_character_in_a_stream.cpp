
class Solution{
public:
		string FirstNonRepeating(string s){
		    // Code here
		    unordered_map<char,int> mp;
		    queue<char> pq;

		    string ans;

		    for(int i=0;i<s.length();i++)
		    {
		        if(mp.find(s[i])==mp.end())
		           pq.push(s[i]);

		        mp[s[i]]++;

		        while(!pq.empty() && mp[pq.front()]>=2)
		           pq.pop();

		        if(pq.empty()) ans+="#";
		        else ans+=pq.front();
		    }

		    return ans;
		}
};
