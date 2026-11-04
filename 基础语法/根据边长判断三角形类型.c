#include<stdio.h>
int main(void)
{
    int a,b,c,t;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b&&a>c)
    {
        t=a;
        a=c;
        c=t;
    }
    if (b>a&&b>c)
    {
        t=b;
        b=c;
        c=t;
    }
    if (a+b<=c)
        printf("Not triangle\n");
    else
    {
        a=a*a;
        b=b*b;
        c=c*c;
        if (a+b>c)
            printf("Acute triangle\n");
        if (a+b==c)
            printf("Right triangle\n");
        if (a+b<c)
            printf("Obtuse triangle\n");
        if (a==b||b==c||a==c)
            printf("Isosceles triangle\n");
        if (a==b&&b==c)
            printf("Equilateral triangle\n");
    }
    return 0;
}
