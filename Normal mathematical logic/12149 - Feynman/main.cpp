#include <iostream>

using namespace std;

int main()
{
    int n,i,sum;
    for(;;)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        sum=0;
        for(i=n;i>0;i--)
        {
            sum=sum+(i*i);
        }
        cout<<sum<<endl;
    }
    return 0;
}
