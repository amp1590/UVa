#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k,sum,a,d,c;

    for(k=1;;k++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        int N[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&N[i]);
        }
        sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+N[i];
        }
        a=sum/n;
        d=0;
        for(i=0;i<n;i++)
        {
            if(N[i]>a)
            {
                c=N[i]-a;
                d=d+c;
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",k,d);
    }
    return 0;
}
