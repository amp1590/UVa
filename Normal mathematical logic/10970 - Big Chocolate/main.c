#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,r;
    while((scanf("%d %d",&m,&n))!=EOF)
    {
        r=(m*n)-1;
        printf("%d\n",r);
    }
    return 0;
}
