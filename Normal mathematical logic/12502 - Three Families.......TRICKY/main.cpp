#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y,z,t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x>>y>>z;
        x=(((2*x)-y)*z)/(x+y);
        if(x<=0)
            cout<<"0"<<endl;
        else if(x>z)
            cout<<z<<endl;
        else
            cout<<x<<endl;
    }
    return 0;
}
