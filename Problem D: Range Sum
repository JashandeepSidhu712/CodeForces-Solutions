Problem D: Range Sum

Link to the question:
https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

Solution:

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int t;
    cin >> t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        
        int ansr,ansl;
        
        int m = min(l,r);
        int n = max(l,r);
        
        m--;
        
        ansl=m*(m+1)/2;
        ansr=n*(n+1)/2;
        
        cout<<ansr-ansl<<endl;
    }
}
