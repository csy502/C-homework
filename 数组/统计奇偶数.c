#include<stdio.h>
int main(void)
{
    int a[100],i,n,j=0;
    printf("请输入数组元素个数（不超过20）:\n");
    scanf("%d",&n);
    printf("请输入数组元素:\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        if (a[i]%2!=0)
            j++;
    }
    printf("偶数个数:%d\n奇数个数:%d",n-j,j);
    return 0;
}
