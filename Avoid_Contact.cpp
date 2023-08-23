#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int x,y;
    cin>>x>>y;
    if(x!=y)
    {
    cout<<y*2 + abs(x-y)<<nline;
    }
    else 
    cout<<(y*2 + abs(x-y)) -1 <<nline;
}
return 0;
}
