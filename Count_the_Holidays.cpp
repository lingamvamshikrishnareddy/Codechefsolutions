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
    vector<int>vec(n);
    int count{0};
    int dcount{0};
    for(int i =0;i<n;i++)
    {
        cin>>vec[i];
    }
    for(int i =0;i<n;i++)
    {
        if(vec[i]==6 || vec[i]==13 || vec[i]==20 ||vec[i]==27 || vec[i]%7==0)
        {
            count++;
        }
        else 
        {
        dcount++;
        }
    }
    cout<< 8+dcount<<nline;
    
}
return 0;
}



