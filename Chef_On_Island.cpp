#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    double  a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    int ans = min(a/c,b/d);
    if(ans>e)
    {
        cout<<"YES"<<nline;
    }
    else 
    cout<<"NO"<<nline;
}
return 0;
}
