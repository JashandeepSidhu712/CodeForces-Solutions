Problem A : Football

Link to the question:
https://codeforces.com/problemset/problem/96/A

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
 
    string s;
    cin>>s;
    
    int count=1, k=1;
    
    for(int i=1;i<s.length();i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
        }
        else
        {
            count=1;
        }
        
        if(count>=7)
        {
            k=0;
            break;
        }
    }
    
    if(k==0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
