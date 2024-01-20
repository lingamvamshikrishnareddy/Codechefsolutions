/* to do puzzle hunt task a team requires 6-8 people. check u can form or not?*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin>>n;
     if(n>5 && n<9)
     {
        cout<<"Yes"<<endl;
     }
     else 
     {
        cout<<"No"<<endl;
     }
     return 0;
}