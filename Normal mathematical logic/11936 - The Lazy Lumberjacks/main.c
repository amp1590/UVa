#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        if(a+b>c)
        {
            printf("OK\n");
        }
        else
        {
            printf("Wrong!!\n");
        }
    }
    return 0;
}
