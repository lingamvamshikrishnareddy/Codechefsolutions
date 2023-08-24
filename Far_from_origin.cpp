#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int ans1 = pow(x1,2);
    int ans2 = pow(y1,2);
    int ans3 = pow(x2,2);
    int ans4 = pow(y2,2);
    if(ans1+ans2>ans3+ans4)
    {
        cout<<"ALEX"<<nline;
    }
    else if(ans1+ans2<ans3+ans4)
    {
        cout<<"BOB"<<nline;
    }
    else
    cout<<"EQUAL"<<nline;
}
return 0;
}
