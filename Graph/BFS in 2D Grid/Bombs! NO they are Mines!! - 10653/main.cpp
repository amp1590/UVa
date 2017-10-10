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


bool vis[1002][1002];
int dis[1002][1002];
int cell[1002][1002]; // if cell[x][y]=-1 , then the cell is block
int row,col;
int fx[]= {1,-1,0,0};
int fy[]= {0,0,1,-1};
//map<string,int> mp;

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
        for(int k=0; k<4; k++)
        {
            int tx=top.ff+fx[k];
            int ty=top.ss+fy[k]; //Neighbor cell [tx][ty]
            if(tx>=0 and tx<row and ty>=0 and ty<col and cell[tx][ty]!=-1 and vis[tx][ty]==0) //Check if the neighbor is valid and not visited before.
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
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int bomb_loc;
    while(cin>>row>>col)
    {
        if(row==0 && col==0) break;
        ms(cell,0);
        cin>>bomb_loc;
        for(int i=0; i<bomb_loc; i++)
        {
            int r,c,bomb;
            cin>>r>>bomb;
            loop0(j,bomb)
            {
                cin>>c;
                cell[r][c]=-1;
            }
        }
        int sx,sy,dx,dy;
        cin>>sx>>sy;
        cin>>dx>>dy;
        cout<<bfs2d(sx,sy,dx,dy)<<endl;
    }
    return 0;
}
