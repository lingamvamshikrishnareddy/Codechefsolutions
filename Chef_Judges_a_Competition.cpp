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
    int arr[n];
    int arr1[n];
    int sum{0};
    int sum1{0};
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        cin>>arr1[i];
    }
     for(int i =0;i<n;i++)
    {
        sum= sum+arr[i];
    }
    for(int i =0;i<n;i++)
    {
        sum1 = sum1 + arr1[i];
    }
    if(sum>sum1)
    {
        cout<<"Bob"<<nline;
    }
    else if(sum<sum1)
    {
        cout<<"Alice"<<nline;
    }
    else 
    cout<<"Draw"<<nline;
}
return 0;
}
