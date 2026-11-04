#include<stdio.h>
int main(void)
{
    double m;
    int n,i=2,j=0,t=0;
    scanf("%lf %d",&m,&n);
    while (j+i<=n)
    {
        j+=i;
        i*=2;
        t++;
    }
    printf("%.2lf",j*m/t);
    return 0;
}
