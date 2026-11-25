/*编写一个函数，判断给定的某个整数是否斐波那契数，是则返回1，否则返回0；在主函数中调用该函数，输入一个整数，输出是否斐波那契数。

【输入样例1】

请输入一个整数：6

【输出样例1】

6不是斐波那契数

【输入样例2】

请输入一个整数：13

【输出样例1】

13是斐波那契数*/
#include<stdio.h>
int isf(int n)
{
    if (n==1)
        return 1;
    int f[1000]={1,1},i;
    for (i=2;i<1000;i++)
    {
        f[i]=f[i-2]+f[i-1];
        if (f[i]==n)
            return 1;
    }
    return 0;
}
int main(void)
{
    int a;
    printf("请输入一个整数：");
    scanf("%d",&a);
    if (isf(a))
        printf("%d是斐波那契数",a);
    else
        printf("%d不是斐波那契数",a);
    return 0;
}
