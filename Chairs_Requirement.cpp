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
    int ans = ((a-b)>0)?a-b:0;
    cout<<ans<<nline;
}
return 0;
}
