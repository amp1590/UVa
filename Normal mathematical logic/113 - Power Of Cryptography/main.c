#include <stdio.h>
#include <stdlib.h>

int main()
{
    double s,n,p,k;
    while((scanf("%lf %lf",&n,&p))!=EOF)
    {
    s=1.0/n;
    k=pow(p,s);
    printf("%.0lf\n",k);
    }

    return 0;
}
