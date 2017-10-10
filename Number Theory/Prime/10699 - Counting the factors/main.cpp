#include <bits/stdc++.h>

using namespace std;

bool p[1000000];

vector<long long>prime;


void sieve(long long n)
{
    p[0]=p[1]=1;

    for(long long i=2; i<n;)
    {
        prime.push_back(i);
        for(long long j=i*i; j<n; j+=i)
            p[j]=1;
        for(++i;; i++)
        {
            if(!p[i]) break;
        }
    }
}
int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    long long n,i,c,d;
    sieve(1000000);
    while(cin>>n)
    {
        if(n==0) break;
        c=0;
        d=n;
        for( i=0; i<prime.size() && prime[i]*prime[i]<=n; i++)
        {
            if(n%prime[i]==0)
            {
                c++;
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                }
            }
        }
        if(n>1) c++;
        cout<<d<<" : "<<c<<endl;
    }
    return 0;
}
