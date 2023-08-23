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
    if(a>b)
    {
        cout<<"CAR"<<nline;
    }
    else if(a<b){
    cout<<"BIKE"<<nline;
    }
    else 
    cout<<"SAME"<<nline;
}
return 0;
}
