#include <bits/stdc++.h>

using namespace std;

int main()
{

    freopen("in.txt","r",stdin);
   // freopen("out.txt","w",stdout);
    int t,i,j,k,l,amp,fre;
    int a[9];
    cin>>t;

    for(i=1;i<=t;i++)
    {
        cin>>amp>>fre;
        for(j=1;j<=fre;j++)
        {
            for(k=1;k<=amp;k++)
            {
                for(l=0;l<k;l++)
                {
                    a[l]=k;
                    cout<<a[l];
                }
                cout<<endl;
            }
            for(k=amp-1;k>=1;k--)
            {
                for(l=0;l<k;l++)
                {
                    a[l]=k;
                    cout<<a[l];
                }
                cout<<endl;
            }
            if(j!=fre) cout<<endl;
        }
        if(i!=t) cout<<endl;
    }
    return 0;
}
