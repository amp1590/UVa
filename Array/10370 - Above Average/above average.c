#include <stdio.h>
#include <stdlib.h>

int main()

{
    int i,j,s,T;
    double sum,p,avrg,d,c;
    scanf("%d",&T);
    for(j=0;j<T;j++)
    {
        scanf("%d",&s);
        int A[s];
        for(i=0;i<s;i++)
        {
            scanf("%d",&A[i]);
        }
        sum=0;
        for(i=0;i<s;i++)
        {
            sum=sum+A[i];
        }
        d=s;
        avrg=(sum*1.0/d*1.0);
        c=0;
        for(i=0;i<s;i++)
        {
            if(A[i]>avrg)
            {
                c++;
            }
        }
        p=(c*1.0/s*1.0)*100;
        printf("%.3lf%%\n",p);
    }
    return 0;

}
