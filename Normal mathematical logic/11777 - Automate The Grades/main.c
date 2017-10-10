#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,T,t1,t2,finl,atndnc,ct1,ct2,ct3;
    double a,total_marks;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&finl,&atndnc,&ct1,&ct2,&ct3);
        if(ct1<=ct2 && ct1<ct3)
        {
            a=(ct2+ct3)/2.0;
        }
        else if(ct2<ct1 && ct2<=ct3)
        {
            a=(ct1+ct3)/2.0;
        }
        else if(ct3<=ct1 && ct3<ct2)
        {
            a=(ct2+ct1)/2.0;
        }
        else if(ct1==ct2 && ct2==ct3)
        {
            a=(ct1+ct2)/2.0;
        }

        total_marks=t1+t2+finl+atndnc+a;

        if(total_marks>=90)
        {
            printf("Case %d: A\n",i);
        }
        else if(total_marks>=80 && total_marks<90)
        {
            printf("Case %d: B\n",i);
        }
        else if(total_marks>=70 && total_marks<80)
        {
            printf("Case %d: C\n",i);
        }
        else if(total_marks>=60 && total_marks<70)
        {
            printf("Case %d: D\n",i);
        }
        else if(total_marks<60)
        {
            printf("Case %d: F\n",i);
        }

    }
    return 0;
}
