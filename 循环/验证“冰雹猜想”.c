#include<stdio.h>
int main(void)
{
    int n,t=0;
    printf("请输入一个正整数:");
    scanf("%d",&n);
    printf("步骤:\n");
    while (n!=1)
    {
        if (n%2==0)
        {
             n=n/2;
             printf("%d ",n);
        }
        else
        {
            n=3*n+1;
            printf("%d ",n);
        }
        t++;
    }
    printf("\n需要%d步",t);
}
