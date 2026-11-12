/*编写一个简单的加密程序。先定义一张字母加密对照表：
原字母abcdeik,w
加密后字母dwk,iabce
将需要加密的一行字符输入加密程序，程序根据加密表中的对应关系，可以简单地将输入的字符加密输出，对于表中未出现的字符则不加密。
【输入形式】一行字符
【输出形式】加密后的一行字符
【输入样例】myghhdywandyz
【输出样例】myghh,yedn,yz
【样例说明】根据加密对照表，原字符串中字符'd','w','a'字符分别用 ',','e','d'代替，其它表中未出现的字符原样输出。*/
#include<stdio.h>
int main(void)
{
    int n=0,i;
    char a[100];
    while ((a[n]=getchar())!='\n'&&a[n]!=EOF)
        n++;
    for (i=0;i<n;i++)
    {
        switch (a[i])
        {
            case 'a':printf("d");break;
            case 'b':printf("w");break;
            case 'c':printf("k");break;
            case 'd':printf(",");break;
            case 'e':printf("i");break;
            case 'i':printf("a");break;
            case 'k':printf("b");break;
            case ',':printf("c");break;
            case 'w':printf("e");break;
            default:printf("%c",a[i]);break;
        }
    }
    return 0;
}
