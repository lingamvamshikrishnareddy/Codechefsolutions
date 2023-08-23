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
    string ans = c/(a*b)>0 ? "YES":"NO";
    cout<<ans<<nline;
}
return 0;
}
