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
    if(a>b && a>c)
    {
        cout<<"ALICE"<<nline;
    }
    else if (b>a && b>c)
    {
        cout<<"BOB"<<nline;
    }
    else 
    cout<<"CHARLIE"<<nline;
}
return 0;
}
