#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n,a,c,d,i;
    while(cin>>a)
    {

        string s;
        if(a==0)
        {
            break;
        }
        n=a;
        i=0;
        while(n!=0)
        {
            d=n%2;
            s+=d+'0';    ///  s+=d+48 can be written...same thing.
            n=n/2;
            i++;
        }
        reverse(s.begin(),s.end());
        c=0;
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                c++;
            }
        }
        cout<<"The parity of "<<s<<" is "<<c<<" (mod 2)."<<endl;
    }
    return 0;
}
