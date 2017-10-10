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
//    CIN
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    string s;
    getchar();
    loop1(z,t)
    {
        getline(cin,s);
        int sum=0;
        loop0(j,sz(s))
        {
            if(s[j]=='a' || s[j]=='d' || s[j]=='g' || s[j]=='j')
            {
                sum=sum+1;
            }
            else if(s[j]=='m' || s[j]=='p' || s[j]=='t' || s[j]=='w' || s[j]==' ')
            {
                sum=sum+1;
            }

            else if(s[j]=='b' || s[j]=='e' || s[j]=='h' || s[j]=='k')
            {
                sum=sum+2;
            }
            else if(s[j]=='n' || s[j]=='q' || s[j]=='u' || s[j]=='x')
            {
                sum=sum+2;
            }
            else if(s[j]=='c' || s[j]=='f' || s[j]=='i' || s[j]=='l')
            {
                sum=sum+3;
            }
            else if(s[j]=='o' || s[j]=='r' || s[j]=='v' || s[j]=='y')
            {
                sum=sum+3;
            }
            else if(s[j]=='s' || s[j]=='z')
            {
                sum=sum+4;
            }
        }
        cout<<"Case #"<<z<<": "<<sum<<endl;
    }
    return 0;
}

