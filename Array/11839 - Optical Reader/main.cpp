#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,t,c,k,l,d;
    char j;
    int a[5];
    string b[5];
    for(;;)
    {
        cin>>t;
        if(t==0)
        {
            break;
        }
        for(l=0;l<t;l++)
        {

            for(i=0;i<5;i++)
            {
                cin>>a[i];
            }
            for(i=0,j='A';i<5,j<='E';i++,j++)
            {
               b[i]=j;
            }
            c=0;
            for(k=0;k<5;k++)
            {
                if(a[k]>=0 && a[k]<=127)
                {
                    c++;
                    if(c==1)
                    {
                        d=k;
                    }
                }
            }
            if(c==1)
            {
                for(i=0;i<5;i++)
                {
                    if(d==i)
                    {
                        cout<<b[i]<<endl;
                    }
                }
            }
            else
            {
                cout<<"*"<<endl;
            }
        }

    }
    return 0;
}
