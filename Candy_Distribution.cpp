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
    if((a%b) == 0)
    {
        if((a/b)%2 ==0)
        {
            cout<<"Yes"<<nline;
        }
        else
        cout<<"No"<<nline;
    }
    else 
    cout<<"No"<<nline;
}
return 0;
}
