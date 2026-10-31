#include<stdio.h>
int main(void)
{
    int a,b,c,d,e,f,g;
    scanf("%d:%d",&a,&b);
    scanf("%d:%d",&c,&d);
    e=60*c+d-60*a-b;
    f=e/60;
    g=e-60*f;
    printf("0%d:%d",f,g);
    return 0;
}
