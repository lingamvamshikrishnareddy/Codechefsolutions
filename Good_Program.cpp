#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int x;
    cin>>x;
    if(x%4==0)
    {
        cout<<"Good"<<nline;
    }
    else
    cout<<"Not Good"<<nline;
}
return 0;
}
