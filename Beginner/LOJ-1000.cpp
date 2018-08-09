#include<stdio.h>
int main()
{
    int i,T,a,b,total;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&a,&b);
        total=a+b;
        printf("Case %d: %d\n",i,total);
    }
    return 0;
}
