#include <iostream>

using namespace std;

int a[100000000];
int main()
{
    int i,j,c;
    while(cin>>a[0])
    {
        for(i=1;i<10;i++)
        {
            cin>>a[i];
        }
        c=0;
        for(i=0;i<5;i++)
        {
            if(a[i]==a[i+5])
            {
                c=1;
                break;
            }
        }
        if(c==1)
        {
            cout<<"N"<<endl;
        }
        else
        {
            cout<<"Y"<<endl;
        }
    }
    return 0;
}

