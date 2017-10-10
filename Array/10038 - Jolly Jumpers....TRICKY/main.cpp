#include <bits/stdc++.h>

using namespace std;

bool visit[3001];

int a[111111];

int main()
{
//    freopen("in.txt","r",stdin);
    int n,i,x,c,d;
    while(cin>>n)
    {
        memset(visit,0,sizeof(visit));
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        d=n-1;
        c=0;
        for(i=0; i<n-1; i++)
        {
            x=abs(a[i]-a[i+1]);
            if(visit[x])
            {
                c=1;
                break;
            }
            visit[x]=1;
        }


        if(c==0)
        {
            for(int i=1; i<n; i++)
                if(visit[i]==0)
                {
                    c=1;
                    break;
                }
        }

        if(c==0)
        {
            cout<<"Jolly"<<endl;
        }
        else
        {
            cout<<"Not jolly"<<endl;
        }

    }
    return 0;
}
