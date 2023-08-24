#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    double a,b,c;
    cin>>a>>b>>c;
    string ans = ((a+b)/2.0 > c)?"YES":"NO";
    cout<<ans<<endl;
}
return 0;
}
