#include <bits/stdc++.h>
using namespace std;
#define nline '\n'

int main ()
{
int tt;
cin>>tt;
while(tt--)
{
    string s;
    cin>>s;
    int flag{0};
    
    string res{"314159265358979323846264338327"};
    int count{0};
    int hcount{0};
   
    for(int i =0;i<s.length();i++)
    {
        if(s[i] == res[i])
        {
        
            count++;
        }
        else 
        hcount++;
    }
    if(count>0 && hcount==0)
    {
        cout<<count<<nline;
    }
    else
    cout<<0<<nline;
    
}
return 0;
}


