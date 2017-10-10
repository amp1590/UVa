#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n,k,s,r,i,sum,rm,a,p;
    while((scanf("%d %d",&n,&k))!=EOF)
    {
        s=n/k;
        rm=n%k;
        p=rm+s;
        r=n+s;
        sum=r;

        for(i=k; i<=p; )
        {
            a=p/i;
            rm=p%i;
            p=rm+a;
            sum=sum+a;
        }
        printf("%d\n",sum);
    }

    return 0;

}
