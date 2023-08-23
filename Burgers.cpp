#include <bits/stdc++.h>

using namespace std;
#define nline 


int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b;
    cin>>a>>b;
    int ans = (a>b)?b:a;
    cout<<ans<<endl;
}
return 0;
}
