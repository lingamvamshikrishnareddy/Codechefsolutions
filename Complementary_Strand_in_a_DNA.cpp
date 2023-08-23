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
    string s;
    cin>>s;
    for(int i =0;i<n;i++)
    {
        switch(s[i])
        {
            case 'A':
                cout<<"T";
               break;
            case 'T':
                cout<<'A';
                break;
            case 'C':
                cout<<'G';
                break;
            case 'G':
                cout<<'C';
                break;
            
        }
        
    }
    cout<<nline;
}
return 0;
}
