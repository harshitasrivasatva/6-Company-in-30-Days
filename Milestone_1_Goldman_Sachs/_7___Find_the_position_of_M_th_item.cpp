// Find the kid which gets tha damaged toy



#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int findPosition(int N, int M, int K)
    {
        int temp = (M + K - 1)%N;
        return ( temp == 0) ? N : temp;
    }
};
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, M, K;

        cin >> N >> M >> K;

        Solution ob;
        cout << ob.findPosition(N, M, K) << endl;
    }
    return 0;
}
