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
    if(a*b>c)
    {
        cout<<c/b<<nline;
    }
    else
    cout<<a<<nline;
}
return 0;
}
