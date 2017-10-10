#include <bits/stdc++.h>

#define pf                  printf
#define sf(a)               scanf("%d",&a)
#define sfl(a)              scanf("%lld",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%lld %lld",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%lld %lld %lld",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%lld %lld %lld %lld",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%lld %lld %lld %lld %lld",&a,&b,&c,&d,&e)
#define sfc(a)              scanf("%c",&a)
#define ms(a,b)             memset(a,b,sizeof(a))
#define pb(a)               push_back(a)
#define pbp(a,b)            push_back({a,b})
#define db                  double
#define ft                  float
#define ll                  long long
#define ull                 unsigned long long
#define ff                  first
#define ss                  second
#define sz(x)               x.size()
#define qu                  queue
#define pqu                 priority_queue
#define vc                  vector
#define vi                  vector<int>
#define vll                 vector<long long>
#define pii                 pair<int,int>
#define pis                 pair<int,string>
#define psi                 pair<string,int>
#define all(x)              x.begin(),x.end()
#define CIN                 ios_base::sync_with_stdio(0); cin.tie(0)
#define max3(a, b, c)       max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)       min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define loop0(i,n)          for(int i=0;i<n;i++)
#define loopn(i,n)          for(int i=1;i<n;i++)
#define loop1(i,n)          for(int i=1;i<=n;i++)
#define loopi(i,n)          for(int i=0;i<n-1;i++)
#define loopab(i,a,b)       for(int i=a;i<=b;i++)
#define loopba(i,b,a)       for(int i=b;i>=a;i--)
#define REV(i,n)            for(i=n; i>=0; i--)
#define stlloop(x)          for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define case1(z)            cout<<"Case "<<z<<": "
#define case2(z)            printf("Case %d: ",z)
#define PI                  3.14159265358979323846264338328
#define valid(tx,ty)        tx>=0 && tx<row && ty>=0 && ty<col
#define intlim              2147483648
#define MAX                 1000000
#define inf                 100000000

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/

using namespace std;

int main()
{
    //CIN;
    //freopen("in.txt","r",stdin);
    //freopen("out.txt","w",stdout);
    string s,ans;
    while(getline(cin,s))
    {
        loop0(i,sz(s))
        {
            if(s[i]=='1') ans+='`';
            else if(s[i]=='2') ans+='1';
            else if(s[i]=='3') ans+='2';
            else if(s[i]=='4') ans+='3';
            else if(s[i]=='5') ans+='4';
            else if(s[i]=='6') ans+='5';
            else if(s[i]=='7') ans+='6';
            else if(s[i]=='8') ans+='7';
            else if(s[i]=='9') ans+='8';
            else if(s[i]=='0') ans+='9';
            else if(s[i]=='-') ans+='0';
            else if(s[i]=='=') ans+='-';
            else if(s[i]=='S') ans+='A';
            else if(s[i]=='D') ans+='S';
            else if(s[i]=='F') ans+='D';
            else if(s[i]=='G') ans+='F';
            else if(s[i]=='H') ans+='G';
            else if(s[i]=='J') ans+='H';
            else if(s[i]=='K') ans+='J';
            else if(s[i]=='L') ans+='K';
            else if(s[i]==';') ans+='L';
            else if(s[i]=='\'') ans+=';';  //exceptional
            else if(s[i]=='W') ans+='Q';
            else if(s[i]=='E') ans+='W';
            else if(s[i]=='R') ans+='E';
            else if(s[i]=='T') ans+='R';
            else if(s[i]=='Y') ans+='T';
            else if(s[i]=='U') ans+='Y';
            else if(s[i]=='I') ans+='U';
            else if(s[i]=='O') ans+='I';
            else if(s[i]=='P') ans+='O';
            else if(s[i]=='[') ans+='P';
            else if(s[i]==']') ans+='[';
            else if(s[i]=='\\') ans+=']';  //exceptional
            else if(s[i]=='X') ans+='Z';
            else if(s[i]=='C') ans+='X';
            else if(s[i]=='V') ans+='C';
            else if(s[i]=='B') ans+='V';
            else if(s[i]=='N') ans+='B';
            else if(s[i]=='M') ans+='N';
            else if(s[i]==',') ans+='M';
            else if(s[i]=='.') ans+=',';
            else if(s[i]=='/') ans+='.';
            else if(s[i]==' ') ans+=' ';
        }
        cout<<ans<<endl;
        ans.clear();
    }

    return 0;
}
