#include<stdio.h>
int main(void)
{
    int x,i,j,a[10],b[10],n=0;
    printf("请输入10个一维数组元素:\n");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);
    printf("请输入目标值:\n");
    scanf("%d",&x);
    printf("删除后的数组:\n");
    for (i=0;i<10;i++)
    {
        if (a[i]!=x)
        {
           b[n]=a[i];
           n++;
        }
    }
    for (i=0;i<n;i++)
        printf("%d ",b[i]);
    return 0;
}
