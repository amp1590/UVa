#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,T,n,c,d;
    scanf("%d",&T);
    for(j=1;j<=T;j++)
    {
        scanf("%d",&n);
        int N[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&N[i]);
        }
        c=0;
        d=0;

        for(i=0;i<n-1;i++)
        {

            if(N[i]<N[i+1])
            {
                c++;
            }
            else if(N[i]>N[i+1])
            {
                d++;
            }
        }
        printf("Case %d: %d %d\n",j,c,d);

    }

    return 0;
}
