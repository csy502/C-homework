#include<stdio.h>
int main(void)
{
    int a;
    printf("请输入年份:");
    scanf("%d",&a);
    if ((a%4==0 && a%100!=0) || a%400==0) {
        printf("%d年是闰年",a);
    }
    else {
        printf("%d年是平年",a);
    }
    return 0;
}
