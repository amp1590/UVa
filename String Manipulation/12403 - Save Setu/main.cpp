#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i,t;
    long long int taka,total=0;
    string s1;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s1;
        if(s1=="donate")
        {
            cin>>taka;
            total=total+taka;

        }
        else if(s1=="report")
        {
            cout<<total<<endl;
        }
    }
    return 0;
}
