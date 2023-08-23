#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   
    if((a!=c &&  b==d) || (a==c && b!=d))

    {
            cout<<"1"<<nline;
    }
    else if(a+b == c+d)
    {
        cout<<'0'<<nline;
    }
    else 
    cout<<'2'<<nline;
}
return 0;
}
