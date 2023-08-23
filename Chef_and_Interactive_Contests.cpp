#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{

    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i =0;i<n;i++)
    {
        if(arr[i]>k)
        {
            cout<<"Good boi"<<nline;
        }
        else 
        cout<<"Bad boi"<<nline;
    }

return 0;
}
