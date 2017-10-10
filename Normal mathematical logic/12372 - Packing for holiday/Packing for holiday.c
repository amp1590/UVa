#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,T;
    scanf("%d",&T);
    for(i=1; i<=T; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a<=20 && b<=20 && c<=20)
        {
            printf("Case %d: good\n",i);
        }
        else
        {
            printf("Case %d: bad\n",i);
        }

    }
}

