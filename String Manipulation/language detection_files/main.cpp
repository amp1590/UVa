#include <iostream>
#include <string>

using namespace std;

int main()
{
    int i;
    string s1;
    for(i=1;;i++)
    {
        cin>>s1;
        if(s1=="#")
        {
            break;
        }
        else
        {
            if(s1=="HELLO")
            {
                cout<<"Case "<<i<<": "<<"ENGLISH"<<endl;
            }
            else if(s1=="HOLA")
            {
                cout<<"Case "<<i<<": "<<"SPANISH"<<endl;
            }
            else if(s1=="HALLO")
            {
                cout<<"Case "<<i<<": "<<"GERMAN"<<endl;
            }
            else if(s1=="BONJOUR")
            {
                cout<<"Case "<<i<<": "<<"FRENCH"<<endl;
            }
            else if(s1=="CIAO")
            {
                cout<<"Case "<<i<<": "<<"ITALIAN"<<endl;
            }
            else if(s1=="ZDRAVSTVUJTE")
            {
                cout<<"Case "<<i<<": "<<"RUSSIAN"<<endl;
            }
            else
            {
                cout<<"Case "<<i<<": "<<"UNKNOWN"<<endl;

            }
        }
    }
    return 0;
}
