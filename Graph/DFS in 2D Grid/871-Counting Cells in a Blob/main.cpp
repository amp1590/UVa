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
#define valid(tx,ty)    tx>=0 && tx<l && ty>=0 && ty<l
#define MAX             2000

using namespace std;


/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
const int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};  // Kings Move
const int fy[]= {-1,+1,+0,+0,+1,+1,-1,-1}; // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

int l;
bool vis[30][30];

int dfs(int sx, int sy)
{
    vis[sx][sy]=1;
    int r=0;
    loop0(i,8)
    {
        int tx=sx+fx[i];
        int ty=sy+fy[i];
        if(valid(tx,ty) && vis[tx][ty]==0) r+=1+dfs(tx,ty);
    }
    return r;
}

int main()
{
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int t;
    bool tst=0;
    cin>>t;
    loop1(z,t)
    {
        if(tst) cout<<endl;
        tst=1;
        ms(vis,0);
        string s;
        cin>>s;
        vector<pii>v;
        l=sz(s);
        loop0(i,l)
        {
            if(s[i]=='1') v.pb(pii(0,i));
            else vis[0][i]=1;
        }
        loop1(i,l-1)
        {
            cin>>s;
            loop0(j,l)
            {
                if(s[j]=='1') v.pb(pii(i,j));
                else vis[i][j]=1;
            }
        }
        int ans=0;
        loop0(i,sz(v))
        {
            if(!vis[v[i].ff][v[i].ss])
            {
                ans=max(ans,1+dfs(v[i].ff,v[i].ss));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
