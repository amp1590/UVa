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
#define loop1(i,n)          for(int i=1;i<=n;i++)
#define loopab(i,a,b)       for(int i=a;i<=b;i++)
#define REV(i,n)            for(i=n; i>=0; i--)
#define stlloop(x)          for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define case1(z)            cout<<"Case "<<z<<": "
#define case2(z)            printf("Case %d: ",z)
#define PI                  3.14159265358979323846264338328
#define valid(tx,ty)        tx>=0 && tx<r && ty>=0 && ty<c
#define intlim              2147483648
#define MAX                 1000000
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
#define loop1(i,n)          for(int i=1;i<=n;i++)
#define loopab(i,a,b)       for(int i=a;i<=b;i++)
#define REV(i,n)            for(i=n; i>=0; i--)
#define stlloop(x)          for(__typeof(x.begin()) it=x.begin();it!=x.end();it++)
#define gcd(a, b)           __gcd(a, b)
#define lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define case1(z)            cout<<"Case "<<z<<": "
#define case2(z)            printf("Case %d: ",z)
#define PI                  3.14159265358979323846264338328
#define valid(tx,ty)        tx>=0 && tx<r && ty>=0 && ty<c
#define intlim              2147483648
#define MAX                 1000000
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

string cut_leading_zero(string a)
{
    string s;
    int i;
    if( a[0]!='0' ) return a;
    loop0(i,sz(a)-1) if( a[i]!='0' ) break;
    for(i=i;i<sz(a);i++) s+=a[i];
    return s;
}

int compare(string a,string b)
{
    int i;
    a = cut_leading_zero(a);
    b = cut_leading_zero(b);

    if( sz(a)>sz(b) ) return 1;
    if( sz(a)<sz(b) ) return -1;
    loop0(i,sz(a))
    {
        if( a[i]>b[i] ) return 1;
        else if( a[i]<b[i] ) return -1;
    }
    return 0;
}

string Addition(string a,string b)
{
    int carry=0, i;
    string ans;

    if( sz(a)>sz(b) ) b = string(sz(a)-sz(b),'0')+b;
    if( sz(b)>sz(a) ) a = string(sz(b)-sz(a),'0')+a;

    ans.resize(sz(a));

    REV(i,sz(a)-1)
    {
        int sum = carry+a[i]+b[i]-96;
        ans[i] = (char)(sum%10+'0');
        carry = sum/10;
    }
    if( carry ) ans.insert(0,string(1,carry+'0'));
    ans = cut_leading_zero(ans);
    return ans;
}

string Multiplication(string a,string b)
{
    int i, j, multi, carry;
    string ans, temp;

    ans = "0";
    REV(j,sz(b)-1)
    {
        temp = "";
        carry = 0;
        REV(i,sz(a)-1)
        {
            multi = (a[i]-'0')*(b[j]-'0')+carry;
            temp += (multi%10+'0');
            carry = multi/10;
        }
        if( carry ) temp += (carry+'0');
        reverse(all(temp));
        temp += string(sz(b)-j-1,'0');
        ans = Addition(ans,temp);
    }
    ans = cut_leading_zero(ans);
    return ans;
}

string Multiplication(string a,int k)
{
    string ans;
    int i, sum, carry=0;

    REV(i,sz(a)-1)
    {
        sum = (a[i]-'0')*k+carry;
        carry = sum/10;
        ans+=(sum%10)+'0';
    }
    while(carry)
    {
        ans += (carry%10)+'0';
        carry/=10;
    }
    reverse(all(ans));
    ans = cut_leading_zero(ans);
    return ans;
}

string Subtraction(string a,string b)
{
    int borrow = 0, i, sub;
    string ans;
    if( sz(b)<sz(a) ) b = string(sz(a)-sz(b),'0')+b;
    REV(i,sz(a)-1)
    {
        sub = a[i]-b[i]-borrow;
        if( sub<0 )
        {
            sub += 10;
            borrow = 1;
        }
        else borrow = 0;
        ans += sub+'0';
    }
    reverse(all(ans));
    ans = cut_leading_zero(ans);
    return ans;
}

string Division(string a,string b)
{
    string mod, temp, ans="0";
    int i, j;

    loop0(i,sz(a))
    {
        mod += a[i];
        mod = cut_leading_zero(mod);
        loop0(j,10)
        {
            temp = Multiplication(b,j);
            if( compare(temp,mod)==1 )
                break;
        }
        temp = Multiplication(b,j-1);
        mod = Subtraction(mod,temp);
        ans += (j-1)+'0';
    }
    mod = cut_leading_zero(mod);
    ans = cut_leading_zero(ans);
    return ans;
}

string Division(string a,int k)
{
    int i, sum=0;
    string ans = "0";

    loop0(i,sz(a))
    {
        sum = (sum*10+(a[i]-'0'));
        ans += (sum/k)+'0';
        sum = sum%k;
    }
    ans = cut_leading_zero(ans);
    return ans;
}

string Div_mod(string a,string b)
{
    string mod, temp, ans="0";
    int i, j;

    loop0(i,sz(a))
    {
        mod += a[i];
        mod = cut_leading_zero(mod);

        for(int j=1;j<10;j++)
        {
            temp = Multiplication(b,j);
            if( compare(temp,mod)>0 )
                break;
        }
        temp = Multiplication(b,j-1);
        mod = Subtraction(mod,temp);
        ans += (j-1)+'0';
    }
    mod = cut_leading_zero(mod);
    ans = cut_leading_zero(ans);
    return mod;
}

int Div_mod(string a,int k)
{
    int i, sum=0;
    loop0(i,sz(a))
        sum = (sum*10+(a[i]-'0'))%k;
    return sum;
}

string dp[1005];

void fact()
{
    string ans="1";
    dp[0]=ans;
    for(int i=1; i<=1000; i++)
    {
        ans=Multiplication(ans,i);
        dp[i]=ans;
    }
}

int main()
{
    CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    fact();
    int n;
    while(cin>>n)
    {
        cout<<n<<"!"<<endl;
        cout<<dp[n]<<endl;

    }
    return 0;
}
