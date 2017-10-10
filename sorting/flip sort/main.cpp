#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i,j,m,n,c;
    while(cin>>n)
    {
        long long int a[n];
        for(i=0; i<n; i++) cin>>a[i];
        c=0;
        m=n-1;
        while(m!=0)
        {
            for(i=0,j=1; i<m; i++,j++)
            {
                if(a[i]>a[j])
                {
                    swap(a[i],a[j]);
                    c++;
                }
            }
            m--;
        }
        cout<<"Minimum exchange operations : "<<c<<endl;
    }
    return 0;
}
