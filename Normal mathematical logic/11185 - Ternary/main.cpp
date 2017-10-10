#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,m,d,i,j,k;
    while(cin>>n)
    {
        string s;
        if(n<0)
        {
            break;
        }
        else if(n==0)
        {
            cout<<"0"<<endl;
        }
        else
        {
            i=0;
            while(n!=0)
            {
                d=n%3;
                s+=d+'0';
                n=n/3;
                i++;
            }
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }

    }
    return 0;
}
