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
    int i{1};
    int ans{0};
    while(i<=10)
    {
        if(a+b+i==21)
        {
            ans = i;
            break;
        }
        i++;
    }
    if(ans>0)
    {
        cout<<ans<<nline;
    }
    else 
    cout<<-1<<nline;
}
return 0;
}
