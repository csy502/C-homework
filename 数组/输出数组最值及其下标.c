#include<stdio.h>
int main(void)
{
    int a[100],i,M,m,N=0,n=0;
    printf("请输入10个整型元素:\n");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    M=a[0];
    m=a[0];
    for (i=0;i<10;i++)
    {
        if (a[i]>M)
        {
            M=a[i];
            N=i;
        }
        if (a[i]<m)
        {
            m=a[i];
            n=i;
        }
    }
    printf("最大值:%d,下标:%d\n最小值:%d,下标:%d",M,N,m,n);
    return 0;
}
