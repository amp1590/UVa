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
#define loopba(i,b,a)       for(int i=b;i>=a;i--)
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

///It's for SPOJ only/// :p
//int prime[]={2 , 3 , 5 , 7 , 11 , 13 , 17 , 19 , 23 , 29 , 31 , 37 , 41 , 43 , 47 , 53 , 59 , 61 , 67 , 71 , 73 , 79 , 83 , 89 , 97 , 101 , 103 , 107 , 109 , 113 , 127 , 131 , 137 , 139 , 149 , 151 , 157 , 163 , 167 , 173 , 179 , 181 , 191 , 193 , 197 , 199 , 211 , 223 , 227 , 229 , 233 , 239 , 241 , 251 , 257 , 263 , 269 , 271 , 277 , 281 , 283 , 293 , 307 , 311 , 313 , 317 , 331 , 337 , 347 , 349 , 353 , 359 , 367 , 373 , 379 , 383 , 389 , 397 , 401 , 409 , 419 , 421 , 431 , 433 , 439 , 443 , 449 , 457 , 461 , 463 , 467 , 479 , 487 , 491 , 499 , 503 , 509 , 521 , 523 , 541 , 547 , 557 , 563 , 569 , 571 , 577 , 587 , 593 , 599 , 601 , 607 , 613 , 617 , 619 , 631 , 641 , 643 , 647 , 653 , 659 , 661 , 673 , 677 , 683 , 691 , 701 , 709 , 719 , 727 , 733 , 739 , 743 , 751 , 757 , 761 , 769 , 773 , 787 , 797 , 809 , 811 , 821 , 823 , 827 , 829 , 839 , 853 , 857 , 859 , 863 , 877 , 881 , 883 , 887 , 907 , 911 , 919 , 929 , 937 , 941 , 947 , 953 , 967 , 971 , 977 , 983 , 991 , 997 , 1009 , 1013 , 1019 , 1021 , 1031 , 1033 , 1039 , 1049 , 1051 , 1061 , 1063 , 1069 , 1087 , 1091 , 1093 , 1097 , 1103 , 1109 , 1117 , 1123 , 1129 , 1151 , 1153 , 1163 , 1171 , 1181 , 1187 , 1193 , 1201 , 1213 , 1217 , 1223 , 1229 , 1231 , 1237 , 1249 , 1259 , 1277 , 1279 , 1283 , 1289 , 1291 , 1297 , 1301 , 1303 , 1307 , 1319 , 1321 , 1327 , 1361 , 1367 , 1373 , 1381 , 1399 , 1409 , 1423 , 1427 , 1429 , 1433 , 1439 , 1447 , 1451 , 1453 , 1459 , 1471 , 1481 , 1483 , 1487 , 1489 , 1493 , 1499 , 1511 , 1523 , 1531 , 1543 , 1549 , 1553 , 1559 , 1567 , 1571 , 1579 , 1583 , 1597 , 1601 , 1607 , 1609 , 1613 , 1619 , 1621 , 1627 , 1637 , 1657 , 1663 , 1667 , 1669 , 1693 , 1697 , 1699 , 1709 , 1721 , 1723 , 1733 , 1741 , 1747 , 1753 , 1759 , 1777 , 1783 , 1787 , 1789 , 1801 , 1811 , 1823 , 1831 , 1847 , 1861 , 1867 , 1871 , 1873 , 1877 , 1879 , 1889 , 1901 , 1907 , 1913 , 1931 , 1933 , 1949 , 1951 , 1973 , 1979 , 1987 , 1993 , 1997 , 1999};

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
            //prime.push_back(i);
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

int divisor_count(ll n)
{
    ll divisor=1,k=n,root=sqrt(n);
    for(int i=0; prime[i]<=root; i++) // searching prime factorization
    {
        if(k%prime[i]==0)
        {
            ll c=1;
            while(k%prime[i]==0)
            {
                k/=prime[i];
                c++;
            }
            root=sqrt(k); //Important optimization point,eta na dileo ans right asbe but TLE dite pare
            divisor*=c;
        }
    }
    if(k>1)
    {
        divisor*=2;  // let n=28, then 2^2 * 7^1 . Here, k=7 which is > 1 . so for 7^1 this condition
    }
    return divisor;
}

int main()
{
     //CIN;
//    freopen("in.txt","r",stdin);
//    freopen("out.txt","w",stdout);
    sieve();
    ll n;
    while(sfl(n)==1)
    {
        if(n==0) break;
        ll a=divisor_count(n);
        if(a%2==0) pf("no\n");
        else pf("yes\n");
    }
    return 0;
}
