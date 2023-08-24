#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    int arr[3];
    for(int i =0;i<3;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+3);
    for(int i =0;i<3;i++)
    {
       cout<<arr[1] + arr[2];
       break;
    }
    cout<<nline;

}
return 0;
}
