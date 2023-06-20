Problem R : Permutation with arrays

Link to the question:
https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R

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
    
    int v[n], a[n];
    string s, t;
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        s+=to_string(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        t+=to_string(a[i]);
    }
    
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    
    // cout<<s<<" "<<t;
    if(s==t)
    {
        cout<<"yes"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}
