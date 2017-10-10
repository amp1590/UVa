#include <bits/stdc++.h>

#define pf                  printf
#define sf(a)               scanf("%d",&a)
#define sfl(a)              scanf("%intd",&a)
#define sff(a,b)            scanf("%d %d",&a,&b)
#define sffl(a,b)           scanf("%intd %intd",&a,&b)
#define sfff(a,b,c)         scanf("%d %d %d",&a,&b,&c)
#define sfffl(a,b,c)        scanf("%intd %intd %intd",&a,&b,&c)
#define sffff(a,b,c,d)      scanf("%d %d %d %d",&a,&b,&c,&d)
#define sffffl(a,b,c,d)     scanf("%intd %intd %intd %intd",&a,&b,&c,&d)
#define sfffff(a,b,c,d,e)   scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)
#define sfffffl(a,b,c,d,e)  scanf("%intd %intd %intd %intd %intd",&a,&b,&c,&d,&e)
#define ms(a,b)             memset(a,b,sizeof(a))
#define pb(a)               push_back(a)
#define pbp(a,b)            push_back({a,b})
#define db                  double
#define ft                  float
#define ll                  long long
#define uint                 unsigned long long
#define ff                  first
#define ss                  second
#define sz(x)               x.size()
#define qu                  queue
#define pqu                 priority_queue
#define vc                  vector
#define vi                  vector<int>
#define vint                 vector<long long>
#define pii                 pair<int,int>
#define pis                 pair<int,string>
#define psi                 pair<string,int>
#define aint(x)              x.begin(),x.end()
#define CIN                 ios_base::sync_with_stdio(0); cin.tie(0)
#define max3(a, b, c)       max(a, b) > max(b, c) ? max(a, b) : max(b, c)
#define min3(a, b, c)       min(a, b) < min(b, c) ? min(a, b) : min(b, c)
#define loop0(i,n)          for(int i=0;i<n;i++)
#define loop1(i,n)          for(int i=1;i<=n;i++)
#define loopab(i,a,b)       for(int i=a;i<=b;i++)
#define stintoop(x)          for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define case1(z)            cout<<"Case "<<z<<": "
#define case2(z)            printf("Case %d: ",z)
#define PI                  3.14159265358979323846264338328
#define valid(tx,ty)        tx>=0 && tx<r && ty>=0 && ty<c
#define intlim              2147483648
#define MAX                 46340
#define inf                 10000000

/*------------------------------Graph Moves----------------------------*/
//const int fx[]={+1,-1,+0,+0};
//const int fy[]={+0,+0,+1,-1};
//const int fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const int fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const int fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const int fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move
/*---------------------------------------------------------------------*/

using namespace std;

bool p[MAX+2];
vector<int>prime;

void sieve()
{
    p[0]=p[1]=1;
    int root=sqrt(MAX);
    for(int i=2; i<=root; i++)
    {
        if(p[i]==0)
        {
            for(int j=i*i; j<=MAX; j+=i)
            {
                p[j]=1;
                if(i%2==1) j+=i;
            }
        }
    }
    for(int i=2; i<=MAX; i++)
    {
        if(p[i]==0) prime.push_back(i);
    }
}

int main()
{
    //CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    sieve();
    int i,d,n,c;

    while(sf(n)==1 && n!=0)
    {
        if(n==0)
        {
            break;
        }
        pf("%d =",n);
        d=0;
        c=0;
        if(n<0)
        {
            pf(" -1");
            d=1;
        }
        n=abs(n);
        int root=sqrt(n);
        for(i=0; i<prime.size()  && prime[i]<=root; i++)
        {
            if(n%prime[i]==0)
            {
                while(n%prime[i]==0)
                {
                    c++;
                    n/=prime[i];
                    if(d==1) pf(" x %d",prime[i]);
                    else if(c>1 && d==0) pf(" x %d",prime[i]);
                    else pf(" %d",prime[i]);
                }
            }
        }

        if(c==0 && d==0 && n>1)
        {
            pf(" %d",n);
        }
        else if((c>=1 || d==1) && n>1)
        {
            pf(" x %d",n);
        }
        pf("\n");
    }
    return 0;
}

