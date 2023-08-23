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
    if(a<b)
    {
        cout<<"Repair"<<nline;
    }
    else if (a>b)
    {
        cout<<"New Phone"<<nline;
    }
    else
    cout<<"Any"<<nline;
}
return 0;
}
