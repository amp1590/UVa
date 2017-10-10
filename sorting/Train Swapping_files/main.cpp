#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,t,j,m,n,c,sum;
    cin>>t;
    for(m=0;m<t;m++)
    {
        cin>>n;
        sum=0;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        c=0;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    sum=sum+a[i]+a[j];
                    c++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<sum<<" swaps."<<endl;
        cout<<c<<endl;
    }
    return 0;
}

