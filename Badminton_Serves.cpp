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
    if(n%2==0)
    {
        cout<<n/2 + 1 <<nline;
    }
    else 
    cout<<n/2 + 1<<nline;
}
return 0;
}
