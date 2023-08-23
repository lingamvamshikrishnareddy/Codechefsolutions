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
    if(a+b>c)
    {
        cout<<"TRAIN"<<nline;
    }
    else if (a+b<c)
    {
        cout<<"PLANEBUS"<<nline;
    }
    else 
    cout<<"EQUAL"<<nline;
}
return 0;
}
