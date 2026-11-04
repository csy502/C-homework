#include<stdio.h>
int main(void)
{
    int n;
    double x,sin=0,t;
    scanf("%lf %d",&x,&n);
    t=x;
    for (int i=1;i<=n;i++)
    {
        sin+=t;
        t=(-1)*t*x*x/(2*i)/(2*i+1);
    }
    printf("%.8lf",sin);
    return 0;
}
