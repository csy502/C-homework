#include<stdio.h>
int main(void)
{
    int n,c=0;
    printf("请输入一个正整数：");
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
    {
        int a=0;
        for (int m=1;m<i;m++)
        {
             if (i%m==0)
                a+=m;
        }
        if (a==i)
        {
            printf("%d\n",i);
            c++;
        }
    }
    if (c==0)
        printf("没有完数");
    return 0;
}
