#include<stdio.h>
int main(void)
{
    int h,m,s,t;
    scanf("%d:%d:%d",&h,&m,&s);
    t=3600*h+60*m+s;
    t++;
    if (t>=24*3600)
        t=t-24*3600;
    h=t/3600;
    m=t/60%60;
    s=t%60;
    printf("%02d:%02d:%02d",h,m,s);
    return 0;
}
