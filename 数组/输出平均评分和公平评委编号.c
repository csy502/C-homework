#include<stdio.h>
double abs(double n)
{
    if (n<0)
        n=-n;
    return n;
}
int main(void)
{
    int i,j,t,b,s,m,n;
    int c[5];
    int a[2][5];
    double p=0,d=10;
    for (i=0;i<5;i++)
    {
        scanf("%d %d",&a[0][i],&a[1][i]);
        c[i]=a[1][i];
    }
    for (i=0;i<4;i++)
    {
        for (j=0;j<4;j++)
        {
            if (c[j]>c[j+1])
            {
               t=c[j+1];
               c[j+1]=c[j];
               c[j]=t;
            }
        }
    }
    p=(c[1]+c[2]+c[3])/3.0;
    printf("%.2lf\n",p);
    b=a[0][4];
    for (i=4;i>=0;i--)
    {
        if (abs(p-a[1][i])<=d)
        {
            d=abs(p-a[1][i]);
            b=a[0][i];
        }
    }
    printf("%d",b);
    return 0;
}
