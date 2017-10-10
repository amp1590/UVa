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
#define MAX             20000
#define inf             10000

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

using namespace std;

int dis[MAX],parent[MAX];
vector<int>gu,gv,cost;
int node,edge;

bool bellman_ford()
{
    loop0(i,MAX) dis[i]=1000000000;
    dis[0]=0;
    loop1(i,node-1)
    {
        loop0(j,edge)
        {
            int u=gu[j];
            int v=gv[j];
            if(dis[u]+cost[j]<dis[v])
            {
                dis[v]=dis[u]+cost[j];
            }
        }
    }
    bool negative_cycle=0;
    loop0(j,edge)
    {
        int u=gu[j];
        int v=gv[j];
        if(dis[u]+cost[j]<dis[v])
        {
            negative_cycle=1;
            break;
        }
    }
    return negative_cycle;
}

int main()
{
    CIN;
//    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int t;
    cin>>t;
    while(t--)
    {
        cin>>node>>edge;
        loop0(i,edge)
        {
            int from,to,w;
            cin>>from>>to>>w;
            gu.pb(from);
            gv.pb(to);
            cost.pb(w);
        }
        if(bellman_ford()) cout<<"possible"<<endl;
        else cout<<"not possible"<<endl;
        gu.clear();
        gv.clear();
        cost.clear();
    }
    return 0;
}
