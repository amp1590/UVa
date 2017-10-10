#include <bits/stdc++.h>
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)

using namespace std;

bool p[1000000];

vector<int>prime;


void sieve(long long n)
{
    p[0]=p[1]=1;

    for(long long i=2; i<n;)
    {
        prime.push_back(i);
        for(long long j=i*i; j<n; j+=i)
            p[j]=1;
        for(++i;;i++)
        {
            if(!p[i]) break;
        }
    }
}

long long phi(long long n)
{
    long long ans=n;
    for(long long i=0; prime[i]<=sqrt(n); i++)
    {
        if(n%prime[i]==0)
        {
            while(n%prime[i]==0)
            {
                n/=prime[i];
            }
            ans-=ans/prime[i];
        }
    }

    if(n>1)
    {
        ans-=ans/n;
    }
    return ans;
}

int main()
{
    //freopen("in.txt","r",stdin);
    CIN;
    long long n;
    sieve(1000000);
    while(cin>>n)
    {
        if(n==1)
        {
            cout<<1<<endl;
            continue;
        }
        if(n==0) break;

        cout<<phi(n)<<endl;
    }

}
