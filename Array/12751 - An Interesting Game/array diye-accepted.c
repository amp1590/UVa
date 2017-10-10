#include <stdio.h>
#include <stdlib.h>

int main()
{

    int T,i,j,remain,sum1,sum2,n,x,y,k,l;
    scanf("%d",&T);
    for(l=1;l<=T;l++)
    {
    scanf("%d",&n);
    int A[n];
    scanf("%d %d",&k,&x);
    for(i=0,j=1;i<n;i++,j++)
    {
        A[i]=j;
    }
    sum1=0;
    for(i=0;i<n;i++)
    {
        sum1=sum1+A[i];
    }
    y=x+k;
    sum2=0;
    for(i=x-1;i<y-1;i++)
    {
        sum2=sum2+A[i];
    }
    remain=sum1-sum2;
    printf("Case %d: %d\n",l,remain);
    }
    return 0;
}

