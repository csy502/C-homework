/*查找子字符串位置：编写程序，分别输入两个字符串str、substr；查找substr在str中首次出现的位置（返回索引，不存在给出样例2提示），不使用库函数strstr。

【输入样例1】


输入字符串str:

SHU   in shanghai

输入子字符串substr:

shang

【输出样例1】

substr在str中首次出现的位置:9


【输入样例2】


输入字符串str:

shanghai

输入子字符串substr:

beijing

【输出样例2】

substr不在str中


*/
#include<stdio.h>
int main(void)
{
    int i,j,m=0,n=0,flag=0;
    char a[100],b[20];
    printf("输入字符串str:\n");
    gets(a);
    while (a[m]!='\0')
        m++;
    printf("输入子字符串substr:\n");
    gets(b);
    while (b[n]!='\0')
        n++;
    for (i=0;i<m;i++)
    {
        int t=0;
        for (j=0;j<n;j++)
            if (a[i+j]==b[j])
                t++;
        if (t==n)
        {
            printf("substr在str中首次出现的位置:%d",i);
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("substr不在str中");
    return 0;
}
