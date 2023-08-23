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
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count{0};
    for(int i =0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            count++;
        }
    }
    cout<<n-count<<nline;
}
return 0;
}
