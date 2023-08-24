#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int n,x;
    cin>>n>>x;
    int arr[n-1];
    int sum{0};
    for(int i =0;i<n-1;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n-1;i++)
    {
        sum = sum + arr[i];

    }
    if(sum/n<=x)
    {
        cout<<abs(sum - (n*x))<<nline;

    }
    else 
    cout<<0<<nline;
}
return 0;
}
