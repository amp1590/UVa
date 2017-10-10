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

map<string,vector<string>> mp;

bool check(string a, string b)
{
    int cnt=0;
    if(sz(a)!=sz(b)) return 0;
    else
    {
        loop0(i,sz(a))
        {
            if(a[i]!=b[i]) cnt++;
            if(cnt>1) return 0;
        }
    }
    return cnt==1;
}

int bfs(string src, string dst)
{
    map<string,int>dis;
    map<string,bool>visited;
    queue<string>Q;
    Q.push(src);
    dis[src]=0;
    visited[src]=1;
    while(!Q.empty())
    {
        string u=Q.front();
        Q.pop();
        if(u==dst) return dis[u];
        loop0(i,sz(mp[u]))
        {
            string v=mp[u][i];
            if(!visited[v])
            {
                dis[v]=dis[u]+1;
                visited[v]=1;
                Q.push(v);
            }
        }
    }
}

int main()
{
//    CIN;
//    freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);

    int t;
    cin>>t;

    for(int z=1; z<=t; z++)
    {
        string str;
        vector<string>v;
        while(cin>>str  && str!="*") v.pb(str);
        loop0(i,sz(v))
        {
            for(int j=i+1; j<sz(v); j++)
                if(check(v[i],v[j]))
                {
                    mp[v[i]].pb(v[j]);
                    mp[v[j]].pb(v[i]);
                }
        }
        getchar();
        string s1;
        while(getline(cin,s1))
        {
            if(s1=="") break;
            bool x=0;
            string s3,s4;
            loop0(i,sz(s1))
            {
                if(s1[i]==' ')
                {
                    x=1;
                    continue;
                }
                if(!x)
                    s3+=s1[i];
                else
                    s4+=s1[i];
            }
            cout<<s3<<" "<<s4<<" "<<bfs(s3,s4)<<endl;
        }
        if(z!=t) cout<<endl;
        mp.clear();
    }
    return 0;
}
