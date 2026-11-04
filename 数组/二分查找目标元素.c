#include<stdio.h>
int main(void)
{
    int a[10],i,j,n,t,x,l=0,h,m;
    printf("请输入一个数组长度(不超过10):\n");
    scanf("%d",&n);
    printf("请输入%d个元素:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n-1;i++)
    {
        for (j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
            {
                t=a[j+1];
                a[j+1]=a[j];
                a[j]=t;
            }
        }
    }
    printf("请输入查找目标值:\n");
    scanf("%d",&x);
    h=n-1;
    while (l<=h)
    {
        m=(l+h)/2;
        if (x==a[m])
            break;
        else if (x>a[m])
            l=m+1;
        else
            h=m-1;
    }
    if (l<=h)
        printf("目标值%d的下标是:%d",x,m);
    else
        printf("目标值%d的下标是:-1",x);
    return 0;
}
