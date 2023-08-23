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
    if(a>b && a%b==0)
    {
    cout<<(a/b)*c<<nline;
    }
    else if(a>b && a%b!=0)
    {
        cout<<((a/b) +1 ) * c<<nline;
    }
    else 
    cout<<c<<nline;
}
return 0;
}
