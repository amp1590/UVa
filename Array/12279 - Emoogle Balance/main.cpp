#include <iostream>

using namespace std;

int main()
{
    int n,m,i,c,x,y;
    for(m=1;; m++)
    {
        cin>>n;
        c=0;
        if(n==0)
        {
            break;
        }
        int a[n];
        for(i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]==0)
            {
                c++;
            }
        }
        x=n-c;
        y=x-c;
        cout<<"Case "<<m<<": "<<y<<endl;
    }
    return 0;
}
