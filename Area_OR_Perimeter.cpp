#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int n;
int m;
cin>>n>>m;
if(n*m>2*(n+m))
{
    cout<<"Area"<<endl;
    cout<<n*m<<endl;
}
else if (n*m <2 * (m+n))
{
    cout<<"Peri"<<endl;
    cout<<2*(n+m)<<endl;
}
else 
{
    cout<<"Eq"<<endl;
    cout<<n*m<<endl;
}
return 0;
}
