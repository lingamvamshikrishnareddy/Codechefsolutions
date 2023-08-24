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
    if(a%(b*c) ==0)
    {
        cout<<a/(b*c)<<nline;
    }
    else
    cout<<a/(b*c) + 1 <<nline;
}
return 0;
}
