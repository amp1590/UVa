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

/*----------------------Graph Moves----------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*------------------------------------------------*/

using namespace std;

vector<int>g[MAX],ans;
bool visited[MAX];
int node;

void dfs(int u)
{
    int temp;
    for(int i=0; i<g[u].size(); i++)
    {
        temp=g[u][i];
        if(!visited[temp])
        {
            visited[temp]=1;
            dfs(temp);
        }
    }
}
int main()
{
    CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);

    while(cin>>node && node!=0)
    {
        int from,to;
        while(cin>>from && from!=0)
        {
            while(cin>>to && to!=0) g[from].pb(to);
        }
        int q;
        cin>>q;
        loop0(i,q)
        {
            int src;
            cin>>src;
            memset(visited,0,sizeof visited);
            dfs(src);
            int c=0;
            loop1(j,node)
            {
                if(visited[j]==0)
                {
                    c++;
                    ans.pb(j);
                }
            }
            cout<<c;
            stlloop0(k,ans) cout<<" "<<ans[k];
            cout<<endl;
            ans.clear();
        }
        loop0(i,MAX) g[i].clear();
    }
    return 0;
}
