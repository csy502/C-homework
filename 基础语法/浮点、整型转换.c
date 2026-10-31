#include<stdio.h>
int main(void)
{
    float a,g;
    scanf("%f",&a);
    int b,c,d,e,f;
    b=10*a;
    c=b/1000;
    d=(b-1000*c)/100;
    e=(b-1000*c-100*d)/10;
    f=(b-1000*c-100*d-10*e)%10;
    g=f+0.1*e+0.01*d+0.001*c;
    printf("%.3f",g);
    return 0;
}
