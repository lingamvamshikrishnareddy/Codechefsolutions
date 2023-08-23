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
    string ans = (a>b)?"LOSS":(a<b)?"PROFIT":"NEUTRAL";
    cout<<ans<<endl;
}
return 0;
}
