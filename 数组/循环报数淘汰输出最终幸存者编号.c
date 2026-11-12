#include<stdio.h>
int main(void)
{
    int a[50],m,n,i,s=0,t;
    scanf("%d%d",&n,&m);
    t=n;
    for (i=0;i<n;i++)
    {
        a[i]=i+1;
    }
    while (t>1)
    {
        for (i=0;i<n;i++)
        {
            if (a[i]!=0)
                s++;
            if (s==m)
            {
                a[i]=0;
                t--;
                s=0;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        if (a[i]!=0)
            printf("%d",a[i]);
    }
    return 0;
}
