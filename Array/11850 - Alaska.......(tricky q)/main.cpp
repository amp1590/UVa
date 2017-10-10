#include <bits/stdc++.h>

using namespace std;

bool myfunc(int i,int j)
{
    return (i>j);
}

int main()
{
    int i,j,n,p,q,c,x;
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        c=0;
        for(i=0,j=i+1; i<n-1; i++,j++)
        {

            x=a[j]-a[i];
            if(x>200)
            {
                c=0;
                break;
            }
            if(x<=200)
            {
                c++;
            }
        }
        if(c==0)
        {
            cout<<"IMPOSSIBLE"<<endl;
        }
        else
        {
            p=1422-a[n-1];
            q=200-p;
            if(q>=p)
            {
                cout<<"POSSIBLE"<<endl;
            }
            else
            {
                cout<<"IMPOSSIBLE"<<endl;
            }

        }
    }
    return 0;
}
