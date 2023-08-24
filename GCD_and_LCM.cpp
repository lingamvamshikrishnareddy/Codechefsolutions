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
    int ans = max(a,b);
    int ans1{0};
    int i {1};
    while(i<=b)
    {
         if(a%i==0 && b%i==0)
        {
            ans1 = i;

        }
        i++;
    }
    
    int ans2 = (a*b)/ans1;
    cout<<ans1<<" "<<ans2<<nline;
}
return 0;
}
