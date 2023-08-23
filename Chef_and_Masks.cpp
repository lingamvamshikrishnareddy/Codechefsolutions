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
    if(a*100>b*10)
    {
        cout<<"Cloth"<<nline;
    }
    else if (a*100 == b*10)
    {
        cout<<"Cloth"<<nline;
    }
    else
    cout<<"Disposable"<<nline;

}
return 0;
}
