#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    long long i,sum1,sum2,sum3;
    while(cin>>s)
    {
        if(s=="0")
        {
            break;
        }

        sum1=0;
        for(i=0; i<s.size(); i+=2)
        {
            sum1=sum1+(s[i]-'0');
        }
        sum2=0;
        for(i=1; i<s.size(); i+=2)
        {
            sum2=sum2+(s[i]-'0');
        }
        sum3=abs(sum1-sum2);
        if(sum3==0 || sum3%11==0)
        {
            cout<<s<<" is a multiple of 11."<<endl;
        }
        else
        {
            cout<<s<<" is not a multiple of 11."<<endl;
        }

    }
    return 0;
}
