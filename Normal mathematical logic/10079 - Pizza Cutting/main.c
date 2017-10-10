#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int N,i,j,r;
    for(;;)
    {
        scanf("%lld",&N);
        if(N<0)
        {
            break;
        }
        else if(N==0)
        {
            r=1;
            printf("%lld\n",r);
        }
        else if(N>0)
        {
            for(i=1,j=1; j<=N; j++)
            {
                r=N+i;
                i=i+j;
            }

            printf("%lld\n",r);
        }
    }
    return 0;
}
