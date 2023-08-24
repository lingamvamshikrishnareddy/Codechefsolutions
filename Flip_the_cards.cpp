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
    if(a>b)
    {
        cout<<min(a,b)<<nline;
    }
    else 
    cout<<0<<nline;
}
return 0;
}
