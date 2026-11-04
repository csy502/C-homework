#include<stdio.h>
int main(void)
{
    int s=0,n=0,a[10],i,j;
    for (j=0;j<10;j++)
    {
        scanf("%d",&a[n]);
        for (i=0;i<n;i++)
        {
            if (a[n]==a[i])
                s=1;
        }
        if (s==0)
            n++;
        s=0;
    }
    for (i=0;i<n;i++)
        printf("%d ",a[i]);
    return 0;
}
