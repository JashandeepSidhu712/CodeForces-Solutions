Problem A: Ultra-Fast Mathematician

Link to the question:
https://codeforces.com/problemset/problem/61/A

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
    
    cout.precision(0);
    cout.setf(ios::fixed);
    
    string s, t;
    cin>>s>>t;
    
    string d="";
    
    int n = s.length();
    
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i])
        {
            d+=to_string(0);
        }
        else
        {
            d+=to_string(1);
        }
    }
    
    cout<<d<<endl;
}
