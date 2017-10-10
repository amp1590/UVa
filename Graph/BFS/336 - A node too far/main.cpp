#include <bits/stdc++.h>

#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define db              double
#define ft              float
#define ll              long long
#define ull             unsigned long long
#define ff              first
#define ss              second
#define vc              vector
#define vi              vector<int>
#define vll             vector<long long>
#define pii             pair<int,int>
#define pis             pair<int,string>
#define psi             pair<string,int>
#define all(x)          x.begin(),x.end()
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define loop0(i,n)       for(int i=0;i<n;i++)
#define loop1(i,n)       for(int i=1;i<=n;i++)
#define stlloop(x)      for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define PI              3.14159265358979323846264338328
#define MAX             2004

using namespace std;

bool visited[MAX];
int dis[MAX];
vc <int> g[MAX];
map<ll,int> mp;

int bfs(int src,ll ttl)
{
    int d=1;
    dis[src]=0;
    ms(visited,0);
    ms(dis,0);
    visited[src]=1;
    queue<int> Q;
    Q.push(src);
    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<g[u].size(); i++)
        {
            int v=g[u][i];
            if(!visited[v]  && dis[u]+1<=ttl)
            {
                dis[v]=dis[u]+1;
                d++;
                visited[v]=1;
                Q.push(v);
            }
        }
    }
    return d;
}

int main()
{
      CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int edge;
    for(int j=1;;)
    {
        cin>>edge;
        if(edge==0) break;
        int c=1;
        for(int i=0; i<edge; i++)
        {
            ll from,to;
            cin>>from>>to;
            if(mp[from]==0)
            {
                mp[from]=c;
                c++;
            }
            if(mp[to]==0)
            {
                mp[to]=c;
                c++;
            }
            g[mp[from]].push_back(mp[to]);
            g[mp[to]].push_back(mp[from]);
        }
        ll src,ttl;
        while(cin>>src>>ttl)
        {
            if(src==0 && ttl==0) break;
            int a=c-bfs(mp[src],ttl)-1;
            cout<<"Case "<<j<<": "<<a<<" nodes not reachable from node "<<src<<" with TTL = "<<ttl<<"."<<endl;
            j++;
        }
        loop0(i,MAX) g[i].clear();
        mp.clear();
    }
    return 0;
}
