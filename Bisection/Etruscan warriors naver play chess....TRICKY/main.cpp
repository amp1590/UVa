#include <bits/stdc++.h>

using namespace std;



long long ask(long long n)
{
    return n*(n+1)/2;
}

int main()
{

    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        long long x;
        cin>>x;
        long long lo=1,hi=10000000000,ans=0;

        while(lo<=hi)
        {
            long long mid=(lo+hi)/2;

            long long temp=ask(mid);

            if(temp<=x)
                {
                    ans=mid;
                    lo=mid+1;
                }
            else
                hi=mid-1;
        }

        cout<<ans<<endl;
    }
    return 0;
}
