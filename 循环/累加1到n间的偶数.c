#include<stdio.h>
int main(void)
{
    int n,m;
    m=0;
    printf("请输入n的值:");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        if (i%2==0)
            m+=i;
    }
    printf("1到%d之间所有偶数的和是:%d",n,m);
    return 0;
}
