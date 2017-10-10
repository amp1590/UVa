#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        long long int a,b,c;
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a<=b)
        {
            if(a+b>c && a+c>b)
            {
                if(a==b && b==c)
                {
                    printf("Case %d: Equilateral\n",i);
                }
                else if((a==b && b!=c) || (b==c && c!=a) || (a==c && a!=b))
                {
                    printf("Case %d: Isosceles\n",i);
                }
                else if(a!=b && b!=c && a!=c)
                {
                    printf("Case %d: Scalene\n",i);
                }
            }

            else
            {
                printf("Case %d: Invalid\n",i);
            }
        }


        else if(a>=b)
        {
            if(b+c>a && a+c>b)
            {
                if(a==b && b==c)
                {
                    printf("Case %d: Equilateral\n",i);
                }
                else if((a==b && b!=c) || (b==c && c!=a) || (a==c && a!=b ))
                {
                    printf("Case %d: Isosceles\n",i);
                }
                else if(a!=b && b!=c && a!=c)
                {
                    printf("Case %d: Scalene\n",i);
                }
            }

            else
            {
                printf("Case %d: Invalid\n",i);
            }
        }
    }
    return 0;
}
