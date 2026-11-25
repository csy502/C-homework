/*函数实现数组元素求和：编写函数int sum_array(int arr[], int len)，计算数组所有元素的和，在主函数中定义数组(长度不超过100)并调用该函数输出结果。

【输入样例】

请输入数组元素个数：4

请输入4个整数（用空格分隔）：1 2 3 4

【输出样例】

数组元素的和是：10*/
#include<stdio.h>
int sum_array(int arr[], int len)
{
    int i=0,sum=0;
    for (i;i<len;i++)
        sum+=arr[i];
    return sum;
}
int main(void)
{
    int a[100],l,i;
    printf("请输入数组元素个数：");
    scanf("%d",&l);
    printf("请输入%d个整数（用空格分隔）：",l);
    for (i=0;i<l;i++)
        scanf("%d",&a[i]);
    printf("数组元素的和是：%d",sum_array(a,l));
    return 0;
}
