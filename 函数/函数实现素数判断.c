/*函数实现素数判断：编写函数int is_prime(int num)，判断一个数是否为素数（是返回 1，否返回 0），在主函数中输入一个数并输出判断结果。

【输入样例1】

请输入一个整数：17

【输出样例1】

17是素数

【输入样例 2】

请输入一个整数：20

【输出样例2】

20不是素数*/
#include<stdio.h>
int is_prime(int num)
{
    if (num==1)
        return 0;
    if (num==2)
        return 1;
    if (num%2==0)
        return 0;
    for (int i=2;i<num;i++)
        if (num%i==0)
            return 0;
    return 1;
}
int main(void)
{
    int n;
    printf("请输入一个整数：");
    scanf("%d",&n);
    if (is_prime(n))
        printf("%d是素数",n);
    else
        printf("%d不是素数",n);
    return 0;
}
