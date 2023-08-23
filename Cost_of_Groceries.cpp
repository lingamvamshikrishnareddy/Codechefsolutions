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
    int arr[n];
    int arr1[n];
    int sum{0};
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
        if(arr[i]>=x)
        {
            sum = sum + arr1[i];
        }
    }
    cout<<sum<<nline;

}
return 0;
}
