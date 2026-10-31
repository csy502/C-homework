#include<stdio.h>
int main(void)
{
    float a,b,c;
    printf("请输入用水量（吨）：");
    scanf("%f",&a);
    printf("请输入用电量（度）：");
    scanf("%f",&b);
    c=3.2*a+0.55*b;
    printf("总费用：%.2f元",c);
    return 0;
}
