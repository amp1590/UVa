#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        float c,d,f,s;
        scanf("%f %f",&c,&d);
        f=(d/9)*5;
        s=c+f;
        printf("Case %d: %.2f\n",i,s);

    }
    return 0;
}
