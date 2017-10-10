#include <bits/stdc++.h>

using namespace std;

bool p[40000000];

vector<long long> prime;


void sieve(long long n)
{
    p[0]=p[1]=1;

    for(long long i=2; i<n;)
    {
        prime.push_back(i);
        for(long long j=i*i; j<n; j+=i)
        {
            p[j]=1;
        }
        for(++i;; i++)
        {
            if(!p[i]) break;
        }
    }
}

int main()
{
    //freopen("in.txt","r",stdin);
    long long i,c,d,n;
    sieve(35000000);
    while(cin>>n)
    {
        if(n==0)
        {
            break;
        }
        c=0;
        d=0;
        n=abs(n);
        for(i=0; i<prime.size()  && prime[i]*prime[i]<=n; i++)
        {

            if(n%prime[i]==0)
            {
                c++;
                d=max(d,prime[i]);
                while(n%prime[i]==0)
                {
                    n/=prime[i];

                }
            }
        }

        if(n>1)
        {
            d=max(d,n);
            c++;
        }

        if(c<=1)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<d<<endl;
        }
    }
    return 0;
}
