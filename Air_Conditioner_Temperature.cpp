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
    int ans = max(a,c);
    if(b>=ans)
    {
        cout<<"Yes"<<nline;
    }
    else 
    cout<<"No"<<nline;
}
return 0;
}
