#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d;
    for(;;)
    {
        scanf("%d %d",&a,&b);
        if(a==-1 && b==-1)
        {
            break;
        }
        else if(a>b)
        {
            c=a-b;
            d=(100+b)-a;
        }
        else if(a<b)
        {
            c=b-a;
            d=(100+a)-b;
        }
        else if(a==b)
        {
            c=0;
            d=0;
        }

        if(c>d)
        {
            printf("%d\n",d);
        }
        else if(d>c)
        {
            printf("%d\n",c);
        }
        else if(c==d)
        {
            printf("%d\n",c);
        }
    }
    return 0;
}
