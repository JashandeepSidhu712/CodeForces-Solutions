Problem B : Balanced Array

Link to the question:
https://codeforces.com/problemset/problem/1343/B

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
    
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        int even=0, odd=0;
        
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            
            for(int i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
                even+=i;
            }
            for(int i=1;i<n-2;i+=2)
            {
                cout<<i<<" ";
                odd+=i;
            }
            
            cout<<even-odd<<endl;
        }
    }
}

.......
IDEA
if n=4
2 4 - 1 5
if n=8
2 4 6 8 - 1 3 5 11
if you notice the pattern,
even is continuous
odd is continuous except the last element,
that last element is obtained using, 
sum of even elements - sum of odd elements till now
..................
