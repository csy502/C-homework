/*字符串中第一个只出现一次的字符：输入一个字符串，找出第一个只出现一次的字符及其位置，如没有出现一次的字符输出-1。

【输入样例1】

abaccdeff

【输出样例1】

b 2


【输入样例2】

aabbcc

【输出样例2】

-1

*/
#include<stdio.h>
int isonce(char a[],char c )
{
    int i,n=0;
    for (i=0;a[i]!='\0';i++)
        if (a[i]==c)
            n++;
    if (n==1)
        return 1;
    return 0;
}
int main(void)
{
    char a[100],b;
    int i,flag=0;
    gets(a);
    for (i=0;a[i]!='\0';i++)
        if (isonce(a,a[i]))
        {
            printf("%c %d",a[i],i+1);
            flag=1;
            break;
        }
    if (flag==0)
        printf("-1");
    return 0;
}
