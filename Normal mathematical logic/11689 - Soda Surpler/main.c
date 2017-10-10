#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,j,T,e,f,c,s,sum,a,p,rm;
    scanf("%d",&T);
    for(j=0;j<T;j++)
    {
        scanf("%d %d %d",&e,&f,&c);

        s=e/c;
        rm=e%c;
        p=rm+s+f;
        sum=s;

        for(i=c;i<=p; )
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
