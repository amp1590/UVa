#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T,i,rslt,n,c,k;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        int N,K,X;
        scanf("%d %d %d",&N,&K,&X);
        n=(N*(N+1))/2;
        if(K==1)
        {
            k=X;
            rslt=n-k;
            printf("Case %d: %d\n",i,rslt);
        }
        else if(X==1)
        {
            k=(K*(K+1))/2;
            rslt=n-k;
            printf("Case %d: %d\n",i,rslt);
        }
        else
        {
        c=K+1;
        k=(K*(X+c))/2;
        rslt=n-k;
        printf("Case %d: %d\n",i,rslt);
        }

    }
    return 0;
}
