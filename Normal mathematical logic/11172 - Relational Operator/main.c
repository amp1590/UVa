#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    long long int a,b;
    scanf("%lld %lld",&a,&b);

        if(a>b)
        {
            printf(">\n");
        }
        else if(a<b)
        {
            printf("<\n");
        }
        else if(a=b)
        {
            printf("=\n");
        }
    }
    return 0;
}
