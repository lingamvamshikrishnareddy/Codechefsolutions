#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int x1,x2,y1,y2,z1,z2;
    cin>>x1>>x2>>y1>>y2>>z1>>z2;
    if(x1<=x2 && y1<=y2 && z1>=z2)
    {
        cout<<"YES"<<nline;
    }
    else 
    cout<<"NO"<<nline;
}
return 0;
}
