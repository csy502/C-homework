#include<stdio.h>
int main(void)
{
    int m,n;
    double A;
    scanf("%d:%d",&m,&n);
    if (m>=12)
        m-=12;
    A=0.5*(60*m+n)-6*n;
    if (A<0)
        A=-A;
    if (A>=180)
        A=360-A;
    printf("%.3lf",A);
    return 0;
}
