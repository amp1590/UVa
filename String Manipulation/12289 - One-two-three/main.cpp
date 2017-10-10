#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t,i,j,k,s_l,c,d;
    string s,s1="one",s2="two",s3="three";
    cin>>t;
    for(k=0;k<t;k++)
    {
        cin>>s;
        s_l=s.length();
        if(s_l==3)
        {
            c=0;
            d=0;
            for(i=0,j=0;i<3;i++,j++)
            {
                if(s[i]==s1[j])
                {
                    c++;
                }
                if(s[i]==s2[j])
                {
                    d++;
                }
            }
            if(c==2 || c==3)
            {
                cout<<"1"<<endl;
            }
            if(d==2 || d==3)
            {
                cout<<"2"<<endl;
            }
        }
        else if(s_l==5)
        {
            c=0;
            for(i=0,j=0;i<5;i++,j++)
            {
                if(s[i]==s3[j])
                {
                    c++;
                }
            }
            if(c==4 || c==5)
            {
                cout<<"3"<<endl;
            }
        }
    }

    return 0;
}
