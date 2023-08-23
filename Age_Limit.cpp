#include <bits/stdc++.h>

using namespace std;

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b,x;
    cin>>a>>b>>x;
    string ans = (x>=a && x<b)?"YES":"NO";
    cout<<ans<<endl;
}
return 0;
}
