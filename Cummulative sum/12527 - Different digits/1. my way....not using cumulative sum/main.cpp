#include <bits/stdc++.h>

using namespace std;

int b[15],a[10000];
int n,m,c,i,j,k,p,x,y;

int main()
{
    while(cin>>n>>m)
    {
        x=((m-n)+1);
        c=0;
        for(i=n; i<=m; i++)
        {
            memset(b,0,sizeof(b));
            j=0;
            p=i;
            while(p!=0)
            {
                a[j]=p%10;
                p=p/10;
                j++;
            }
            for(k=0; k<j; k++)
            {
                b[a[k]]++;
                if(b[a[k]]>1)
                {
                    c++;
                    break;
                }
            }
        }
        y=x-c;
        cout<<y<<endl;
    }
    return 0;
}
