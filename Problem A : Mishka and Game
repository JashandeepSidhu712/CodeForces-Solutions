Problem A : Mishka and Game

Link to the question:
https://codeforces.com/problemset/problem/703/A

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
    
    int counta=0, countb=0;
    
    while(n--)
    {
        int a, b;
        cin>>a>>b;
        
        if(a>b)
        counta++;
        else if(b>a)
        countb++;
    }
    
    if(counta>countb)
    cout<<"Mishka"<<endl;
    else if(countb>counta)
    cout<<"Chris"<<endl;
    else
    cout<<"Friendship is magic!^^"<<endl;
    
}
