#include<stdio.h>
int main(void)
{
    int n;
    printf("请输入大于1的整数:");
    scanf("%d",&n);
    for (int i=n;i>=1;i--)
    {
        if (n%i==0)
        {
            int s=0;
            for (int j=2;j<i;j++)
            {
                if (i%j==0)
                    s++;
            }
            if (s==0)
            {
                printf("最大质因数是:%d",i);
                break;
            }
        }
    }
    return 0;
}
