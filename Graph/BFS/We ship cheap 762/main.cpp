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
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0)
#define loop0(i,n)      for(int i=0;i<n;i++)
#define loop1(i,n)      for(int i=1;i<=n;i++)
#define stlloop0(i,x)   for(int i=0;i<x.size();i++)
#define stlloop1(x)     for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)       __gcd(a, b)
#define lcm(a, b)       ((a)*((b)/gcd(a,b)))
#define PI              3.14159265358979323846264338328
#define MAX             2000

using namespace std;

bool visited[MAX];
int dis[MAX];
vector<int> g[MAX];
int parent[MAX];
int edge;
map<string,int> mp1;
map<int,string> mp2;

void path_print(int src,int dst)
{
    if(dst==src) return;
    path_print(src,parent[dst]);
    cout<<mp2[parent[dst]]<<" "<<mp2[dst]<<endl;
}

int bfs(int src,int dst)
{
    dis[src]=0;
    ms(visited,0);
    visited[src]=1;
    parent[src]=-1;
    qu<int> q;
    q.push(src);

    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int i=0; i<g[u].size(); i++)
        {
            int v=g[u][i];
            if(!visited[v])
            {
                parent[v]=u;
                visited[v]=1;
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
    if(visited[dst]) path_print(src,dst);
    else cout<<"No route"<<endl;
}

int main()
{
    CIN;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    bool test=0;
    while(cin>>edge)
    {
        if(test) cout<<endl;
        test=1;
        int c=3;
        for(int i=0; i<edge; i++)
        {
            string from,to;
            cin>>from>>to;
            if(mp1[from]==0)
            {
                mp1[from]=c;
                mp2[c]=from;
                c++;
            }
            if(mp1[to]==0)
            {
                mp1[to]=c;
                mp2[c]=to;
                c++;
            }
            g[mp1[from]].push_back(mp1[to]);
            g[mp1[to]].push_back(mp1[from]);
        }

        string src,dst;
        cin>>src>>dst;
        if(src==dst) cout<<src<<" "<<dst<<endl;
        else if(mp1[src]==0 || mp1[dst]==0) cout<<"No route"<<endl;
        else bfs(mp1[src],mp1[dst]);
        loop0(i,MAX) g[i].clear();
        mp1.clear();
        mp2.clear();
    }
    return 0;
}
