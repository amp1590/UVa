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
#define case(z,x)       cout<<"Case "<<i<<": "<<x<<endl
#define case(z)         cout<<"Case "<<z<<": "
#define PI              3.14159265358979323846264338328
#define valid(nx,ny) nx>=0 && nx<r && ny>=0 && ny<c
#define MAX             10001

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

using namespace std;

vector<int>g[MAX];
bool visited[MAX];
int node,edge;

void dfs(int u)
{
    visited[u]=1;
    int temp;
    for(int i=0; i<g[u].size(); i++)
    {
        temp=g[u][i];
        if(!visited[temp])
        {
            // visited[temp]=1; ///See "UVA Vertex".Jodi bole src node nijeke nije visit korse kina, tahole upore visited[u]=1; eta muche fele ekhane eta likhte hobe
            dfs(temp);
        }
    }
}
int main()
{
    CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    int t;
    cin>>t;
    loop1(z,t)
    {
        int l;
        cin>>node>>edge>>l;
        for(int i=0; i<edge; i++)
        {
            int from,to;
            cin>>from>>to;
            g[from].push_back(to);
        }
        loop0(i,l)
        {
            int src;
            cin>>src;
            dfs(src);
        }
        int c=0;
        loop1(i,node)
        {
            if(visited[i]==1) c++;
        }
        cout<<c<<endl;
        memset(visited,0,sizeof visited);
        loop0(i,MAX) g[i].clear();
    }
    return 0;
}
