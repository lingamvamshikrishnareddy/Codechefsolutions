#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<max(abs(a-c),abs(b-d))<<nline;
}
return 0;
}
