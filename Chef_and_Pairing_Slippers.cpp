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
    int temp = abs(a-b);
    cout<<min(temp,b)*c<<nline;
}
return 0;
}
