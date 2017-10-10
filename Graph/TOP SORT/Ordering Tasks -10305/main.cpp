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
#define MAX             2000

using namespace std;

vector<int>g[101],ans;
int indeg[101];

int main()
{
    CIN;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int node,edge;
    while(cin>>node>>edge)
    {
        if(node==0 && edge==0)
            break;
        ms(indeg,0);
        for(int i=0; i<edge; i++)
        {
            int from,to;
            cin>>from>>to;
            g[from].pb(to);
            indeg[to]++;
        }

        for(int i=1; i<=node; i++)
        {
            if(indeg[i]==0)
                ans.pb(i);
        }

        for(int i=0; i<ans.size(); i++)
        {
            int v=ans[i];
            for(int j=0; j<g[v].size(); j++)
            {
                int u=g[v][j];
                indeg[u]--;
                if(indeg[u]==0)
                    ans.pb(u);
            }
        }

        for(int i=0; i<ans.size(); i++)
            cout<<ans[i]<<" ";
        cout<<endl;
        for(int i=0; i<101; i++)
            g[i].clear();
        ans.clear();
    }
    return 0;
}
