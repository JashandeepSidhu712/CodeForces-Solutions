Problem A: Raising Bacteria

Link to the question:
https://codeforces.com/problemset/problem/579/A

Solution:
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
// const int INF = LLONG_MAX >> 1;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
        
    int count=0;
        
    while((n/2)!=0)
    {
        if(n%2==1)
        count++;
        
        n=n/2;
    }
        
    cout<<count+1<<endl;
}
