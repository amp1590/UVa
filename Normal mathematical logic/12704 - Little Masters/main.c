#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,T;
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        int x,y,r;
        double sd,ld,d;
        scanf("%d %d %d",&x,&y,&r);
        d=pow(((x*x)+(y*y)),0.5);
        if(d<=r)
        {
            sd=r-d;
            ld=r+d;
            printf("%.2f %.2f\n",sd,ld);
        }

    }
    return 0;
}
