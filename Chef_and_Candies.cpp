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
    int ans = a-b;
    if(ans>0 && ans%4!=0)
    {
    cout<<ans/4  + 1 <<nline;
    }
    else if (ans%4 ==0)
    {
        cout<<ans/4<<nline;
    }
    else 
    cout<<0<<nline;
}
return 0;
}
