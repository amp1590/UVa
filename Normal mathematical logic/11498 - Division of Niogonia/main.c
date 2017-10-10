#include <stdio.h>
#include <stdlib.h>

int main()
{
    int k,m,n,x,y,i;
    for(;;)
    {
        scanf("%d",&k);
        if(k==0)
        {
            break;
        }
        scanf("%d %d",&m,&n);
        for(i=0;i<k;i++)
        {

            scanf("%d %d",&x,&y);
            if((x>m || x<m || x==m) && y==n)
            {
                printf("divisa\n");
            }
            else if((y>n || y<n || y==n) && x==m)
            {
                printf("divisa\n");
            }
            else if(x<m && y>n)
            {
                printf("NO\n");
            }
            else if(x>m && y>n)
            {
                printf("NE\n");
            }
            else if(x>m && y<n)
            {
                printf("SE\n");
            }
            else if(x<m && y<n)
            {
                printf("SO\n");
            }
        }

    }
    return 0;
}
