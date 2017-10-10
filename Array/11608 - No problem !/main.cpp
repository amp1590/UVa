#include <iostream>

using namespace std;

int main()
{
    int a[13],b[12],n,m,i,j,sum,x;
    for(m=1;;m++)
    {
        cin>>n;
        if(n<0)
        {
            break;
        }
        a[0]=n;
        for(i=1;i<13;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<12;i++)
        {
            cin>>b[i];
        }
        cout<<"Case "<<m<<":"<<endl;
        sum=0;
        for(i=0;i<12;i++)
        {
            if(a[i]>=b[i])
            {
                cout<<"No problem! :D"<<endl;
                x=a[i]-b[i];
                sum=sum+x;
            }
            else if(a[i]<b[i])
            {
                sum=sum+a[i];
                if(sum>=b[i])
                {
                    sum=sum-b[i];
                    cout<<"No problem! :D"<<endl;
                }
                else
                {
                    cout<<"No problem. :("<<endl;
                }
            }
        }
    }
    return 0;
}
