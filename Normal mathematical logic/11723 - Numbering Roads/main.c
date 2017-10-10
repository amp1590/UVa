#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,R,D,b,c,i;
    for(i=1;; i++)
    {
        scanf("%d %d",&R,&N);
        if(R==0 && N==0)
        {
            break;
        }
        D=(R-N)/N;
        b=(R-N)%N;
        c=(N*26)+N;
        if(c<R)
        {
            printf("Case %d: impossible\n",i);
        }
        else if(N<R)
        {
            if(b==0)
            {
                printf("Case %d: %d\n",i,D);
            }
            else if(b<=N)
            {
                D++;
                printf("Case %d: %d\n",i,D);
            }
        }
        else if(N>R)
        {
            D=0;
            printf("Case %d: %d\n",i,D);
        }
    }
    return 0;
}
