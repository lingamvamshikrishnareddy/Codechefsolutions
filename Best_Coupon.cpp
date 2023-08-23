#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    double n;
    cin>>n;
    int ten_percent = n*0.1;
    int flat_hundred = n-100;
    int result11 = n-ten_percent;
    int result22 = flat_hundred;
    
    if(result11>result22)
    {cout<<100<<nline;
    }
   else
    cout<<n*0.1<<nline;
    
}
return 0;
}
