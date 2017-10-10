#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int m,n,d,i,b,rvrs;
    for(;;)
    {
        scanf("%lld",&n);
        d=n;
        rvrs=0;
        while(n!=0)
        {
           rvrs=rvrs*10;
           rvrs=rvrs+(n%10);
           n=n/10;
        }

        if(d==rvrs)
        {
            b=0;
            for(i=2;i<d;i++)
            {
                if(d%i==0)
                {
                    b=1;
                    break;
                }
            }
            if(b==1)
            {
                m=2*d;
                printf("%lld\n",m);
            }

            else
            {
                m=2*d;
                printf("%lld\n",m);
                break;
            }
        }
        else
        {
            m=2*d;
            printf("%lld\n",m);
        }
    }

    return 0;
}
