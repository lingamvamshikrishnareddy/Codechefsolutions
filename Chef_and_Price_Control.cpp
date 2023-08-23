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
    vector<int>v(n);
    int sum{0};
    int sum1{0};
    int x{};
    for(int i =0;i<v.size();i++)
    {
       cin>>v.at(i);
    }

    for(int i =0;i<v.size();i++)
    {
        sum = sum+v.at(i);
    }
    
    for(int i =0;i<v.size();i++)
    {
        if(v.at(i)>k)
        {
            v.at(i)=k;
        }
        sum1 = sum1 + v.at(i);
        
    }
    cout<<abs(sum-sum1)<<nline;
    
}
return 0;
}
