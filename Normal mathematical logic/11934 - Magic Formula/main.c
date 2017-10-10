#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int a,b,c,d,L,i,r,counter;
    for(;;)
    {
        scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&L);
        if(a==0 && b==0 && c==0 && d==0 && L==0)
        {
            break;
        }

        counter=0;
        for(i=0; i<=L; i++)
        {
            r=(a*i*i)+(b*i)+c;
            if(r%d==0)
            {
                counter++;
            }
        }
        printf("%lld\n",counter);
    }

    return 0;
}
