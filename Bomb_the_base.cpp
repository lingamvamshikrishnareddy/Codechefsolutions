#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    int count{0};
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
   
   for(int i =0;i<n;i+=2)
   {
    if(arr[i]<k || arr[i+1]<k)
    {
        count++;
    }
   }
   cout<<count *2 <<nline;
    
}
return 0;
}
