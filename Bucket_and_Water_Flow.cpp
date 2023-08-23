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
    if((a+ c*d )>b)
    {
        cout<<"overFlow"<<nline;
    }
    else if ((a+ (c*d))==b)
    {
        cout<<"filled"<<endl;
    }
    else
    cout<<"Unfilled"<<endl;
}
return 0;
}
