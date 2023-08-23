#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int n;
    cin>>n;
    int arr[5]{2010,2015,2016,2017,2019};
    int count{0};
    for(int i =0;i<5;i++)
    {
        if(arr[i]==n)
        {
            count++;
        }
        
    }
    if(count==1)
    {
        cout<<"HOSTED"<<nline;
    }
    else 
    cout<<"NOT HOSTED"<<nline;
}
return 0;
}
