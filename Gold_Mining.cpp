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
    if((a+1)*c>=b)
    {
        cout<<"YES"<<nline;
    }
    else 
    cout<<"NO"<<nline;
}
return 0;
}
