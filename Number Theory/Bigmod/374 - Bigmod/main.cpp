//#include <bits/stdc++.h>
//
//#define ms(a,b)         memset(a,b,sizeof(a))
//#define pb(a)           push_back(a)
//#define db              double
//#define ft              float
//#define ll              long long
//#define ull             unsigned long long
//#define ff              first
//#define ss              second
//#define sz(x)           x.size()
//#define qu              queue
//#define pqu             priority_queue
//#define vc              vector
//#define vi              vector<int>
//#define vll             vector<long long>
//#define pii             pair<int,int>
//#define pis             pair<int,string>
//#define psi             pair<string,int>
//#define all(x)          x.begin(),x.end()
//#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
//#define loop0(i,n)      for(int i=0;i<n;i++)
//#define loop1(i,n)      for(int i=1;i<=n;i++)
//#define stlloop(x)     for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
//#define gcd(a, b)       __gcd(a, b)
//#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
//#define case(z,x)       cout<<"Case "<<i<<": "<<x<<endl
//#define case(z)         cout<<"Case "<<z<<": "
//#define PI              3.14159265358979323846264338328
//#define valid(tx,ty)    tx>=0 && tx<r && ty>=0 && ty<c
//#define MAX             2000
//#define inf             10000000
//
///*----------------------Graph Moves----------------*/
////const int fx[]={+1,-1,+0,+0};
////const int fy[]={+0,+0,+1,-1};
////const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
////const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
////const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
////const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
///*------------------------------------------------*/
//
//using namespace std;
//
//ll big_mod(ll n, ll pow, ll mod)
//{
//    if(pow==0) return 1;
//    if(pow==1) return n;
//
//    ll ret=0;
//
//    if(pow%2==0)
//    {
//        ret=big_mod(n,pow/2,mod)%mod;
//        return (ret*ret)%mod;
//    }
//    else
//        return ((n%mod)*(big_mod(n,pow-1,mod))%mod)%mod;
//
//}
//
//int main()
//{
//    CIN;
//    //freopen("out.txt","w",stdout);
//    ll a,b,c;
//    cin>>a>>b>>c;
//    cout<<big_mod(a,b,c)<<endl;
////    ll d=1;
////    for(int i=0;i<b;i++)
////    {
////        d*=a;
////        d%=c;
////    }
////    cout<<d<<endl;
//
//    return 0;
//}




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
#define inf             10000000

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

using namespace std;

ll a,b,m;
ll bigmod(ll n,ll p)
{
    if(p==0) return 1;
    if(p%2==0)
    {
        return ((bigmod(n,p/2)%m)*(bigmod(n,p/2)%m))%m;
    }
    else
        return ((n%m)*(bigmod(n,p-1)%m))%m;
}

int main()
{
    CIN;
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);

    while(cin>>a>>b>>m)
    {
        cout<<bigmod(a,b)<<endl;
    }
    return 0;
}
