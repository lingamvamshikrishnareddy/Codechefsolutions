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
    int ans = a/3;
    cout<<(a-ans)*b<<nline;
}
return 0;
}
