#include<stdio.h>
int main(void)
{
    printf("请输入一个五位整数：");
    int n,a,b,c,d,e;
    scanf("%d",&n);
    if (n<0){
        n=-n;
    }
    a=n/10000;
    b=(n/1000)%10;
    c=(n/100)%10;
    d=(n/10)%10;
    e=n%10;
    printf("万位：%d\n千位：%d\n百位：%d\n十位：%d\n个位：%d",a,b,c,d,e);
    return 0;
}
