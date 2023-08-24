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
    if(a!=0 && b!=0)
    {
        if(abs(a-b)>0)
        {
        cout<<"YES"<<endl;
        }
    }
    else
    cout<<"NO"<<endl;
}
return 0;
}
