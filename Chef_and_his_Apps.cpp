#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int t,x,y,z;
    cin>>t>>x>>y>>z;
    int ans = t-(x+y);
    if(ans==0)
    {
        if(z>=(x+y))
        {
            cout<<"2"<<nline;
        }
        else 
        cout<<1<<nline;
    }
     if(ans>0)
    {
        if(ans>=z)
        {
            cout<<0<<nline;
        }
        else if(z>a && z>b)
        {
        cout<<"2"<<nline;
        }
        else 
        cout<<
    }

    
}
return 0;
}
