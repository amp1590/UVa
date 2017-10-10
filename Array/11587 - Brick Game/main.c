#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,i,j,N,c,d;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
    scanf("%d",&N);
    int A[N];

    for(j=0;j<N;j++)
    {
        scanf("%d",&A[j]);
    }
    c=0;
    d=0;
    for(j=0;j<N-1;j++)
    {
        if(A[j]<A[j+1])
        {
           c++;
        }
        else if(A[j]>A[j+1])
        {
            d++;
        }
    }

    if(c==N-1 || d==N-1)
    {
        printf("Case %d: %d\n",i,A[N/2]);
    }

    }

    return 0;
}
