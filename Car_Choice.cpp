#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    double  a,b,c,d;
    cin>>a>>b>>c>>d;
    if(c/a>d/b)
    {
        cout<<"1"<<nline;
    }
    else if(c/a<d/b)
    {
        cout<<"-1"<<nline;
    }
    else 
    cout<<0<<nline;
}
return 0;
}
