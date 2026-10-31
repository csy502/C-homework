#include<stdio.h>
int main(void)
{
    int a,b,c,d;
    printf("Enter a number:");
    scanf("%1d%1d%1d%1d",&a,&b,&c,&d);
    a=(a+9)%10;
    b=(b+9)%10;
    c=(c+9)%10;
    d=(d+9)%10;
    printf("The encrypted number is %d",1000*c+100*d+10*a+b);
    return 0;
}
