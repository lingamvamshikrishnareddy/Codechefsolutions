#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
  int arr[10]{};
  for(int i =0;i<10;i++)
  {
    cin>>arr[i];
  }
  int sum{0};
  for(int i =0;i<10;i++)
  {
    sum = arr[i]/2 + arr[i]/3 + arr[i]/4;

     
     if(sum!=0)
     {
  
    if(sum>arr[i])
    {
        cout<<sum<<nline;
    }
    else 
    cout<<arr[i]<<nline;
    continue;
  }

  }
 

return 0;
}
