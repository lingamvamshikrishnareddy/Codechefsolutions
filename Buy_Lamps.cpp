#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    
        if(((k*x) + (n-k)*y) > (n*x))
        {
            cout<<n*x<<nline;
        }
        else 
        cout<<k*x + (n-k)*y<<nline;
    

}
return 0;
}
