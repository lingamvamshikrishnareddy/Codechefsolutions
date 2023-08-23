#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b;
    cin>>a>>b;
    int ans = (1000 - b*4) + (500 - (b+a)*2);
    int ans1 = (500 - a*2) + (1000 - (a+b)*4);
    if(ans>ans1)
    {
        cout<<ans<<nline;
    } 
    else 
    cout<<ans1<<nline;
}
return 0;
}
