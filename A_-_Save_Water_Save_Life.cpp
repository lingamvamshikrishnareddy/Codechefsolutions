#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
     int temp = b + c/2;
     if(a*temp<=d)
     {
        cout<<"YES"<<nline;
     }
     else 
     cout<<"NO"<<nline;
}
return 0;
}
