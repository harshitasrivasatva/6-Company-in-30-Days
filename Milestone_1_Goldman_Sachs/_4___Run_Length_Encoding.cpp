// Given a string, Your task is to  complete the function encode that returns the
// run length encoded string for the given string.eg if the input string is “wwwwaaadexxxxxx”,
// then the function should return “w4a3d1e1x6″.



#include <bits/stdc++.h>
using namespace std;

string encode(string src);

/*You are required to complete this function */

string encode(string src)
{
    int cnt =1;
    int n =src.length();
    string ans="";

    for(int i=0;i<n;i++)
    {
        if(src[i]==src[i+1])
          cnt++;
        else {
            ans+=src[i] + to_string(cnt);
            cnt=1;
        }
    }

    return ans;
}


int main()
{

    int T;
    cin >> T;
    while (T--)
    {
        string str;
        cin >> str;

        cout << encode(str) << endl;
    }
    return 0;
} // } Driver Code Ends

