#include <iostream>

using namespace std;

int main()
{
    long long int t,m,n,i,j,sum;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        m=n*3;
        long long int A[m];
        for(j=0;j<m;j++)
        {
            cin>>A[j];
        }
        sum=0;
        for(j=0;j<m-2;)
        {
            sum=sum+(A[j]*A[j+2]);
            j=j+3;
        }
        cout<<sum<<endl;

    }
    return 0;
}
