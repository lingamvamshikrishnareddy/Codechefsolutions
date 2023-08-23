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
    int ans = 2*(180 + a);
    cout<<ans - (b+c)<<nline;
}
return 0;
}
