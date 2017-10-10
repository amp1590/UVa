#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,l,k,c,i,d;
    for(i=1;;i++)
    {
        scanf("%lld %lld",&a,&l);
        if(a<0 && l<0)
        {
            break;
        }
        c=0;
        d=a;
        for(;;)
        {

            if(a==1)
            {
                c++;
                break;
            }
            else if(a>l)
            {
                break;
            }
            else if(a%2==0)
            {
                c++;
                a=a/2;
            }
            else if(a%2==1)
            {
                c++;
                a=(3*a)+1;
            }
        }
        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",i,d,l,c);
    }
    return 0;
}

