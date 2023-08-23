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
    if(c*d>=a*b)
    {
        cout<<"YES"<<nline;
    }
    else
    cout<<"NO"<<nline;
}
return 0;
}
