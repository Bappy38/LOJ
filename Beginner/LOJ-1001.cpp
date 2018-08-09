#include<stdio.h>
int main()
{
    int T,n,i,a,b;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        if(n<=10)
           {b=n;a=0;}
        else
           {b=10;a=n-10;}
        printf("%d %d\n",a,b);
     }
    return 0;
}
