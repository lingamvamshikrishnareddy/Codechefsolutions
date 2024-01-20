/* if battery health is 80% is optimal */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int battery_power;
        cin>>battery_power;
        if(battery_power>=80)
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