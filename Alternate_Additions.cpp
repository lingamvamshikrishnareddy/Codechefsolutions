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
    int count{0};
    while(a<=b)
    {
       if(a%2==1)
       {
        a++;
       }
       else 
       a+=2;
       if(a==b)
       {
        count++;
       }
        
    }
    if(count>0)
    {
        cout<<"YES"<<nline;
    }
    else 
    cout<<"NO"<<nline;
   
}
return 0;
}
