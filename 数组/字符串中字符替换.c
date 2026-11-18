/*字符串中字符替换：编写程序，输入一个字符串str(含空格)和一个字符ch，将字符串str中所有ch字符替换为'A'。

【输入样例】

请输入字符串:

shu  shanghai   

请输入字符:

a

【输出样例】

替换后的字符串:

shu  shAnghAi*/
#include<stdio.h>
int main(void)
{
    char a[100],b;
    int i=0;
    printf("请输入字符串:\n");
    gets(a);
    printf("请输入字符:\n");
    b=getchar();
    while (a[i]!='\0')
    {
        if (a[i]==b)
            a[i]='A';
        i++;
    }
    printf("替换后的字符串:\n%s",a);
    return 0;
}
