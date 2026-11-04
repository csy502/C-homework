#include<stdio.h>
int main(void)
{
    char a[10000],b[10000];
    int m=0,n=0,i,j,s,t=0;
    while ((a[m]=getchar())!='\n')
        m++;
    while ((b[n]=getchar())!='\n')
        n++;
    for (i=0;i<m;i++)
    {
        s=0;
        for (j=0;j<n;j++)
        {
            if (a[i]==b[j])
                s=1;
        }
        if (s==0)
        {
            putchar(a[i]);
            t=0;
        }
        else if (t==0)
                {
                    printf("\n");
                    t=1;
                }
    }
    return 0;
}
