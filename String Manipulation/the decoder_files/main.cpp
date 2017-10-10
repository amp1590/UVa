#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string s;
    char a,b;
    while(cin>>s)
    {
        for(i=0;s[i]!='\0';i++)
        {
            a=s[i];
            b=a-7;
            s[i]=b;
        }
        cout<<s<<endl;
    }
    return 0;
}
