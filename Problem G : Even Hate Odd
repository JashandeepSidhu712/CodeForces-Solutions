Problem G : Even Hate Odd

Link to the question:
https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G

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
        
        int even=0, odd=0;
            
            for(int i=0;i<n;i++)
            {
                int a;
                cin>>a;
                
                if(a%2==0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
                
                
                if(even==odd)
                {
                    cout<<"0"<<endl;
                }
                else if(n%2!=0)
                {
                    cout<<"-1"<<endl;
                }
                else
                {
                    cout<<abs(odd-even)/2<<endl;
                }
        
    }
    
}
