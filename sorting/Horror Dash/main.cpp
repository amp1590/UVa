#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,t,n,m;
    cin>>t;
    for(m=1;m<=t;m++)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]) swap(a[i],a[j]);
            }
        }
        cout<<"Case "<<m<<": "<<a[n-1]<<endl;
    }
    return 0;
}
