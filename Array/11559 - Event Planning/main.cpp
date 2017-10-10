#include <bits/stdc++.h>

#define CIN              ios_base::sync_with_stdio(0); cin.tie(0)

using namespace std;



int main()
{
    CIN;

//    freopen("in.txt","r",stdin);

    long long n,b,h,w,p,s,c,i,j;
    while(cin>>n>>b>>h>>w)
    {
        c=10000000000000;
        for(i=0; i<h; i++)
        {
            s=0;
            cin>>p;
            long long a[w+5];
            for(j=0; j<w; j++)
            {
                cin>>a[j];
            }
            s=0;
            for(j=0; j<w; j++)
            {
                if(a[j]>=n)
                {
                    s=p*n;
                    break;
                }
            }
            if(s>0)
            {
                c=min(c,s);
            }
        }

        if(c<=b)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<"stay home"<<endl;
        }

    }
    return 0;
}
