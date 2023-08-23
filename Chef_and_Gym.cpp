#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int x,y,z;
    cin>>x>>y>>z;
   
   if (z >= x+y)
   {
    cout<<2<<nline;
   }
   else if (x<=z && x+y>z)
   {
    cout<<1<<nline;
   }
   else 
   cout<<0<<nline;
   
}
return 0;
}
