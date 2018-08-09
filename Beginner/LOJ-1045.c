#include<stdio.h>
#include<math.h>
 
long long int T,n,base,i,digit,j;
double sum_log[1000001],logg[1000001];
long long int x=1000000,k;
 
int main()
{
 
    sum_log[0]=0.0;
    for(k=1;k<=x;k++)
    {
        logg[k]=log10(k*1.0);
        sum_log[k]=sum_log[k-1]+logg[k];
    }
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lld %lld",&n,&base);
        digit=floor((sum_log[n]/log10(base*1.0)))+1;
        printf("Case %lld: %lld\n",i,digit);
    }
    return 0;
}
