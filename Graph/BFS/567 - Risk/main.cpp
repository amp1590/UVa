#include <bits/stdc++.h>

#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define db              double
#define ft              float
#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define qu              queue
#define pqu             priority_queue
#define vc              vector
#define vi              vector<int>
#define vll             vector<long long>
#define pii             pair<int,int>
#define pis             pair<int,string>
#define psi             pair<string,int>
#define all(x)          x.begin(),x.end()
#define CIN            ios_base::sync_with_stdio(0); cin.tie(0)
#define loop0(i,n)      for(int i=0;i<n;i++)
#define loop1(i,n)      for(int i=1;i<=n;i++)
#define stlloop0(i,x)   for(int i=0;i<x.size();i++)
#define stlloop1(x)     for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define PI              3.14159265358979323846264338328
#define MAX             2004

using namespace std;

bool visited[MAX];
int dis[MAX];
vector<int> g[MAX];

int bfs(int src,int dst)
{
    ms(dis,0);
    dis[src]=0;
    ms(visited,0);
    visited[src]=1;

    qu<int> q;
    q.push(src);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(u==dst) return dis[dst];
        for(int i=0; i<g[u].size(); i++)
        {
            int v=g[u][i];
            if(!visited[v])
            {
                visited[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
    return -1;
}

int main()
{
    //CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int xxx,z=0;
    while(scanf("%d",&xxx)==1)
    {
        z++;
        loop0(i,xxx)
        {
            int xx;
            scanf("%d",&xx);
            g[1].pb(xx);
            g[xx].pb(1);
        }

        for(int i=2; i<=19; i++)
        {
            int x,to;
            scanf("%d",&x);
            loop0(j,x)
            {
                scanf("%d",&to);
                g[i].push_back(to);
                g[to].push_back(i);
            }
        }
        int n,src,dst;
        scanf("%d",&n);
        printf("Test Set #%d\n",z);
        loop0(i,n)
        {
            scanf("%d %d",&src,&dst);
            printf("%2d to %2d: %d\n",src,dst,bfs(src,dst));
        }
        printf("\n");
        loop0(i,MAX) g[i].clear();
    }
    return 0;
}
