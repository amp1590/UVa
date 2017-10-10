#include <iostream>

using namespace std;

int main()
{
    int i,j,k,m,c,t,s1_l,s2_l;
    string s1,s2;
    cin>>t;
    for(m=0;m<t;m++)
    {
        cin>>s1>>s2;
        s1_l=s1.length();
        s2_l=s2.length();
        c=0;
        if(s1_l==s2_l)
        {
            for(i=0,j=0;s1[i]!='\0';i++,j++)
            {
                if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u')
                {
                    if(s2[j]=='a' || s2[j]=='e' || s2[j]=='i' || s2[j]=='o' || s2[j]=='u')
                    {
                        c++;
                    }
                }
                else if(s1[i]==s2[j])
                {
                    c++;
                }
            }
            if(c==s1_l)
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
    return 0;
}
