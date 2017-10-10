#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int k,j,a,b,sum;
        scanf("%d%d",&a,&b);
        sum=0;
        for(k=a,j=b;k<=j;k++)
        {
            if(k%2!=0)
            {
                sum=k+sum;
            }
        }
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}
