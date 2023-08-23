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
    if(a/2<b)
    {
        cout<<a/2<<nline;
    }
    else
    cout<<b<<nline;
}
return 0;
}
