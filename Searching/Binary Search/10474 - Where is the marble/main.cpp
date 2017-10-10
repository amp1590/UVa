#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,c,temp,first,last,mid,i,j,m,x,item;
    for(m=1;; m++)
    {
        cin>>n>>c;
        if(n==0 && c==0)
        {
            break;
        }
        int a[n],b[c];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<c; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);

        cout<<"CASE# "<<m<<":"<<endl;
        for(i=0; i<c; i++)
        {
            if(binary_search(a,a+n,b[i]))
            {
                int low=lower_bound(a,a+n,b[i])-a;
                cout<<b[i]<<" found at "<<low+1<<endl;
            }
            else
            {
                 cout<<b[i]<<" not found"<<endl;
            }
        }
    }
    return 0;
}
