#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b,c;
    cin>>a>>b>>c;
    int ans = abs(a-b);
    int ans1 =c- abs(a-c ) + abs(c-b);
    if(ans>ans1)
    {
        cout<<ans1<<nline;
    }
    else
    cout<<ans<<nline;
}
return 0;
}
