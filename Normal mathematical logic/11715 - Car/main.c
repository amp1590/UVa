#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i,j;
    double u,a,t,v,s;
    for(j=1;;j++)
    {
        scanf("%d",&i);
        if(i==0)
        {
            break;
        }
        else if(i==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            s=((u+v)/2.0)*t*1.0;
            a=((v-u)*1.0)/(t*1.0);
            printf("Case %d: %.3lf %.3lf\n",j,s,a);
        }
        else if(i==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=((v-u)*1.0)/(a*1.0);
            s=((v*v*1.0)-(u*u*1.0))/(2.0*a);
            printf("Case %d: %.3lf %.3lf\n",j,s,t);
        }
        else if(i==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=pow(((u*u*1.0)+(2.0*a*s)),0.5);
            t=((v-u)*1.0)/(a*1.0);
            printf("Case %d: %.3lf %.3lf\n",j,v,t);
        }
        else if(i==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=pow(((v*v*1.0)-(2*a*s*1.0)),0.5);
            t=((v-u)*1.0)/(a*1.0);
            printf("Case %d: %.3lf %.3lf\n",j,u,t);
        }
    }
    return 0;
}
