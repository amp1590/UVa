#include <bits/stdc++.h>

using namespace std;

bool p[1000000];

vector<long long>prime;


void sieve()
{
    p[0]=p[1]=1;

    for(long long i=2; i<1000000;)
    {
        prime.push_back(i);
        for(long long j=i*i; j<1000000; j+=i)
            p[j]=1;
        for(++i;; i++)
        {
            if(!p[i]) break;
        }
    }
}

int main()
{
    long long a,n,c,i,rvrs,d;
    sieve();

    while(cin>>n)
    {
        a=0;
        c=0;
        for(i=0; i<prime.size(); i++)
        {
            if(n==prime[i])
            {
                a=1;
                d=n;
                rvrs=0;
                while(d!=0)
                {
                    rvrs=rvrs*10;
                    rvrs=rvrs+(d%10);
                    d=d/10;
                }
                break;
            }
        }
        if(a==1)
        {
            if(rvrs==n)
            {
                cout<<n<<" is prime."<<endl;
            }
            else
            {
                for(i=0; i<prime.size(); i++)
                {
                    if(rvrs==prime[i])
                    {
                        c=1;
                        cout<<n<<" is emirp."<<endl;
                        break;
                    }
                }
                if(c==0)
                {
                    cout<<n<<" is prime."<<endl;
                }
            }

        }
        else
        {
            cout<<n<<" is not prime."<<endl;
        }
    }
    return 0;
}

