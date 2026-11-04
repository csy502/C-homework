#include<stdio.h>
int main(void)
{
    int a[10],b[1000],i,j,k,s,m=0;
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    for (i=0;i<10;i++)
    {
        for (j=i;j<10;j++)
        {
            s=0;
            for (k=i;k<=j;k++)
                s+=a[k];
            if (s>=m)
                m=s;
        }
    }
    printf("最大连续子数组和为:%d",m);
    return 0;
}
