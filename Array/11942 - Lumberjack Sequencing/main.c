#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Lumberjacks:\n");
    int t,i,j,c,d,A[10];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        for(j=0;j<10;j++)
        {
            scanf("%d",&A[j]);
        }
        c=0;
        d=0;
        for(j=0;j<9;j++)
        {
            if(A[j]<A[j+1])
            {
                c++;
            }
            else if(A[j]>A[j+1])
            {
                d++;
            }
        }
        if(c==9 || d==9)
        {
            printf("Ordered\n");
        }
        else
        {
            printf("Unordered\n");
        }

    }
    return 0;
}
