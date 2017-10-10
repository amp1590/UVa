#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,c;
    for(j=1;;j++)
    {
        scanf("%d",&n);
        if(n<0)
        {
            break;
        }
        c=0;
        for(i=1;;)
        {
            if(i>=n)
            {
                break;
            }
            else
            {
                i=2*i;
                c++;
            }

        }
            printf("Case %d: %d\n",j,c);

    }
    return 0;
}
