#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int h,o;
    while ((scanf("%lld %lld",&h,&o))!=EOF)
    {
        if(h>o)
        {
            printf("%lld\n",h-o);
        }
        else
        {
            printf("%lld\n",o-h);
        }
    }

    return 0;
}
