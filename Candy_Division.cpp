/* A Group of 3 friends wants to distribute choclate evenly*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
         int choclate{0};
         cin>>choclate;
         if(choclate%3==0)
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