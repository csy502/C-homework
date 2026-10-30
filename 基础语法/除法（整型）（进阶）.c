#include<stdio.h>
int main(void)
{
    int h,r,c;
    scanf("%d %d",&h,&r);
    c=1+20000/(3.1415926*r*h*r);
    printf("%d",c);
    return 0;
}
