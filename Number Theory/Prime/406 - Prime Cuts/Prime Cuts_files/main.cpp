#include <iostream>

using namespace std;

int main()
{
    int n,i,j,a[100];
    while(1)
    {
        cin>>n;
        for(j=1;j<n;j++)
        {
           for(i=2;i<n;i++)
           {
               c=0;
               j=0;
               if(i%2!=0)
               {
                   a[j]=i;
                   j++;
                   c++;
               }
            }

        }
    }

    return 0;
}
