/*字符串去重：编写程序，去除字符串中重复的字符。

【输入样例】

aabbcc

【输出样例】

abc*/
#include<stdio.h>
int main(void)
{
    int n=0,m=0,i,j;
    char a[100],b[100];
    while ((a[n]=getchar())!='\n'&&a[n]!=EOF)
        n++;
    for (i=0;i<n;i++)
    {
        int flag=0;
        for (j=0;j<m;j++)
            if (a[i]==b[j])
                flag++;
        if (flag==0)
        {
            b[m]=a[i];
            m++;
        }
    }
    for (i=0;i<m;i++)
        printf("%c",b[i]);
    return 0;
}
