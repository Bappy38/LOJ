#include<bits/stdc++.h>

#define perfect                 int main()
#define ll                      long long int
#define ull                     unsigned long long int
#define pii                     pair<int,int>
#define pll                     pair<ll,ll>
#define sc                      scanf
#define scin(x)                 sc("%d",&(x))
#define scin2(x,y)                sc("%d %d",&(x),&(y))
#define scln(x)                 sc("%lld",&(x))
#define scln2(x,y)                sc("%lld %lld",&(x),&(y))
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
#define MOD                     100000007
#define CIN                     ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define RUN_CASE(t,T)           for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)                 printf("Case %d: ",t)
#define CASEl(t)                printf("Case %d:\n",t)
#define intlimit                214748369
#define longlimit               922337203685477580
#define infinity                (1<<28)
#define gcd(a,b)                __gcd(a,b)
#define lcm(a,b)                ((a)*(b))/gcd(a,b)
#define mxx                     123456789
#define PI                      2*acos(0.0)
#define rep(i,a,b)              for(__typeof(i) i=a;i<=b;i++)
#define rev(i,a,b)              for(__typeof(i) i=a;i>=b;i--)

using namespace std;

int main()
{
    int t,T,iy,fy,id,fd,cnt1,cnt2,temp;
    scin(T);
    RUN_CASE(t,T)
    {
        string im,fm;
        cin>>im;
        sc("%d, %d",&id,&iy);
        cnt1 = iy/4;
        temp = iy/100;
        cnt1 -= temp;
        temp = iy/400;
        cnt1 += temp;
        if((iy%4==0&&iy%100!=0) || (iy%400==0))
        {
            if(im=="January" || im=="February")
                cnt1-=1;
        }

        cin>>fm;
        sc("%d, %d",&fd,&fy);
        cnt2 = fy/4;
        temp = fy/100;
        cnt2 -= temp;
        temp = fy/400;
        cnt2 += temp;
        if((fy%4==0&&fy%100!=0) || (fy%400==0))
        {
            if(fm=="January" || (fm=="February"&&fd<=28))
                cnt2-=1;
        }
        pf("Case %d: %d\n",t,cnt2-cnt1);
    }
    return 0;
}
