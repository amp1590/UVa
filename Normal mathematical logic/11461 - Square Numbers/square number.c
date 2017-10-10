#include <stdio.h>
#include <stdlib.h>

int main()

{
    for(;;)
    {
        long long int a,b,i,p,c=0;
        scanf("%lld %lld",&a,&b);
        if(a==0 && b==0)
        {
            break;
        }
        for(i=a; i<=b; i++)
        {
            p=sqrt(i);
            double x=sqrt(i);

            if(p==x)
            {
                c++;
            }
        }
        printf("%lld\n",c);

    }

    return 0;

}
