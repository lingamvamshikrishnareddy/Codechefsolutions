#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int n;
    cin>>n;
    if(n%4==1)
    {
        cout<<"East"<<nline;
    }
    else if (n%4==2)
    {
        cout<<"South"<<nline;
    }
    else if (n%4==3)
    {
        cout<<"West"<<nline;
    }
    else 
    cout<<"North"<<nline;
}
return 0;
}
