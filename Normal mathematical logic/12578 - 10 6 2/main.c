#include <stdio.h>
#include <stdlib.h>
#define PI 3.1415

int main()
{
    int i,T;
    scanf("%d",&T);

    for(i=0;i<T;i++)
    {
        int L;
        double b,r,x,y;
        scanf("%d",&L);
        b=(6*L*1.0)/(10*1.0);
        r=(L*1.0)/(5*1.0);
        x=(acos(-1)*r*r*1.0);
        y=(L*b*1.0)-(x*1.0);
        printf("%.2f %.2f\n",x,y);
    }
    return 0;
}
