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
    int sum = a+b;
    int count{0};
    for(int i =1;i<=sum;i++)
    {
        if(sum%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Alice"<<nline;
    }
    else 
     cout<<"Bob"<<nline;

}
return 0;
}
