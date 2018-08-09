#include<bits/stdc++.h>
using namespace std;
 
struct Div
{
    long long int x,y;
};
 
 
bool cop(Div a,Div b)
{
    if(a.y!=b.y)
        return a.y < b.y;
    return a.x > b.x;
}
 
int main()
{
    Div divisor[1001];
    long long int i,j,k,Count,T,n;
    for(j=1;j<=1000;j++)
        divisor[j].x=j;
    for(j=1;j<=1000;j++)
    {
        Count=0;
        for(k=1;k<=j;k++)
        {
            if(divisor[j].x%k == 0)
                Count+=1;
            divisor[j].y=Count;
        }
    }
    sort(divisor,divisor+1001,cop);
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",i,divisor[n].x);
    }
    return 0;
}
