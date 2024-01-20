/* To find out does dhoni have more votes compare to rohit,virat*/

#include <bits/stdc++.h>
using namespace std;;


int main()
{
    int dhoni,Virat,Rohit;
    cin>>dhoni>>Virat>>Rohit;
    if(dhoni>Virat && dhoni>Rohit)
    {
        cout<<"Yes"<<endl;
    }
    else 
    {
        cout<<"No"<<endl;
    }
    return 0;

}