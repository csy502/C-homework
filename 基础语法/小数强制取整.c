#include<stdio.h>
int main(void)
{
    printf("请输入一个正小数：");
    float a;
    int b;
    scanf("%f",&a);
    b=a+.5;
    printf("四舍五入取整后的结果：%d",b);
    return 0;
}
