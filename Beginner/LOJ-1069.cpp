#include<stdio.h>
int main()
{
    int T,i,me,lift,dis,u_d=4,o_c=3,e_e=5,time;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d",&me,&lift);
        dis=abs(me-lift);
        time=(dis*u_d)+(2*e_e)+(3*o_c)+(me*u_d);
        printf("Case %d: %d\n",i,time);
    }
    return 0;
}
