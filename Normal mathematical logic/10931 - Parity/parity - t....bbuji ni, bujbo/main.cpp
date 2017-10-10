#include <bits/stdc++.h>

using namespace std;

long long x,cnt;

int main()
{
    while(cin>>x && x)
   {
       cnt=0;
       bool test=0;
       cout<<"The parity of ";
       for(int i=32;i>=0;i--)
       {
           int a=(bool)(x & (1LL<<i));
           if(a) test=1,cnt++;
           if(test) cout<<a;
       }
       cout<<" is "<<cnt<<" (mod 2)."<<endl;
    }
    return 0;
}
