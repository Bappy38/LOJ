#include<stdio.h>
#include<math.h>
int main()
{
    int T,i;
    double r,a,pi,area;
    pi = 2*acos(0.0);
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%lf",&r);
        area=((2*r)*(2*r))-(pi*r*r);
        printf("Case %d: %0.2lf\n",i,area);
    }
    return 0;
}
