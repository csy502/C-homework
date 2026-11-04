#include<stdio.h>
int main(void)
{
    char a[100];
    int b[26]={0},n=0,i,s=0;
    while ((a[n]=getchar())!='\n')
    {
        if (a[n]>='a'&&a[n]<='z')
            {
                b[a[n]-'a']++;
                n++;
            }
    }
    for (i=0;i<26;i++)
    {
        if (b[i]!=0)
        {
            printf("%c:%d\n",'a'+i,b[i]);
            s=1;
        }
    }
    if (s==0)
        printf("None\n");
    return 0;
}
