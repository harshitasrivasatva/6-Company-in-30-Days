// Given a pattern containing only I's and D's. I for increasing and D for decreasing.
// Devise an algorithm to print the minimum number following that pattern.



#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    string printMinNumberForPattern(string s)
    {
       string str="";
        int cur=0, ind=0;

        if(s[0]=='0') return "0";
        if(s[0]=='I') {
            str+="12";
            cur =3, ind =1;
        }
        if(s[0]=='D') {
            str+="21";
            cur =3, ind =0;
        }

        for(int i=1;i<s.length();i++){
            if(s[i]=='I'){
                str+=to_string(cur);
                cur++, ind=i+1;
            } else {
                str+=str[str.length()-1];
                for(int j=ind;j<=i;j++)
                  str[j] = str[j]+1;
                cur++;
            }
        }

        return str;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0;
}
// } Driver Code Ends
