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
    vector<int>v(n);
    for(int i =0;i<v.size();i++)
    {
        cin>>v.at(i);
    }
    sort(v.begin(),v.end());
    cout<<v.at(n-1) + v.at(n-2)<<nline;
    
}
return 0;
}
