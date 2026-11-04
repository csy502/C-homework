#include<stdio.h>
int main(void)
{
    int n,i,t,c=1,cm=1,a[100];
    scanf("%d",&n);
    for (i=0;i<n;i++)
        scanf("%d",&a[i]);
    for (i=0;i<n-1;i++)
    {
        for (int j=0;j<n-1;j++)
        {
            if (a[j]>a[j+1])
        {
            t=a[j+1];
            a[j+1]=a[j];
            a[j]=t;
        }
        }
    }
    for (i=1;i<n;i++)
    {
        if (a[i]==a[i-1])
            c++;
        else
            c=1;
        if (c>cm)
            cm=c;
    }
    c=1;
    if (cm==c)
        printf("%d %d\n",a[0],cm);
    for (i=1;i<n;i++)
    {
        if (a[i]==a[i-1])
            c++;
        else
            c=1;
        if (c==cm)
            printf("%d %d\n",a[i],cm);
    }
    return 0;
}
