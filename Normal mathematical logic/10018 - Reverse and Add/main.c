#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int i,T,d,c,a,rvrs;
    scanf("%lld",&T);
    for(i=0;i<T;i++)
    {
        scanf("%lld",&a);
        c=0;
        for(;;)
        {
            d=a;
            rvrs=0;
            while(a!=0)
            {
                rvrs=rvrs*10;
                rvrs=rvrs+(a%10);
                a=a/10;
            }

            if(d==rvrs)
            {
                printf("%lld %lld\n",c,d);
                break;
            }
            else
            {
                c++;
                a=d+rvrs;
            }
        }
    }

    return 0;
}
