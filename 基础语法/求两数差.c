#include<stdio.h>
int main(void)
{
    double m,n,a;
    scanf("%lf%lf",&m,&n);
    a=m-n;
    if (a==0)
        printf("两数相等");
    else
    {
        if(a<0)
            a=-a;
        printf("%.2lf",a);
    }
    return 0;
}
