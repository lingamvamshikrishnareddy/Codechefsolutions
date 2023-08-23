#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int sum{0};
    int arr[5];
    for(int i =0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<5;i++)
    {
        sum = sum+arr[i];
    }
    if(sum==0)
    {
        cout<<"Beginner"<<nline;
    }
    else if (sum==1)
    {
        cout<<"Junior Developer"<<nline;
    }
    else if (sum==2)
    {
        cout<<"Middle Developer"<<nline;
    }
    else if(sum==3)
    {
        cout<<"Senior Developer"<<nline;
    }
    else if(sum==4)
    {
        cout<<"Hacker"<<nline;
    }
    else 
    cout<<"Jeff Dean"<<nline;
}
return 0;
}


