#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("请输入一个三位整数：");
    scanf("%1d%1d%1d",&a,&b,&c);
    if(a*a*a+b*b*b+c*c*c==100*a+10*b+c)
        printf("%d是一个水仙花数。",100*a+10*b+c);
    else
        printf("%d不是一个水仙花数。",100*a+10*b+c);
    return 0;
}
