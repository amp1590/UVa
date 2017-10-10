#include <stdio.h>
#include <stdlib.h>

int main()

{
    int n,s,i,sum,a,p,rm;
    while((scanf("%d",&n))!=EOF)
    {
        if(n==0)
        {
            break;
        }
        s=n/3;
        rm=n%3;
        p=rm+s;
        sum=s;
        if(p==2)
        {
            p=3;
        }

        for(i=3; i<=p; )
        {

            a=p/i;
            rm=p%i;
            p=rm+a;
            if(p==2)
            {
                p=3;
            }
            sum=sum+a;
        }
        printf("%d\n",sum);
    }

    return 0;

}
