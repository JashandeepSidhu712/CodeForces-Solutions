Problem A: Beautiful Matrix

Link to the question:
https://codeforces.com/problemset/problem/263/A

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
    
    int mat[5][5];
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    int ii, ij, k=1;
    
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(mat[i][j]==1)
            {
                ii=i;
                ij=j;
                k=0;
                break;
            }
        }
        if(k==0)
        break;
    }
    
    cout<<(abs(ii-2)+abs(ij-2))<<endl;
    
}

.............
inputCopy
0 0 0 0 0
0 0 0 0 1
0 0 0 0 0
0 0 0 0 0
0 0 0 0 0
outputCopy
3
............
inputCopy
0 0 0 0 0
0 0 0 0 0
0 1 0 0 0
0 0 0 0 0
0 0 0 0 0
outputCopy
1
............
