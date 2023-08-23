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
    if(a>b)
    {
        cout<<7-a<<nline;

    }
    else if (a<b)
    {
        cout<<7-b<<nline;   
    }
    else
    cout<<7-a<<endl;
}
return 0;
}
