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
    if(n%100<=9)
    {
    cout<<(n/100) + n%100<<nline;
    }
    else 
    cout<<-1<<nline;
}
return 0;
}
