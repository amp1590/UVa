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
        if(s1=="*")
        {
            break;
        }
        else
        {
            if(s1=="Hajj")
            {
                cout<< "Case " << i << ": " << "Hajj-e-Akbar"<<endl;
            }
            else if(s1=="Umrah")
            {
               cout<< "Case " << i << ": " << "Hajj-e-Asghar"<<endl;
            }
        }

    }
    return 0;
}
