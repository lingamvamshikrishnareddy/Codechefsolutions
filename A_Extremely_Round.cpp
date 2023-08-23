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
    int count{0};
    int hcount{0};
    for(int i =1;i<=n;i++)
    {
        if(i<100)
        {
      if(i%10==0 )
      {
        count++;
      }
        }
     if(i>=100 && i<1000)
        {
            if(i%100==0)
            {
                count++;
            }
        }
        if(i>=1000 && i<10000)
        {
            if(i%1000==0){
                count++;
            }
        }
        if(i>=100000 && i<1000000)
        {
            if(i%10000==0)
            {
                count++;
            }
        }
        
    
    }
    cout<<count+9<<nline;
    
}
return 0;
}
