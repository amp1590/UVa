#include <iostream>

using namespace std;

int main()
{
    string s,t;
    int i,j,c,d,n,s_l;

    while(cin>>s>>t)
    {
        c=0;
        d=0;
        n=-1;
        s_l=s.length();
        for(i=0;s[i]!='\0';i++)
        {
            for(j=n+1;t[j]!='\0';j++)
            {
                if(s[i]==t[j])
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                break;
            }
            if(j>n)
            {
                n=j;
            }
            else if(j<n)
            {
                d=1;
                break;
            }
        }
        if(c==s_l && d==0)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
