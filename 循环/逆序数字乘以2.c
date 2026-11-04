#include<stdio.h>
int main(void)
{
    int x,a,y,t;
    t=1;
    a=1;
    y=0;
    printf("请输入一个整数：");
    scanf("%d",&x);
    if (x<0)
        {
            x=-x;
            t=-1;
        }
    while (x/a!=0)
    {
        y=x%(10*a)/a+10*y;
        a=10*a;
    }
    printf("逆序数字乘以2后的结果：%d",2*y*t);
}
