#include <iostream>

using namespace std;

int main()
{
    long long int n,q,i,j,k,m,d,p,x,f,c,h;
    for(m=1;;m++)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        long long int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>q;
        cout<<"Case "<<m<<":"<<endl;

        for(k=0;k<q;k++)
        {
            cin>>x;
            d=10000000000;
            c=0;
            for(i=0;i<n-1;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    p=a[i]+a[j];
                    if(p==x)
                    {
                        h=p;
                        c=1;
                        break;
                    }
                    else if(p>x)
                    {
                        f=p-x;
                        if(f<d)
                        {
                            d=f;
                            h=p;
                        }
                    }
                    else if(p<x)
                    {
                        f=x-p;
                        if(f<d)
                        {
                            d=f;
                            h=p;
                        }
                    }
                }
                if(c==1)
                {
                    break;
                }
            }
            cout<<"Closest sum to "<<x<<" is "<<h<<"."<<endl;

        }
    }
    return 0;
}
