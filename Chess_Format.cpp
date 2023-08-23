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
    if(a+b<3)
    {
        cout<<1<<nline;
    }
    else if (a+b>=3 && a+b<=10)
    {
        cout<<2<<nline;
    }
    else if(a+b>=11 && a+b<=60)
    {
        cout<<3<<nline;
    }
    else
    cout<<"4"<<nline;
}
return 0;
}
