#include<stdio.h>
int main()
{
    int a,b,c,T,i;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(((a*a)==(b*b)+(c*c)) || ((b*b)==(c*c)+(a*a)) || ((c*c)==(a*a)+(b*b)))
            printf("Case %d: yes\n",i);
        else
            printf("Case %d: no\n",i);
    }
    return 0;
 
}
