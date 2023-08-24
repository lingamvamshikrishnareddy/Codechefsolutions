#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    vector<int>vec(7);
    int count{0};
    int hcount{0};
    for(unsigned int i =0;i<vec.size();i++)
    {
        cin>>vec[i];
    }
    for(unsigned int i =0;i<vec.size();i++)
    {
        if(vec[i]>0)
        {
            count++;
        }
        else 
        hcount++;
    }
    if(count>hcount)
    {
        cout<<"YES"<<nline;
    }
    else
    cout<<"NO"<<nline;
}
return 0;
}
