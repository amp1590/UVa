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
#define valid(tx,ty)    tx>=0 && tx<row && ty>=0 && ty<col
#define MAX             2000

using namespace std;


/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
const int fx[]= {+0,+0,+1,-1,-1,+1,-1,+1};  // Kings Move
const int fy[]= {-1,+1,+0,+0,+1,+1,-1,-1}; // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move// GHORA
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move// GHORA
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

int row,col;
int vis[105][105];
char cell[105][105];

void dfs(int sx, int sy)
{
    vis[sx][sy]=-1;
    loop0(i,8)
    {
        int tx=sx+fx[i];
        int ty=sy+fy[i];
        if(valid(tx,ty) && cell[tx][ty]!='*') vis[tx][ty]++;
    }
}

int main()
{
    CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    int t=0;
    bool c=0;
    while(cin>>row>>col)
    {
        if(row==0 && col==0) break;
        if(c) cout<<endl;
        c=1;
        t++;
        ms(vis,0);
        ms(cell,0);
        string s;
        vector<pii>v;
        loop0(i,row)
        {
            cin>>s;
            loop0(j,col)
            {
                if(s[j]=='*')
                {
                    v.pb(pii(i,j));
                    cell[i][j]='*';
                }
            }
        }
        loop0(i,sz(v)) dfs(v[i].ff,v[i].ss);
        cout<<"Field #"<<t<<":"<<endl;
        loop0(i,row)
        {
            loop0(j,col)
            {
                if(vis[i][j]!=-1) cout<<vis[i][j];
                else cout<<cell[i][j];
            }
            cout<<endl;
        }
    }
    return 0;
}
