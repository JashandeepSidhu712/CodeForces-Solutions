Problem A: Theatre Square

Link to the question:
https://codeforces.com/problemset/problem/1/A

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
    
    int n, m, a;
    cin>>n>>m>>a;
    
    int b = ceil((double)n/a);
    int c = ceil((double)m/a);
    
    cout<<b*c<<endl;  
}

.........
inputCopy
6 6 4
outputCopy
4
............
