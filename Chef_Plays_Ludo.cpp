#include <iostream>
using namespace std;

int main ()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int n;
        cin>>n;
        string ans = (n==6)?"YES":"NO";
        cout<<ans<<endl;
    }
    return 0;
}