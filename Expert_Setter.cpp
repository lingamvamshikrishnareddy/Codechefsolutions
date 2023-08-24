#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    double a,b;
    cin>>a>>b;
    if(b/a>=0.5)
    {
        cout<<"YES"<<nline;
    }
    else 
    cout<<"NO"<<nline;

}
return 0;
}
