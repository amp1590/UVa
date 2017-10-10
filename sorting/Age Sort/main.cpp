#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,i;
    while(cin>>n)
    {
        if(n==0) break;
        long long int a[n];
        for(i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        for(i=0;i<n;i++)
        {
            if(i==n-1)
            {
                cout<<a[i]<<endl;
                break;
            }
            cout<<a[i]<<" ";
        }
    }
    return 0;
}
