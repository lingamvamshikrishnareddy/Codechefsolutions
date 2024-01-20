/* jerry & tom if tom wins faster he will catch jerry*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
     int jerry,tom;
      cin>>jerry>>tom;
      if(jerry<tom)
      {
        cout<<"YES"<<endl;
      }
     else
      {
        cout<<"NO"<<endl;
      }
    }
    return 0;
}