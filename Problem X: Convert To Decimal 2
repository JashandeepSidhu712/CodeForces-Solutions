Problem X: Convert To Decimal 2

Link to Question
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

SOLUTION: 

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
    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v, v1;
        
        while(n!=0)
        {
            // cout<<n%2<<" ";
            v.push_back(n%2);
            // cout<<bin<<" ";
            n = n/2;
            // cout<<n<<" ";
            // cout<<endl;
        }
        
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++)
        {
            // cout<<v[i];
            if(v[i]==1)
            {
                v1.push_back(v[i]);
            }
        }
        
        int h = v1.size();
        int sum=0;
        for(int i=0;i<v1.size();i++)
        {
            sum+=pow( 2, ( h-(i+1) ) );
        }
        
        cout<<sum<<endl;
    }
    
}

____________________
|                  |
|input             |
|3                 |
|10                |
|7                 |
|8                 |
____________________
____________________
|                  |               
|output           |
|3                |
|7                |
|1                |
____________________
