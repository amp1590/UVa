#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        long long int s,d,a,b;
        scanf("%lld %lld",&s,&d);
        a=(s+d)/2;
        b=(s-d)/2;
        if((a+b)==s && (a-b)==d && a>=0 && b>=0)

        {
            printf("%d %d\n",a,b);
        }
        else
        {
            printf("impossible\n");
        }

    }
    return 0;
}
