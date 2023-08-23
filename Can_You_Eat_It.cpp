#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int n,l;
    cin>>n>>l;
    int count{0};
    while(n>=0)
    {
            if(n-l!>=0)
            {
            count++;
            }
        
        n=n-l;
    }
    cout<<count<<nline;
}
return 0;
}
