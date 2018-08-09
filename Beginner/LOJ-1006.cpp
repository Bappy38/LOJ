#include<stdio.h>
long long int ara[10005];
long long int fib(long long int n,long long int a,long long int b,long long int c,long long int d,long long int e,long long int f)
{
    if(n==0)
        return ara[0]=a%10000007;
    else if(n==1)
        return ara[1]=b%10000007;
    else if(n==2)
        return ara[2]=c%10000007;
    else if(n==3)
        return ara[3]=d%10000007;
    else if(n==4)
        return ara[4]=e%10000007;
    else if(n==5)
        return ara[5]=f%10000007;
    else if(ara[n] !=0)
        return ara[n]%10000007;
    else
    {
        ara[n]=((fib(n-1,a,b,c,d,e,f)%10000007)+(fib(n-2,a,b,c,d,e,f)%10000007)+(fib(n-3,a,b,c,d,e,f)%10000007)+(fib(n-4,a,b,c,d,e,f)%10000007)+(fib(n-5,a,b,c,d,e,f)%10000007)+(fib(n-6,a,b,c,d,e,f)%10000007))%10000007;
        return ara[n]%10000007;
    }
}
int main()
{
    long long int T,i,a,b,c,d,e,f,n,fi,j;
    scanf("%lld",&T);
    for(i=1;i<=T;i++)
    {
        for(j=0;j<=10003;j++) ara[j] = 0;
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        fi=fib(n,a,b,c,d,e,f);
        printf("Case %lld: %lld\n",i,fi%10000007);
    }
    return 0;
}
