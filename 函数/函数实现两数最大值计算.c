/*函数实现两数最大值计算：编写函数int max(int a, int b)，返回两个整数的最大值，在主函数中输入两个数并调用该函数输出结果。

【输入样例】

请输入两个整数(用空格分隔):10  25

【输出样例】

最大值是:25*/
#include<stdio.h>
int max(int a,int b)
{
    if (a>b)
        return a;
    return b;
}
int main(void)
{
    int a,b;
    printf("请输入两个整数(用空格分隔):");
    scanf("%d%d",&a,&b);
    printf("最大值是:%d",max(a,b));
    return 0;
}
