class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    string mp[10] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;

    vector<string> possibleWords(int a[], int n)
    {
        //Your code here
        ans.clear();
        string curr ="";

        solve(a,n,curr,0);
        return ans;
    }

    void solve(int a[],int n,string &curr,int id)
    {
        if(id == n)
        {
            ans.push_back(curr);
            return;
        }

        for(auto str:mp[a[id]]){
            curr+=str;
            solve(a,n,curr,id+1);
            curr.pop_back();
        }
    }
};
