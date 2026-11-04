#include<stdio.h>
int main(void)
{
    int w=0,a=1,o=0,n;
    scanf("%d",&n);
    while (n/a!=0)
    {
        w++;
        a=a*10;
    }
    printf("%d共有%d位\n逆序打印各位数字:",n,w);
    a=1;
    while (n/a!=0)
    {
        printf("%d ",n%(10*a)/a);
        if ((n%(10*a)/a)%2==0)
            o++;
        a=a*10;
    }
    printf("\n其中偶数数字的个数:%d",o);
    return 0;
}
