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
#define valid(tx,ty)    tx>=1 && tx<=row && ty>=1 && ty<=col
#define MAX             2000

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move

/*------------------------------------------------*/

using namespace std;

int fx[]= {-2, -2, -1, -1,  1,  1,  2,  2}; // Knights Move
int fy[]= {-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
bool vis[10][10];
int dis[10][10];
//int cell[1002][1002]; // if cell[x][y]=-1 , then the cell is block
int row=8,col=8;
map<char,int> mp1,mp2;

int bfs2d(int sx,int sy,int dx,int dy) //Source node is in [sx][sy] cell & dest node is in [dx][dy] cell.
{
    dis[sx][sy]=0;
    ms(vis,0);
    vis[sx][sy]=1;
    qu<pii> q;
    q.push(pii(sx,sy));
    while(!q.empty())
    {
        pii top=q.front();
        q.pop();
        if(top.ff==dx && top.ss==dy) return dis[dx][dy];
        for(int k=0; k<8; k++)
        {
            int tx=top.ff+fx[k];
            int ty=top.ss+fy[k]; //Neighbor cell [tx][ty]
            if(valid(tx,ty) and vis[tx][ty]==0) //Check if the neighbor is valid and not visited before.
            {
                vis[tx][ty]=1;
                dis[tx][ty]=dis[top.ff][top.ss]+1;
                q.push(pii(tx,ty)); //Pushing a new pair in the queue
            }
        }
    }
    return -1;
}
int main()
{
    CIN;
    string s,t;
    while(cin>>s>>t)
    {
        cout<<"To get from "<<s<<" to "<<t<<" takes "<<bfs2d(s[0]-'a'+1,s[1]-'0',t[0]-'a'+1,t[1]-'0')<<" knight moves."<<endl;
    }
    return 0;
}
