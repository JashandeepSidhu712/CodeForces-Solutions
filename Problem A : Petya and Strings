Problem A : Petya and Strings

Link to the question:
https://codeforces.com/problemset/problem/112/A

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
    
    string s, t;
    cin>>s>>t;
    
    int n = s.length();
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);
    
    int k=0;
    
    for(int i=0;i<n;i++)
    {
        if(s[i]==t[i])
        {
            continue;
        }
        else if(s[i]>t[i])
        {
            k=1;
            break;
        }
        else if(s[i]<t[i])
        {
            k=-1;
            break;
        }
        
    }
    
    if(k==1)
    {
        cout<<"1"<<endl;
    }
    else if(k==0)
    {
        cout<<"0"<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    
}

.............
inputCopy
aaaa
aaaA
outputCopy
0
............
inputCopy
abs
Abz
outputCopy
-1
..........
inputCopy
abcdefg
AbCdEfF
outputCopy
1
...........
