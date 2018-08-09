#include<stdio.h>
int main()
{
    int T,i,n,j,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d",&n);
        int array[n],sum=0;
        for(j=1;j<=n;j++)
        {
            scanf("%d",&array[j]);
            if(array[j]>0)
                sum+=array[j];
 
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
