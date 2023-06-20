Problem X: Two intervals

Link to the question:
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/X

Solution:

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;

    if (l1<=r2 && l2<=r1) 
    {
        long long a= max(l1, l2);
        long long b= min(r1, r2);

        cout<<a<<" "<<b<<endl;
    } 
    else 
    {
        cout<<-1<<endl;
    }
}

.......
inputCopy
1 15 5 27
outputCopy
5 15
........
inputCopy
2 5 6 12
outputCopy
-1
......
