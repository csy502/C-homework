#include<stdio.h>
int main(void)
{
    int a[30],i,n,s=0,m=0;
    double p=0;
    printf("请输入数组元素个数（不超过20）:\n");
    scanf("%d",&n);
    printf("请输入%d个整数:\n",n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);\
        s+=a[i];
    }
    p=(double)s/n;
    printf("平均值:%.2lf\n",p);
    for (i=0;i<n;i++)
    {
        if (a[i]>p)
            m++;
    }
    printf("大于平均值的元素个数:%d",m);
    return 0;
}
