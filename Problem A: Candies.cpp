Problem A: Candies

Link to the question:
https://codeforces.com/problemset/problem/1343/A

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
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        
        int m = 1;
        
        for(int i=1;i<=50;i++)
        {
            m=2*m+1;
            
            if(n%m)
            {
                continue;
            }
            
            cout<<n/m<<endl;
            break;
        }
    }
    
}
