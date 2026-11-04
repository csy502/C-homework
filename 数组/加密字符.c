#include<stdio.h>
int main(void)
{
    char a[80];
    int i=0,j;
    while ((a[i]=getchar())!='\n'&&a[i]!=EOF)
    {
        if (a[i]>='a'&&a[i]<='z')
        {
            a[i]-=3;
            if (a[i]<'a')
                a[i]+=26;
        }
         if (a[i]>='A'&&a[i]<='Z')
        {
            a[i]-=3;
            if (a[i]<'A')
                a[i]+=26;
        }
        i++;
    }
    for (j=i-1;j>=0;j--)
        printf("%c",a[j]);
    return 0;
}
