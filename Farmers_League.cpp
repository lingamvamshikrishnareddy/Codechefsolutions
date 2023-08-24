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
    cout<<abs((n-1)*3 - ((n/2)-1)*3)<<nline;
    }
    else
    cout<<(n-1)*3-(n/2)*3<<nline;
}
return 0;
}
