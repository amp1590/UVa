#include <bits/stdc++.h>

#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define db              double
#define ft              float
#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define sz(x)           x.size()
#define qu              queue
#define pqu             priority_queue
#define vc              vector
#define vi              vector<int>
#define vll             vector<long long>
#define pii             pair<int,int>
#define pis             pair<int,string>
#define psi             pair<string,int>
#define all(x)          x.begin(),x.end()
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define loop0(i,n)      for(int i=0;i<n;i++)
#define loop1(i,n)      for(int i=1;i<=n;i++)
#define stlloop(x)     for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define case(z,x)       cout<<"Case "<<i<<": "<<x<<endl
#define case(z)         cout<<"Case "<<z<<": "
#define PI              3.14159265358979323846264338328
#define valid(tx,ty)    tx>=0 && tx<r && ty>=0 && ty<c
#define MAX             2000

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

using namespace std;

int main()
{
    CIN;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    string s,str;
    while(cin>>s)
    {
        loop0(i,sz(s))
        {
            if(s[i]>='A' && s[i]<='C')
            {
                str+='2';
            }
            else if(s[i]>='D' && s[i]<='F')
            {
                str+='3';
            }
            else if(s[i]>='G' && s[i]<='I')
            {
                str+='4';
            }
            else if(s[i]>='J' && s[i]<='L')
            {
                str+='5';
            }
            else if(s[i]>='M' && s[i]<='O')
            {
                str+='6';
            }
            else if(s[i]>='P' && s[i]<='S')
            {
                str+='7';
            }
            else if(s[i]>='T' && s[i]<='V')
            {
                str+='8';
            }
            else if(s[i]>='W' && s[i]<='Z')
            {
                str+='9';
            }
            else
            {
                str+=s[i];
            }
        }
        cout<<str<<endl;
        str.clear();
    }
    return 0;
}
