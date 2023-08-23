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
   int sum{0};
   int arr[12]{2048,1024,512,256,128,64,32,16,8,4,2,1};
   for(int i =0;i<12;i++)
   {
    
    if(n>=arr[i])
    {
        sum = sum + n/arr[i];
    }
   
    n=n%arr[i];
    }

   
   cout<<sum<<nline;
}
return 0;
}

