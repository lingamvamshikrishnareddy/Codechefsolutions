#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    double  n;
    cin>>n;
    double ans = n+500+(n*98)/100;
    if(n>=1500)
    {
        cout<<fixed<<setprecision(2)<<ans<<nline;
    }
    else
    cout<<fixed<<setprecision(2)<<n+((n*10)/100) + ((n*90)/100)<<nline;
}
return 0;
}


