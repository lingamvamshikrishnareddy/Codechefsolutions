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
    int count{0};

    while(a>0){
        if(a%2==0)
        {
            count++;
        }
        a=a/2;
    }
    cout<<b*count + (count-1)*c<<nline;
}
return 0;
}
