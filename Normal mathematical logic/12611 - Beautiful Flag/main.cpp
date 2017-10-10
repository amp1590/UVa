#include <iostream>

using namespace std;

int main()
{
    int t,i,r;
    double l,w,right_x,p_left_x,n_left_x,y,z;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>r;
        l=(100.0/20.0)*r*1.0;
        w=(60.0/100.0)*l*1.0;
        p_left_x= ((45.0/100.0)*l*1.0);
        n_left_x= - p_left_x;
        right_x=(l-p_left_x);
        y=((w*1.0)/2.0);
        z= -y;
        cout<<"Case "<<i<<":"<<endl;
        cout<<n_left_x<<" "<<y<<endl;
        cout<<right_x<<" "<<y<<endl;
        cout<<right_x<<" "<<z<<endl;
        cout<<n_left_x<<" "<<z<<endl;

    }
    return 0;
}
