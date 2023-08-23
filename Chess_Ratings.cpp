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
    int ans = (b-a);
    if(ans%8!=0)
    {
        cout<<(ans/8) + 1<<nline;
    }
    else
    cout<<(ans/8)<<nline;
}
return 0;
}
