#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    double  a,b;
    cin>>a>>b;
    double ans= pow(b,2);
    double  res = a/ans;
    if(res<=18)
    {
        cout<<"1"<<nline;
    }
    else if (res>=19 && res<=24)
    {
        cout<<"2"<<nline;
    }
    else if (res>=25 && res<=29)
    {
        cout<<'3'<<nline;
    }
    else 
    cout<<'4'<<nline;
}
return 0;
}







  