    /**
    Bismillahir Rahmanir Rahim
    MD. Iqbal Hossain Bappy
    Dept. of CSE,CoU
    **/

#include<bits/stdc++.h>

#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define sc                      scanf
#define scin(x)                 sc("%d",&(x))
#define scln(x)                 sc("%lld",&(x))
#define pf                      printf
#define ms(a,b)                 memset(a,b,sizeof(a))
#define pb(a)                   push_back(a)
#define mp                      make_pair
#define db                      double
#define EPS                     10E-10
#define ff                      first
#define ss                      second
#define sqr(x)                  (x)*(x)
#define vi                      vector<int>
#define vl                      vector<ll>
#define vii                     vector<vector<int> >
#define vll                     vector<vector<ll> >
#define DBG                     pf("HI\n")
#define MOD                     1000000007
#define CIN                     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define RUN_CASE(t,T)           for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)                 printf("Case %d: ",t)
#define CASEl(t)                printf("Case %d:\n",t)
#define intlimit                2147483647;
#define longlimit               9223372036854775808
#define infinity                (1<<28)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mx                      123456789
#define PI                      2*acos(0.0)
#define rep(i,a,b)              for(__typeof(i) i=a;i<=b;i++)
#define rev(i,a,b)              for(__typeof(i) i=a;i>=b;i--)

using namespace std;

///------------------Graph Moves-------------------
/// const int fx[] = {+1,-1,+0,+0};
/// const int fy[] = {+0,+0,+1,-1};
/// const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
/// const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///King's move
/// const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///Knight's move
/// const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///Knight's move
ll fac[21];
ll fact(ll n)
{
    if(n == 0)
        return fac[n]=1;
    else
        return fac[n]=n*fact(n-1);
}
int main()
{
    ll n,x,temp;
    int T,i,j;
    x=fact(20);
    vector<int>v;
    scin(T);
    for(i=1;i<=T;i++)
    {
        v.clear();
        scln(n);
        for(j=20;j>=0;j--)
        {
            if(n >= fac[j])
            {
                n-=fac[j];
                v.push_back(j);
            }
        }
        if(n == 0)
        {
            x=v.size();
            sort(v.begin(),v.end());
            pf("Case %d: ",i);
            for(j=0;j<x-1;j++)
                pf("%d!+",v[j]);
            pf("%d!\n",v[x-1]);
        }
        else
        {
            pf("Case %d: impossible\n",i);
        }
    }
    return 0;
}
