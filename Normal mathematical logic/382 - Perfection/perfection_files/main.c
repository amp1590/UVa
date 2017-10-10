#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("PERFECTION OUTPUT\n");
    int n,i,j,k,sum;
    while((scanf("%d",&n))!=EOF)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            break;
        }

        else
        {
            for(i=1; i<n; i++)
            {
                sum=0;
                if(n%i==0)
                {
                    sum=sum+i;
                }
            }
        }

        if(sum==n)
        {
            printf("%5d  PERFECT\n",n);
        }
        else if(sum<n)
        {
            printf("%5d  DEFICIENT\n",n);
        }
        else if(sum>n)
        {
            printf("%5d  ABUNDANT\n",n);
        }
    }

    return 0;
}
