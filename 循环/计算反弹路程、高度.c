#include<stdio.h>
int main(void)
{
    int n,m;
    scanf("%d%d",&n,&m);
    double s=n,h=n/4.;
    if (m!=1)
    {
        for (int i=2;i<=m;i++)
    {
        s+=2*h;
        h=h/4;
    }
    }
    printf("%.2lf\n%.2lf",s,h);
    return 0;
}
