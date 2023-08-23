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
    if(c%a!=0 && c%b!=0)
    {
        cout<<"NONE"<<nline;
    }
    else if(c%a==0 && c%b==0)
    { 
    cout<<"ANY"<<nline;
    }
    else if (c%a==0)
    {
        cout<<"CHICKEN"<<nline;
    } 
    else 
    cout<<"DUCK"<<nline;

    }
return 0;
}
