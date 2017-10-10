#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    int n,k,p,i,t,j,a,b,c;
    cin>>t;
    for(i=1; i<=t; i++)
    {
        cin>>n>>k>>p;
        c=p%n;
        a=n-k;
        if(a<c)
        {
            b=c-a;
        }
        else if(a>=c)
        {
            b=k+c;
        }
        cout<<"Case "<<i<<": "<<b<<endl;
    }
    return 0;
}
