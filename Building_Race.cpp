#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int d1,d2,s1,s2;
    cin>>d1>>d2>>s1>>s2;
    if(d1/s1>d2/s2)
    {
        cout<<"Chefina"<<nline;

    }
    else if(d1/s1<d2/s2)
    {
        cout<<"Chef"<<nline;
    }
    else 
    cout<<"Both"<<nline;
}
return 0;
}
