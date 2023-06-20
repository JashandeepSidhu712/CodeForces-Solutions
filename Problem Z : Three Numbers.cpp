Problem Z : Three Numbers

Link to the question:
https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

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
    
    int k, s;
    cin>>k>>s;
    
    int count=0;
    
    for(int x=0;x<=k;x++)
    {
        for(int y=0;y<=k;y++)
        {
            int z = s - (x+y);
            
            if(z>=0 && z<=k)
            {
                count++;
            }
        }
    }
    
    cout<<count<<endl;
     
}
