#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>50 && b<0.7 && c>5600)
    {
            cout<<"10"<<nline;
    }
   else  if((a>50 && b<0.7) && c<=5600)
    {
        cout<<"9"<<nline;
    }
    else if(a<=50 && b<0.7 && c>5600)
    {
        cout<<"8"<<nline;
    }
    else if(a>50 && b>=0.7 && c>5600)
    {
        cout<<"7"<<nline;
    }
    else if(a>50 || b<0.7 || c>5600)
    {
        cout<<"6"<<nline;
    }
    else 
    cout<<"5"<<nline;
}
return 0;
}


