#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int n;
    cin>>n;
    if((((n%7)%2)==0) || (((n%2)%7)==0))
    {
        cout<<"YES"<<nline;
    }
    else 
    cout<<"NO"<<nline;
}
return 0;
}
