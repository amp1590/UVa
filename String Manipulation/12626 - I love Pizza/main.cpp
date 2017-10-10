#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,j,t,s_l,a,b,c,d,e,f,g,x;
    string s;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;
        a=0;
        b=0;
        c=0;
        d=0;
        e=0;
        f=0;
        g=0;

        s_l=s.length();
        for(j=0;j<s_l;j++)
        {
            if(s[j]=='M')
            {
                a++;
            }
        }
        for(j=0;j<s_l;j++)
        {
            if(s[j]=='A')
            {
                b++;
            }
        }
        for(j=0;j<s_l;j++)
        {
            if(s[j]=='R')
            {
                c++;
            }
        }
        for(j=0;j<s_l;j++)
        {
            if(s[j]=='G')
            {
                d++;
            }
        }
        for(j=0;j<s_l;j++)
        {
            if(s[j]=='I')
            {
                e++;
            }
        }
        for(j=0;j<s_l;j++)
        {
            if(s[j]=='T')
            {
                f++;
            }
        }
        x=0;
        for(j=1;;j++)
        {
            if(a>=1*j && b>=3*j && c>=2*j && d>=1*j && e>=1*j && f>=1*j)
            {
                x++;
            }
            else
            {
                break;
            }
        }
        cout<<x<<endl;
    }
    return 0;
}
