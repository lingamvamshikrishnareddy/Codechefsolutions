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
    int intial = a*b;
    int profit = a*c - intial;
    cout<<profit<<nline; 
}
return 0;
}
