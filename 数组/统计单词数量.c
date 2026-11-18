#include<stdio.h>
int main(void)
{
    int i=0,n=0;
    char a[100];
    printf("请输入字符串:\n");
    gets(a);
    while (a[i]!='\0')
    {
        if ((a[i]>='a'&&a[i]<='z'||(a[i]>='A'&&a[i]<='Z'))&&(a[i-1]==' '||i==0))
            n++;
        i++;
    }
    printf("单词个数:%d",n);
    return 0;
}
