#include <bits/stdc++.h>

using namespace std;

long long A[220000000];

int main()
{
    long long n,a,c,d,x,i,m,j,k;
    while(cin>>a)
    {
        if(a==0)
        {
            break;
        }
        n=a;
        i=0;
        while(n!=0)
        {
            d=n%2;
            A[i]=d;
            n=n/2;
            i++;
        }
        reverse(A,A+i);
        c=0;
        for(j=0; j<i; j++)
        {
            if(A[j]==1)
            {
                c++;
            }
        }
        cout<<"The parity of ";
        for(j=0; j<i; j++)
        {
            cout<<A[j];
        }
        cout<<" is "<<c<<" (mod 2)."<<endl;
    }
    return 0;
}
