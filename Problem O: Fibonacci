Problem O: Fibonacci

Link to the question:
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

Solution:
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

const int MOD = 1e9 + 7;
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    
    int fib[n+2];
    
    fib[1]=0;
    fib[2]=1;
    
    for(int i=3;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    
    cout<<fib[n]<<endl;
}
