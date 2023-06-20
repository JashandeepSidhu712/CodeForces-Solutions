Problem A: Way Too Long Words

Link to the question:
https://codeforces.com/problemset/problem/71/A

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
    
    int t;
    cin>>t;
    
    while(t--)
    {
        string s;
        cin>>s;
        
        int n = s.length();
            string a = "";
        
        if(n>10)
        {
            a+=s[0];
            a+=to_string(n-2);
            a+=s[n-1];
        }
        else
        {
            a=s;
        }
        
        cout<<a<<endl;
        
        
    }
    
}

..........................................
inputCopy
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis
.........................................
outputCopy
word
l10n
i18n
p43s
.........................................
