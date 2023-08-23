#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int x,y,a,b;
    cin>>x>>y>>a>>b;
    if(x + a*10> y + b*10)
    {
        cout<<"Chefina"<<nline;
    }
    else if (x+ a*10 < y + b*10)
    {
        cout<<"Chef"<<nline;
    }
    else 
    cout<<"Draw"<<nline;
}
return 0;
}
